/*
Copyright (c) 2013, IIT Madras All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted
provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this list of conditions
  and the following disclaimer.
* Redistributions in binary form must reproduce the above copyright notice, this list of
  conditions and the following disclaimer in the documentation and / or other materials provided
 with the distribution.
* Neither the name of IIT Madras  nor the names of its contributors may be used to endorse or
  promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS
OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
--------------------------------------------------------------------------------------------------

Author : Neel Gala
Email id : neelgala@gmail.com
Details:

--------------------------------------------------------------------------------------------------
*/
package cclass;

  //=================== Interface and module for a cclass - master on the AXI4 fabric ============= //
  // project related imports
	import Semi_FIFOF:: *;
	import AXI4_Types:: *;
	import AXI4_Fabric:: *;
  import riscv:: * ;
  import common_types:: * ;
  import FIFOF::*;
  import globals::*;
  import cache_types :: *;
  import Assert ::*;
  import imem::*;
  import dmem::*;
`ifdef supervisor
  `ifdef RV64
    import ptwalk_rv64::*;
  `else
    import ptwalk_rv32::*;
  `endif
`endif
  `include "common_params.bsv"
  `include "Logger.bsv"

  `define Mem_master_num 0
  `define Fetch_master_num 1
  `define IO_master_num 2

  // package imports
	import Connectable 				:: *;
  import GetPut:: *;
  import BUtils::*;

`ifdef debug
  import debug_types::*;
`endif

  `ifdef supervisor
    typedef enum {None, IWalk, DWalk} PTWState deriving(Bits, Eq, FShow);
  `endif

    typedef enum {Request, Response} TxnState deriving(Bits, Eq, FShow);
  interface Ifc_cclass_axi4;
		interface AXI4_Master_IFC#(`paddr, ELEN, USERSPACE) master_d;
		interface AXI4_Master_IFC#(`paddr, ELEN, USERSPACE) master_i;
  `ifdef cache_control
    interface AXI4_Master_IFC#(`paddr, ELEN, USERSPACE) master_io;
  `endif
    interface Put#(Bit#(1)) sb_clint_msip;
    interface Put#(Bit#(1)) sb_clint_mtip;
    interface Put#(Bit#(64)) sb_clint_mtime;
    interface Put#(Bit#(1)) sb_externalinterrupt;
  `ifdef rtldump
    interface Get#(DumpType) io_dump;
  `endif
  `ifdef debug
    interface Hart_Debug_Ifc debug_server;
  `endif
  endinterface : Ifc_cclass_axi4

 // (*synthesize*)
`ifdef icache
  `ifdef dcache
  (*preempts="handle_dmem_nc_request, handle_imem_nc_request"*)
  `endif
