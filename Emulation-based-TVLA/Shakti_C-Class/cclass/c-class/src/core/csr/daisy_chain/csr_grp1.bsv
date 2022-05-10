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

package csr_grp1;

	//standard library imports
	import Vector :: *;
	import FIFOF :: * ;
	import DReg :: *;
  import UniqueWrappers :: * ;


	//project imports and includes
	`include "csrgrp.defines"
  `include "common_params.bsv"
	import common_types :: * ;

	interface Ifc_csr_grp1;

		// (*doc = "method : to receive the request from the core or previous node" *)
    method Action ma_core_req(CSRReq req);

    // (*doc = "method : to send response to core on a hit in this node" *)
    method CSRResponse mv_core_resp;

    // (*doc = "method : to forward the request to the next node on a miss in current node" *)
   	method ActionValue#(CSRReq) mav_fwd_req;

		//inter-group sideband connections
    (*always_ready, always_enabled*)
    // (*doc = method: sideband from other group to collect misa register"*)
    method Action ma_csr_misa(Bit#(XLEN) m); //tested

    (*always_ready, always_enabled*)
    //(*doc = "method: sideband connection to grp2 to collect frm value"*)
    method Action ma_frm(Bit#(3) frm_val);

  `ifdef perfmonitors
    method Action ma_counter_interrupts (Bit#(29) i);
  `endif

	`ifdef debug
		(*always_ready, always_enabled*)
    //(*doc = "method: sideband connection to grp3 to collect csr_dcsr value"*)
    method Action ma_csr_dcsr(Bit#(32) dcsr_val);

    (*always_ready, always_enabled*)
    //(*doc = "method: sideband connection to grp3 to collect resume_int value"*)
    method Action ma_resume_int(Bit#(1) resume_int_val);

    (*always_ready, always_enabled*)
    //(*doc = "method: sideband connection to grp3 to collect core_halted value"*)
    method Action ma_core_halted(Bit#(1) core_halted_val);

    (*always_ready, always_enabled*)
    //(*doc = "method: sideband connection to grp3 to collect halt_int value"*)
    method Action ma_halt_int(Bit#(1) halt_int_val);

	`endif
    //side band connections from core
    //(*doc = "method : sideband access from core to indicate software interrupt pending \
    //           at machine level, modifies rg-msip"*)
    method Action ma_clint_msip(Bit#(1) intrpt); //tested
    //(*doc = "method : sideband access from core to indicate timer interrupt pending \
    //           at machine level, modifies rg-mtip"*)
    method Action ma_clint_mtip(Bit#(1) intrpt); //tested
    //(*doc = "method : sideband access from core to indicate timer interrupt pending \
    //           at machine level, modifies rg-meip/rg_ext_seip/rg_ext_ueip based on \
    //           current privilege level"*)
    method Action ma_set_external_interrupt(Bit#(1) ex_i); //tested

  `ifdef supervisor
  	//(*doc = "method : sideband access from core, the method returns current value of SATP reg."*)
		method Bit#(XLEN) mv_csr_satp; //tested
	`endif
		//(*doc = "method : sideband access from core, the method returns current value of MSTATUS \
		//           register."*)
		method Bit#(XLEN) mv_csr_mstatus; //tested
		//(*doc = "method : sideband access from core, the method returns  value of collection of \
		//					 registers required for decode - stage"*)
		method CSRtoDecode mv_csrs_to_decode;

		(*always_ready, always_enabled*)
		//(*doc = "method: fetches from core the prvilege mode"*)
		method Action ma_upd_privilege (Privilege_mode prv); //tested

		//connections to top module csr_daisy.bsv //tested
		//(*doc = "method: updates registers such as mpie, mie e.t.c whenever a return is made from \
		//           trap, based on current privilege level."*)
		method ActionValue#(Bit#(`vaddr)) mav_upd_on_ret `ifdef non_m_traps (Privilege_mode prv) `endif ;

    method ActionValue#(Bit#(`vaddr)) mav_upd_on_trap(Bit#(`causesize) c, Bit#(`vaddr) pc,
                                                      Bit#(`vaddr) tval, Privilege_mode prv);
		(*always_ready, always_enabled*)
		//(*doc = "the method is internal to the entire CSR files, used by top module mk_csr_daisy, to \
		//           check the value of rg_mpp, required in method upd_on_trap at top module"*)
		method Bit#(2) mv_mpp; //tested

		/*doc:method: This method indicates if the hart should resume from a WFI*/
		method Bool mv_resume_wfi ();

	`ifdef supervisor
		(*always_ready, always_enabled*)
		//(*doc = "the method is internal to the entire CSR files, used by top module mk_csr_daisy, to \
		//           check the value of rg_spp, required in method upd_on_trap at top module"*)
		method Bit#(1) mv_spp; //tested
	`endif

  `ifdef non_m_traps
    /*doc:method: */
    method Bit#(16) mv_medeleg ();

    /*doc:method: */
    method Bit#(12) mv_mideleg ();

    `ifdef supervisor
    `ifdef usertraps
      /*doc:method: */
      method Bit#(16) mv_sedeleg ();
      /*doc:method: */
      method Bit#(12) mv_sideleg ();
    `endif
    `endif
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
  //(*doc = "func : returns and interface of a register, however includes OR-masking on its \
  //           read function by reading another register"*)
  function Reg#(Bit#(a)) extInterruptReg(Reg#(Bit#(a)) r1, Reg#(Bit#(a)) r2);
    return (interface Reg;
      method Bit#(a) _read = r1 | r2;
      method Action _write(Bit#(a) x);
        r1._write(x);
			endmethod
    endinterface);
  endfunction

  	//module declarations
	(*doc = "module : implementing read and write methods for group - 1 csrs and related side band \
	         access"*)
	(*synthesize*)
	(*mutually_exclusive="mav_upd_on_ret, ma_core_req"*)
	module mk_csr_grp1 (Ifc_csr_grp1);

    // common registers

  `ifdef csr_low_latency
  	(* doc = "wire : holds the response of this group for a csr operation request, \
  					  for one cycle, wire is used for low latency"*)
    Wire#(CSRResponse) rg_resp_to_core <- mkDWire(CSRResponse{hit:False, data:0});
	`else
		(* doc = "reg : register to hold the response of this group for a csr operation request"*)
		Reg#(CSRResponse) rg_resp_to_core <- mkDReg(CSRResponse{hit:False, data:0});
	`endif
    (* doc = "fifo : fifo to forward the core - request to the next group on a miss in the \
                     current group" *)
    FIFOF#(CSRReq) ff_fwd_request <- mkLFIFOF();

    (* doc = "wire : to hold the current misa value from the other group MISA-s,u,n,c utilised"*)
    Wire#(Bit#(XLEN)) wr_csr_misa <- mkWire();
    Bit#(1) lv_misa_s = wr_csr_misa[18];
    Bit#(1) lv_misa_u = wr_csr_misa[20];
    Bit#(1) lv_misa_n = wr_csr_misa[13];
    Bit#(1) lv_misa_c = wr_csr_misa[2];

 		(* doc = "wire : to hold the current frm value from the group-2, \
 		                 used in method mv_csrs_to_decode" *)
 		Wire#(Bit#(3)) wr_frm <- mkWire();

 	`ifdef debug
 		(* doc = "wire : to hold the current csr_dcsr value from group-3, \
 		                 used in method mv_csrs_to_decode"*)
 		Wire#(Bit#(32)) wr_csr_dcsr <- mkWire();
 		(*doc = "wire : to hold the current resume_int value from group-3, used in csr_mip formation"*)
 		Wire#(Bit#(1)) wr_resume_int <- mkWire();
 		(*doc = "wire : to hold the current core_halted value from group-3, used in csr_mip formation"*)
 		Wire#(Bit#(1)) wr_core_halted <- mkWire();
 		(*doc = "wire : to hold the current halt_int value from group-3, used in csr_mip formation" *)
		Wire#(Bit#(1)) wr_halt_int <- mkWire();
 	`endif

		//(*doc = maximum possible index value *)
		let maxIndex = valueOf(XLEN);
		let paddr = valueOf(`paddr);
		let vaddr = valueOf(`vaddr);

    //(*doc = note: mkUniqueWrapper is used to avoid multiple instantiation of same function"*)
    let csr_op <- mkUniqueWrapper3(fn_csr_op);

		(*doc = "wire : stores the information on curent privilege level,\
		                updated by ma_upd_privilege, read in mv_csrs_to_decode, \
		                ma_set_external_interrupt"*)
	  Wire#(Privilege_mode) wr_prv <- mkWire();
		//////////////////////////////////////machine type registers////////////////////////////////////

    //MSTATUS fields, SSTATUS fields
    (*doc = "reg : mprv modifie s the privilege level at which loads and stores execute, "*)
    Reg#(Bit#(1)) rg_mprv <- mkReg(0);
  `ifdef supervisor
  	(*doc = "reg : Trap-SRET, if rg_tsr = 1, SRET instruction raises exception"*)
    Reg#(Bit#(1)) rg_tsr	  <-mkReg(0);
    (*doc = "reg : Time-out Wait, bit for supporting interception by WFI instruction"*)
    Reg#(Bit#(1)) rg_tw	  <-mkReg(0);
    (*doc = "reg : Trap virtual Memory, bit for supporting interception of supervisor \
             virtual memory management operations"*)
    Reg#(Bit#(1)) rg_tvm	  <-mkReg(0);
    (*doc = "reg : Make eXecutable Readable, modifies the privilege with which loads access \
             vitual memory"*)
    Reg#(Bit#(1)) rg_mxr   <-mkReg(0);//
    (*doc = "reg : Supervisor User Memory, modifies privilege with which S-mode loads and \
    					stores access virtual memory"*)
    Reg#(Bit#(1)) rg_sum   <-mkReg(0);//
  `else
  	Bit#(1) rg_tsr	  = 0; // 0 if supervisor not supported
    Bit#(1) rg_tw	 	= 0; // 0 if supervisor not supported
    Bit#(1) rg_tvm	  = 0; // 0 if supervisor not supported
    Bit#(1) rg_mxr   = 0; // 0 if supervisor not supported
    Bit#(1) rg_sum   = 0; // 0 if supervisor not supported
  `endif

    // no standard extensions so always hardwired to 0
    Bit#(2) xs	 	= 0;

    // The FS field should only exist when floating point is enabled. But this is not the case
    // for spike. So currently we have it as a compulsory field for mstatus.
    // TODO : figure out how FS should be update by the implementation
    (*doc = "reg : Floating Status, describes the status of floating point unit"*)
    Reg#(Bit#(2)) rg_fs <- mkReg(0);
    //(*doc = "reg : derives value form FS and XS"*)
		Reg#(Bit#(1)) rg_sd = readOnlyReg(pack((xs == 2'b11) || (rg_fs == 2'b11)));

  	Bit#(2) sxl = fromInteger(valueOf(TDiv#(XLEN, 32)));
    Bit#(2) uxl = fromInteger(valueOf(TDiv#(XLEN, 32)));

		(*doc = "reg : Machine Previous Privilege, holds previous privilege mode prior to the TRAP"*)
    Reg#(Bit#(2)) rg_mpp	<- mkReg(2'b0);
    Bit#(2) hpp	= 0;

  `ifdef supervisor
  	(*doc = "reg : Supervisor Previous Privilege, holds previous privilege mode prior to the TRAP"*)
    Reg#(Bit#(1)) rg_spp	<- mkReg(0);
  `else
    Bit#(1) rg_spp	= 0;
  `endif
    (*doc = "reg : Machine Previous Interrupt-Enable, holds previous interrupt-enable bit active \
    				 prior to the TRAP"*)
    Reg#(Bit#(1)) rg_mpie <- mkReg(0);
    Bit#(1) hpie = 0;
  `ifdef supervisor
  	(*doc = "reg : Supervisor Previous Interrupt-Enable, holds previous interrupt-enable bit active\
    				 prior to the TRAP"*)
    Reg#(Bit#(1)) rg_spie <- mkReg(0);
  `else
    Bit#(1) rg_spie = 0;
  `endif

  `ifdef usertraps
  	(*doc = "reg : User Previous Interrupt-Enable, holds previous interrupt-enable bit active \
    				 prior to the TRAP"*)
  	Reg#(Bit#(1)) rg_upie <- mkReg(0);
	`else
		Bit#(1) rg_upie = 0;
	`endif
		(*doc = "reg : Machine Interrupt Enable"*)
		Reg#(Bit#(1)) rg_mie	<- mkReg(`ifdef openocd 1 `else 0 `endif ); // TODO figure out debug on reset.
    Bit#(1) hie = 0;

  `ifdef supervisor
  	(*doc = "reg : Supervisor Interrupt Enable"*)
    Reg#(Bit#(1)) rg_sie <- mkReg(0);
  `else
    Bit#(1) rg_sie = 0;
  `endif

	`ifdef usertraps
		(*doc = "reg : User Interrupt Enable"*)
  	Reg#(Bit#(1)) rg_uie <- mkReg(0);
	`else
		Bit#(1) rg_uie = 0;
	`endif

		//MEDELEG AND MIDELEG fields
 	`ifdef non_m_traps
 		(*doc = "reg : Machine Interrupt delegation register"*)
    Reg#(Bit#(12)) rg_mideleg <- mkReg(0);
    (*doc = "reg : part of Machine Exception delegation register"*)
    Reg#(Bit#(10)) rg_medeleg_l10 <- mkReg(0); // cause 0 - 19
    (*doc = "reg : part of Machine Exception delegation register"*)
    Reg#(Bit#(2)) rg_medeleg_m2 <- mkReg(0);  // cause 12 - 13
    (*doc = "reg : part of Machine Exception delegation register"*)
    Reg#(Bit#(1)) rg_medeleg_u1 <- mkReg(0);  // cause 15
  `else
    Bit#(12) rg_mideleg = 0;
  `endif

		//MIE fields
	`ifdef perfmonitors
	  /*doc:reg: enable interrupts on counters*/
  	Reg#(Bit#(1)) rg_mcounterie <- mkReg(0);
  `else
    Bit#(1) rg_mcounterie = 0;
  `endif
		(*doc = "reg : Machine External Interrupt Enable register"*)
    Reg#(Bit#(1)) rg_meie <- mkReg(0);
    Bit#(1) heie = 0;
  `ifdef supervisor
  	(*doc = "reg : Supervisor External Interrupt Enable register"*)
    Reg#(Bit#(1)) rg_seie <- mkReg(0);
  `else
    Bit#(1) rg_seie = 0;
  `endif
	`ifdef usertraps
		(*doc = "reg : User External Interrupt Enable register"*)
    Reg#(Bit#(1)) rg_ueie <- mkReg(0);
	`else
		Bit#(1) rg_ueie=0;
	`endif
		(*doc = "reg : Machine Timer Interrupt Enable register"*)
    Reg#(Bit#(1)) rg_mtie <- mkReg(0);
    Bit#(1) htie = 0;
  `ifdef supervisor
	  (*doc = "reg : Supervisor Timer Interrupt Enable register"*)
    Reg#(Bit#(1)) rg_stie <- mkReg(0);
  `else
    Bit#(1) rg_stie = 0;
  `endif
	`ifdef usertraps
		(*doc = "reg : User Timer Interrupt Enable register"*)
    Reg#(Bit#(1)) rg_utie <- mkReg(0);
	`else
		Bit#(1) rg_utie=0;
	`endif
		(*doc = "reg : Machine Software Interrupt Enable register"*)
    Reg#(Bit#(1)) rg_msie <- mkReg(0);
    Bit#(1) hsie = 0;
  `ifdef supervisor
  	(*doc = "reg : Supervisor Software Interrupt Enable register"*)
    Reg#(Bit#(1)) rg_ssie <- mkReg(0);
  `else
    Bit#(1) rg_ssie = 0;
  `endif

	`ifdef usertraps
		(*doc = "reg : User Software Interrupt Enable register"*)
    Reg#(Bit#(1)) rg_usie <-  mkReg(0);
	`else
		Bit#(1) rg_usie=0;
	`endif

		//MIP fields
		(*doc = "reg : Machine External Interrupt Pending register"*)
		Reg#(Bit#(1)) rg_meip <- mkReg(0);
    Bit#(1) heip = 0;
  `ifdef supervisor
  	(*doc = "reg : Supervisor External Interrupt Pending register, may be written over by software \
  	 				 in M-mode"*)
    Reg#(Bit#(1)) rg_soft_seip <- mkReg(0);
    (*doc = "reg : Supervisor External Interrupt Pending register, written over by external \
    				 factors"*)
    Reg#(Bit#(1)) rg_ext_seip <- mkReg(0);
    //(*doc = "reg : Supervisor External Interrupt Pending register"*)
    Reg#(Bit#(1)) rg_seip = extInterruptReg(rg_soft_seip, rg_ext_seip);
  `else
    Bit#(1) rg_seip = 0;
  `endif
  `ifdef usertraps
  	(*doc = "reg : User External Interrupt Pending register, may be written over by software \
  	 				 in M-mode/S-mode"*)
    Reg#(Bit#(1)) rg_soft_ueip <- mkReg(0);
    (*doc = "reg : User External Interrupt Pending register, written over by external \
    				 factors"*)
    Reg#(Bit#(1)) rg_ext_ueip <- mkReg(0);
    //(*doc = "reg : User External Interrupt Pending register"*)
    Reg#(Bit#(1)) rg_ueip = extInterruptReg(rg_soft_ueip, rg_ext_ueip);
    (*doc = "reg : User Timer Interrupt Pending register"*)
    Reg#(Bit#(1)) rg_utip <- mkReg(0);
    (*doc = "reg : User Software Interrupt Pending register"*)
    Reg#(Bit#(1)) rg_usip <- mkReg(0);
  `else
    Bit#(1) rg_ueip = 0;
    Bit#(1) rg_utip = 0;
    Bit#(1) rg_usip = 0;
  `endif
  	(*doc = "reg : Machine Timer Interrupt Pending register"*)
    Reg#(Bit#(1)) rg_mtip <- mkReg(0);
    Bit#(1) htip = 0;
  `ifdef supervisor
	  (*doc = "reg : Supervisor Timer Interrupt Pending register"*)
    Reg#(Bit#(1)) rg_stip <- mkReg(0);
  `else
    Bit#(1) rg_stip = 0;
  `endif
  	(*doc = "reg : Machine Software Interrupt Pending register"*)
	 	Reg#(Bit#(1)) rg_msip <- mkReg(0);
    Bit#(1) hsip = 0;
  `ifdef supervisor
  	(*doc = "reg : Supervisor Software Interrupt Pending register"*)
    Reg#(Bit#(1)) rg_ssip <- mkReg(0);
  `else
    Bit#(1) rg_ssip = 0;
  `endif

		//MTVEC trap vector fields
		(*doc = "reg : Mode register encodes the trap-handling-pc-address whether Direct/Vectored"*)
	  Reg#(Bit#(2)) rg_mode <- mkReg(0); //0 if pc to base or 1 if pc to base + 4xcause
	  (*doc = "reg : Machine Trap VECtor, holds the Base address for changing pc"*)
	  Reg#(Bit#(TSub#(`vaddr, 2))) rg_mtvec <- mkReg(0);

	  //MEPC fields
	  (*doc = "reg : Machine Exception Program Counter,can be used in holding the address of the \
	  				 instruction interrupted upon Trap"*)
	 	Reg#(Bit#(TSub#(`vaddr, 1))) rg_mepc <- mkReg(0);

	 	//MCAUSE fields
	 	(*doc = "reg : is set whenever the trap is caused by an interrupt, part of MCAUSE register"*)
	 	Reg#(Bit#(1)) rg_minterrupt <- mkReg(0);
	 	(*doc = "reg : Machine Cause, holds the exception code for identifying last exception"*)
	  Reg#(Bit#(TSub#(`causesize,1))) rg_mcause   <- mkReg(0);

	  //MTVAL fields
	  (*doc = "reg : Machine Trap VALue, may be written by faulting virtual address/first XLEN/ILEN \
	  				 bitsof faulting instruction"*)
	  Reg#(Bit#(XLEN)) rg_mtval <- mkReg(0);

	 	////////////////////////////////////////////////////////////////////////////////////////////////
	 	///////////////////////////////////supervisor type registers////////////////////////////////////

	`ifdef supervisor
	// SEDELEG and SIDELEG registers
	`ifdef usertraps
		(*doc = "reg : Supervisor Interrupt delegation register"*)
    Reg#(Bit#(12)) rg_sideleg <- mkReg(0);
    (*doc = "reg : part of Supervisor Exception delegation register"*)
    Reg#(Bit#(9)) rg_sedeleg_l9 <- mkReg(0); // cause 0 - 8
    (*doc = "reg : part of Supervisor Exception delegation register"*)
    Reg#(Bit#(2)) rg_sedeleg_m2 <- mkReg(0);  // cause 12 - 13
    (*doc = "reg : part of Supervisor Exception delegation register"*)
    Reg#(Bit#(1)) rg_sedeleg_u1 <- mkReg(0);  // cause 15
  `else
    Bit#(12) rg_sideleg = 0;
    Bit#(9) rg_sedeleg_l9 = 0;
    Bit#(2) rg_sedeleg_m2 = 0;
    Bit#(1) rg_sedeleg_u1 = 0;
  `endif

  	//STVEC trap vector fields
  	(*doc = "reg : Supervisor Mode register encodes the trap-handling-pc-address whether \
  	         Direct/Vectored"*)
  	Reg#(Bit#(2)) rg_smode <- mkReg(0); //0 if pc to base or 1 if pc to base + 4xcause
  	(*doc = "reg : Supervisor Trap VECtor, holds the Base address for changing pc"*)
	  Reg#(Bit#(TSub#(`vaddr, 2))) rg_stvec <- mkReg(0);

	  // SEPC register
	  (*doc = "reg : Supervisor Exception Program Counter, can be used in holding the address of the \
	  				 instruction interrupted upon Trap"*)
	  Reg#(Bit#(TSub#(`vaddr, 1))) rg_sepc <- mkReg(0);

	  // SCAUSE register
	  (*doc = "reg : is set whenever the trap is caused by an interrupt, part of SCAUSE register"*)
    Reg#(Bit#(1)) rg_sinterrupt <- mkReg(0);
    (*doc = "reg : Supervisor Cause, holds the exception code for identifying last exception in"*)
	  Reg#(Bit#(TSub#(`causesize,1))) rg_scause  <- mkReg(0);

	  // STVAL
	  (*doc = "reg : Supervisor Trap VALue, may be written by faulting virtual address/first \
	   				 XLEN/ILEN bits of faulting instruction"*)
	  Reg#(Bit#(`vaddr)) rg_stval <- mkReg(0);

	  //SATP
	  (*doc = "reg : Address Space Identifier in SATP register, used for facilitating address \
	           translation fences."*)
	  Reg#(Bit#(`asidwidth)) rg_satp_asid <- mkReg(0);
	`ifdef RV64
		(*doc = "reg : holds Physical Page Number of the root page table, part of SATP register"*)
    Reg#(Bit#(44)) rg_satp_ppn <- mkReg(0);
    (*doc = "reg : the MODE field selects the S-mode address translation scheme"*)
    Reg#(Bit#(4)) rg_satp_mode <- mkReg(0);
  `else
 	 	(*doc = "reg : holds Physical Page Number of the root page table, part of SATP register"*)
    Reg#(Bit#(22)) rg_satp_ppn <- mkReg(0);
    (*doc = "reg : the MODE field selects the S-mode address translation scheme"*)
    Reg#(Bit#(1)) rg_satp_mode <- mkReg(0);
  `endif

`endif

	 	////////////////////////////////////////////////////////////////////////////////////////////////
	 	/////////////////////////////////////user type registers////////////////////////////////////////
	`ifdef usertraps

		//UTVEC
		(*doc = "reg : User Trap VECtor, holds the Base address for changing pc, part of UTVEC reg."*)
		Reg#(Bit#(TSub#(`vaddr, 2))) rg_utvec <- mkReg(0);
		(*doc = "reg : User Mode register encodes the trap-handling-pc-address whether \
  	         Direct/Vectored. part of UTVEC reg."*)
		Reg#(Bit#(2)) rg_umode <- mkReg(0); //0 if pc to base or 1 if pc to base + 4xcause

		//UEPC
		(*doc = "reg : User Exception Program Counter, can be used in holding the address of the \
	  				 instruction interrupted upon Trap"*)
		Reg#(Bit#(TSub#(`vaddr, 1))) rg_uepc <- mkReg(0);

		//UCAUSE
		(*doc = "reg : is set whenever the trap is caused by an interrupt, part of UCAUSE register"*)
		Reg#(Bit#(1)) rg_uinterrupt <- mkReg(0);
		(*doc = "reg : User Cause, holds the exception code for identifying last exception in"*)
  	Reg#(Bit#(TSub#(`causesize,1))) rg_ucause   <- mkReg(0);

  	//UTVAL
  	(*doc = "reg : User Trap VALue, may be written by faulting virtual address/first \
	   				 XLEN/ILEN bits of faulting instruction"*)
  	Reg#(Bit#(XLEN))rg_utval <- mkReg(0);
	`endif
		////////////////////////////////////////////////////////////////////////////////////////////////
  `ifdef perfmonitors
    Wire#(Bit#(29)) wr_counter_interrupts <- mkDWire(0);
  `endif

		//csr_to_decode method's variables
		let lv_csr_mip= {`ifdef debug wr_resume_int&wr_core_halted, //side band connections to grp3
										wr_halt_int&~wr_core_halted, `endif       //side band connections to grp3
                    `ifdef perfmonitors |wr_counter_interrupts, `else 1'b0, `endif 4'd0, 
                    rg_meip, heip, lv_misa_s & rg_seip, lv_misa_n & rg_ueip, rg_mtip, htip,
                    lv_misa_s & rg_stip, lv_misa_n & rg_utip, rg_msip, hsip,
                    lv_misa_s & rg_ssip, lv_misa_n & rg_usip};

    let lv_csr_mie= { rg_mcounterie, 4'd0,
                      rg_meie, heie, rg_seie, rg_ueie, rg_mtie, htie, rg_stie, rg_utie, rg_msie,
                       hsie, rg_ssie, rg_usie};
  `ifdef supervisor
    Bit#(12) lv_csr_sip = {'d0, lv_misa_s & rg_seip, lv_misa_n & rg_ueip, 2'd0, rg_stip & lv_misa_s,
                        lv_misa_n & rg_utip,2'd0, lv_misa_s & rg_ssip, lv_misa_n & rg_usip};

    Bit#(12) lv_csr_sie = {'d0, rg_seie, lv_misa_n & rg_ueie, 2'd0, rg_stie, lv_misa_n & rg_utie,
    											 2'd0, rg_ssie, lv_misa_n & rg_usie};
  `endif

  `ifdef usertraps
    Bit#(12) lv_csr_uip = {'d0, lv_misa_n & rg_ueip, 3'd0, lv_misa_n & rg_utip, 3'd0,
    										lv_misa_n & rg_usip};
    Bit#(12) lv_csr_uie = {'d0, lv_misa_n & rg_ueie, 3'd0, lv_misa_n & rg_utie, 3'd0,
    										lv_misa_n & rg_usie};
  `endif
	//////////////////////////////////////////////////////////////////////////////////////////////////

		//method definitions
		//performing csr write
		method Action ma_core_req(CSRReq req);

			Bit#(2) op = req.funct3;

 			case (req.csr_address)

 				//MACHINE TYPE CSRS
				`MSTATUS : begin
					//read the previous value
          `ifdef RV64
              rg_resp_to_core <= CSRResponse {hit : True, data: {rg_sd, 27'd0, sxl, uxl, 9'd0,
                                                                rg_tsr, rg_tw, rg_tvm, rg_mxr,
                                                                rg_sum, rg_mprv, xs, rg_fs,
                                                                rg_mpp, hpp, rg_spp, rg_mpie, hpie,
                                                                rg_spie, rg_upie, rg_mie, hie,
                                                                rg_sie, rg_uie}};

              Bit#(XLEN) readdata = {rg_sd, 27'd0, sxl, uxl, 9'd0, rg_tsr, rg_tw, rg_tvm, rg_mxr,
                                     rg_sum, rg_mprv, xs,rg_fs, rg_mpp, hpp, rg_spp, rg_mpie, hpie,
                                     rg_spie, rg_upie, rg_mie, hie, rg_sie, rg_uie};
          `else
              rg_resp_to_core <= CSRResponse{ hit : True, data : {'d0, rg_sd, 8'd0, rg_tsr, rg_tw,
                                                                  rg_tvm, rg_mxr, rg_sum, rg_mprv,
                                                                  xs, rg_fs, rg_mpp, hpp,
                                                                  rg_spp, rg_mpie, hpie, rg_spie,
                                                                  rg_upie, rg_mie, hie, rg_sie,
                                                                  rg_uie}};

              Bit#(XLEN) readdata = {'d0, rg_sd, 8'd0, rg_tsr, rg_tw, rg_tvm, rg_mxr, rg_sum,
              											 rg_mprv, xs, rg_fs, rg_mpp, hpp, rg_spp, rg_mpie, hpie,
              											 rg_spie, rg_upie, rg_mie, hie, rg_sie, rg_uie};
          `endif

   				//form the new value to be written
					let word <- csr_op.func(req.writedata, readdata, op);

					//write to the registers
				`ifdef usertraps
          rg_uie <= word[0];
          rg_upie <= word[4];
				`endif
          rg_mie <= word[3];
          rg_mpie <= word[7];
          if( word[12 : 11] == 3 || (lv_misa_s == 1 && word[12 : 11] == 1) ||
                                    (lv_misa_u == 1 && word[12 : 11] == 0))
          rg_mpp <= word[12 : 11];
          rg_mprv <= word[17];
          rg_fs <= word[14 : 13];
        `ifdef supervisor
          rg_sie <= word[1];
          rg_spie <= word[5];
          rg_spp <= word[8];
          rg_sum <= word[18];
          rg_mxr <= word[19];
          rg_tvm <= word[20];
          rg_tw <= word[21];
          rg_tsr <= word[22];
        `endif
				end

			`ifdef non_m_traps
        `MEDELEG : begin
					//read previous value
					rg_resp_to_core <= CSRResponse{ hit : True, data : {'d0, rg_medeleg_u1, 1'd0,
					                                                    rg_medeleg_m2, 2'd0, rg_medeleg_l10}};
					Bit#(XLEN) readdata = {'d0, rg_medeleg_u1, 1'd0, rg_medeleg_m2, 2'd0, rg_medeleg_l10};

					//form the new value to be written
					let word <- csr_op.func(req.writedata, readdata, op);

					//write to the registers
					rg_medeleg_u1 <= word[15];
          rg_medeleg_m2 <= word[13 : 12];
          rg_medeleg_l10 <= word[9 : 0];
         end

        `MIDELEG : begin
	        //read previous value
        	rg_resp_to_core <= CSRResponse{ hit : True, data : {'d0, rg_mideleg}};
					Bit#(XLEN) readdata = {'d0, rg_mideleg};

					//form the new value to be written and write
					let word <- csr_op.func(req.writedata, readdata, op);
					rg_mideleg <= truncate(word);
        end
      `endif

        `MIE : begin
        	//read previous value
        	rg_resp_to_core <= CSRResponse{ hit : True, data : {'d0, rg_mcounterie, rg_meie, heie, rg_seie,
        	                                                    lv_misa_n & rg_ueie, rg_mtie, htie,
        	                                                    rg_stie, lv_misa_n & rg_utie, rg_msie,
        	                                                    hsie, rg_ssie, lv_misa_n & rg_usie}};
					Bit#(XLEN) readdata = {'d0, rg_mcounterie, rg_meie, heie, rg_seie, lv_misa_n & rg_ueie, rg_mtie, htie,
					                       rg_stie, lv_misa_n & rg_utie, rg_msie, hsie, rg_ssie,
					                       lv_misa_n & rg_usie};

					//form the new value
					let word <- csr_op.func(req.writedata,readdata,op);

					//write to the registers
					rg_msie <= word[3];
          rg_mtie <= word[7];
          rg_meie <= word[11];
        `ifdef perfmonitors
          rg_mcounterie <= word[16];
        `endif
				`ifdef usertraps
          rg_ueie <= word[8];
          rg_usie <= word[0];
          rg_utie <= word[4];
				`endif
        `ifdef supervisor
          rg_seie <= word[9];
          rg_ssie <= word[1];
          rg_stie <= word[5];
        `endif
				end

        `MIP : begin
        	//read previous value
        	rg_resp_to_core <= CSRResponse{ hit : True, data : { 'd0, 
        	                                `ifdef perfmonitors |wr_counter_interrupts, `endif 
        	                                                    4'd0, rg_meip, heip,
        																											lv_misa_s & rg_seip,
        	                                                    lv_misa_n & rg_ueip, rg_mtip, htip,
        	                                                    lv_misa_s & rg_stip,
        	                                                    lv_misa_n & rg_utip,
        	                                                    rg_msip, hsip, lv_misa_s & rg_ssip,
        	                                                    lv_misa_n & rg_usip}};

        	Bit#(XLEN) readdata = {'d0, rg_meip, heip, lv_misa_s & rg_seip, lv_misa_n & rg_ueip,
        																		rg_mtip, htip, lv_misa_s & rg_stip, lv_misa_n & rg_utip,
        																		rg_msip, hsip, lv_misa_s & rg_ssip,lv_misa_n & rg_usip};

        	//form the new value to be written and write
        	let word <- csr_op.func(req.writedata,readdata,op);

				`ifdef usertraps
          if(lv_misa_n == 1) begin
          	rg_usip <= word[0];
            rg_utip <= word[4];
            rg_soft_ueip <= word[8];
          end
        `endif
        `ifdef supervisor
          if(lv_misa_s == 1)begin
          	rg_ssip <= word[1];
            rg_stip <= word[5];
            rg_soft_seip <= word[9];
          end
        `endif
        end

        `MTVEC : begin
        	//read previous value
        	rg_resp_to_core <= CSRResponse{ hit : True, data : signExtend({rg_mtvec, rg_mode})};
        	Bit#(XLEN) readdata = (signExtend({rg_mtvec, rg_mode}));

        	//form the new value to be written and write
        	let word <- csr_op.func(req.writedata,readdata,op);

        	rg_mtvec <= word[paddr - 1:2];
          if (word[1 : 0]<2) begin
            rg_mode <= word[1 : 0];
          end

        end

        `MEPC : begin
        	//read previous value
        	rg_resp_to_core <= CSRResponse{ hit : True, data : signExtend({rg_mepc, 1'b0})};
        	Bit#(XLEN) readdata = signExtend({rg_mepc, 1'b0});

        	//form the new value to be written and write
        	let word <- csr_op.func(req.writedata,readdata,op);

        	word = word>>1;
        	rg_mepc <= truncate(word);
        end

        `MCAUSE : begin
        	//read previous value
        	rg_resp_to_core <= CSRResponse{ hit : True, data : {rg_minterrupt, 'd0, rg_mcause}};
        	Bit#(XLEN) readdata = ({rg_minterrupt, 'd0, rg_mcause});
        	//form the new value to be written and write
        	let word <- csr_op.func(req.writedata,readdata,op);

        	rg_minterrupt <= word[maxIndex - 1];
          rg_mcause <= truncate(word);
        end

        `MTVAL : begin
        	//read previous value
        	rg_resp_to_core <= CSRResponse{ hit : True, data : signExtend(rg_mtval)};
        	Bit#(XLEN) readdata = (signExtend(rg_mtval));
        	//form the new value to be written and write
        	let word <- csr_op.func(req.writedata,readdata,op);

        	rg_mtval <= truncate(word);
        end

        //SUPERVISOR CSRS
      `ifdef supervisor
        `SSTATUS : begin

        	//read previous value
        `ifdef RV64
          rg_resp_to_core <= CSRResponse{ hit : True, data : {rg_sd, 29'd0, uxl, 12'd0, rg_mxr,
                                                              rg_sum, 1'd0, xs, rg_fs, 2'd0, 2'd0,
                                                              rg_spp, 1'd0, 1'd0,
                                                              rg_spie, rg_upie, 1'd0, 1'd0, rg_sie,
                                                              rg_uie}};

          Bit#(XLEN) readdata = ({rg_sd, 29'd0, uxl, 12'd0, rg_mxr, rg_sum, 1'd0, xs, rg_fs, 2'd0,
                                  2'd0, rg_spp, 1'd0, 1'd0, rg_spie, rg_upie, 1'd0, 1'd0, rg_sie,
                                  rg_uie});
        `else
          rg_resp_to_core <= CSRResponse{ hit : True, data : {'d0, rg_sd, 11'd0, rg_mxr, rg_sum,
             																									1'd0, xs, rg_fs, 2'd0, 2'd0, rg_spp,
             																									rg_mpie, 1'd0, rg_spie, rg_upie, 1'd0,
             																									1'd0, rg_sie, rg_uie}};

					Bit#(XLEN) readdata = ({'d0, rg_sd, 11'd0, rg_mxr, rg_sum, 1'd0, xs, rg_fs, 2'd0, 2'd0,
																	rg_spp, rg_mpie, 1'd0, rg_spie, rg_upie, 1'd0, 1'd0, rg_sie,
																	rg_uie});
        `endif
        	//form the new value to be written and write
        	let word <- csr_op.func(req.writedata,readdata,op);

        `ifdef usertraps
          rg_uie <= word[0];
          rg_upie <= word[4];
        `endif
          rg_fs <= word[14 : 13];
          rg_sie <= word[1];
          rg_spie <= word[5];
          rg_spp <= word[8];
          rg_sum <= word[18];
          rg_mxr <= word[19];
          rg_tvm <= word[20];
          rg_tw <= word[21];
          rg_tsr <= word[22];
        end

			`ifdef usertraps
				`SEDELEG : begin
				  //read previous value
        	rg_resp_to_core <= CSRResponse{ hit : True, data : {'d0, rg_sedeleg_u1, 1'd0,
        	                                                    rg_sedeleg_m2, 3'd0, rg_sedeleg_l9}};

					Bit#(XLEN) readdata = ({'d0, rg_sedeleg_u1, 1'd0, rg_sedeleg_m2, 3'd0, rg_sedeleg_l9});

        	//form the new value to be written and write
        	let word <- csr_op.func(req.writedata,readdata,op);

        	rg_sedeleg_u1 <= word[15];
          rg_sedeleg_m2 <= word[13 : 12];
          rg_sedeleg_l9 <= word[8 : 0];
				end

				`SIDELEG :	begin
					//read previous value
        	rg_resp_to_core <= CSRResponse{ hit : True, data : {'d0, rg_sideleg}};
        	Bit#(XLEN) readdata = {'d0, rg_sideleg};

        	//form the new value to be written and write
        	let word <- csr_op.func(req.writedata,readdata,op);
        	rg_sideleg <= truncate(word);
				end
			`endif

				`SIE : begin
					//read previous value
        	rg_resp_to_core <= CSRResponse{ hit : True, data : {'d0, rg_seie, lv_misa_n & rg_ueie,
        																											2'd0, rg_stie, lv_misa_n & rg_utie,
        																											2'd0, rg_ssie, lv_misa_n & rg_usie}};

        	Bit#(XLEN) readdata = {'d0, rg_seie, lv_misa_n & rg_ueie, 2'd0, rg_stie,
        													lv_misa_n & rg_utie, 2'd0, rg_ssie, lv_misa_n & rg_usie};

        	//form the new value to be written and write
        	let word <- csr_op.func(req.writedata,readdata,op);

        `ifdef usertraps
          rg_ueie <= word[8];
          rg_usie <= word[0];
          rg_utie <= word[4];
        `endif

          rg_seie <= word[9];
          rg_ssie <= word[1];
          rg_stie <= word[5];
				end

				`SIP : begin
					//read previous value
        	rg_resp_to_core <= CSRResponse{ hit : True, data : {'d0, lv_misa_s & rg_seip,
        	                                                    lv_misa_n & rg_ueip, 2'd0,
        	                                                    rg_stip & lv_misa_s,
        	                                                    lv_misa_n & rg_utip,
        	                                                    2'd0, lv_misa_s & rg_ssip,
        	                                                    lv_misa_n & rg_usip}};

        	Bit#(XLEN) readdata = {'d0, lv_misa_s & rg_seip, lv_misa_n & rg_ueip, 2'd0,
        												rg_stip & lv_misa_s, lv_misa_n & rg_utip, 2'd0, lv_misa_s & rg_ssip,
                                lv_misa_n & rg_usip};

        	//form the new value to be written and write
        	let word <- csr_op.func(req.writedata,readdata,op);

        	if(lv_misa_n == 1)begin
          `ifdef usertraps
          	rg_usip <= word[0];
            rg_soft_ueip <= word[8];
          `endif
          end
          if(lv_misa_s == 1) begin
          	rg_ssip <= word[1];
          end
				end

				`STVEC :	begin
					//read previous value
        	rg_resp_to_core <= CSRResponse{ hit : True, data : signExtend({rg_stvec, rg_smode})};
        	Bit#(XLEN) readdata = signExtend({rg_stvec, rg_smode});

        	//form the new value to be written and write
        	let word <- csr_op.func(req.writedata,readdata,op);
        	rg_stvec <= word[vaddr - 1:2];
          if(word[1 : 0]<2) begin
            rg_smode <= word[1 : 0];
          end
				end

				`SEPC : begin
					//read previous value
        	rg_resp_to_core <= CSRResponse{ hit : True, data : signExtend({rg_sepc, 1'b0})};
        	Bit#(XLEN) readdata = signExtend({rg_sepc, 1'b0});

        	//form the new value to be written and write
        	let word <- csr_op.func(req.writedata,readdata,op);
        	word = word>>1;
        	rg_sepc <= truncate(word);

				end

				`SCAUSE : begin
					//read previous value
        	rg_resp_to_core <= CSRResponse{ hit : True, data : {rg_sinterrupt, 'd0, rg_scause}};
        	Bit#(XLEN) readdata = {rg_sinterrupt, 'd0, rg_scause};

        	//form the new value to be written and write
        	let word <- csr_op.func(req.writedata,readdata,op);
        	rg_scause <= truncate(word);
          rg_sinterrupt <= word[maxIndex - 1];
				end

				`STVAL : begin
					//read previous value
        	rg_resp_to_core <= CSRResponse{ hit : True, data : signExtend(rg_stval)};
        	Bit#(XLEN) readdata = signExtend(rg_stval);

        	//form the new value to be written and write
        	let word <- csr_op.func(req.writedata,readdata,op);
        	rg_stval <= truncate(word);
				end

				`SATP : begin
					//read previous value
        	rg_resp_to_core <= CSRResponse{ hit : True, data : {rg_satp_mode,'d0, rg_satp_asid,
        	                                                    rg_satp_ppn}};
        	Bit#(XLEN) readdata = {rg_satp_mode,'d0, rg_satp_asid, rg_satp_ppn};

        	//form the new value to be written and write
        	let word <- csr_op.func(req.writedata,readdata,op);

        `ifdef RV64
          if(word[63 : 60] == 0 || word[63 : 60] == 8)begin // transparent or sv39
          	rg_satp_mode <= word[63 : 60];
            rg_satp_ppn <= truncate(word);
            rg_satp_asid <= truncate(word[59 : 44]);
          end
        `else
          rg_satp_mode <= word[31];
          rg_satp_ppn <= truncate(word);
          rg_satp_asid <= truncate(word[30 : 22]);
       	`endif
				end

      `endif

        //USER CSRS
			`ifdef usertraps
        `USTATUS : begin
        	//read previous value
        `ifdef RV64
        	rg_resp_to_core <= CSRResponse{ hit : True, data : {rg_sd, 29'd0, uxl, 12'd0, 2'd0, 1'd0,
        																											xs, rg_fs, 2'd0, 2'd0, rg_spp, 1'd0,
        																											1'd0, 1'd0, rg_upie, 1'd0, 1'd0, 1'd0,
        																											rg_uie}};

        	Bit#(XLEN) readdata = {rg_sd, 29'd0, uxl, 12'd0, 2'd0, 1'd0, xs, rg_fs, 2'd0, 2'd0,
        												 rg_spp, 1'd0, 1'd0, 1'd0, rg_upie, 1'd0, 1'd0, 1'd0, rg_uie};
        `else
        	rg_resp_to_core <= CSRResponse{ hit : True, data : {'d0, rg_sd, 11'd0, 2'd0, 1'd0, xs,
        																											rg_fs, 2'd0, 2'd0, 1'd0, rg_mpie,
        																											1'd0, 1'd0, rg_upie, 1'd0, 1'd0, 1'd0,
        																											rg_uie}};

        	Bit#(XLEN) readdata ={'d0, rg_sd, 11'd0, 2'd0, 1'd0, xs, rg_fs, 2'd0, 2'd0, 1'd0, rg_mpie,
        	                      1'd0, 1'd0, rg_upie, 1'd0, 1'd0, 1'd0, rg_uie};
        `endif

        	//form the new value to be written and write
        	let word <- csr_op.func(req.writedata,readdata,op);

          rg_uie <= word[0];
          rg_upie <= word[4];
        end

				`UIE : begin
					//read previous value
        	rg_resp_to_core <= CSRResponse{ hit : True, data : {'d0, rg_mcounterie,rg_meie, heie, rg_seie,
        	                                                    rg_mideleg[8] & rg_ueie, rg_mtie,
        	                                                    htie, rg_stie,rg_mideleg[4] & rg_utie,
        	                                                    rg_msie, hsie, rg_ssie,
        	                                                    rg_mideleg[0] & rg_usie}};

        	Bit#(XLEN) readdata = {'d0, rg_mcounterie, rg_meie, heie, rg_seie, rg_mideleg[8] & rg_ueie, rg_mtie,htie,
        	                       rg_stie, rg_mideleg[4] & rg_utie, rg_msie, hsie, rg_ssie,
        	                       rg_mideleg[0] & rg_usie};

        	//form the new value to be written and write
        	let word <- csr_op.func(req.writedata,readdata,op);
        	rg_usie <= word[0];
          rg_utie <= word[4];
          rg_ueie <= word[8];

				end

				`UIP : begin
					//read previous value
        	rg_resp_to_core <= CSRResponse{ hit : True, data : {'d0, rg_meip,heip,lv_misa_s & rg_seip,
        	                                                    rg_mideleg[8] & rg_ueip & lv_misa_n,
        	                                                    rg_mtip, htip, rg_stip,
        	                                                    rg_mideleg[4] & rg_utip & lv_misa_n,
        	                                                    rg_msip, hsip,
        	                                                    lv_misa_s & rg_ssip,
        	                                                    rg_mideleg[0] & rg_usip & lv_misa_n}};

        	Bit#(XLEN) readdata = {'d0, rg_meip, heip, lv_misa_s & rg_seip,
        	                       rg_mideleg[8] & rg_ueip & lv_misa_n,
        	                       rg_mtip, htip, rg_stip,rg_mideleg[4] & rg_utip & lv_misa_n,rg_msip,
        	                       hsip, lv_misa_s & rg_ssip, rg_mideleg[0] & rg_usip & lv_misa_n};

        	//form the new value to be written and write
        	let word <- csr_op.func(req.writedata,readdata,op);
        	if(lv_misa_n == 1) begin
              rg_usip <= word[0];
              rg_soft_ueip <= word[8];
          end
				end

				`UTVEC : begin
					//read previous value
        	rg_resp_to_core <= CSRResponse{ hit : True, data : {'d0, rg_utvec, rg_umode}};
        	Bit#(XLEN) readdata = {'d0, rg_utvec, rg_umode};

        	//form the new value to be written and write
        	let word <- csr_op.func(req.writedata,readdata,op);

        	rg_utvec <= word[paddr - 1:2];
          if(word[1 : 0]<2) begin
          	rg_umode <= word[1 : 0];
          end
				end

				`UEPC : begin
					//read previous value
        	rg_resp_to_core <= CSRResponse{ hit : True, data : signExtend({rg_uepc, 1'b0})};
        	Bit#(XLEN) readdata = signExtend({rg_uepc, 1'b0});

        	//form the new value to be written and write
        	let word <- csr_op.func(req.writedata,readdata,op);

        	word = word>>1;
        	rg_uepc <= truncate(word);
				end

				`UCAUSE : begin
					//read previous value
        	rg_resp_to_core <= CSRResponse{ hit : True, data : {rg_uinterrupt, 'd0, rg_ucause}};
        	Bit#(XLEN) readdata =  {rg_uinterrupt, 'd0, rg_ucause};

        	//form the new value to be written and write
        	let word <- csr_op.func(req.writedata,readdata,op);

        	rg_uinterrupt <= word[maxIndex - 1];
          rg_ucause <= truncate(word);
				end

				`UTVAL : begin
					//read previous value
        	rg_resp_to_core <= CSRResponse{ hit : True, data : signExtend(rg_utval)};
        	Bit#(XLEN) readdata = signExtend(rg_utval);

        	//form the new value to be written and write
        	let word <- csr_op.func(req.writedata,readdata,op);
        	rg_utval <= truncate(word);
				end
			`endif

        default : begin
          ff_fwd_request.enq(req);
          rg_resp_to_core <= CSRResponse { hit : False, data : 0};
        end
			endcase
		endmethod

		method CSRResponse mv_core_resp = rg_resp_to_core;

   	method ActionValue#(CSRReq) mav_fwd_req;
      ff_fwd_request.deq;
      return ff_fwd_request.first();
    endmethod
  
  `ifdef perfmonitors
    method Action ma_counter_interrupts (Bit#(29) i);
      wr_counter_interrupts <= i;
    endmethod
  `endif

    ////////////////////////////////////////////////////////////////////////////////////////////////
		//inter-group sideband connections
    method Action ma_csr_misa(Bit#(XLEN) m);
      wr_csr_misa <= m;
    endmethod

		method Action ma_frm(Bit#(3) frm_val);
			wr_frm <= frm_val;
		endmethod

	`ifdef debug
		method Action ma_csr_dcsr(Bit#(32) dcsr_val);
			wr_csr_dcsr <= dcsr_val;
		endmethod

		method Action ma_resume_int(Bit#(1) resume_int_val);
			wr_resume_int <= resume_int_val;
		endmethod

		method Action ma_core_halted(Bit#(1) core_halted_val);
			wr_core_halted <= core_halted_val;
		endmethod

		method Action ma_halt_int(Bit#(1) halt_int_val);
			wr_halt_int <= halt_int_val;
		endmethod
	`endif
		////////////////////////////////////////////////////////////////////////////////////////////////
		//side band connections from core
		method Action ma_clint_msip(Bit#(1) intrpt);
  		rg_msip <= intrpt;
  	endmethod

  	method Action ma_clint_mtip(Bit#(1) intrpt);
  		rg_mtip <= intrpt;
  	endmethod

  	method Action ma_set_external_interrupt(Bit#(1) ex_i);
  // TODO. seip and ueip can be updated by the PLIC. This is creating schedule conflicts
	  	if(wr_prv == Machine) begin
	  		rg_meip <= ex_i;
	  	end
    `ifdef supervisor
  		else if(wr_prv == Supervisor) begin
	  		rg_ext_seip <= ex_i;
	  	end
    `endif
    `ifdef usertraps
  		else if(wr_prv == User) begin
	  		rg_ext_ueip <= ex_i;
	  	end
    `endif
  	endmethod
  `ifdef supervisor
	  method mv_csr_satp = {rg_satp_mode,'d0, rg_satp_asid, rg_satp_ppn};
	`endif

	  method Bit#(XLEN) mv_csr_mstatus;
    `ifdef RV64
      return {rg_sd, 27'd0, sxl, uxl, 9'd0, rg_tsr, rg_tw, rg_tvm, rg_mxr, rg_sum, rg_mprv, xs,
              rg_fs, rg_mpp, hpp, rg_spp, rg_mpie, hpie, rg_spie, rg_upie, rg_mie, hie, rg_sie,
              rg_uie};

    `else
      return {'d0, rg_sd, 8'd0, rg_tsr, rg_tw, rg_tvm, rg_mxr, rg_sum, rg_mprv, xs, rg_fs, rg_mpp,
              hpp, rg_spp, rg_mpie, hpie, rg_spie, rg_upie, rg_mie, hie, rg_sie, rg_uie};
    `endif
    endmethod

    method Action ma_upd_privilege (Privilege_mode prv);
    	wr_prv <= prv;
    endmethod

    method mv_csrs_to_decode = CSRtoDecode{
        prv : wr_prv,
        csr_mip : lv_csr_mip,
        csr_mie : lv_csr_mie,
      `ifdef non_m_traps csr_mideleg : rg_mideleg, `endif //recieved a warning
        csr_misa : truncate(wr_csr_misa),
      `ifdef RV64
        csr_mstatus:{rg_sd, 27'd0, sxl, uxl, 9'd0, rg_tsr, rg_tw, rg_tvm, rg_mxr, rg_sum, rg_mprv,
                     xs, rg_fs, rg_mpp, hpp, rg_spp, rg_mpie, hpie, rg_spie, rg_upie, rg_mie, hie,
                     rg_sie, rg_uie},
      `else
        csr_mstatus: {'d0, rg_sd, 8'd0, rg_tsr, rg_tw, rg_tvm, rg_mxr, rg_sum, rg_mprv, xs, rg_fs,
                      rg_mpp, hpp, rg_spp, rg_mpie, hpie, rg_spie, rg_upie, rg_mie, hie, rg_sie,
                      rg_uie},
      `endif
      `ifdef supervisor
        csr_sip : lv_csr_sip,
        csr_sie : lv_csr_sie,
      `endif
      `ifdef usertraps
        `ifdef supervisor
          csr_sideleg : truncate(rg_sideleg),
        `endif
        csr_uie : lv_csr_uie,
        csr_uip : lv_csr_uip,
      `endif
        frm : wr_frm //sideband connection from grp-2
      `ifdef debug
        ,csr_dcsr : wr_csr_dcsr //sideband connection from grp-3
      `endif };
    ////////////////////////////////////////////////////////////////////////////////////////////////
    //connections to top module.

  `ifdef supervisor
		method Bit#(1) mv_spp;
			Bit#(1) spp_val = rg_spp;
			return spp_val;
		endmethod
	`endif

		method Bit#(2) mv_mpp;
			Bit#(2) mpp_val = rg_mpp;
			return mpp_val;
		endmethod

		/*doc:method: */
		method Bool mv_resume_wfi ();
  		return unpack( |(lv_csr_mip[11:0]&lv_csr_mie[11:0]) );
		endmethod

  `ifdef non_m_traps
    /*doc:method: */
    method mv_medeleg = {rg_medeleg_u1, 1'd0, rg_medeleg_m2, 2'd0, rg_medeleg_l10};

    /*doc:method: */
    method mv_mideleg = rg_mideleg;

    `ifdef supervisor
    `ifdef usertraps
      /*doc:method: */
      method mv_sedeleg = {rg_sedeleg_u1, 1'd0, rg_sedeleg_m2, 3'd0, rg_sedeleg_l9};
      /*doc:method: */
      method mv_sideleg = rg_sideleg;
    `endif
    `endif
  `endif

		method ActionValue#(Bit#(`vaddr)) mav_upd_on_ret `ifdef non_m_traps (Privilege_mode prv) `endif ;
			`ifdef non_m_traps
        `ifdef supervisor
          if (prv == Supervisor) begin
            rg_spie <= 1;
            rg_spp <= 0;
	  		    rg_sie <= rg_spie;
            let lv_sepc = rg_sepc;
            if(lv_misa_c == 0)
              lv_sepc[0] = 0;
            return {lv_sepc, 1'b0};
          end else
        `endif
        `ifdef usertraps
          if (prv == User) begin
            rg_upie <= 1;
	    	  	rg_uie <= rg_upie;
            let lv_uepc = rg_uepc;
            if(lv_misa_c == 0)
              lv_uepc[0] = 0;
            return {lv_uepc, 1'b0};
          end else
        `endif
      `endif
      begin
        rg_mpie <= 1;
        rg_mpp <= pack(User);
	  	  rg_mie <= rg_mpie;
        let lv_mepc = rg_mepc;
        if(lv_misa_c == 0)
          lv_mepc[0] = 0;
        return {lv_mepc, 1'b0};
      end
		endmethod
    method ActionValue#(Bit#(`vaddr)) mav_upd_on_trap(Bit#(`causesize) c, Bit#(`vaddr) pc,
                                                      Bit#(`vaddr) tval, Privilege_mode prv);
      Bit#(`causesize) cause = c;
      Bit#(TSub#(`causesize,1)) code = truncate(cause);
      Bit#(1) trap_type = truncateLSB(cause);
    `ifdef non_m_traps `ifdef supervisor
      if(prv == Supervisor) begin
        rg_stval <= signExtend(tval);
			  rg_sepc <= truncateLSB(pc);
			  rg_scause <= code;
        rg_sinterrupt <= trap_type;
			  rg_sie <= 0;
			  rg_spie <= rg_sie;
        rg_spp <= pack(wr_prv)[0];
        if(rg_smode == 1 && trap_type == 1)
          return ({(rg_stvec + zeroExtend(code)), 2'b0}); // pc jumps to base + (4 * cause)
        else
          return {rg_stvec, 2'b0}; // pc jumps to base
      end else
    `endif `endif
    `ifdef non_m_traps `ifdef usertraps
      if(prv == User) begin
        rg_utval <= signExtend(tval);
			  rg_uepc <= truncateLSB(pc);
			  rg_ucause <= code;
        rg_uinterrupt <= trap_type;
			  rg_uie <= 0;
			  rg_upie <= rg_uie;
        if(rg_umode == 1 && trap_type == 1)
          return ({(rg_utvec + zeroExtend(code)), 2'b0}); // pc jumps to base + (4 * cause)
        else
          return {rg_utvec, 2'b0}; // pc jumps to base
      end else
    `endif `endif
      begin
        rg_mtval <= signExtend(tval);
			  rg_mepc <= truncateLSB(pc);
			  rg_mcause <= code;
        rg_minterrupt <= trap_type;
			  rg_mie <= 0;
			  rg_mpp <= pack(wr_prv);
			  rg_mpie <= rg_mie;
        if(rg_mode == 1 && trap_type == 1)
          return ({(rg_mtvec + zeroExtend(code)), 2'b0}); // pc jumps to base + (4 * cause)
        else
          return {rg_mtvec, 2'b0}; // pc jumps to base
      end
    endmethod
	endmodule
endpackage
