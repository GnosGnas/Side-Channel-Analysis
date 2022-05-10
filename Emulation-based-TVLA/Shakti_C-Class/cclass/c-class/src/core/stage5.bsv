/*
Copyright (c) 2013, IIT Madras All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted
provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this list of conditions
  and the following disclaimer.
* Redistributions in binary form must reproduce the above copyright notice, this list of
  conditions and the following disclaimer in the documentation and/or other materials provided
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

Author: Neel Gala
Email id: neelgala@gmail.com
Details:

--------------------------------------------------------------------------------------------------
*/
package stage5;
  import TxRx::*;
  import GetPut::*;
  import common_types::*;
  `include "common_params.bsv"
  `include "Logger.bsv"
  import ConfigReg::*;

  import FIFO::*;
  import FIFOF::*;
  import csr::*;
  import DReg::*;
  import Vector::*;
`ifdef debug
  import debug_types::*;
`endif


  interface Ifc_stage5;
    interface RXe#(PIPE4) rx_in;
    `ifdef rtldump
      interface RXe#(Tuple2#(Bit#(`vaddr),Bit#(32))) rx_inst;
    `endif
    method Maybe#(CommitData) commit_rd;
  `ifdef supervisor
    method Tuple4#(Bool, Bit#(`vaddr), Bool, Bool) flush;
  `else
    method Tuple3#(Bool, Bit#(`vaddr), Bool) flush;
  `endif
    method CSRtoDecode mv_csrs_to_decode;
	  method Action ma_clint_msip(Bit#(1) intrpt);
		method Action ma_clint_mtip(Bit#(1) intrpt);
		method Action ma_clint_mtime(Bit#(64) c_mtime);
    //This method returns value of csr_reg which enables/disables arith_exceptions
    `ifdef arith_trap
      method Bit#(1) mv_arith_excep;
   `endif
    `ifdef rtldump
      interface Get#(DumpType) dump;
    `endif
		`ifdef supervisor
			method Bit#(XLEN) mv_csr_satp;
		`endif
	  method Action ma_set_external_interrupt(Bit#(1) ex_i);
    method Bit#(1) mv_csr_misa_c;
    method Tuple2#(Bool,Bool) initiate_store;
    method Action write_resp(Maybe#(Tuple2#(Bit#(1),Bit#(`vaddr))) r);
    (*always_enabled*)
    method Action store_is_cached(Bool c);
    method Bit#(3) mv_cacheenable;
    method Bit#(2) mv_curr_priv;
    method Bit#(XLEN) mv_csr_mstatus;
		/*doc:method: This method indicates if the hart should resume from a WFI*/
		method Bool mv_resume_wfi ();
  `ifdef pmp
    method Vector#(`PMPSIZE, Bit#(8)) mv_pmp_cfg;
    method Vector#(`PMPSIZE, Bit#(`paddr )) mv_pmp_addr;
  `endif
  `ifdef debug
    method Action ma_debug_access_csrs(AbstractRegOp cmd);
    method Action ma_debug_halt_request(Bit#(1) ip);
    method Action ma_debug_resume_request(Bit#(1) ip);
    method Bit#(1) mv_core_is_halted;
    method Bit#(1) mv_step_is_set;
    method Bit#(1) mv_step_ie;
    method Bit#(1) mv_core_debugenable;
  	method CSRResponse mv_resp_to_core;
  `endif
  `ifdef triggers
    method Vector#(`trigger_num, TriggerData) trigger_data1;
    method Vector#(`trigger_num, Bit#(XLEN)) trigger_data2;
    method Vector#(`trigger_num, Bool) trigger_enable;
  `endif
  `ifdef perfmonitors
    `ifdef csr_grp4
    	//(*doc = "method : whenever event corresponding to the group-4 occur, the method is to be \
   		//          called, so that corresponding counters are incremented"*)
   		method Action ma_events_grp4(Bit#(SizeOf#(Events_grp4)) e);
    `endif

    `ifdef csr_grp5
    	//(*doc = "method : whenever event corresponding to the group-5 occur, the method is to be \
   		//          called, so that corresponding counters are incremented"*)
 			method Action ma_events_grp5(Bit#(SizeOf#(Events_grp5)) e);
 		`endif

 		`ifdef csr_grp6
 			//(*doc = "method : whenever event corresponding to the group-6 occur, the method is to be \
   		//          called, so that corresponding counters are incremented"*)
 			method Action ma_events_grp6(Bit#(SizeOf#(Events_grp6)) e);
 		`endif

 		`ifdef csr_grp7
 			//(*doc = "method : whenever event corresponding to the group-7 occur, the method is to be \
   		//          called, so that corresponding counters are incremented"*)
 			method Action ma_events_grp7(Bit#(SizeOf#(Events_grp7)) e);
 		`endif
 		  /*doc:method: */
   		method Bit#(1) mv_count_exceptions;
   		method Bit#(1) mv_count_interrupts;
   		method Bit#(1) mv_count_csrops;
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
  (*conflict_free="instruction_commit,ma_set_external_interrupt"*)
  (*conflict_free="instruction_commit,increment_instruction_counter"*)
  (*conflict_free="ma_set_external_interrupt,instruction_commit"*)
`ifdef debug
  (*conflict_free="ma_debug_access_csrs,instruction_commit"*)
`endif
  module mkstage5#(parameter Bit#(XLEN) hartid) (Ifc_stage5);


    RX#(PIPE4) rx<-mkRX;
  `ifdef rtldump
    RX#(Tuple2#(Bit#(`vaddr),Bit#(32))) rxinst <-mkRX;
  `endif
    Ifc_csr csr <- mkcsr(hartid);

    // wire that carries the commit data that needs to be written to the integer register file.
    Wire#(Maybe#(CommitData)) wr_commit <- mkDWire(tagged Invalid);
    Wire#(Bool) wr_increment_minstret <- mkDWire(False);

    // wire which signals the entire pipe to be flushed.
  `ifdef supervisor
    Wire#(Tuple4#(Bool, Bit#(`vaddr), Bool, Bool)) wr_flush <- mkDWire(tuple4(False, ?, False, False));
  `else
    Wire#(Tuple3#(Bool, Bit#(`vaddr), Bool)) wr_flush <- mkDWire(tuple3(False, ?, False));
  `endif

  `ifdef perfmonitors
    /*doc:wire: */
    Wire#(Bit#(1)) wr_count_exceptions <- mkDWire(0);
    Wire#(Bit#(1)) wr_count_interrupts <- mkDWire(0);
    Wire#(Bit#(1)) wr_count_csrops <- mkDWire(0);
  `endif
    // the local epoch register
    Reg#(Bit#(1)) rg_epoch <- mkReg(0);

  `ifdef rtldump
    FIFO#(DumpType) dump_ff <- mkLFIFO;
    let prv=csr.mv_csrs_to_decode.prv;
  `endif
    Reg#(Bool) rg_store_initiated <- mkReg(False);
    Wire#(Maybe#(Tuple2#(Bit#(1),Bit#(`vaddr)))) wr_store_response <- mkDWire(tagged Invalid);
    Wire#(Bool) wr_store_is_cached <- mkDWire(False);
  `ifdef dcache
    Wire#(Tuple2#(Bool,Bool)) wr_initiate_store <- mkDWire(tuple2(False,False));
  `else
    Wire#(Tuple2#(Bool,Bool)) wr_initiate_store <- mkDReg(tuple2(False,False));
  `endif
    let csr_resp = csr.mv_resp_to_core;
    let csr_dest = csr_resp.data;
    let csr_valid = csr_resp.hit;

  `ifdef triggers
    Reg#(TriggerStatus) rg_take_trigger <- mkConfigReg(unpack(0));
    Reg#(Bit#(`vaddr)) rg_flush_pc <- mkReg(0);

    rule check_triggers;
      let {commit, epoch} = rx.u.first;

      let trigger_data1 = csr.trigger_data1;
      let trigger_data2 = csr.trigger_data2;
      let trigger_enable = csr.trigger_enable;

      Bool trap = False;
      Bit#(`causesize) cause = `Breakpoint;
      Bool chain = False;

      Bool exception = False;
      Bool interrupt = False;
      Bit#(TSub#(`causesize,1)) code=?;

      if(commit matches tagged TRAP .t)begin
        code = truncate(t.cause);
        if(code != `Rerun && code != `IcacheFence && code != `SFence && t.cause[`causesize-1] == 0 )begin
          exception = True;
        end
        if( code <= `Machine_external_int  && t.cause[`causesize-1] == 1 )begin
          interrupt = True;
        end
      end

      for(Integer i=0; i<`trigger_num; i=i+1)begin
        if(trigger_enable[i] && !trap )begin
          if(trigger_data1[i] matches tagged ETRIGGER .et &&& exception)begin
            if( trigger_data2[i][code] == 1) begin
              trap = True;
            `ifdef debug
              if(et.action_ == 1)begin
                cause = `HaltTrigger;
                cause[`causesize - 1] = 1;
              end
            `endif
            end
          end
          else if(trigger_data1[i] matches tagged ITRIGGER .it &&& interrupt)begin
            if( trigger_data2[i][code] == 1) begin
              trap = True;
              if(it.action_ == 1)begin
                cause = `HaltTrigger;
                cause[`causesize - 1] = 1;
              end
            end
          end
        end
      end

      rg_take_trigger <= TriggerStatus{trap: trap, cause:cause};

    endrule
  `endif

    rule instruction_commit;
      let {commit, epoch}=rx.u.first;
    `ifdef rtldump
      let {simpc,inst}=rxinst.u.first;
    `endif
      Bool fenceI=False;
    `ifdef supervisor
      Bool sFence=False;
    `endif
      Bit#(`vaddr) jump_address=?;
      Bool fl = False;
      `ifdef rtldump
        `logLevel( stage5, 0, $format("core:%2d ",hartid,"STAGE5: PC: %h: inst: %h commit: ",simpc,inst,fshow(commit)))
      `endif
      if(rg_epoch==epoch)begin
      `ifdef triggers
        if(rg_take_trigger.trap)begin
          let newpc <- csr.take_trap(rg_take_trigger.cause, rg_flush_pc, ?);
          fl=True;
          jump_address=newpc;
          rx.u.deq;
          `ifdef rtldump
            rxinst.u.deq;
          `endif
          `logLevel( stage5, 0, $format("core:%2d ",hartid,"STAGE5: Trigger TRAP:%d NewPC:%h fl:%b",
                                                         rg_take_trigger.cause,jump_address,fl))
        end
        else
      `endif
        if(commit matches tagged TRAP .t)begin
          if(t.cause==`Rerun || t.cause==`IcacheFence `ifdef supervisor || t.cause==`SFence `endif )begin
            `logLevel( stage5, 0, $format("core:%2d ",hartid,"STAGE5: Rerun initiated"))
            fl=True;
            jump_address=t.pc;
            fenceI=(t.cause==`IcacheFence );
            `ifdef supervisor
              sFence = (t.cause==`SFence);
            `endif
          end
          else begin
            let newpc <- csr.take_trap(t.cause, t.pc, t.badaddr);
            fl=True;
            jump_address=newpc;
          `ifdef perfmonitors
            if(truncateLSB(t.cause) == 1'b1)
              wr_count_interrupts <= 1;
            else
              wr_count_exceptions <= 1;
          `endif
          end
          rx.u.deq;
          `ifdef rtldump
            rxinst.u.deq;
          `endif
          `logLevel( stage5, 0, $format("core:%2d ",hartid,"STAGE5: Received TRAP:%d NewPC:%h fl:%b",t.cause,jump_address,fl))
        end
        else if (commit matches tagged STORE .s)begin
        `ifdef dcache
          if (!rg_store_initiated && wr_store_is_cached)begin
            wr_initiate_store <= tuple2(unpack(rg_epoch),True);
            wr_increment_minstret<=True;
              `ifdef atomic
                wr_commit <= tagged Valid CommitData{addr: s.rd, data:s.commitvalue
                                            `ifdef spfpu , rdtype: IRF `endif };
              `else
                wr_commit <= tagged Valid CommitData{addr: 0, data:0
                                            `ifdef spfpu , rdtype: IRF `endif };
              `endif
            `ifdef rtldump
              `ifdef atomic
                Bit#(ELEN) data=s.commitvalue;
                if(s.rd==0)
                  data=0;
                dump_ff.enq(tuple6(prv, signExtend(s.pc), inst, s.rd, data, IRF));
              `else
                dump_ff.enq(tuple6(prv, signExtend(s.pc), inst, 0, 0, IRF));
              `endif
              rxinst.u.deq;
            `endif
              rx.u.deq;
          end
          else
        `endif
          if(!rg_store_initiated)begin
            wr_initiate_store <= tuple2(unpack(rg_epoch),True);
            rg_store_initiated<=True;
            `logLevel( stage5, 0, $format("core:%2d ",hartid,"STAGE5: Initiating Store request"))
          end
          else if(wr_store_response matches tagged Valid .resp) begin
            rg_store_initiated<=False;
            `logLevel( stage5, 0, $format("core:%2d ",hartid,"STAGE5: Store response Received: ",fshow(resp)))
            let {err, badaddr} = resp;
            if(err==0)begin
              wr_increment_minstret<=True;
              `ifdef atomic
                wr_commit <= tagged Valid CommitData{addr: s.rd, data: s.commitvalue
                                            `ifdef spfpu ,rdtype: IRF `endif };
              `else
                wr_commit <= tagged Valid CommitData{addr: 0, data: 0
                                            `ifdef spfpu ,rdtype: IRF `endif };
              `endif
            `ifdef rtldump
              `ifdef atomic
                Bit#(ELEN) data=s.commitvalue;
                if(s.rd==0)
                  data=0;
                dump_ff.enq(tuple6(prv, signExtend(s.pc), inst, s.rd, data, IRF));
              `else
                dump_ff.enq(tuple6(prv, signExtend(s.pc), inst, 0, 0, IRF));
              `endif
              rxinst.u.deq;
            `endif
              rx.u.deq;
            end
            else begin
              let newpc <- csr.take_trap(`Store_access_fault, s.pc, badaddr);
              fl=True;
              jump_address=newpc;
              rx.u.deq;
            `ifdef rtldump
              rxinst.u.deq;
            `endif
            end
          end
          else begin
            `logLevel( stage5, 0, $format("core:%2d ",hartid,"STAGE5: Waiting for Store response"))
          end
        end
        else if(commit matches tagged SYSTEM .sys)begin
          let {drain, newpc}<-csr.system_instruction(sys.csraddr, sys.rs1, sys.func3, sys.lpc);
          let dest= csr_dest;
          if(drain || csr_valid) begin
            wr_increment_minstret<=True;
            jump_address=newpc;
            fl=drain;
            wr_commit <= tagged Valid CommitData{addr: sys.rd, data: zeroExtend(dest)
                                      `ifdef spfpu, rdtype: IRF `endif };
            `ifdef rtldump
              if(sys.rd==0)
                dest=0;
              dump_ff.enq(tuple6(prv, signExtend(simpc), inst, sys.rd, zeroExtend(dest), IRF));
            `endif
            `ifdef rtldump
              rxinst.u.deq;
            `endif
              rx.u.deq;
            `ifdef perfmonitors
              wr_count_csrops <= 1;
            `endif
          end
        end
        else if(commit matches tagged REG .r)begin
          // in case of regular instruction simply update RF and forward the data.
          `logLevel( stage5, 0, $format("core:%2d ",hartid,"STAGE5: Regular commit"))
          wr_increment_minstret<=True;
        `ifdef spfpu
          csr.ma_update_fflags(r.fflags);
        `endif
          wr_commit <= tagged Valid CommitData{addr:r.rd, data:r.commitvalue
                                      `ifdef spfpu , rdtype: r.rdtype `endif };
          rx.u.deq;
        `ifdef rtldump
          rxinst.u.deq;
        `endif
        `ifdef rtldump
          let data=r.commitvalue;
          if(r.rd==0 `ifdef spfpu && r.rdtype==IRF `endif )
            data=0;
            dump_ff.enq(tuple6(prv, signExtend(simpc), inst, r.rd, data, `ifdef spfpu r.rdtype `else
            IRF `endif ));
        `endif
        end

        // if it is a branch/JAL_R instruction generate a flush signal to the pipe.
      `ifdef supervisor
        wr_flush<=tuple4(fl, jump_address, fenceI, sFence);
      `else
        wr_flush<=tuple3(fl, jump_address, fenceI);
      `endif
      `ifdef triggers
        rg_flush_pc <= jump_address;
      `endif
        if(fl)begin
          rg_epoch <= ~rg_epoch;
        end
      end
      else begin
          `logLevel( stage5, 0, $format("core:%2d ",hartid,"STAGE5: Dropping instruction"))
          if(commit matches tagged STORE .s)
            wr_initiate_store<=tuple2(unpack(rg_epoch),True);
        // TODO if the instruction is a Store we need to deque that entry from the store buffer.
        rx.u.deq;
      `ifdef rtldump
        rxinst.u.deq;
      `endif
      end
    endrule

    rule increment_instruction_counter(wr_increment_minstret);
      csr.ma_incr_minstret;
    endrule
    interface rx_in=rx.e;
  `ifdef rtldump
    interface rx_inst=rxinst.e;
  `endif
    method Maybe#(CommitData) commit_rd();
      return wr_commit;
    endmethod
    method flush=wr_flush;
    method mv_csrs_to_decode = csr.mv_csrs_to_decode;

	  method ma_clint_msip = csr.ma_clint_msip;
		method ma_clint_mtip = csr.ma_clint_mtip;
		method ma_clint_mtime = csr.ma_clint_mtime;
		method mv_resume_wfi = csr.mv_resume_wfi;
    `ifdef rtldump
      interface dump = interface Get
        method ActionValue#(DumpType) get ;
          dump_ff.deq;
          return dump_ff.first;
        endmethod
      endinterface;
    `endif
		`ifdef supervisor
			method mv_csr_satp=csr.mv_csr_satp;
		`endif
	  method ma_set_external_interrupt = csr.ma_set_external_interrupt;
    method mv_csr_misa_c=csr.mv_csr_misa_c;
    method initiate_store=wr_initiate_store;
    method Action write_resp(Maybe#(Tuple2#(Bit#(1),Bit#(`vaddr))) r);
      wr_store_response<=r;
    endmethod
    method Action store_is_cached(Bool c);
      wr_store_is_cached<=c;
    endmethod
    method mv_cacheenable = csr.mv_cacheenable;
    method mv_curr_priv = csr.mv_curr_priv;
    method mv_csr_mstatus= csr.mv_csr_mstatus;
  `ifdef pmp
    method pmp_cfg=csr.mv_pmp_cfg;
    method pmp_addr=csr.mv_pmp_addr;
  `endif
  `ifdef debug
    method ma_debug_access_csrs = csr.ma_debug_access_csrs;
    method ma_debug_halt_request = csr.ma_debug_halt_request;
    method ma_debug_resume_request = csr.ma_debug_resume_request;
    method mv_core_is_halted = csr.mv_core_is_halted;
    method mv_step_is_set = csr.mv_step_is_set;
    method mv_step_ie = csr.mv_step_ie;
    method mv_core_debugenable = csr.mv_core_debugenable;
    method mv_resp_to_core = csr.mv_resp_to_core;
  `endif

    `ifdef arith_trap
      method mv_arith_excep = csr.mv_arith_excep;
   `endif
  `ifdef triggers
    method trigger_data1 = csr.trigger_data1;
    method trigger_data2 = csr.trigger_data2;
    method trigger_enable = csr.trigger_enable;
  `endif
  `ifdef perfmonitors
  	`ifdef csr_grp4
 			method ma_events_grp4 = csr.ma_events_grp4;
 		`endif

 		`ifdef csr_grp5
 			method ma_events_grp5 = csr.ma_events_grp5;
 		`endif

 		`ifdef csr_grp6
 			method ma_events_grp6 = csr.ma_events_grp6;
 		`endif

 		`ifdef csr_grp7
 			method ma_events_grp7 = csr.ma_events_grp7;
 		`endif
   		method mv_count_exceptions = wr_count_exceptions;
   		method mv_count_interrupts = wr_count_interrupts;
   		method mv_count_csrops = wr_count_csrops;
	`endif
	`ifdef dtim
	  /*doc:method: */
	  method  mv_csr_dtim_base = csr.mv_csr_dtim_base;
    /*doc:method: */
    method  mv_csr_dtim_bound  = csr.mv_csr_dtim_bound;
  `endif
  `ifdef itim
    /*doc:method: */
    method mv_csr_itim_base  = csr.mv_csr_itim_base;
    /*doc:method: */
    method mv_csr_itim_bound = csr.mv_csr_itim_bound;
  `endif

  endmodule
endpackage