`endif
  `ifdef supervisor
    (*preempts="dtlb_req_to_ptwalk, itlb_req_to_ptwalk"*)
    (*preempts="core_req_to_dmem, ptwalk_request_to_dcache"*)
  `endif
  `ifdef itim
    (*conflict_free="handle_dmem_itim_read_response,handle_dmem_nc_read_response"*)
    (*conflict_free="handle_itim_write_resp, handle_nc_write_resp"*)
  `endif
  module mkcclass_axi4#(Bit#(`vaddr) resetpc, parameter Bit#(XLEN) hartid)(Ifc_cclass_axi4);
    String core = "";
    let vaddr = valueOf(`vaddr);
    let paddr = valueOf(`paddr);
    Ifc_riscv riscv <- mkriscv(resetpc, hartid);
  `ifdef supervisor
  `ifdef RV64
    Ifc_ptwalk_rv64#(`asidwidth) ptwalk <- mkptwalk_rv64;
  `else
    Ifc_ptwalk_rv32#(`asidwidth) ptwalk <- mkptwalk_rv32;
  `endif
    Reg#(PTWState) rg_ptw_state <- mkReg(None);
  `endif
		AXI4_Master_Xactor_IFC #(`paddr, ELEN, USERSPACE) fetch_xactor <- mkAXI4_Master_Xactor;
		AXI4_Master_Xactor_IFC #(`paddr, ELEN, USERSPACE) memory_xactor <- mkAXI4_Master_Xactor;
  `ifdef cache_control
		AXI4_Master_Xactor_IFC #(`paddr, ELEN, USERSPACE) io_xactor <- mkAXI4_Master_Xactor;
  `endif
    Wire#(AXI4_Rd_Data#(ELEN, USERSPACE)) wr_io_read_response <- mkWire();
`ifdef cache_control
  `ifdef dcache
    Reg#(Bit#(8)) rg_burst_count <- mkReg(0);
    Reg#(Bit#(TLog#(TMul#(TMul#(`dwords, 8), `dblocks)))) rg_shift_amount <- mkReg(`dwords * 8 );
  `endif
`endif
    FIFOF#(Tuple2#(Bit#(3), Bit#(1))) ff_rd_epochs <- mkSizedFIFOF(6);

    FIFOF#(Bit#(`iesize))  ff_epoch <- mkSizedFIFOF(4);
    let curr_priv = riscv.mv_curr_priv;

    // TODO debug
  `ifdef debug
    Reg#(Maybe#(Bit#(DXLEN))) rg_abst_response <- mkReg(tagged Invalid); // registered container for responses
    Reg#(Bool) rg_debug_waitcsr <- mkReg(False);
    let csr_response = riscv.mv_resp_to_core;
  `endif

	  Reg#(Bit#(TLog#(TDiv#(ELEN,8)))) rg_io_imem_lower_addr_bits <- mkReg(0);
	  Reg#(Bit#(TLog#(TDiv#(ELEN,8)))) rg_io_dmem_lower_addr_bits <- mkReg(0);
	  Reg#(Maybe#(Bit#(TLog#(TDiv#(ELEN,8))))) rg_fetch_lower_addr_bits <- mkReg(tagged Invalid);
	  Reg#(Maybe#(Bit#(TLog#(TDiv#(ELEN,8))))) rg_memory_lower_addr_bits <- mkReg(tagged Invalid);

  `ifdef cache_control
	  rule handle_nc_resp;
	    let fab_resp <- pop_o (io_xactor.o_rd_data);
			Bit#(TLog#(TDiv#(ELEN,8))) lv_lower_addr_bits;
			if(fab_resp.rid=='d1)		//imem request through IO_Master when cache is disabled
				lv_lower_addr_bits= rg_io_imem_lower_addr_bits;
			else //if(fab_resp.rid=='d2)	//dmem request through IO Master when cache is disabled
				lv_lower_addr_bits= rg_io_dmem_lower_addr_bits;
			Bit#(TAdd#(TLog#(TDiv#(ELEN,8)),3)) lv_shift = {lv_lower_addr_bits, 3'd0};
			let lv_data= fab_resp.rdata >> lv_shift;
			fab_resp.rdata= lv_data;
      wr_io_read_response <= fab_resp;
    endrule
  `endif
	  Ifc_imem imem <- mkimem;
	  mkConnection(imem.core_resp, riscv.inst_response); // imem integration

    rule connect_instruction_req;
      let req <- riscv.instr_req.get;
      imem.core_req.put(req);
    endrule

  `ifdef supervisor
    rule tlb_csr_info;
      imem.ma_satp_from_csr(riscv.mv_csr_satp);
      imem.ma_curr_priv(curr_priv);
    endrule
  `endif

	  rule handle_imem_line_request;
	  	let request <- imem.read_mem_req.get;
	  	AXI4_Rd_Addr#(`paddr, 0) imem_request = AXI4_Rd_Addr {araddr : truncate(request.address),
        aruser: ?, arlen : request.burst_len, arsize : request.burst_size, arburst : 'b10,
        arid : `Fetch_master_num, arprot:{1'b1, 1'b0, curr_priv[1]} }; // arburst : 00 - FIXED 01 - INCR 10 - WRAP
	    fetch_xactor.i_rd_addr.enq(imem_request);
			if(request.burst_len == 0)
				rg_fetch_lower_addr_bits<= tagged Valid truncate(request.address);
			else
				rg_fetch_lower_addr_bits<= tagged Invalid;
	  	`logLevel( core, 1, $format("CORE : IMEM Line Requesting ", fshow(imem_request)))
	  endrule

	  rule handle_imem_line_resp;
	    let fab_resp <- pop_o (fetch_xactor.o_rd_data);
	  	Bool bus_error = !(fab_resp.rresp == AXI4_OKAY);
			Bit#(TLog#(TDiv#(ELEN,8))) lower_addr_bits= fromMaybe('d0, rg_fetch_lower_addr_bits);
			Bit#(TAdd#(TLog#(TDiv#(ELEN,8)),3)) lv_shift = {lower_addr_bits,3'd0};
			let lv_data= fab_resp.rdata >> lv_shift;
      imem.read_mem_resp.put(ICache_mem_response{data   : truncate(lv_data),
                                                 last   : fab_resp.rlast,
                                                 err    : bus_error});
	  	`logLevel( core, 1, $format("CORE : IMEM Line Response ", fshow(fab_resp)))
	  endrule
  `ifdef icache
    rule drive_constants;
		  imem.cache_enable(unpack(riscv.mv_cacheenable[0]));
    endrule
    rule handle_imem_nc_request;
	  	let request <- imem.nc_read_req.get;
	  	AXI4_Rd_Addr#(`paddr, 0) imem_request = AXI4_Rd_Addr {araddr : truncate(request.address),
        aruser: ?, arlen : 0, arsize : 2, arburst : 'b01,
        arid : 1, arprot:{1'b1, 1'b0, curr_priv[1]} }; // arburst : 00 - FIXED 01 - INCR 10 - WRAP
	    io_xactor.i_rd_addr.enq(imem_request);
			rg_io_imem_lower_addr_bits<= truncate(request.address);
	  	`logLevel( core, 1, $format("CORE : IMEM IO Requesting ", fshow(imem_request)))
      `ifdef ASSERT
        dynamicAssert(request.burst_len==0 && request.burst_size==2, "ICache NC request is wierd");
      `endif
	  endrule

    rule handle_imem_nc_read_response(wr_io_read_response.rid == 1);
	  	Bool bus_error = !(wr_io_read_response.rresp == AXI4_OKAY);
      imem.nc_read_resp.put(ICache_mem_response{data  : truncate(wr_io_read_response.rdata),
                                                last  : wr_io_read_response.rlast,
                                                err   : bus_error});
      `logLevel( core, 1, $format("CORE : IMEM IO Response ", fshow(wr_io_read_response)))
	  endrule
	`endif

    let dmem <- mkdmem;
    rule core_req_to_dmem;
      let req <- riscv.memory_request.get;
      dmem.core_req.put(req);
      `logLevel( core, 1, $format("CORE : Sending Request to DMEM:", fshow(req)))
    endrule
	  mkConnection(dmem.core_resp, riscv.memory_response); // dmem integration
	`ifdef dtim
	  /*doc:rule: */
	  rule rl_connect_dtim_memorymap_csrs;
	    dmem.ma_dtim_memory_map(truncate(riscv.mv_csr_dtim_base), truncate(riscv.mv_csr_dtim_bound));
	  endrule
	`endif
	`ifdef itim
	  /*doc:rule: */
	  rule rl_connect_itim_memorymap_csrs;
	    imem.ma_itim_memory_map(truncate(riscv.mv_csr_itim_base), truncate(riscv.mv_csr_itim_bound));
	  endrule
	`endif
  `ifdef supervisor
    rule dtlb_csr_info;
      dmem.ma_satp_from_csr(riscv.mv_csr_satp);
      dmem.ma_curr_priv(curr_priv);
      dmem.ma_mstatus_from_csr(riscv.mv_csr_mstatus);
    endrule
  `endif
    rule drive_dmem_enable;
		  dmem.cache_enable(unpack(riscv.mv_cacheenable[1]));
    endrule

    rule dirve_storebuffer_empyty;
      riscv.storebuffer_empty(dmem.storebuffer_empty);
      riscv.cache_is_available(dmem.cache_available);
    endrule

    rule initiate_store(tpl_2(riscv.initiate_store));
      dmem.perform_store(pack(tpl_1(riscv.initiate_store)));
    endrule
    rule connect_store_status;
      riscv.store_is_cached(dmem.cacheable_store);
    endrule

    Reg#(Maybe#(AXI4_Rd_Addr#(`paddr, 0))) rg_read_line_req <- mkReg(tagged Invalid);
    Reg#(Maybe#(Bit#(`paddr))) wr_write_req <- mkReg(tagged Invalid);

    // Currently it is possible that the cache can generate a write - request followed by a
    // read - request, but the fabric (due to contention) latches the read first to the slave followed
    // by the write - req. This could lead to wrong behavior. To avoid this it is necessary to ensure
    // that if a write - request has been initiated no read - requests should be latched unless the
    // write - response has arrived.
    // The contraint is fullilled using the register wr_write_req which holds the current address of
    // the line being written to the fabric on a eviction
    rule handle_dmem_line_read_request(rg_read_line_req matches tagged Invalid);
      Bool perform_req = True;
	  	let req <- dmem.read_mem_req.get;
	  	AXI4_Rd_Addr#(`paddr, 0) dmem_request = AXI4_Rd_Addr {araddr : truncate(req.address), aruser: ?,
        arlen : req.burst_len, arsize : req.burst_size, arburst : 'b10, arid : `Mem_master_num
        ,arprot:{1'b0, 1'b0, curr_priv[1]} }; // arburst : 00 - FIXED 01 - INCR 10 - WRAP
    `ifdef dcache
      if(wr_write_req matches tagged Valid .waddr)
        if((waddr>>(`dwords + `dblocks )) == (req.address>>(`dwords + `dblocks ) ))begin
          perform_req = False;
          rg_read_line_req <= tagged Valid dmem_request;
        end
      if(perform_req)  begin
   	    memory_xactor.i_rd_addr.enq(dmem_request);
				if(req.burst_len == 0)
					rg_memory_lower_addr_bits<= tagged Valid truncate(req.address);
				else
					rg_memory_lower_addr_bits<= tagged Invalid;
        `logLevel( core, 1, $format("CORE : DMEM Line Requesting ", fshow(dmem_request)))
      end
    `else
   	  memory_xactor.i_rd_addr.enq(dmem_request);
			if(req.burst_len == 0)
				rg_memory_lower_addr_bits<= tagged Valid truncate(req.address);
			else
				rg_memory_lower_addr_bits<= tagged Invalid;
      `logLevel( core, 1, $format("CORE : DMEM Line Requesting ", fshow(dmem_request)))
    `endif
	  endrule

  `ifdef dcache
    rule handle_delayed_read(rg_read_line_req matches tagged Valid .r &&& wr_write_req matches tagged
                                                                              Invalid);
  	  memory_xactor.i_rd_addr.enq(r);
			if(r.arlen == 0)
				rg_memory_lower_addr_bits<= tagged Valid truncate(r.araddr);
			else
				rg_memory_lower_addr_bits<= tagged Invalid;
      `logLevel( core, 1, $format("CORE : DMEM Delayed Line Requesting ", fshow(r)))
      rg_read_line_req <= tagged Invalid;
    endrule
  `endif

	  rule handle_dmem_line_resp;
	    let fab_resp <- pop_o (memory_xactor.o_rd_data);
			Bit#(TLog#(TDiv#(ELEN,8))) lower_addr_bits= fromMaybe('d0, rg_memory_lower_addr_bits);
			Bit#(TAdd#(TLog#(TDiv#(ELEN,8)),3)) lv_shift = {lower_addr_bits, 3'd0};
			let lv_data= fab_resp.rdata >> lv_shift;
	  	Bool bus_error = !(fab_resp.rresp == AXI4_OKAY);
      dmem.read_mem_resp.put(DCache_mem_readresp{data:truncate(lv_data),
                                                 last:fab_resp.rlast,
                                                 err :bus_error});
      `logLevel( core, 1, $format("CORE : DMEM Line Response ", fshow(fab_resp)))
	  endrule

    rule handle_dmem_line_write_request `ifdef dcache (rg_burst_count == 0) `endif ;
      let req = dmem.write_mem_req_rd;
    `ifdef dcache
		  AXI4_Wr_Addr#(`paddr, 0) aw = AXI4_Wr_Addr {awaddr : truncate(req.address), awuser : 0,
        awlen : req.burst_len, awsize : zeroExtend(req.burst_size[1 : 0]), awburst : 'b01,
        awid : `Mem_master_num, awprot:{1'b0, 1'b0, curr_priv[1]} }; // arburst : 00 - FIXED 01 - INCR 10 - WRAP

  	  let w  = AXI4_Wr_Data {wdata : truncate(req.data), wstrb : '1,
                             wlast : `ifdef dcache False, `else True, `endif wid : `Mem_master_num};
      rg_burst_count <= rg_burst_count + 1;
    `else
      if(req.burst_size == 0)
        req.data = duplicate(req.data[7 : 0]);
      else if(req.burst_size == 1)
        req.data = duplicate(req.data[15 : 0]);
      else if(req.burst_size == 2)
        req.data = duplicate(req. data[31 : 0]);
  	  Bit#(TDiv#(ELEN, 8)) write_strobe = req.burst_size == 0?'b1 :
                                          req.burst_size == 1?'b11 :
                                          req.burst_size == 2?'hf : '1;

      Bit#(TAdd#(1, TDiv#(ELEN, 32))) byte_offset = truncate(req.address);
  	  if(req.burst_size != 3)// 8 - bit write;
  	  	write_strobe = write_strobe<<byte_offset;

		  AXI4_Wr_Addr#(`paddr, 0) aw = AXI4_Wr_Addr {awaddr : truncate(req.address), awuser : 0,
                                    awlen : 0, awsize : zeroExtend(req.burst_size), awburst : 'b01,
                                    awid : `Mem_master_num, awprot:{1'b1, 1'b0, curr_priv[1]} }; // arburst : 00 - FIXED 01 - INCR 10 - WRAP
  	  let w  = AXI4_Wr_Data {wdata : req.data, wstrb : write_strobe, wlast : True,
                             wid : `Mem_master_num};
      dmem.write_mem_req_deq;
    `endif
	    memory_xactor.i_wr_addr.enq(aw);
		  memory_xactor.i_wr_data.enq(w);
      `logLevel( core, 1, $format("CORE : DMEM Line Write Addr : Request ", fshow(aw)))
      wr_write_req <= tagged Valid req.address;
    endrule
  `ifdef dcache
    rule send_burst_write_data(rg_burst_count != 0);
      Bool last = rg_burst_count == fromInteger(`dblocks - 1 );
      let req = dmem.write_mem_req_rd;
      req.data = req.data >> rg_shift_amount;
  	  let w  = AXI4_Wr_Data {wdata : truncate(req.data), wstrb : '1, wlast : last,
                             wid : `Mem_master_num};
      Bit#(TAdd#(TAdd#(TLog#(`dwords), 1), 3)) shift = {`dwords, 3'b0};
      if(last) begin
        rg_burst_count <= 0;
        rg_shift_amount <= (`dwords * 8);
        wr_write_req <= tagged Invalid;
        dmem.write_mem_req_deq;
      end
      else begin
        rg_shift_amount <= rg_shift_amount + (`dwords * 8);
        rg_burst_count <= rg_burst_count + 1;
      end
		  memory_xactor.i_wr_data.enq(w);
      `logLevel( core, 1, $format("CORE : DMEM Write Data: %h rg_burst_count: %d last: %b \
rg_shift_amount:%d", req.data, rg_burst_count, last, rg_shift_amount))
    endrule
  `endif

    rule handle_dmem_line_write_resp;
      let response <- pop_o(memory_xactor.o_wr_resp);
	  	let bus_error = !(response.bresp == AXI4_OKAY);
    `ifdef dcache
	  	dmem.write_mem_resp.put(bus_error);
    `else
	  	riscv.write_resp(tagged Valid tuple2(pack(bus_error),?));
    `endif
      `logLevel( core, 1, $format("CORE : DMEM Write Line Response ", fshow(response)))
    endrule

  `ifdef dcache
    rule handle_dmem_nc_request;
	  	let req <- dmem.nc_read_req.get;
	  `ifdef itim
    	if(req.address >= truncate(riscv.mv_csr_itim_base) && req.address < truncate(riscv.mv_csr_itim_bound)) begin
    	  imem.mem_itim_req.put(ITIM_mem_req{address: req.address, data:?, size:req.burst_size, access:0});
        `logLevel( core, 1, $format("CORE : DMEM ITIM - Read Requesting "))
  	  end
  	  else 
  	`endif
  	  begin
  	  	AXI4_Rd_Addr#(`paddr, 0) dmem_request = AXI4_Rd_Addr {araddr : truncate(req.address),
                    aruser: ?, arlen : 0, arsize : zeroExtend(req.burst_size[1 : 0]),
                    arburst : 'b01, arid : 2, arprot:{1'b0, 1'b0, curr_priv[1]} }; // arburst : 00 - FIXED 01 - INCR 10 - WRAP
	      io_xactor.i_rd_addr.enq(dmem_request);
		  	rg_io_dmem_lower_addr_bits<= truncate(req.address);
        `logLevel( core, 1, $format("CORE : DMEM IO - Read Requesting ", fshow(dmem_request)))
      end
	  endrule
  `ifdef itim 
    rule handle_dmem_itim_read_response;
	  	let response <- imem.mem_read_itim_resp.get;
	  	Bool bus_error = response.err;
      dmem.nc_read_resp.put(DCache_mem_readresp{data:zeroExtend(response.data),
                                                last:True,
                                                err :bus_error});
      `logLevel( core, 1, $format("CORE : DMEM ITIM Response ", fshow(response)))
	  endrule
  `endif

    rule handle_dmem_nc_read_response(wr_io_read_response.rid == 2);
	  	Bool bus_error = !(wr_io_read_response.rresp == AXI4_OKAY);
      dmem.nc_read_resp.put(DCache_mem_readresp{data:truncate(wr_io_read_response.rdata),
                                                last:wr_io_read_response.rlast,
                                                err :bus_error});
      `logLevel( core, 1, $format("CORE : DMEM IO Response ", fshow(wr_io_read_response)))
	  endrule

    rule handle_dmem_nc_write_request;
      let req <- dmem.nc_write_req.get;
    `ifdef itim
      if(req.address >= truncate(riscv.mv_csr_itim_base) && req.address < truncate(riscv.mv_csr_itim_bound))begin
    	  imem.mem_itim_req.put(ITIM_mem_req{address: req.address, data:truncate(req.data), size:req.burst_size, access:1});
        `logLevel( core, 1, $format("CORE : DMEM ITIM - Write Requesting "))
      end
      else
    `endif
      begin
        if(req.burst_size == 0)
          req.data = duplicate(req.data[7 : 0]);
        else if(req.burst_size == 1)
          req.data = duplicate(req.data[15 : 0]);
        else if(req.burst_size == 2)
          req.data = duplicate(req.data[31 : 0]);
  	    Bit#(TDiv#(ELEN, 8)) write_strobe = req.burst_size == 0?'b1 :
                                            req.burst_size == 1?'b11 :
                                            req.burst_size == 2?'hf : '1;

        Bit#(TAdd#(1, TDiv#(ELEN, 32))) byte_offset = truncate(req.address);
  	    if(req.burst_size != 3)// 8 - bit write;
  	    	write_strobe = write_strobe<<byte_offset;
		    AXI4_Wr_Addr#(`paddr, 0) aw = AXI4_Wr_Addr {awaddr : truncate(req.address), awuser : 0,
            awlen : 0, awsize : zeroExtend(req.burst_size[1 : 0]), awburst : 'b01,
            awid : `IO_master_num, awprot:{1'b0, 1'b0, curr_priv[1]} }; // arburst : 00 - FIXED 01 - INCR 10 - WRAP

  	    let w  = AXI4_Wr_Data {wdata : req.data, wstrb : write_strobe, wlast : True, wid : `Mem_master_num};
        `logLevel( core, 1, $format("CORE : IO Memory write Request ", fshow(aw)))
        `logLevel( core, 1, $format("CORE : IO Memory write Request ", fshow(w)))
	      io_xactor.i_wr_addr.enq(aw);
		    io_xactor.i_wr_data.enq(w);
		  end
    endrule
  `ifdef itim
    rule handle_itim_write_resp;
	  	let response <- imem.mem_write_itim_resp.get;
	  	Bool bus_error = response;
	  	riscv.write_resp(tagged Valid tuple2(pack(bus_error),?));
      `logLevel( core, 1, $format("CORE : ITIM Memory Write Response ", fshow(response)))
    endrule
  `endif
    rule handle_nc_write_resp;
      let response <- pop_o(io_xactor.o_wr_resp);
	  	let bus_error = !(response.bresp == AXI4_OKAY);
	  	riscv.write_resp(tagged Valid tuple2(pack(bus_error),?));
      `logLevel( core, 1, $format("CORE : IO Memory Write Response ", fshow(response)))
    endrule
