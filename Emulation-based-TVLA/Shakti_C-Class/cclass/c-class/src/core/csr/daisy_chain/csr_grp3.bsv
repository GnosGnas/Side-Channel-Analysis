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
package csr_grp3;

	//standard library imports
	import Vector :: *;
	import FIFOF :: * ;
	import DReg :: *;
  import UniqueWrappers :: * ;
 	import ConcatReg :: *;
  import ConfigReg::*;

  //project imports
  `include "csrgrp.defines"
  `include "common_params.bsv"
	import common_types :: * ;

	//typedef struct{
  	//Bit#(12) csr_address;
  	//Bit#(XLEN) writedata;
    //Bit#(3) funct3;
	//} CSRReq deriving(Bits, FShow, Eq);

`ifdef triggers
  typedef struct{
    Bit#(`mcontext) mvalue;
    Bit#(1) mselect;
  `ifdef supervisor
    Bit#(`scontext) svalue;
    Bit#(2) sselect;
  `endif
  } TriggerExtra deriving(Eq, FShow, Bits);

	//(*doc = "func : the function returns data to be written onto trigger register TDATA3"*)
  function TriggerExtra write_trigger_extra(Bit#(XLEN) w);
  `ifdef RV64
    return TriggerExtra {mvalue: truncate(w[63:51]), mselect: w[50]
                      `ifdef supervisor
                         ,svalue: truncate(w[35:2]),sselect: w[1:0]
                      `endif };
  `else
    return TriggerExtra {mvalue: truncate(w[31:26]), mselect: w[25]
                      `ifdef supervisor
                         ,svalue: truncate(w[17:2]) ,sselect: w[1:0]
                      `endif };
  `endif
  endfunction

  //(*doc = "func : the function performs read operation onto trigger register TDATA3"*)
  function Bit#(XLEN) read_trigger_extra(TriggerExtra t);
  `ifdef RV64
    Bit#(13) mvalue = zeroExtend(t.mvalue);
    Bit#(34) svalue = `ifdef supervisor zeroExtend(t.svalue) `else 0 `endif ;
    Bit#(2)  sselect = `ifdef supervisor t.sselect `else 0 `endif ;
    return {mvalue, t.mselect, 14'd0, svalue, sselect};
  `else
    Bit#(6) mvalue = zeroExtend(t.mvalue);
    Bit#(16) svalue = `ifdef supervisor zeroExtend(t.svalue) `else 0 `endif ;
    Bit#(2)  sselect = `ifdef supervisor t.sselect `else 0 `endif ;
    return {mvalue, t.mselect, 7'd0, svalue, sselect};
  `endif
  endfunction

	//(*doc = "func : the function returns data to be written onto trigger register TDATA1"*)
  function TriggerData write_trigger_data(Bit#(XLEN) w `ifdef debug , Bool debug_mode `endif );
    Bit#(5) type_info = truncateLSB(w);
    `ifndef debug
      Bool debug_mode = False;
    `endif

    Bit#(4) match_info = (w[19]==0 && (w[10:7] == 0 || w[10:7] == 2 || w[10:7] == 3))? w[10:7]:0;

    case (type_info[4:1])
      'd2:begin
        return tagged MCONTROL MControl{load: w[0], store: w[1], execute: w[2], machine: w[6],
                                 matched: match_info, chain: w[11], action_: w[15:12],
                                 size: { `ifdef RV64 w[22:21], `endif w[17:16]}, select: w[19],
                                 dmode: debug_mode?type_info[0]:?
                                 `ifdef user ,user:w[3] `endif
                                 `ifdef supervisor ,supervisor: w[4] `endif };
      end
//      'd3:begin
//        return tagged ICOUNT ICount{dmode: debug_mode?type_info[0]:?, machine: w[9], action_: w[5:0],
//                                    count:w[23:10]
//                                    `ifdef user ,user:w[6] `endif
//                                   `ifdef supervisor ,supervisor: w[7] `endif };
//      end
      'd4:begin
        return tagged ITRIGGER ITrigger{dmode: debug_mode?type_info[0]:?, machine: w[9], action_: w[5:0]
                                    `ifdef user ,user:w[6] `endif
                                   `ifdef supervisor ,supervisor: w[7] `endif };
      end
      'd5:begin
        return tagged ETRIGGER ETrigger{dmode: debug_mode?type_info[0]:?, machine: w[9], action_: w[5:0]
                                    `ifdef user ,user:w[6] `endif
                                   `ifdef supervisor ,supervisor: w[7] `endif };
      end
      default: return tagged NONE;
    endcase
  endfunction

	//(*doc = "func : the function performs read operation onto trigger register TDATA1"*)
  function Bit#(XLEN) read_trigger_data(TriggerData t);
    if(t matches tagged MCONTROL .mc)begin
      return {4'd2, mc.dmode, 6'd0, 'd0, `ifdef RV64 mc.size[3:2], `endif  1'b0, mc.select,
              1'b0, mc.size[1:0], mc.action_,  mc.chain, mc.matched, mc.machine, 1'b0,
              `ifdef supervisor mc.supervisor `else 1'b0 `endif ,
              `ifdef user mc.user `else 1'b0 `endif , mc.execute, mc.store, mc.load};
    end
//    else if(t matches tagged ICOUNT .ic) begin
//      return {4'd3, ic.dmode, 'd0, 1'b0, ic.count, ic.machine, 1'b0,
//              `ifdef supervisor ic.supervisor `else 1'b0 `endif ,
//              `ifdef user ic.user `else 1'b0 `endif , ic.action_};
//    end
    else if(t matches tagged ITRIGGER .it)begin
      return {4'd4, it.dmode, 1'd0, 'd0, it.machine, 1'b0,
              `ifdef supervisor it.supervisor `else 1'b0 `endif ,
              `ifdef user it.user `else 1'b0 `endif , it.action_};
    end
    else if(t matches tagged ETRIGGER .et)begin
      return {4'd5, et.dmode, 1'd0, 'd0, et.machine, 1'b0,
              `ifdef supervisor et.supervisor `else 1'b0 `endif ,
              `ifdef user et.user `else 1'b0 `endif , et.action_};
    end
    else
      return 0;
  endfunction
`endif

	interface Ifc_csr_grp3;

		// (*doc = "method : to receive the request from the core or previous node" *)
    method Action ma_core_req(CSRReq req);

    // (*doc = "method : to send response to core on a hit in this node" *)
    method CSRResponse mv_core_resp;

    // (*doc = "method : to forward the request to the next node on a miss in current node" *)
  `ifdef csr_grp4
   	method ActionValue#(CSRReq) mav_fwd_req;
  `endif
   	//intergroup side band connections
  `ifdef debug
  	(*always_ready, always_enabled*)
    //(*doc = "method: sideband connection to grp1 to send rg_csr_dcsr value"*)
   	method Bit#(32) mv_csr_dcsr;

   	(*always_ready, always_enabled*)
    //(*doc = "method: sideband connection to grp1 to send rg_resume_int value"*)
    method Bit#(1) mv_resume_int;

    (*always_ready, always_enabled*)
		//(*doc = "method: sideband connection to grp1 to send rg_core_halted value"*)
    method Bit#(1) mv_core_halted;

    (*always_ready, always_enabled*)
    //(*doc = "method: sideband connection to grp1 to send rg_halt_int value"*)
    method Bit#(1) mv_halt_int;

	`ifdef csr_grp4
	  (*always_ready, always_enabled*)
  	//(*doc = "method: sideband connection to grp4,5,6,7 to send rg_dcsr_stopcount value"*)
  	method Bit#(1) mv_dcsr_stopcount;
  `endif

  	//(*doc = "method: updates rg_halt_int upon being called by the core"*)
    method Action ma_debug_halt_request(Bit#(1) ip);
    //(*doc = "method: updates rg_resume_int upon being called by the core"*)
    method Action ma_debug_resume_request(Bit#(1) ip);
    //(*doc = "returns the value of rg_core_halted to the core"*)
    method Bit#(1) mv_core_is_halted;
    //(*doc = "returns the value of rg_dcsr_step to the core"*)
    method Bit#(1) mv_step_is_set;
    //(*doc = "returns the value of rg_dcsr_stepie to the core"*)
    method Bit#(1) mv_step_ie;
    //(*doc = "returns the value of rg_csr_denable to the core"*)
    method Bit#(1) mv_core_debugenable;

    method ActionValue#(Tuple2#(Bit#(2), Bit#(`vaddr))) mav_upd_on_debugger(Bit#(`causesize) c,
                                                        Bit#(`vaddr) pc, Bit#(`vaddr) tval);
	`endif
  `ifdef perfmonitors
   	(*always_ready, always_enabled*)
    //(*doc = "method: sideband connection to core to send rg_mcouteren value"*)
    method Bit#(32) mv_mcounteren;

  `ifdef csr_grp4
    (*always_ready, always_enabled*)
    //(*doc = "method: sideband connection to grp4 to send rg_mcountinhibit value"*)
    method Bit#(7) mv_mcountinhibit_grp4;

    (*always_ready, always_enabled*)
    //(*doc = "method: sideband connection to grp4 to send rg_mhpminterrupten value"*)
    method Bit#(7) mv_mhpminterrupten_grp4;
  `endif

  `ifdef csr_grp5
   	(*always_ready, always_enabled*)
   	//(*doc = "method: sideband connection to grp5 to send rg_mcountinhibit value"*)
    method Bit#(7) mv_mcountinhibit_grp5;
    (*always_ready, always_enabled*)
    //(*doc = "method: sideband connection to grp5 to send rg_mhpminterrupten value"*)
    method Bit#(7) mv_mhpminterrupten_grp5;
  `endif

  `ifdef csr_grp6
    (*always_ready, always_enabled*)
   	//(*doc = "method: sideband connection to grp6 to send rg_mcountinhibit value"*)
		method Bit#(7) mv_mcountinhibit_grp6;
    (*always_ready, always_enabled*)
    //(*doc = "method: sideband connection to grp6 to send rg_mhpminterrupten value"*)
    method Bit#(7) mv_mhpminterrupten_grp6;
	`endif

	`ifdef csr_grp7
		(*always_ready, always_enabled*)
   	//(*doc = "method: sideband connection to grp7 to send rg_mcountinhibit value"*)
		method Bit#(8) mv_mcountinhibit_grp7;
    (*always_ready, always_enabled*)
    //(*doc = "method: sideband connection to grp7 to send rg_mhpminterrupten value"*)
    method Bit#(8) mv_mhpminterrupten_grp7;
	`endif
  `endif

   	//sideband connections to core
   	//(*doc = "method: sideband access from core to update the time register "*)
   	method Action ma_clint_mtime(Bit#(64) c_mtime);
    // when ever the core is updating the minstret through CSR then the following method
    // should not be called by the core. This has to be handled at the core end.
    //(*doc = "method: increments the minstret register upon being called by the core"*)
   	method Action ma_incr_minstret;

  `ifdef triggers
  	//(*doc = "returns the vector of values stored in v_trig_tdata1 to the core"*)
    method Vector#(`trigger_num, TriggerData) mv_trigger_data1; //group-3
    //(*doc = "returns the vector of values stored in v_trig_tdata2 to the core"*)
    method Vector#(`trigger_num, Bit#(XLEN)) mv_trigger_data2;  //group-3
    //(*doc = "returns the vector of boolean values to indicate which triggers are enabled"*)
    method Vector#(`trigger_num, Bool) mv_trigger_enable; //group-3
  `endif

  	(*always_ready, always_enabled*)
		//(*doc = "method: fetch from core the prvilege mode*)
		method Action ma_upd_privilege (Privilege_mode prv);

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

	(*noinline*)
	//(*doc = "func : returns the value to be written onto the registers involved the CSR-operations"*)
	function Bit#(XLEN) fn_csr_op (Bit#(XLEN) writedata, Bit#(XLEN) readdata, Bit#(2) op);
		if(op == 'd1)
    	return writedata;
    else if(op == 'd2)
      return (writedata|readdata);
    else
      return (~writedata & readdata);
  endfunction
  //(*doc = "func : returns and interface of a register, however with read-only functionality"*)
  function Reg#(t) readOnlyReg(t r);
    return (interface Reg;
       method t _read = r;
       method Action _write(t x) = noAction;
    endinterface);
  endfunction

  (*doc = "module : implementing read and write methods for group - 3 csrs and related side band \
           access"*)
  (*synthesize*)
  (*preempts="ma_core_req, increment_cycle_counter"*)
  (*conflict_free="ma_core_req, ma_incr_minstret"*)
`ifdef debug
  (*conflict_free="mav_upd_on_debugger, ma_core_req"*)
`endif
  module mk_csr_grp3 (Ifc_csr_grp3);
  	// common registers
  `ifdef csr_low_latency
  	(* doc = "wire : holds the response of this group for a csr operation request, \
  					  for one cycle, wire is used for low latency"*)
    Wire#(CSRResponse) rg_resp_to_core <- mkDWire(CSRResponse{hit:False, data:0});
	`else
		(* doc = "reg : register to hold the response of this group for a csr operation request"*)
		Reg#(CSRResponse) rg_resp_to_core <- mkDReg(CSRResponse{hit:False, data:0});
	`endif


  `ifdef csr_grp4
  	(* doc = "fifo : fifo to forward the core - request to the next group on a miss in the \
                     current group" *)
    FIFOF#(CSRReq) ff_fwd_request <- mkLFIFOF();
  `endif

    //(*doc = note: mkUniqueWrapper is used to avoid multiple instantiation of same function"*)
    let csr_op <- mkUniqueWrapper3(fn_csr_op);

    (*doc = "reg : store the information on curent privilege level"*)
    Wire#(Privilege_mode) wr_prv <- mkWire();

    //////////////////////////////////////debug type registers//////////////////////////////////////
	`ifdef debug
    // DCSR - debug spec
    //(*doc = "reg : xdebugver provides information of external debug support"*)
    Reg#(Bit#(4)) rg_dcsr_xdebugver = readOnlyReg(4);                         // DCSR b31-28
    (*doc = "reg : ebreakm decides if ebreak instruction in m-mode, should cause entry in debug \
             mode or behave normally, part of dcsr"*)
    Reg#(Bit#(1)) rg_dcsr_ebreakm   <- mkReg(1);                              // DCSR b15
    (*doc = "reg : ebreaks decides if ebreak instruction in s-mode, should cause entry in debug \
             mode or behave normally, part of dcsr"*)
    Reg#(Bit#(1)) rg_dcsr_ebreaks   <- mkReg(0);                              // DCSR b13
    (*doc = "reg : ebreaku decides if ebreak instruction in u-mode, should cause entry in debug \
             mode or normally, part of dcsr"*)
    Reg#(Bit#(1)) rg_dcsr_ebreaku   <- mkReg(0);                              // DCSR b12
    (*doc = "reg : Step Interrupt Enable, is an enable bit to allow interrupts during single \
             stepping, part of dcsr "*)
    Reg#(Bit#(1)) rg_dcsr_stepie    <- mkReg(0);                              // DCSR b11
    (*doc = "reg : disable bit to prevent counters from incrementing during debug mode, \
             part of dcsr"*)
    Reg#(Bit#(1)) rg_dcsr_stopcount <- mkReg(0);                              // DCSR b10
    (*doc = "reg : disable bit to prevent timers from incrementing during debug mode, part of dcsr"*)
    Reg#(Bit#(1)) rg_dcsr_stoptime  <- mkReg(0);                              // DCSR b9
    (*doc = "reg : encodes the cause of entry into debug mode, part of dcsr"*)
    Reg#(Bit#(3)) rg_dcsr_cause     <- mkReg(0);                              // DCSR b8-6
    (*doc = "reg : decides wether mprv bits in mstatus register should be ignored/not, \
             part of dcsr"*)
    Reg#(Bit#(1)) rg_dcsr_mprven    <- mkReg(0);                              // DCSR b4
    (*doc = "reg : when set, shows a Non Maskable Interrupt is Pending (nmip), part of dcsr"*)
    Reg#(Bit#(1)) rg_dcsr_nmip      <- mkReg(0);                              // DCSR b3
    (*doc = "reg : causes a single instruction to be executed followed by entry to debug mode, \
             when set, part of dcsr"*)
    Reg#(Bit#(1)) rg_dcsr_step      <- mkReg(0);                              // DCSR b2
    (*doc = "reg : contains the privilege level existing upon entry to debug mode, part of dcsr"*)
    Reg#(Bit#(2)) rg_dcsr_prv       <- mkReg(3);                              // DCSR b1-0
    //(*doc = "reg : Debug Control And Status register"*)
    Reg#(Bit#(32)) rg_csr_dcsr =  concatReg15(rg_dcsr_xdebugver,readOnlyReg(12'd0),rg_dcsr_ebreakm,
				    																	readOnlyReg(1'd0),rg_dcsr_ebreaks,rg_dcsr_ebreaku,
				    																	rg_dcsr_stepie,rg_dcsr_stopcount, rg_dcsr_stoptime,
				    																	readOnlyReg(rg_dcsr_cause),
				    																	readOnlyReg(1'd0),rg_dcsr_mprven,
				    																	readOnlyReg(rg_dcsr_nmip),rg_dcsr_step,rg_dcsr_prv);

		// DPC - debug spec
		(*doc = "reg : updated by the virtual address of next instruction upon entry to debug mode"*)
	  Reg#(Bit#(TSub#(`vaddr, 1))) rg_csr_dpc  <- mkReg(0);

	  // DSCRATCH - debug spec
	  (*doc = "reg : scratch register for usage in debug mode"*)
    Reg#(Bit#(XLEN)) rg_csr_dscratch <- mkReg(0);


    (*doc = "reg : contains debug trap vector configuration, part of dtvec register"*)
    Reg#(Bit#(TSub#(`vaddr, 1))) rg_csr_dtvec <- mkReg(`DTVEC_BASE); // Place debug loop at dtvec_base for starters
    //DENABLE
    (*doc = "reg : Debug Enable register"*)
    Reg#(Bit#(1)) rg_csr_denable <- mkReg(1);

    // Part of shakti specific debug registers for control flow
    // using configreg to resolve conflicts
    //(*doc = "reg : internal register specific to this implementation"*)
    Reg#(Bit#(1))     rg_core_halted  <- mkConfigReg(0);
    (*doc = "reg : internal register specific to this implementation"*)
    Reg#(Bit#(1))     rg_halt_int     <- mkReg(0);
    (*doc = "reg : internal register specific to this implementation"*)
    Reg#(Bit#(1))     rg_resume_int   <- mkReg(0);
    //(*doc = "reg : internal register specific to this implementation"*)
    Reg#(Bit#(1))     rg_halt_ie      = readOnlyReg(1);
    //(*doc = "reg : internal register specific to this implementation"*)
    Reg#(Bit#(1))     rg_resume_ie    = readOnlyReg(1);

  `else
  	//(*doc = "reg : internal register specific to this implementation"*)
    Reg#(Bit#(1)) rg_halt_ie    =  readOnlyReg(0);
    //(*doc = "reg : internal register specific to this implementation"*)
    Reg#(Bit#(1)) rg_halt_int   =  readOnlyReg(0);
    //(*doc = "reg : internal register specific to this implementation"*)
    Reg#(Bit#(1)) rg_resume_int =  readOnlyReg(0);
    //(*doc = "reg : internal register specific to this implementation"*)
    Reg#(Bit#(1)) rg_resume_ie  =  readOnlyReg(0);
	`endif
    ////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////machine type registers////////////////////////////////////

		//MVENDORID, MARCHID, MIMPID, MHARTID
    Bit#(XLEN) lv_csr_mvendorid  = 0;   // To be provided by JEDEC.
  `ifdef simulate
    Bit#(XLEN) lv_csr_marchid    = 0; // To be provided by the RISC - V foundation.
  `else
    Bit#(XLEN) lv_csr_marchid    = 15; // To be provided by the RISC - V foundation.
  `endif
    Bit#(XLEN) lv_csr_mimpid     = 0; // Implementation ID set by SHAKTI.
    Bit#(XLEN) lv_csr_mhartid    = 0;

    //MCYCLE, MINSTRET, MCYCLEH, MINSTRETH,
	`ifdef RV64
		(*doc = "reg : Macine Cycle, increments its value every cycle"*)
	  Reg#(Bit#(XLEN)) rg_mcycle <- mkReg(0);
	  (*doc = "reg : Macine INSTruction RETired, counts the total number of instructions retired by \
	           hart "*)
	  Reg#(Bit#(XLEN)) rg_minstret <- mkReg(0);
	`else
		(*doc = "reg : Macine Cycle, increments its value every cycle"*)
	 	Reg#(Bit#(XLEN)) rg_mcycle <- mkReg(0);
	 	(*doc = "reg : Macine INSTruction RETired, counts the total number of instructions retired by \
	           hart "*)
	  Reg#(Bit#(XLEN)) rg_minstret <- mkReg(0);
	  (*doc = "reg : higher 32 bits of cycle counter"*)
	  Reg#(Bit#(XLEN)) rg_mcycleh <- mkReg(0);
	  (*doc = "reg : higher 32 bits of instruction counter"*)
	  Reg#(Bit#(XLEN)) rg_minstreth <- mkReg(0);
	`endif

  `ifdef perfmonitors
		//MCOUNTEREN
		(*doc = "reg : Machine COUNTER ENable, controls availibility of performance monitors to next \
		         lowest privilege level"*)
	  Reg#(Bit#(32)) rg_mcounteren <- mkReg(0);

	  //MCOUNTINHIBIT
	  (*doc = "reg : hpm_enabler controls which registers should increment, part of mcountinhibit \
	           register"*)
	  Reg#(Bit#(29)) rg_hpm_enabler<- mkReg(0);
	  (*doc = "reg : this register controls wether cycle-counters should increment or not,\
	           part of mcountinhibit register"*)
	  Reg#(Bit#(1)) rg_cy <- mkReg(0);
	  (*doc = "reg : this register control wether the instruction counter should increment or not,\
	           part of mcountinhibit register"*)
	  Reg#(Bit#(1)) rg_ir <- mkReg(0);
	  //(*doc = "reg :  part of mcountinhibit, hardwired to 0"*);
	  Reg#(Bit#(1)) rg_always_zero = readOnlyReg(0);
	  //(*doc = "reg : the mcountinhibit register describes which counters/performance monitors \
	  //         should be disabled from incrementing by themselves"*)
	 	Reg#(Bit#(32)) rg_mcountinhibit = concatReg4(rg_hpm_enabler, rg_ir, rg_always_zero, rg_cy);
	 	/*doc:reg: register indicates if the respective counter should generate an interrrupt when the
	 	counter reaches 0 */
	 	Reg#(Bit#(32)) rg_mhpminterrupten <- mkReg(0);
	`endif
	`ifdef triggers
		//TSELECT
		(*doc = "reg : the trigger_index register is like a pointer to a vector of other \
		         trigger registers, it is a part of TSELECT register"*)
		Reg#(Bit#(TLog#(`trigger_num))) trigger_index <- mkReg(0);//TODO update method required
		//(*doc = "reg : tselect register, formed from trigger index register"*)
		Reg#(Bit#(XLEN)) csr_tselect = concatReg2(readOnlyReg(0), trigger_index);

		//TDATA1, TDATA2, TDATA3 TODO-documentation
		//(*doc = "reg : the vector of trigger registers, stores trigger specific data/configuration"*)
		Vector#(`trigger_num, Reg#(TriggerData)) v_trig_tdata1 <- replicateM(mkReg(tagged NONE));
		//(*doc = "reg : the vector of trigger registers, stores trigger specific data/configuration"*)
		Vector#(`trigger_num, Reg#(TriggerExtra)) v_trig_tdata3  <- replicateM(mkReg(unpack(0)));
		//(*doc = "reg : the vector of trigger registers, stores trigger specific data/configuration"*)
    Vector#(`trigger_num, Reg#(Bit#(XLEN))) v_trig_tdata2 <- replicateM(mkReg(0));
		//(*doc = "reg : contains bits of information as a vector constructed, to indicate support \
		//           to each type of trigger in TDATA1 register"*)
    Vector#(`trigger_num, Reg#(Bit#(XLEN))) v_tinfo <- replicateM(mkReg({'d0,6'b110100}));

		(*doc = "reg : mcontext register allows m-mode software to write a number into it, so that only\
		         triggers corresponding to this context number would fire"*)
    Reg#(Bit#(`mcontext)) rg_machine_context <- mkReg(0);
    //(*doc = "register formed from rg_machine_context"*)
    Reg#(Bit#(XLEN)) csr_machine_context = concatReg2(readOnlyReg(0), rg_machine_context);
  `ifdef supervisor
  	(*doc = "reg : scontext register allows s-mode software to write a number into it, so that only\
		         triggers corresponding to this context number would fire"*)
    Reg#(Bit#(`scontext)) rg_supervisor_context <- mkReg(0);
    //(*doc = "register formed from rg_supervisor_context"*)
    Reg#(Bit#(XLEN)) csr_supervisor_context = concatReg2(readOnlyReg(0), rg_supervisor_context);
  `endif

    //(*doc = "note : vector of boolean values v_trigger_enable, checks wether the triggers are \
    //         enabled or not"*)
    Vector#(`trigger_num, Bool) v_trigger_enable ;
    //(*doc = "note : vector of boolean values v_context_match, checks wether the trigger have the \
    //         context matching with the values in mcontext and scontext registers"*)
    Vector#(`trigger_num, Bool) v_context_match ;
    for(Integer i=0; i<`trigger_num; i=i+1) begin
      if(`mcontext > 0 `ifdef supervisor || `scontext > 0 `endif ) begin
        if( (v_trig_tdata3[i].mselect == 1 && wr_prv == Machine &&
             v_trig_tdata3[i].mvalue == rg_machine_context) `ifdef supervisor ||
            (v_trig_tdata3[i].sselect == 1 && wr_prv == Supervisor &&
             v_trig_tdata3[i].svalue == rg_supervisor_context) `endif )
        	v_context_match[i] = True;
        else
          v_context_match[i] = False;
        end
      else
        v_context_match[i] = True;
    end
    //(*doc = "note : vector of boolean values v_privilege_match, checks and gives information on \
    //				wether a trigger can be fired in a given privilege mode or not"*)
    Vector#(`trigger_num, Bool) v_privilege_match ;
    for(Integer i=0; i<`trigger_num; i=i+1)begin
      Bool en = False;
      Bit#(1) m=0;
      Bit#(1) s=0;
      Bit#(1) u=0;
      if(v_trig_tdata1[i] matches tagged MCONTROL .mc) begin
        m = mc.machine;
      `ifdef supervisor
        s = mc.supervisor;
      `endif
      `ifdef user
        u = mc.user;
      `endif
      end
      if(v_trig_tdata1[i] matches tagged ETRIGGER .et) begin
        m = et.machine;
      `ifdef supervisor
        s = et.supervisor;
      `endif
      `ifdef user
        u = et.user;
      `endif
      end
      if(v_trig_tdata1[i] matches tagged ITRIGGER .it) begin
        m = it.machine;
      `ifdef supervisor
        s = it.supervisor;
      `endif
      `ifdef user
        u = it.user;
      `endif
      end
      if( (m ==1 && wr_prv == Machine)
        `ifdef supervisor || (s == 1 && wr_prv == Supervisor) `endif
        `ifdef user       || (u == 1 && wr_prv == User) `endif )
        en = True;
      v_privilege_match[i] = en;
		end

    for(Integer i=0; i<`trigger_num; i=i+1)
      v_trigger_enable[i] = v_context_match[i] && v_privilege_match[i];
	`endif
		(*doc = "reg : regsiter to store the timer value, updated by the core on sideband access"*)
		Reg#(Bit#(64)) rg_clint_mtime <- mkReg(0);
   	////////////////////////////////////////////////////////////////////////////////////////////////
   	///////////////////////////// CUSTOM CSRS //////////////////////////////////////////////////////
  `ifdef dtim
   	/*doc:reg: */
   	Reg#(Bit#(XLEN)) rg_dtim_base <- mkRegA(`dtimbase);
   	/*doc:reg: */
   	Reg#(Bit#(XLEN)) rg_dtim_bound <- mkRegA(`dtimbound);
  `endif
  `ifdef itim
   	/*doc:reg: */
   	Reg#(Bit#(XLEN)) rg_itim_base <- mkRegA(`itimbase);
   	/*doc:reg: */
    Reg#(Bit#(XLEN)) rg_itim_bound <- mkRegA(`itimbound);
  `endif
   	//rules //check once with debug spec.
   	(*doc = "rule : the rule increments the cycle counter"*)
   	rule increment_cycle_counter;
   		if (`ifdef perfmonitors rg_cy == 1'b0 && `endif True ) begin
	  	`ifdef RV64
      	rg_mcycle <= rg_mcycle + 1;
	  	`else
	  		Bit#(64) new_cycle={rg_mcycleh, rg_mcycle};
	  		new_cycle = new_cycle + 1;
	  		rg_mcycle <= new_cycle[31 : 0];
	  		rg_mcycleh <= new_cycle[63 : 32];
	  	`endif
	  	end
    endrule

   	//method definitions
   	method Action ma_core_req(CSRReq req);

			Bit#(2) op = req.funct3;

 			case (req.csr_address)
 				//DEBUG MODE CSR
 			`ifdef debug
				`DCSR : begin
 					//read previous value
 					rg_resp_to_core <= CSRResponse{ hit : True, data : zeroExtend(rg_csr_dcsr)};
 					Bit#(XLEN) readdata = zeroExtend(rg_csr_dcsr);

 					//form the new value to be written and write
 					let word <- csr_op.func(req.writedata,readdata,op);
 					rg_csr_dcsr <=  truncate(word);

 				end

				`DPC : begin
 					//read previous value
 					rg_resp_to_core <= CSRResponse{ hit : True, data : signExtend({rg_csr_dpc,1'd0})};
 					Bit#(XLEN) readdata = signExtend({rg_csr_dpc,1'd0});

 					//form the new value to be written and write
 					let word <- csr_op.func(req.writedata,readdata,op);
 					rg_csr_dpc  <=  truncate(word>>1);
 				end

				`DSCRATCH : begin
 					//read previous value
 					rg_resp_to_core <= CSRResponse{ hit : True, data : rg_csr_dscratch};
 					Bit#(XLEN) readdata = rg_csr_dscratch;

 					//form the new value to be written and write
 					let word <- csr_op.func(req.writedata,readdata,op);
 					rg_csr_dscratch <= truncate(word);
 				end

 				`DTVEC :begin
 					//read previous value
 					rg_resp_to_core <= CSRResponse{ hit : True, data : signExtend({rg_csr_dtvec,1'd0})};
 					Bit#(XLEN) readdata = signExtend({rg_csr_dtvec,1'd0});

 					//form the new value to be written and write
 					let word <- csr_op.func(req.writedata,readdata,op);
 					rg_csr_dtvec <= truncate(word>>1);
 				end

 				`DENABLE : begin
 					//read previous value
 					rg_resp_to_core <= CSRResponse{ hit : True, data : zeroExtend(rg_csr_denable)};
 					Bit#(XLEN) readdata = zeroExtend(rg_csr_denable);

 					//form the new value to be written and write
 					let word <- csr_op.func(req.writedata,readdata,op);
 					rg_csr_denable <= truncate(word);
 				end

 			`endif

 				//MACHINE MODE CSR
				`MVENDROID : begin
 					//read previous value - MRO TYPE
 					rg_resp_to_core <= CSRResponse{ hit : True, data : lv_csr_mvendorid};
 				end

				`MARCHID : begin
 					//read previous value - MRO TYPE
 					rg_resp_to_core <= CSRResponse{ hit : True, data : lv_csr_marchid};
 				end

				`MIMPID : begin
 					//read previous value -MRO TYPE
 					rg_resp_to_core <= CSRResponse{ hit : True, data : lv_csr_mimpid};
 				end

				`MHARTID : begin
 					//read previous value - MRO TYPE
 					rg_resp_to_core <= CSRResponse{ hit : True, data : lv_csr_mhartid};
 				end

				`MCYCLE : begin
 					//read previous value
 					rg_resp_to_core <= CSRResponse{ hit : True, data : rg_mcycle};
 					Bit#(XLEN) readdata = rg_mcycle;

 					//form the new value to be written and write
 					let word <- csr_op.func(req.writedata,readdata,op);
 					rg_mcycle <= word;
 				end

				`MINSTRET : begin
 					//read previous value
 					rg_resp_to_core <= CSRResponse{ hit : True, data : rg_minstret};
 					Bit#(XLEN) readdata = rg_minstret;

 					//form the new value to be written and write
 					let word <- csr_op.func(req.writedata,readdata,op);
 					rg_minstret <= word;
 				end

				`MTIME : begin
					//read previous value
 					rg_resp_to_core <= CSRResponse{ hit : True, data : truncate(rg_clint_mtime)};
 					Bit#(XLEN) readdata = truncate(rg_clint_mtime);

 					//form the new value to be written and write
 					//let word <- csr_op.func(req.writedata,readdata,op);
				end
			`ifdef perfmonitors
				`MCOUNTEREN : begin
        	//read previous value
        	rg_resp_to_core <= CSRResponse{ hit : True, data : zeroExtend(rg_mcounteren)};
        	Bit#(XLEN) readdata = (zeroExtend(rg_mcounteren));
        	//form the new value to be written and write
        	let word <- csr_op.func(req.writedata,readdata,op);

        	rg_mcounteren <= truncate(word);
        end

				`MCOUNTINHIBIT : begin
        	//read previous value
        	rg_resp_to_core <= CSRResponse{ hit : True, data : zeroExtend(rg_mcountinhibit)};
        	Bit#(XLEN) readdata = (zeroExtend(rg_mcountinhibit));
        	//form the new value to be written and write
        	let word <- csr_op.func(req.writedata,readdata,op);

        	rg_mcountinhibit <= truncate(word);
        end

        `MHPMINTERRUPTEN : begin
        	rg_resp_to_core <= CSRResponse{ hit : True, data : zeroExtend(rg_mhpminterrupten)};
        	Bit#(XLEN) readdata = (zeroExtend(rg_mhpminterrupten));
        	//form the new value to be written and write
        	let word <- csr_op.func(req.writedata,readdata,op);

        	rg_mhpminterrupten <= truncate(word);
        end
      `endif

 			`ifndef RV64
				`MCYCLEH : begin
 					//read previous value
 					rg_resp_to_core <= CSRResponse{ hit : True, data : rg_mcycleh};
 					Bit#(XLEN) readdata = rg_mcycleh;

 					//form the new value to be written and write
 					let word <- csr_op.func(req.writedata,readdata,op);
 					rg_mcycleh <= word;

 				end

				`MINSTRETH : begin
 					//read previous value
 					rg_resp_to_core <= CSRResponse{ hit : True, data : rg_minstreth};
 					Bit#(XLEN) readdata = rg_minstreth;

 					//form the new value to be written and write
 					let word <- csr_op.func(req.writedata,readdata,op);
 					rg_minstreth <= word;

 				end

 				`MTIMEH : begin
					//read previous value
 					rg_resp_to_core <= CSRResponse{ hit : True, data : truncateLSB(rg_clint_mtime)};
 					Bit#(XLEN) readdata = truncateLSB(rg_clint_mtime);

 					//form the new value to be written and write
 					//let word <- csr_op.func(req.writedata,readdata,op);
				end
 			`endif

 			`ifdef triggers
				`TSELECT : begin
 					//read previous value
 					rg_resp_to_core <= CSRResponse{ hit : True, data : csr_tselect};
 					Bit#(XLEN) readdata = csr_tselect;

 					//form the new value to be written and write
 					let word <- csr_op.func(req.writedata,readdata,op);
 					csr_tselect <= word;
 				end

				`TDATA1 : begin
 					//read previous value
 					rg_resp_to_core <= CSRResponse{ hit : True, data : read_trigger_data(v_trig_tdata1[trigger_index])};
 					Bit#(XLEN) readdata = read_trigger_data(v_trig_tdata1[trigger_index]);

 					//form the new value to be written and write
 					let word <- csr_op.func(req.writedata,readdata,op);
 					v_trig_tdata1[trigger_index] <= write_trigger_data(word `ifdef debug ,
 					                                                  (rg_csr_denable==1 &&
 					                                                   rg_core_halted == 1 ) `endif ) ;
 				end

				`TDATA2 : begin
 					//read previous value
 					rg_resp_to_core <= CSRResponse{ hit : True, data : v_trig_tdata2[trigger_index]};
 					Bit#(XLEN) readdata = v_trig_tdata2[trigger_index];

 					//form the new value to be written and write
 					let word <- csr_op.func(req.writedata,readdata,op);
 					v_trig_tdata2[trigger_index] <= word;
 				end

				`TDATA3 : begin
 					//read previous value
 					rg_resp_to_core <= CSRResponse{ hit : True,
 					                                data : read_trigger_extra(v_trig_tdata3[trigger_index])};
 					Bit#(XLEN) readdata = read_trigger_extra(v_trig_tdata3[trigger_index]);

 					//form the new value to be written and write
 					let word <- csr_op.func(req.writedata,readdata,op);
 					v_trig_tdata3[trigger_index] <= write_trigger_extra(word);
 				end

 				`TMCONTEXT : begin
					//read previous value
	 				rg_resp_to_core <= CSRResponse{ hit : True, data : csr_machine_context};
 					Bit#(XLEN) readdata = (csr_machine_context);

 					//form the new value to be written and write
 					let word <- csr_op.func(req.writedata,readdata,op);
 					csr_machine_context <= word;
 				end

      `ifdef supervisor
        `TSCONTEXT : begin
         		//read previous value
	 					rg_resp_to_core <= CSRResponse{ hit : True, data : csr_supervisor_context};
 						Bit#(XLEN) readdata = (csr_supervisor_context);

 						//form the new value to be written and write
 						let word <- csr_op.func(req.writedata,readdata,op);
 						csr_supervisor_context <= word;
 				end
      `endif

        `TINFO : begin
        	//read previous value
	 				rg_resp_to_core <= CSRResponse{ hit : True, data : v_tinfo[trigger_index]};
        end

        //`SCOUNTEREN : begin
					//TODO not yet defined in csrfile.bsv
					//read previous value
        	//rg_resp_to_core <= CSRResponse{ hit : True, data : );
        	//Bit#(XLEN) readdata = ;

        	//form the new value to be written and write
        	//let word <- csr_op.func(req.writedata,readdata,op);

				//end
        //`TCONTROL : begin TODO-> defined in csr.defines
        	//read previous value
	 				//rg_resp_to_core <= CSRResponse{ hit : True, data : csr_supervisor_context};
 					//Bit#(XLEN) readdata = read_trigger_extra(csr_supervisor_context);

 					//form the new value to be written and write
 					//let word <- csr_op.func(req.writedata,readdata,op);
 					//csr_supervisor_context <= word;
        //end
 			`endif

 			`ifdef user
 				//USER MODE CSRS - URO TYPE
 				`CYCLE : begin
 					//read previous value
 					rg_resp_to_core <= CSRResponse{ hit : True, data : rg_mcycle};
 				end

				`TIME : begin
 					//read previous value
 					rg_resp_to_core <= CSRResponse{ hit : True, data : truncate(rg_clint_mtime)};
 				end


				`INSTRET : begin
 					//read previous value
 					rg_resp_to_core <= CSRResponse{ hit : True, data : rg_minstret};
 				end

			`ifndef RV64
				`CYCLEH : begin
 					//read previous value
 					rg_resp_to_core <= CSRResponse{ hit : True, data : rg_mcycleh};
 				end

				`TIMEH : begin
 					//read previous value
 					rg_resp_to_core <= CSRResponse{ hit : True, data : truncateLSB(rg_clint_mtime)};
 				end

				`INSTRETH : begin
 					//read previous value
 					rg_resp_to_core <= CSRResponse{ hit : True, data : rg_minstreth};
 				end
 			`endif
 		`endif
 		  `ifdef dtim
 		    `DTIM_BASE: begin
        	rg_resp_to_core <= CSRResponse{ hit : True, data : zeroExtend(rg_dtim_base)};
        	Bit#(XLEN) readdata = (zeroExtend(rg_dtim_base));
        	//form the new value to be written and write
        	let word <- csr_op.func(req.writedata,readdata,op);

        	rg_dtim_base <= truncate(word);
 		    end
 		    `DTIM_BOUND: begin
        	rg_resp_to_core <= CSRResponse{ hit : True, data : zeroExtend(rg_dtim_bound)};
        	Bit#(XLEN) readdata = (zeroExtend(rg_dtim_bound));
        	//form the new value to be written and write
        	let word <- csr_op.func(req.writedata,readdata,op);

        	rg_dtim_bound <= truncate(word);
 		    end
 		  `endif
 		  `ifdef itim
 		    `ITIM_BASE: begin
        	rg_resp_to_core <= CSRResponse{ hit : True, data : zeroExtend(rg_itim_base)};
        	Bit#(XLEN) readdata = (zeroExtend(rg_itim_base));
        	//form the new value to be written and write
        	let word <- csr_op.func(req.writedata,readdata,op);

        	rg_itim_base <= truncate(word);
 		    end
 		    `ITIM_BOUND: begin
        	rg_resp_to_core <= CSRResponse{ hit : True, data : zeroExtend(rg_itim_bound)};
        	Bit#(XLEN) readdata = (zeroExtend(rg_itim_bound));
        	//form the new value to be written and write
        	let word <- csr_op.func(req.writedata,readdata,op);

        	rg_itim_bound <= truncate(word);
 		    end
 		  `endif
 				default : begin
 				`ifdef csr_grp4
          ff_fwd_request.enq(req);
        `else
          rg_resp_to_core <= CSRResponse{ hit : True, data : 0};
        `endif
        end
 			endcase
 		endmethod

 		method CSRResponse mv_core_resp = rg_resp_to_core;

  `ifdef csr_grp4
   	method ActionValue#(CSRReq) mav_fwd_req;
      ff_fwd_request.deq;
      return ff_fwd_request.first();
    endmethod
  `endif
    ////////////////////////////////////////////////////////////////////////////////////////////////
    //intergroup side band connections
  `ifdef debug
   	method Bit#(32) mv_csr_dcsr;
   		Bit#(32) dcsr_val = rg_csr_dcsr;
   		return dcsr_val;
   	endmethod

   	method Bit#(1) mv_resume_int;
			Bit#(1) resume_int_val = rg_resume_int;
			return resume_int_val;
		endmethod

		method Bit#(1) mv_core_halted;
			Bit#(1) core_halted_val;
			core_halted_val = rg_core_halted;
			return core_halted_val;
		endmethod

		method Bit#(1) mv_halt_int;
			Bit#(1) halt_int_val;
			halt_int_val = rg_halt_int;
			return halt_int_val;
		endmethod

		`ifdef csr_grp4
			method Bit#(1) mv_dcsr_stopcount;
				Bit#(1) dcsr_stopcount_val;
				dcsr_stopcount_val = rg_dcsr_stopcount;
				return dcsr_stopcount_val;
			endmethod
		`endif
  `endif

  `ifdef perfmonitors
  	method Bit#(32) mv_mcounteren;
  		Bit#(32) mcounteren_val = rg_mcounteren;
  		return mcounteren_val;
		endmethod
	`endif

	`ifdef csr_grp4
    method mv_mcountinhibit_grp4 = rg_mcountinhibit[9:3];
    method mv_mhpminterrupten_grp4 = rg_mhpminterrupten[9:3];
  `endif

  `ifdef csr_grp5
    method mv_mcountinhibit_grp5 = rg_mcountinhibit[16:10];
    method mv_mhpminterrupten_grp5 = rg_mhpminterrupten[16:10];
  `endif

  `ifdef csr_grp6
    method mv_mcountinhibit_grp6 = rg_mcountinhibit[23:17];
    method mv_mhpminterrupten_grp6 = rg_mhpminterrupten[23:17];
  `endif

	`ifdef csr_grp7
    method mv_mcountinhibit_grp7 = rg_mcountinhibit[31:24];
    method mv_mhpminterrupten_grp7 = rg_mhpminterrupten[31:24];
 	`endif
    ////////////////////////////////////////////////////////////////////////////////////////////////
    method Action ma_clint_mtime(Bit#(64) c_mtime);
  		rg_clint_mtime <= c_mtime;
  	endmethod

  	method Action ma_incr_minstret;
  		if ( `ifdef perfmonitors rg_ir == 1'b0 && `endif True) begin
      `ifdef RV64
        rg_minstret <= rg_minstret + 1;
      `else
        Bit#(TMul#(2, XLEN)) instr ={rg_minstreth, rg_minstret};
        instr = instr + 1;
        rg_minstreth <= truncateLSB(instr);
        rg_minstret <= truncate(instr);
      `endif
     end
    endmethod

   `ifdef debug
     method ActionValue#(Tuple2#(Bit#(2), Bit#(`vaddr))) mav_upd_on_debugger(Bit#(`causesize) c,
                                                        Bit#(`vaddr) pc, Bit#(`vaddr) tval);
      Bit#(`causesize) cause = c;
      Bit#(`vaddr) redirect = {rg_csr_dtvec, 1'd0};
      if(cause >= {1'b1,`HaltEbreak} && cause <= {1'b1, `HaltReset} ) begin
        rg_csr_dpc <= truncateLSB(pc);
        rg_dcsr_cause <= truncate(cause);
        rg_core_halted <= 1;
        rg_dcsr_prv <= pack(wr_prv);
      end
      else begin
        redirect = {rg_csr_dpc,1'd0};
        rg_core_halted <= 0;
      end
      return tuple2(rg_dcsr_prv, redirect);
    endmethod
    method Action ma_debug_halt_request(Bit#(1) ip);
      rg_halt_int <= ip;
    endmethod
    method Action ma_debug_resume_request(Bit#(1) ip);
      rg_resume_int <= ip;
    endmethod
    method mv_core_is_halted = rg_core_halted;
    method mv_step_is_set = rg_dcsr_step;
    method mv_step_ie = rg_dcsr_stepie;
    method mv_core_debugenable = rg_csr_denable;
  `endif

  `ifdef triggers
    method mv_trigger_data1 = readVReg(v_trig_tdata1);
    method mv_trigger_data2 = readVReg(v_trig_tdata2);
    method mv_trigger_enable = v_trigger_enable;
  `endif

    method Action ma_upd_privilege (Privilege_mode prv);
    	wr_prv <= prv;
    endmethod
	`ifdef dtim
	  /*doc:method: */
	  method mv_csr_dtim_base = rg_dtim_base;
    /*doc:method: */
    method mv_csr_dtim_bound = rg_dtim_bound;
  `endif
  `ifdef itim
    /*doc:method: */
    method mv_csr_itim_base = rg_itim_base;
    /*doc:method: */
    method mv_csr_itim_bound = rg_itim_bound;
  `endif

	endmodule : mk_csr_grp3
endpackage : csr_grp3
