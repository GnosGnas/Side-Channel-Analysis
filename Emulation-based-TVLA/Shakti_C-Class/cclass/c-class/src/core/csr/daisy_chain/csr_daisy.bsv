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

package csr_daisy;

	//library and project related imports
  import common_types::*;
  `include "common_params.bsv"
  `include "csrgrp.defines"
  `include "Logger.bsv"
  import ConcatReg::*;
  import BUtils::*;
  import Vector::*;
  import ConfigReg::*;
  import Connectable::*;

  import csr_grp1 :: *;
  import csr_grp2 :: *;
  import csr_grp3 :: *;
`ifdef perfmonitors
  `ifdef csr_grp4
    import csr_grp4 :: *;
  `endif

  `ifdef csr_grp5
    import csr_grp5 :: *;
  `endif

  `ifdef csr_grp6
    import csr_grp6 :: *;
  `endif

  `ifdef csr_grp7
    import csr_grp7 :: *;
  `endif
`endif

  import Assert :: * ;

  interface Ifc_csr_daisy;

		//(*doc "method : recieve request from core to perform CSR operation*)
  	method Action ma_core_req(CSRReq req);
  	//(*doc = "method : response from the CSRs forwarded to the core"*)
  	method CSRResponse mv_resp_to_core;
    //*(doc = "method : Updates the internal registers on return from trap"*)
  	method ActionValue#(Bit#(`vaddr)) mav_upd_on_ret `ifdef non_m_traps (Privilege_mode prv) `endif ;

    /*doc: method: method to perform actions on traps*/
    method ActionValue#(Bit#(`vaddr)) mav_upd_on_trap(Bit#(`causesize) c, Bit#(`vaddr) pc,
                                                                                Bit#(`vaddr) tval);
  	//-----------------------------------------------------

    //side band connections from grp-1 to core-------------
    //(*doc = "method : sideband access from core to indicate software interrupt pending \
    //           at machine level, modifies rg-msip in grp-1"*)
    method Action ma_clint_msip(Bit#(1) intrpt); //tested
    //(*doc = "method : sideband access from core to indicate timer interrupt pending \
    //           at machine level, modifies rg-mtip in grp-1"*)
    method Action ma_clint_mtip(Bit#(1) intrpt); //tested
    //(*doc = "method : sideband access from core to indicate timer interrupt pending \
    //           at machine level, modifies rg-meip/rg_ext_seip/rg_ext_ueip based on \
    //           current privilege level, all in grp-1"*)
    method Action ma_set_external_interrupt(Bit#(1) ex_i); //tested

  `ifdef supervisor
  	//(*doc = "method : sideband access from core, the method returns current value of SATP \
  	//         register in grp-1."*)
		method Bit#(XLEN) mv_csr_satp; //tested
	`endif
		//(*doc = "method : sideband access from core, the method returns current value of MSTATUS \
		//         register in grp-1."*)
		method Bit#(XLEN) mv_csr_mstatus; //tested
		//(*doc = "method : sideband access from core, the method returns  value of collection of \
		//					 registers required for decode - stage from grp-1"*)
		method CSRtoDecode mv_csrs_to_decode; //tested

    /*doc:method: returns the current privilege mode of execution*/
    method Bit#(2) mv_curr_priv;
		/*doc:method: This method indicates if the hart should resume from a WFI*/
		method Bool mv_resume_wfi ();
		//-----------------------------------------------------
		//sideband connections from grp-2 to core--------------
  `ifdef spfpu
  	//(*doc = "method : updates rg_fflags and FS register on request from core in grp-2"*)
    method Action ma_update_fflags(Bit#(5) flags); //tested
  `endif
  	//(*doc = "method : returns the last 3-bits of rg_customcontrol in grp-2"*)
  	method Bit#(3) mv_cacheenable; //tested

  `ifdef arith_trap
  	//(*doc = "method : returns the last 4th bit of rg_customcontrol in grp-2"*)
    method Bit#(1) mv_arith_excep; //tested
  `endif
	  //(*doc = "method : returns the value of misa_c in the MISA register"*)
	  method Bit#(1) mv_csr_misa_c; //tested

	`ifdef pmp
		//(*doc = "method : returns the vector of values stored in PMPCFG registers in grp-2"*)
    method Vector#(`PMPSIZE, Bit#(8)) mv_pmp_cfg; //tested
    //(*doc = "method : returns the vector of values stored in PMPADDR registers in grp-2"*)
    method Vector#(`PMPSIZE, Bit#(`paddr )) mv_pmp_addr; //tested
  `endif

   //-----------------------------------------------------
   //sideband connections from grp-3 to core--------------
   	//(*doc = "method: sideband access from core to update the time register in grp-3"*)
   	method Action ma_clint_mtime(Bit#(64) c_mtime); //tested
   	//(*doc = "method: increments the minstret register in grp-3 upon being called by the core"*)
   	method Action ma_incr_minstret; //tested
  `ifdef perfmonitors
   	//(*doc = "method: sideband connection to core to send rg_mcouteren value from grp-3"*)
    // TODO use this in the decode stage to generate exception on access
   	method Bit#(32) mv_mcounteren;
  `endif

  `ifdef debug
  	//(*doc = "method: updates rg_halt_int in grp-3 upon being called by the core"*)
    method Action ma_debug_halt_request(Bit#(1) ip);
    //(*doc = "method: updates rg_resume_int in grp-3 upon being called by the core"*)
    method Action ma_debug_resume_request(Bit#(1) ip);
    //(*doc = "returns the value of rg_core_halted in grp-3 to the core"*)
    method Bit#(1) mv_core_is_halted;
    //(*doc = "returns the value of rg_dcsr_step in grp-3 to the core"*)
    method Bit#(1) mv_step_is_set;
    //(*doc = "returns the value of rg_dcsr_stepiein grp-3 to the core"*)
    method Bit#(1) mv_step_ie;
    //(*doc = "returns the value of rg_csr_denable in grp-3 to the core"*)
    method Bit#(1) mv_core_debugenable;
  `endif

  `ifdef triggers
  	//(*doc = "returns the vector of values stored in v_trig_tdata1 in grp-3 to the core"*)
    method Vector#(`trigger_num, TriggerData) mv_trigger_data1; //group-3
    //(*doc = "returns the vector of values stored in v_trig_tdata2 in grp-3 to the core"*)
    method Vector#(`trigger_num, Bit#(XLEN)) mv_trigger_data2;  //group-3
   	//(*doc = "returns the vector of boolean values to indicate which triggers are enabled \
   	//         in grp-3"*)
    method Vector#(`trigger_num, Bool) mv_trigger_enable; //group-3
  `endif

  	//TODO side band connections to core from grp4,5,6,7---
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

  	`ifdef simulate
  		//(*doc = "method : the method returns a tuple-2 of vector of MHPMEVENT registers and \
  		//         MHPMCOUNTER registers from all the groups after concatenating them "*)
  		method Tuple2#(Vector#(`counters_size, Bit#(XLEN)),
  		               Vector#(`counters_size, Bit#(64))) mv_counter_values;
    `endif
	`endif
		//-----------------------------------------------------
  	//common connections from core to the groups 1,3-------
  	//(*doc = "method : test method that updates privilege level, is TO BE COMMENTED OUT AND \
  	//           NOT BE USED IN ACTUAL DESIGN, only for testing purpose"*)
  	//method Action test_upd_privilege(Privilege_mode prv_val);//testing purpose
  	//-----------------------------------------------------
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

  //(*preempts="rl_fwd_to_grp3, incr_minstret"*)
  //(*preempts="rl_fwd_to_grp2, update_fflags"*)
  //(*mutually_exclusive = "test_upd_privilege,mav_upd_on_ret"*) //test purpose only
  (*synthesize*)
  (*conflict_free="ma_core_req,mv_resp_to_core"*)
  (*conflict_free="mav_upd_on_trap,mv_resp_to_core"*)
  (*doc = "module : provides interface for all core-to-CSRs side-band accesses and a method to \
           perform regular CSR read-write operations, with access to registers being in a \
           daisy-chain manner."*)
  module mk_csr_daisy(Ifc_csr_daisy);

  	//static assert checks
  	`ifdef perfmonitors
			staticAssert(!( (`counters_grp5 == 0) &&
			                (`counters_grp6 > 0)),
			                "group 5 cannot have 0-counters before group 6");

			staticAssert(!( (`counters_grp6 == 0) &&
			                (`counters_grp7 > 0)),
			                "group 6 cannot have 0-counters before group 7");
  	`endif
  	//module instantiations
  	Ifc_csr_grp1 mk_grp1 <- mk_csr_grp1;
  	Ifc_csr_grp2 mk_grp2 <- mk_csr_grp2;
  	Ifc_csr_grp3 mk_grp3 <- mk_csr_grp3;

    Bit#(1) lv_misa_s = mk_grp2.mv_csr_misa[18];
    Bit#(1) lv_misa_u = mk_grp2.mv_csr_misa[20];
    Bit#(1) lv_misa_n = mk_grp2.mv_csr_misa[13];
    Bit#(1) lv_misa_c = mk_grp2.mv_csr_misa[2];

	`ifdef perfmonitors
    `ifdef csr_grp4
    	Ifc_csr_grp4 mk_grp4 <- mk_csr_grp4;
    `endif

    `ifdef csr_grp5
  		Ifc_csr_grp5 mk_grp5 <- mk_csr_grp5;
  	`endif

  	`ifdef csr_grp6
  		Ifc_csr_grp6 mk_grp6 <- mk_csr_grp6;
  	`endif

  	`ifdef csr_grp7
  		Ifc_csr_grp7 mk_grp7 <- mk_csr_grp7;
  	`endif
  `endif

  	(*doc = "wire : the wire captures the repsonse from the groups and is used to send the \
  	         data to core"*)
    Wire#(CSRResponse) wr_core_resp <- mkDWire(CSRResponse{hit : False, data : 0});

    // Current Privilege Level
    (*doc = "reg : holds the current privilege level and provides this information to groups 1,3"*)
	  Reg#(Privilege_mode) rg_prv <- mkReg(Machine); // resets to machine mode
		//rules
    Bool anyhit = mk_grp1.mv_core_resp.hit  || mk_grp2.mv_core_resp.hit
    				                                || mk_grp3.mv_core_resp.hit
        `ifdef perfmonitors `ifdef csr_grp4 || mk_grp4.mv_core_resp.hit `endif
                            `ifdef csr_grp5 || mk_grp5.mv_core_resp.hit `endif
                            `ifdef csr_grp6 || mk_grp6.mv_core_resp.hit `endif
                            `ifdef csr_grp7	|| mk_grp7.mv_core_resp.hit `endif
     		`endif ;

    Bit#(XLEN) anydata = mk_grp1.mv_core_resp.data  | mk_grp2.mv_core_resp.data
    									                              | mk_grp3.mv_core_resp.data
                `ifdef perfmonitors `ifdef csr_grp4 | mk_grp4.mv_core_resp.data `endif
    	                             `ifdef csr_grp5	| mk_grp5.mv_core_resp.data `endif
    	                             `ifdef csr_grp6	| mk_grp6.mv_core_resp.data `endif
    	                             `ifdef csr_grp7	| mk_grp7.mv_core_resp.data `endif
    	    `endif ;
    //common connections from core to the required groups-------
    (*doc = "rule : forwards the data in rg_prv (the current privilege level) to groups 1 and 3"*)
		rule rl_upd_grp_privilege;
  		mk_grp1.ma_upd_privilege(rg_prv);
  		mk_grp3.ma_upd_privilege(rg_prv);
  	endrule
  	//Join all the FIFO enq, deq methods of the groups in the chain
  	//(*doc = "note : the groups contain fifos which are connect two adjacent groups via the \
  	//         action-value mav_fwd_req (enque request into fifo and return a value) of the \
  	//         previous group and action ma_core_req (deque request from fifo and verify it) of the
  	//         next adjacent group. Of all such connections described as \
  	//         mkConnection(mk_grp-i.mav_fwd_req, mk_grp-(i+1).ma_core_req) i-being 1/2/3/4/5 or 6,\
  	//         only one of them must fire in a cycle. This ensures that to a request, either \
  	//         the current group holding the request responds, or forwards it, to be handled by the\
  	//         next group.
  	mkConnection(mk_grp1.mav_fwd_req, mk_grp2.ma_core_req);
  	mkConnection(mk_grp2.mav_fwd_req, mk_grp3.ma_core_req);

  `ifdef perfmonitors
    `ifdef csr_grp4
    	mkConnection(mk_grp3.mav_fwd_req, mk_grp4.ma_core_req);
    `endif

		`ifdef csr_grp5
  		mkConnection(mk_grp4.mav_fwd_req, mk_grp5.ma_core_req);
		`endif

		`ifdef csr_grp6
  		mkConnection(mk_grp5.mav_fwd_req, mk_grp6.ma_core_req);
  	`endif

  	`ifdef csr_grp7
  		mkConnection(mk_grp6.mav_fwd_req, mk_grp7.ma_core_req);
  	`endif
  `endif

  	////////////////////////////////////////////////////////////////////////////////////////////////
  	//intergroup connections
  	//(*doc = "note : there are requirements of values of certain registers to other groups than \
  	//         their own ones. such cases are handled by providing inter-group sideband \
  	//         connections that are described as mkConnection of mv_(reg) in the group holding the \
    //         register and ma_(reg) in the group requiring the register value"*)
  	//grp2 to grp1 sideband connections
  	mkConnection(mk_grp2.mv_csr_misa, mk_grp1.ma_csr_misa);
  	mkConnection(mk_grp2.mv_frm, mk_grp1.ma_frm);
  `ifdef debug
  	//grp3 to grp1 sideband connections
  	mkConnection(mk_grp3.mv_csr_dcsr, mk_grp1.ma_csr_dcsr);
  	mkConnection(mk_grp3.mv_resume_int, mk_grp1.ma_resume_int);
  	mkConnection(mk_grp3.mv_core_halted, mk_grp1.ma_core_halted);
  	mkConnection(mk_grp3.mv_halt_int, mk_grp1.ma_halt_int);

  	//grp3 to grps 4,5,6,7 sideband connections
  	`ifdef perfmonitors
  		`ifdef csr_grp4
  			mkConnection(mk_grp3.mv_dcsr_stopcount, mk_grp4.ma_dcsr_stopcount);
  		`endif

  		`ifdef csr_grp5
  			mkConnection(mk_grp3.mv_dcsr_stopcount, mk_grp5.ma_dcsr_stopcount);
  		`endif

  		`ifdef csr_grp6
  			mkConnection(mk_grp3.mv_dcsr_stopcount, mk_grp6.ma_dcsr_stopcount);
  		`endif

  		`ifdef csr_grp7
  			mkConnection(mk_grp3.mv_dcsr_stopcount, mk_grp7.ma_dcsr_stopcount);
  		`endif
  	`endif
  `endif

  `ifdef perfmonitors
    Bit#(29) lv_counter_interrupts=0;
  	`ifdef csr_grp4
  		mkConnection(mk_grp3.mv_mcountinhibit_grp4, mk_grp4.ma_mcountinhibit);
  		mkConnection(mk_grp3.mv_mhpminterrupten_grp4, mk_grp4.ma_mhpminterrupten);
  		lv_counter_interrupts[6:0] = mk_grp4.mv_counter_interrupt;
  	`endif

  	`ifdef csr_grp5
  		mkConnection(mk_grp3.mv_mcountinhibit_grp5, mk_grp5.ma_mcountinhibit);
  		mkConnection(mk_grp3.mv_mhpminterrupten_grp5, mk_grp5.ma_mhpminterrupten);
  		lv_counter_interrupts[13:7] = mk_grp5.mv_counter_interrupt;
  	`endif

  	`ifdef csr_grp6
  		mkConnection(mk_grp3.mv_mcountinhibit_grp6, mk_grp6.ma_mcountinhibit);
  		mkConnection(mk_grp3.mv_mhpminterrupten_grp6, mk_grp6.ma_mhpminterrupten);
  		lv_counter_interrupts[20:14] = mk_grp6.mv_counter_interrupt;
  	`endif

  	`ifdef csr_grp7
  		mkConnection(mk_grp3.mv_mcountinhibit_grp7, mk_grp7.ma_mcountinhibit);
  		mkConnection(mk_grp3.mv_mhpminterrupten_grp7, mk_grp7.ma_mhpminterrupten);
  		lv_counter_interrupts[28:21] = mk_grp7.mv_counter_interrupt;
  	`endif
    rule rl_send_counter_interrupts;
      mk_grp1.ma_counter_interrupts(lv_counter_interrupts);
    endrule
  `endif

  	////////////////////////////////////////////////////////////////////////////////////////////////
  	//methods definitions
  	method ma_core_req = mk_grp1.ma_core_req;
  	method mv_resp_to_core = CSRResponse{hit: anyhit, data: anydata};
  	////////////////////////////////////////////////////////////////////////////////////////////////
  	//side band connections from grp-1 to core-------------
    method ma_clint_msip = mk_grp1.ma_clint_msip;
    method ma_clint_mtip = mk_grp1.ma_clint_mtip;
    method ma_set_external_interrupt = mk_grp1.ma_set_external_interrupt;
  `ifdef supervisor
		method mv_csr_satp = mk_grp1.mv_csr_satp;
	`endif
		method mv_csr_mstatus = mk_grp1.mv_csr_mstatus;
		method mv_csrs_to_decode = mk_grp1.mv_csrs_to_decode;
		method mv_curr_priv = pack(rg_prv);
		method mv_resume_wfi = mk_grp1.mv_resume_wfi;

		//-----------------------------------------------------
		//sideband connections from grp-2 to core--------------
  `ifdef spfpu
    method ma_update_fflags = mk_grp2.ma_update_fflags;
  `endif

  	method mv_cacheenable = mk_grp2.mv_cacheenable;

  `ifdef arith_trap
    method mv_arith_excep = mk_grp2.mv_arith_excep;
  `endif

	  method mv_csr_misa_c = mk_grp2.mv_csr_misa_c;

	`ifdef pmp
    method mv_pmp_cfg = mk_grp2.mv_pmp_cfg;
    method mv_pmp_addr = mk_grp2.mv_pmp_addr;
  `endif

   //-----------------------------------------------------
   //sideband connections from grp-3 to core--------------
   	method ma_clint_mtime = mk_grp3.ma_clint_mtime;
   	method ma_incr_minstret = mk_grp3.ma_incr_minstret;
  `ifdef perfmonitors
   	method mv_mcounteren = mk_grp3.mv_mcounteren;
  `endif

  `ifdef debug
    method ma_debug_halt_request = mk_grp3.ma_debug_halt_request;
    method ma_debug_resume_request = mk_grp3.ma_debug_resume_request;
    method mv_core_is_halted = mk_grp3.mv_core_is_halted;
    method mv_step_is_set = mk_grp3.mv_step_is_set;
    method mv_step_ie = mk_grp3.mv_step_ie;
    method mv_core_debugenable = mk_grp3.mv_core_debugenable;
  `endif

  `ifdef triggers
    method mv_trigger_data1 = mk_grp3.mv_trigger_data1;
    method mv_trigger_data2 = mk_grp3.mv_trigger_data2;
    method mv_trigger_enable = mk_grp3.mv_trigger_enable;
  `endif

  	//TODO side band connections to core from grp4,5,6,7
  `ifdef perfmonitors
  	`ifdef csr_grp4
 			method ma_events_grp4 = mk_grp4.ma_events;
 		`endif

 		`ifdef csr_grp5
 			method ma_events_grp5 = mk_grp5.ma_events;
 		`endif

 		`ifdef csr_grp6
 			method ma_events_grp6 = mk_grp6.ma_events;
 		`endif

 		`ifdef csr_grp7
 			method ma_events_grp7 = mk_grp7.ma_events;
 		`endif

  	`ifdef simulate
    	method Tuple2#(Vector#(`counters_size, Bit#(XLEN)),
  		               Vector#(`counters_size, Bit#(64))) mv_counter_values;

    	`ifdef csr_grp4
    		let tuple_grp4 = mk_grp4.mv_counter_values;
    		Vector#(`counters_grp4, Bit#(XLEN)) mhpmevent_val_grp4 = tpl_1(tuple_grp4);
    		Vector#(`counters_grp4, Bit#(64)) mhpmcounter_val_grp4 = tpl_2(tuple_grp4);
    	`endif

    	`ifdef csr_grp5
    		let tuple_grp5 = mk_grp5.mv_counter_values;
    		Vector#(`counters_grp5, Bit#(XLEN)) mhpmevent_val_grp5 = tpl_1(tuple_grp5);
    		Vector#(`counters_grp5, Bit#(64)) mhpmcounter_val_grp5 = tpl_2(tuple_grp5);

    		Vector#(TAdd#(`counters_grp4,`counters_grp5),
    		        Bit#(XLEN)) mhpmevent_val_4_5 = append(mhpmevent_val_grp4, mhpmevent_val_grp5);

    	  Vector#(TAdd#(`counters_grp4,`counters_grp5),
    	          Bit#(64)) mhpmcounter_val_4_5 = append(mhpmcounter_val_grp4, mhpmcounter_val_grp5);

    	`endif

    	`ifdef csr_grp6
				let tuple_grp6 = mk_grp6.mv_counter_values;
				Vector#(`counters_grp6, Bit#(XLEN)) mhpmevent_val_grp6 = tpl_1(tuple_grp6);
				Vector#(`counters_grp6, Bit#(64)) mhpmcounter_val_grp6 = tpl_2(tuple_grp6);

				Vector#(TAdd#(`counters_grp4,TAdd#(`counters_grp5,`counters_grp6)),
				        Bit#(XLEN)) mhpmevent_val_4_5_6 = append(mhpmevent_val_4_5, mhpmevent_val_grp6);

				Vector#(TAdd#(`counters_grp4,TAdd#(`counters_grp5,`counters_grp6)),
				        Bit#(64)) mhpmcounter_val_4_5_6 = append(mhpmcounter_val_4_5,
				                                                 mhpmcounter_val_grp6);
			`endif

			`ifdef csr_grp7
				let tuple_grp7 = mk_grp7.mv_counter_values;
				Vector#(`counters_grp7, Bit#(XLEN)) mhpmevent_val_grp7 = tpl_1(tuple_grp7);
				Vector#(`counters_grp7, Bit#(64)) mhpmcounter_val_grp7 = tpl_2(tuple_grp7);

				Vector#(TAdd#(`counters_grp4, TAdd#(`counters_grp5, TAdd#(`counters_grp6,`counters_grp7))),
				        Bit#(XLEN)) mhpmevent_val_4_5_6_7 = append(mhpmevent_val_4_5_6,
				                                                   mhpmevent_val_grp7);

				Vector#(TAdd#(`counters_grp4, TAdd#(`counters_grp5, TAdd#(`counters_grp6,`counters_grp7))),
				        Bit#(64)) mhpmcounter_val_4_5_6_7 = append(mhpmcounter_val_4_5_6,
				                                                   mhpmcounter_val_grp7);
    	`endif

    	`ifdef csr_grp5
    		`ifdef csr_grp6
    			`ifdef csr_grp7
    				return tuple2(mhpmevent_val_4_5_6_7, mhpmcounter_val_4_5_6_7);
    			`else
    				return tuple2(mhpmevent_val_4_5_6, mhpmcounter_val_4_5_6);
    			`endif
    		`else
    			return tuple2(mhpmevent_val_4_5, mhpmcounter_val_4_5);
    		`endif
    	`else
    		return tuple2(mhpmevent_val_grp4, mhpmcounter_val_grp4);
    	`endif
    	endmethod
  	`endif
	`endif

  	//-----------------------------------------------------
		////////////////////////////////////////////////////////////////////////////////////////////////
  	method ActionValue#(Bit#(`vaddr)) mav_upd_on_ret `ifdef non_m_traps (Privilege_mode prv) `endif ;
  		`ifdef non_m_traps
  			`ifdef supervisor
  				if (prv == Supervisor) begin
  					rg_prv <= unpack({1'b0, mk_grp1.mv_spp});
  				end else
  			`endif
  			`ifdef usertraps
  				if (prv == User) begin
  					rg_prv <= User;
  				end else
  			`endif
  		`endif
  		begin
  			rg_prv <= unpack(mk_grp1.mv_mpp);
  		end
  		Bit#(`vaddr) lv_ret_val <- mk_grp1.mav_upd_on_ret( `ifdef non_m_traps prv `endif );
  		return lv_ret_val;
  	endmethod

    method ActionValue#(Bit#(`vaddr)) mav_upd_on_trap(Bit#(`causesize) c, Bit#(`vaddr) pc,
                                                                                Bit#(`vaddr) tval);
      Bit#(`causesize) cause = c;
      Bit#(TSub#(`causesize,1)) code = truncate(cause);
      Bit#(1) trap_type = truncateLSB(cause);
      Privilege_mode prv = Machine;
    `ifdef non_m_traps
      let medeleg = mk_grp1.mv_medeleg;
      let mideleg = mk_grp1.mv_mideleg;
      Bool delegateM = (truncate(mideleg >> code) & trap_type) == 1 ||
                       (truncate(medeleg >> code) & ~trap_type) == 1;
    `ifdef supervisor `ifdef usertraps
      let sideleg = mk_grp1.mv_sideleg;
      let sedeleg = mk_grp1.mv_sedeleg;
      Bool delegateS = (truncate(sideleg >> code) & trap_type) == 1 ||
                       (truncate(sedeleg >> code) & ~trap_type) == 1;
    `endif `endif
  `ifdef non_m_traps
    `ifdef supervisor
      if(delegateM && (pack(rg_prv) <= pack(Supervisor)) && (lv_misa_s == 1))
        prv = Supervisor;
      `ifdef usertraps
        else if(delegateM && delegateS && rg_prv == User && lv_misa_n == 1)
          prv = User;
      `endif
    `elsif usertraps
      else if(delegateM && rg_prv == User && lv_misa_n == 1)
        prv = User;
    `endif
  `endif

    `ifdef debug
      if( (cause >= {1'b1,`HaltEbreak} && cause <= {1'b1, `HaltReset} ) ||
                                                              (cause == {1'b1,`Resume_int} ) ) begin
          // TODO DEBUG update needs to happen here
        let {new_prv, x} <- mk_grp3.mav_upd_on_debugger(c, pc, tval);
        if(cause >= {1'b1,`HaltEbreak} && cause <= {1'b1, `HaltReset} )
          rg_prv <= Machine;
        else 
          rg_prv <= unpack(new_prv);
        return x;
      end else
    `endif
      begin
        if(prv == Supervisor)
          rg_prv <= Supervisor;
        else if(prv == User)
          rg_prv <= User;
        else
          rg_prv <= Machine;
        let x <- mk_grp1.mav_upd_on_trap(c, pc, tval, prv);
        return x;
      end
    endmethod
	`ifdef dtim
	  /*doc:method: */
	  method  mv_csr_dtim_base = mk_grp3.mv_csr_dtim_base;
    /*doc:method: */
    method  mv_csr_dtim_bound  = mk_grp3.mv_csr_dtim_bound;
  `endif
  `ifdef itim
    /*doc:method: */
    method mv_csr_itim_base  = mk_grp3.mv_csr_itim_base;
    /*doc:method: */
    method mv_csr_itim_bound = mk_grp3.mv_csr_itim_bound;
  `endif

  endmodule : mk_csr_daisy
endpackage : csr_daisy