`endif
`ifdef supervisor
    rule csrs_to_ptwalk;
      ptwalk.satp_from_csr.put(riscv.mv_csr_satp);
      ptwalk.curr_priv.put(curr_priv);
      ptwalk.mstatus_from_csr.put(riscv.mv_csr_mstatus);
    endrule

  `ifdef pmp
    rule connect_pmp_to_imem;
      imem.pmp_cfg(riscv.mv_pmp_cfg);
      imem.pmp_addr(riscv.mv_pmp_addr);
    endrule

    rule connect_pmp_to_dmem;
      dmem.pmp_cfg(riscv.mv_pmp_cfg);
      dmem.pmp_addr(riscv.mv_pmp_addr);
    endrule
  `endif

    rule itlb_req_to_ptwalk(rg_ptw_state == None);
      let req <- imem.request_to_ptw.get();
      ptwalk.from_tlb.put(req);
      rg_ptw_state <= IWalk;
    endrule

    rule ptwalk_resp_to_itlb(rg_ptw_state == IWalk);
      let resp <- ptwalk.to_tlb.get();
      imem.response_frm_ptw.put(resp);
      rg_ptw_state <= None;
    endrule
    rule dtlb_req_to_ptwalk(rg_ptw_state == None);
      let req <- dmem.req_to_ptw.get();
      ptwalk.from_tlb.put(req);
      rg_ptw_state <= DWalk;
    endrule

    rule ptwalk_resp_to_dtlb(rg_ptw_state == DWalk);
      let resp <- ptwalk.to_tlb.get();
      dmem.resp_from_ptw.put(resp);
      rg_ptw_state <= None;
    endrule

    rule ptwalk_request_to_dcache;
	  	let req <- ptwalk.request_to_cache.get;
      dmem.core_req.put(req);
    endrule
    mkConnection(dmem.ptw_resp, ptwalk.response_frm_cache);
    mkConnection(dmem.hold_req, ptwalk.hold_req);
