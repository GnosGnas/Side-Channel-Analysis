/*
Copyright (c) 2013, IIT Madras
All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

*  Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
*  Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and / or other materials provided with the distribution.
*  Neither the name of IIT Madras  nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Author Names : Neel Gala
Email ID : neelgala@gmail.com

Description :
This is the 64 - bit core of the c_class processor. It containes rules for each stage. The description of each stage
is given in the respective rules.
*/
package riscv;

  /*===== Package imports === */
  import SpecialFIFOs::*;
  import FIFO::*;
  import FIFOF::*;
  import DReg::*;
  import Vector ::*;
  import TxRx::*;
  import Connectable::*;
  import GetPut::*;
  /*========================= */

  import stage0::*;
  import stage1::*;
  import stage2::*;
  import stage3::*;
  import stage4::*;
  import stage5::*;
  import common_types::*;
  import CustomFIFOs::*;
  import globals::*;
  `include "common_params.bsv"

`ifdef debug
  import debug_types ::*;
`endif

  interface Ifc_riscv;

 	  method Get#(ICache_request#(`vaddr, `iesize)) instr_req;
    interface Put#(FetchResponse#(32, `iesize)) inst_response;
    interface Get#(DMem_request#(`vaddr, ELEN, 1)) memory_request;
    interface Put#(DMem_core_response#(ELEN, 1)) memory_response;
    method Tuple2#(Bool, Bool) initiate_store;
    method Action write_resp(Maybe#(Tuple2#(Bit#(1), Bit#(`vaddr))) r);
    (*always_enabled*)
    method Action storebuffer_empty(Bool e);
    method Action store_is_cached(Bool c);
    (*always_enabled*)
    method Action cache_is_available(Bool avail);
    method Action ma_clint_msip(Bit#(1) intrpt);
    method Action ma_clint_mtip(Bit#(1) intrpt);
    method Action ma_clint_mtime(Bit#(64) c_mtime);
	  method Action ma_set_external_interrupt(Bit#(1) ex_i);
  `ifdef rtldump
    interface Get#(DumpType) dump;
  `endif
    method Bit#(XLEN) mv_csr_mstatus;
    method Bit#(3) mv_cacheenable;
    method Bit#(2) mv_curr_priv;
	`ifdef supervisor
		method Bit#(XLEN) mv_csr_satp;
	`endif
  `ifdef pmp
    method Vector#(`PMPSIZE, Bit#(8)) mv_pmp_cfg;
    method Vector#(`PMPSIZE, Bit#(`paddr )) mv_pmp_addr;
  `endif

  `ifdef debug
    // interface to interact with debugger
    method ActionValue#(Bit#(XLEN)) debug_access_gprs(AbstractRegOp cmd);
    method Action ma_debug_access_csrs(AbstractRegOp cmd);
    method Action ma_debug_halt_request(Bit#(1) ip);
    method Action ma_debug_resume_request(Bit#(1) ip);
    method Bit#(1) mv_core_is_halted;
    method Bit#(1) mv_core_debugenable;
    method Action ma_debugger_available (Bit#(1) avail);
  	method CSRResponse mv_resp_to_core;
  `endif
`ifdef perfmonitors
  `ifdef icache
    /*doc:method: */
    method Action ma_icache_counters (Bit#(5) i);
  `endif
  `ifdef dcache
    /*doc:method: */
    method Action ma_dcache_counters (Bit#(13) i);
  `endif
  `ifdef supervisor
    method Action ma_dtlb_counters (Bit#(1) i);
    method Action ma_itlb_counters (Bit#(1) i);
  `endif
`endif
	`ifdef dtim
	  /*doc:method: */
	  method Bit#(XLEN) mv_csr_dtim_base ();
    /*doc:method: */
    method Bit#(XLEN) mv_csr_dtim_bound ();
  `endif
  `ifdef itim
    /*doc:method: */
    method Bit#(XLEN) mv_csr_itim_base ();
    /*doc:method: */
    method Bit#(XLEN) mv_csr_itim_bound ();
  `endif
  endinterface

  (*synthesize*)
  (*preempts="fwding_from_exe1, nofwding_from_exe1"*)
  (*preempts="fwding_from_mem1, nofwding_from_mem1"*)
  module mkriscv#(Bit#(`vaddr) resetpc, parameter Bit#(XLEN) hartid)(Ifc_riscv);

    Ifc_stage0 stage0 <- mkstage0(resetpc, hartid);
    Ifc_stage1 stage1 <- mkstage1(hartid);
    Ifc_stage2 stage2 <- mkstage2(hartid);
    Ifc_stage3 stage3 <- mkstage3(hartid);
    Ifc_stage4 stage4 <- mkstage4(hartid);
    Ifc_stage5 stage5 <- mkstage5(hartid);

  `ifdef debug
    Wire#(Bool) wr_debugger_available <- mkWire();
  `endif

    Reg#(Bit#(1)) rg_wEpoch <- mkReg(0);

    // -- ISB after stage 0
    FIFOF#(Stage0PC#(`vaddr)) pipe0 <- mkSizedFIFOF(3);

    // -- ISBs after stage 1
    FIFOF#(PIPE1) pipe1 <- mkSizedFIFOF(2);
  `ifdef rtldump
    FIFOF#(Bit#(32)) pipe1inst <- mkSizedFIFOF(2);
  `endif

    // -- ISBs after stage 2
    FIFOF#(Stage3Meta) pipe2_meta <- mkLFIFOF();
    FIFOF#(Bit#(XLEN)) pipe2_mtval <- mkLFIFOF();
  `ifdef rtldump
    FIFOF#(Bit#(32)) pipe2inst <- mkLFIFOF();
  `endif

    // -- ISBs after stage 3
    FIFOF#(Stage4Common) pipe3common <- mkSizedFIFOF(2);
    FIFOF#(Stage4Type)   pipe3type   <- mkSizedFIFOF(2);
  `ifdef rtldump
    FIFOF#(Tuple2#(Bit#(`vaddr), Bit#(32))) pipe3inst <- mkSizedFIFOF(2);
  `endif

    // -- ISBs after stage 4
    FIFOF#(PIPE4) pipe4 <- mkLFIFOF;
  `ifdef rtldump
    FIFOF#(Tuple2#(Bit#(`vaddr), Bit#(32))) pipe4inst <- mkLFIFOF;
  `endif
    let {flush_from_exe, flushpc_from_exe}=stage3.flush_from_exe;
    let {flush_from_wb, flushpc_from_wb, fenceI `ifdef supervisor, sfence `endif }=stage5.flush;

`ifdef perfmonitors
    /*doc:wire: */
  `ifdef icache
    Wire#(Bit#(5)) wr_icache_counters <- mkDWire(0);
  `endif
  `ifdef dcache
    Wire#(Bit#(13)) wr_dcache_counters <- mkDWire(0);
  `endif
  `ifdef supervisor
    /*doc:wire: */
    Wire#(Bit#(1)) wr_dtlb_counters <- mkDWire(0);
    Wire#(Bit#(1)) wr_itlb_counters <- mkDWire(0);
  `endif
    Bit#(1) lv_count_misprediction          = pack(flush_from_exe && !flush_from_wb);
    Bit#(1) lv_count_exceptions             = stage5.mv_count_exceptions;
    Bit#(1) lv_count_interrupts             = stage5.mv_count_interrupts;
    Bit#(1) lv_count_csrops                 = stage5.mv_count_csrops;
    Bit#(1) lv_count_jumps                  = stage3.mv_count_jumps;
    Bit#(1) lv_count_branches               = stage3.mv_count_branches;
    Bit#(1) lv_count_floats                 = `ifdef spfpu stage3.mv_count_floats `else 0 `endif ;
    Bit#(1) lv_count_muldiv                 = `ifdef muldiv stage3.mv_count_muldiv `else 0 `endif ;
    Bit#(1) lv_count_rawstalls              = stage3.mv_count_rawstalls;
    Bit#(1) lv_count_exetalls               = stage3.mv_count_exestalls;
    Bit#(1) lv_count_icache_access          = `ifdef icache wr_icache_counters[0] `else 0 `endif ;
    Bit#(1) lv_count_icache_miss            = `ifdef icache wr_icache_counters[1] `else 0 `endif ;
    Bit#(1) lv_count_icache_fbhit           = `ifdef icache wr_icache_counters[2] `else 0 `endif ;
    Bit#(1) lv_count_icache_ncaccess        = `ifdef icache wr_icache_counters[3] `else 0 `endif ;
    Bit#(1) lv_count_icache_fbrelease       = `ifdef icache wr_icache_counters[4] `else 0 `endif ;
    Bit#(1) lv_count_dcache_read_access		  = `ifdef dcache wr_dcache_counters[12] `else 0 `endif ;
    Bit#(1) lv_count_dcache_write_access		= `ifdef dcache wr_dcache_counters[11] `else 0 `endif ;
    Bit#(1) lv_count_dcache_atomic_access		= `ifdef dcache wr_dcache_counters[10] `else 0 `endif ;
    Bit#(1) lv_count_dcache_nc_read_access	= `ifdef dcache wr_dcache_counters[9] `else 0 `endif ;
    Bit#(1) lv_count_dcache_nc_write_access = `ifdef dcache wr_dcache_counters[8] `else 0 `endif ;
    Bit#(1) lv_count_dcache_read_miss		    = `ifdef dcache wr_dcache_counters[7] `else 0 `endif ;
    Bit#(1) lv_count_dcache_write_miss		  = `ifdef dcache wr_dcache_counters[6] `else 0 `endif ;
    Bit#(1) lv_count_dcache_atomic_miss		  = `ifdef dcache wr_dcache_counters[5] `else 0 `endif ;
    Bit#(1) lv_count_dcache_read_fb_hits		= `ifdef dcache wr_dcache_counters[4] `else 0 `endif ;
    Bit#(1) lv_count_dcache_write_fb_hits		= `ifdef dcache wr_dcache_counters[3] `else 0 `endif ;
    Bit#(1) lv_count_dcache_atomic_fb_hits	= `ifdef dcache wr_dcache_counters[2] `else 0 `endif ;
    Bit#(1) lv_count_dcache_fb_releases		  = `ifdef dcache wr_dcache_counters[1] `else 0 `endif ;
    Bit#(1) lv_count_dcache_line_evictions	= `ifdef dcache wr_dcache_counters[0] `else 0 `endif ;
    Bit#(1) lv_count_itlb_misses            = `ifdef supervisor wr_itlb_counters `else 0 `endif ;
    Bit#(1) lv_count_dtlb_misses            = `ifdef supervisor wr_dtlb_counters `else 0 `endif ;

    let lv_total_count = reverseBits({lv_count_misprediction, lv_count_exceptions, lv_count_interrupts,
      lv_count_csrops, lv_count_jumps, lv_count_branches, lv_count_floats, lv_count_muldiv,
      lv_count_rawstalls, lv_count_exetalls, lv_count_icache_access, lv_count_icache_miss,
      lv_count_icache_fbhit, lv_count_icache_ncaccess, lv_count_icache_fbrelease,
      lv_count_dcache_read_access		, lv_count_dcache_write_access		,
      lv_count_dcache_atomic_access		, lv_count_dcache_nc_read_access		,
      lv_count_dcache_nc_write_access, lv_count_dcache_read_miss		, lv_count_dcache_write_miss
      , lv_count_dcache_atomic_miss		, lv_count_dcache_read_fb_hits		,
      lv_count_dcache_write_fb_hits		, lv_count_dcache_atomic_fb_hits		,
      lv_count_dcache_fb_releases		, lv_count_dcache_line_evictions		, lv_count_itlb_misses,
  lv_count_dtlb_misses});
    rule rl_connect_events;
    `ifdef csr_grp4
      stage5.ma_events_grp4(lv_total_count);
    `endif
    `ifdef csr_grp5
      stage5.ma_events_grp5(lv_total_count);
    `endif
    `ifdef csr_grp6
      stage5.ma_events_grp6(lv_total_count);
    `endif
    `ifdef csr_grp7
      stage5.ma_events_grp7(lv_total_count);
    `endif
    endrule
`endif

    mkConnection(stage0.tx_to_stage1, pipe0);
    mkConnection(pipe0, stage1.rx_from_stage0);

  `ifdef bpu
    mkConnection(stage0.ma_train_bpu, stage3.mv_train_bpu);
    `ifdef gshare
      mkConnection(stage0.ma_mispredict, stage3.mv_mispredict);
    `endif
  `endif

    mkConnection(stage1.tx_to_stage2, pipe1);
    mkConnection(pipe1, stage2.rx_from_stage1);
  `ifdef rtldump
    mkConnection(stage1.tx_to_stage2_inst, pipe1inst);
    mkConnection(pipe1inst, stage2.rx_inst);
  `endif

    mkConnection(stage2.tx_meta_to_stage3, pipe2_meta);
    mkConnection(pipe2_meta, stage3.rx_meta_from_stage2);

    mkConnection(stage2.tx_mtval_to_stage3, pipe2_mtval);
    mkConnection(pipe2_mtval, stage3.rx_mtval_from_stage2);

    mkConnection(stage2.mv_op1, stage3.ma_op1);
    mkConnection(stage2.mv_op2, stage3.ma_op2);
    mkConnection(stage2.mv_op3, stage3.ma_op3);

  `ifdef rtldump
    mkConnection(stage2.tx_inst, pipe2inst);
    mkConnection(pipe2inst, stage3.rx_inst);
  `endif

    mkConnection(stage3.tx_common_to_stage4, pipe3common);
    mkConnection(pipe3common, stage4.rx_common_from_stage3);
    mkConnection(stage3.tx_type_to_stage4, pipe3type);
    mkConnection(pipe3type, stage4.rx_type_from_stage3);

  `ifdef rtldump
    mkConnection(stage3.tx_inst, pipe3inst);
    mkConnection(pipe3inst, stage4.rx_inst);
  `endif

    mkConnection(stage4.tx_min, pipe4);
    mkConnection(pipe4, stage5.rx_in);

  `ifdef rtldump
    mkConnection(stage4.tx_inst, pipe4inst);
    mkConnection(pipe4inst, stage5.rx_inst);
  `endif
  `ifdef triggers
    rule send_triggers_to_stage1;
      stage1.trigger_data1(stage5.trigger_data1);
      stage1.trigger_data2(stage5.trigger_data2);
      stage1.trigger_enable(stage5.trigger_enable);
      stage3.trigger_data1(stage5.trigger_data1);
      stage3.trigger_data2(stage5.trigger_data2);
      stage3.trigger_enable(stage5.trigger_enable);
      stage4.trigger_data1(stage5.trigger_data1);
      stage4.trigger_data2(stage5.trigger_data2);
      stage4.trigger_enable(stage5.trigger_enable);
    endrule
  `endif

  `ifdef bpu
    rule send_next_pc;
      stage3.next_pc(pipe1.first.program_counter);
    endrule
  `endif
   //stage 3 reading value of csr arith_excep register//
   `ifdef arith_trap
    rule arith_exception_en;
      stage3.ma_arith_trap_en(stage5.mv_arith_excep);
    endrule
   `endif

    rule update_wEpoch(flush_from_wb);
      rg_wEpoch<=~rg_wEpoch;
    endrule

    rule commit_instruction;
      if(stage5.commit_rd matches tagged Valid .c)
        stage2.commit_rd(c);
    endrule

    rule flush_stage0(flush_from_exe||flush_from_wb);
        stage0.ma_flush(Stage0Flush{ pc : flush_from_wb ? flushpc_from_wb : flushpc_from_exe
                                `ifdef ifence
                                  ,fence : flush_from_wb ? fenceI : False
                                `endif
                                `ifdef supervisor
                                  , sfence : flush_from_wb ? sfence : False
                                `endif });
    endrule
    rule connect_csrs;
      stage2.csrs(stage5.mv_csrs_to_decode);
      stage2.ma_resume_wfi(stage5.mv_resume_wfi);
      stage1.csr_misa_c(stage5.mv_csr_misa_c);
      stage3.csr_misa_c(stage5.mv_csr_misa_c);
    `ifdef bpu
      stage0.ma_bpu_enable(unpack(stage5.mv_cacheenable[2]));
    `endif
    endrule
    rule clear_stall_in_decode_stage(flush_from_exe || flush_from_wb);
      stage2.clear_stall(True);
    endrule
    rule upd_stage2eEpoch(flush_from_exe);
      stage2.update_eEpoch();
      stage1.update_eEpoch();
      stage0.ma_update_eEpoch();
    endrule
    rule upd_stage2wEpoch(flush_from_wb);
      stage0.ma_update_wEpoch();
      stage1.update_wEpoch();
      stage2.update_wEpoch();
      stage3.update_wEpoch();
    endrule

    rule fwding_from_exe1;
      let s4common = pipe3common.first;
      let s4type   = pipe3type.first;

      Bit#(5) rd = s4common.rd;
    `ifdef spfpu
      RFType rdtype = s4common.rdtype;
    `endif

      Bool available = False;
      if (s4type matches tagged Regular .*)
        available = True;

      Bit#(ELEN) rdval = s4type.Regular.rdvalue;

      Bool valid = !(rd==0 `ifdef spfpu && rdtype == IRF `endif ) && s4common.epochs == rg_wEpoch;

      stage3.fwd_from_pipe3(FwdType{valid:valid, available:available, addr:rd, data:rdval
        `ifdef spfpu , rftype: rdtype `endif });
    endrule
    rule nofwding_from_exe1;
      stage3.fwd_from_pipe3(FwdType{valid:False, available:?, addr:?, data:?
        `ifdef spfpu , rftype: ? `endif });
    endrule
    rule fwding_from_mem1;
      let data = pipe4.first;
      let {committype, epoch}=data;
      Bit#(5) rd = 0;
      RFType rdtype = FRF;
      Bit#(ELEN) rdval = 0;
      Bool available = False;
      if(committype matches tagged REG .r)begin
        available = True;
        rd = r.rd;
        rdval = r.commitvalue;
      `ifdef spfpu
        rdtype = r.rdtype;
      `endif
      end
    `ifdef atomic
      else if (committype matches tagged STORE .s)begin
        available = True;
        rd = s.rd;
        rdval = s.commitvalue;
        rdtype = IRF;
      end
    `endif
    Bool valid = !(rd==0 `ifdef spfpu && rdtype == IRF `endif ) && epoch == rg_wEpoch ;
    stage3.fwd_from_pipe4_first(FwdType{valid: valid, available:available,
                                  addr:rd, data:rdval `ifdef spfpu , rftype: rdtype `endif });
    endrule
    rule nofwding_from_mem1;
      stage3.fwd_from_pipe4_first(FwdType{valid:False, available:False,
                                  addr:0, data:? `ifdef spfpu , rftype: IRF `endif });
    endrule

  `ifdef debug
    rule connect_debug_info;
      stage2.debug_status(DebugStatus {debugger_available : wr_debugger_available ,
                                       core_is_halted     : unpack(stage5.mv_core_is_halted),
                                       step_set           : unpack(stage5.mv_step_is_set),
                                       step_ie            : unpack(stage5.mv_step_ie),
                                       core_debugenable   : unpack(stage5.mv_core_debugenable)} );
    endrule
  `endif
    ///////////////////////////////////////////

    interface instr_req = stage0.to_icache;
    interface inst_response = stage1.inst_response;
    interface memory_request = stage3.memory_request;
    method ma_clint_msip= stage5.ma_clint_msip;
    method ma_clint_mtip = stage5.ma_clint_mtip;
    method ma_clint_mtime = stage5.ma_clint_mtime;
    `ifdef rtldump
      interface dump = stage5.dump;
    `endif
    interface memory_response = stage4.memory_response;
    method Action storebuffer_empty(Bool e);
      stage3.storebuffer_empty(e);
    endmethod
    method initiate_store = stage5.initiate_store;
    method Action write_resp(Maybe#(Tuple2#(Bit#(1), Bit#(`vaddr))) r);
      stage5.write_resp(r);
    endmethod
    method Action store_is_cached(Bool c);
      stage5.store_is_cached(c);
    endmethod
    method Action cache_is_available(Bool avail);
      stage3.cache_is_available(avail);
    endmethod
	  method ma_set_external_interrupt = stage5.ma_set_external_interrupt;
    method mv_csr_mstatus = stage5.mv_csr_mstatus;
    method mv_cacheenable = stage5.mv_cacheenable;
    method mv_curr_priv = stage5.mv_curr_priv;
		`ifdef supervisor
			method mv_csr_satp = stage5.mv_csr_satp;
		`endif
  `ifdef pmp
    method mv_pmp_cfg = stage5.mv_pmp_cfg;
    method mv_pmp_addr = stage5.mv_pmp_addr;
  `endif
  `ifdef debug
    method debug_access_gprs = stage2.debug_access_gprs;
    method ma_debug_access_csrs = stage5.ma_debug_access_csrs;
    method ma_debug_halt_request = stage5.ma_debug_halt_request;
    method ma_debug_resume_request = stage5.ma_debug_resume_request;
    method mv_core_is_halted = stage5.mv_core_is_halted;
    method mv_core_debugenable = stage5.mv_core_debugenable;
    method Action ma_debugger_available (Bit#(1) avail);
      wr_debugger_available <= unpack(avail);
    endmethod
  	method mv_resp_to_core = stage5.mv_resp_to_core;
  `endif
  `ifdef perfmonitors
  `ifdef icache
    /*doc:method: */
    method Action ma_icache_counters (Bit#(5) i);
      wr_icache_counters <= i;
    endmethod
  `endif
  `ifdef dcache
    /*doc:method: */
    method Action ma_dcache_counters (Bit#(13) i);
      wr_dcache_counters <= i;
    endmethod
  `endif
  `ifdef supervisor
    method Action ma_dtlb_counters (Bit#(1) i);
      wr_dtlb_counters <= i;
    endmethod
    method Action ma_itlb_counters (Bit#(1) i);
      wr_itlb_counters <= i;
    endmethod
  `endif
  `endif
	`ifdef dtim
	  /*doc:method: */
	  method  mv_csr_dtim_base = stage5.mv_csr_dtim_base;
    /*doc:method: */
    method  mv_csr_dtim_bound  = stage5.mv_csr_dtim_bound;
  `endif
  `ifdef itim
    /*doc:method: */
    method mv_csr_itim_base  = stage5.mv_csr_itim_base;
    /*doc:method: */
    method mv_csr_itim_bound = stage5.mv_csr_itim_bound;
  `endif
  endmodule

endpackage