`endif

`ifdef perfmonitors
  `ifdef icache
    mkConnection(riscv.ma_icache_counters,imem.mv_icache_perf_counters);
  `endif
  `ifdef dcache
    mkConnection(riscv.ma_dcache_counters,dmem.mv_dcache_perf_counters);
  `endif
  `ifdef supervisor
    mkConnection(riscv.ma_itlb_counters,imem.mv_itlb_perf_counters);
    mkConnection(riscv.ma_dtlb_counters,dmem.mv_dtlb_perf_counters);
  `endif
`endif   

  `ifdef debug
    rule rl_wait_for_csr_response(rg_debug_waitcsr && !isValid(rg_abst_response));
      if (csr_response.hit) begin
        rg_abst_response <= tagged Valid csr_response.data;
        rg_debug_waitcsr <= False;
      end
      else
        rg_debug_waitcsr <= True;
    endrule
  `endif

    interface sb_clint_msip = interface Put
  	  method Action put(Bit#(1) intrpt);
        riscv.ma_clint_msip(intrpt);
      endmethod
    endinterface;
    interface sb_clint_mtip = interface Put
      method Action put(Bit#(1) intrpt);
        riscv.ma_clint_mtip(intrpt);
      endmethod
    endinterface;
    interface sb_clint_mtime = interface Put
  		method Action put (Bit#(64) c_mtime);
        riscv.ma_clint_mtime(c_mtime);
      endmethod
    endinterface;
    interface sb_externalinterrupt = interface Put
      method Action put(Bit#(1) intrpt);
        riscv.ma_set_external_interrupt(intrpt);
      endmethod
    endinterface;
		interface master_i = fetch_xactor.axi_side;
		interface master_d = memory_xactor.axi_side;
  `ifdef cache_control
    interface master_io = io_xactor.axi_side;
  `endif
    `ifdef rtldump
      interface io_dump = riscv.dump;
    `endif
  `ifdef debug
    interface debug_server = interface Hart_Debug_Ifc

      method Action   abstractOperation(AbstractRegOp cmd)if (!(isValid(rg_abst_response)) 
                                                              && !rg_debug_waitcsr );
        if(cmd.address < zeroExtend(14'h1000))begin // Explot address bits to optimize this filter
          riscv.ma_debug_access_csrs(cmd);
          if (csr_response.hit)
            rg_abst_response <= tagged Valid zeroExtend(csr_response.data);
          else
            rg_debug_waitcsr <= True;
        end
        else if(cmd.address < `ifdef spfpu 'h1040 `else 'h1020 `endif )begin
          let lv_resp <- riscv.debug_access_gprs(cmd);
          rg_abst_response <= tagged Valid zeroExtend(lv_resp);
        end
        else begin
          rg_abst_response <= tagged Valid zeroExtend(32'h00000000);
        end
      endmethod

      method ActionValue#(Bit#(DXLEN)) abstractReadResponse if (isValid(rg_abst_response) );
        rg_abst_response <= tagged Invalid;
        return validValue(rg_abst_response);
      endmethod

      method haltRequest = riscv.ma_debug_halt_request;

      method resumeRequest = riscv.ma_debug_resume_request;

      method dm_active = riscv.ma_debugger_available;

      method is_halted = riscv.mv_core_is_halted();

      method is_unavailable = ~riscv.mv_core_debugenable;

      method Action hartReset(Bit#(1) hart_reset_v); // Change to reset type // Signal TO Reset HART -Active HIGH
        noAction;
      endmethod

      method Bit#(1) has_reset;
        return 1;
      endmethod
    endinterface;
  `endif
  endmodule : mkcclass_axi4

endpackage
