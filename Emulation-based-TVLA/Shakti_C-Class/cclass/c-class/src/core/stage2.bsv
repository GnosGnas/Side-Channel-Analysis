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
1.  This module decodes the instructions fetched from the previous stage and also fetches the
    operands from the registerfile.
2.  If a csr operation is being decoded, then the next instruction is stalled untill the csr
    completes and commits the instruction.

NOTE0 : Handling flushes
  Flushes in this stage are handled by 2 epoch registers : eEpoch and wEpoch. This bits are compared
  to the epochs bits from the fetch unit (status under which they were fetched). If they do not
  match then the instruction is dropped. The reason for having 2 epoch registers is because both:
  the execute and the writeback stage can generate a flush of the pipe,  causing instructions to be
  dropped all over.

NOTE1 : Handling Traps
  By handling trap and flushing fetch to jump to the trap routine in this stage saves cycle. One
  might also consider that PC no longer needs to be sent to the subsequent stages. However,  note that
  the load / store exceptions are only captured in the next staged. Including pagefaults. So you will
  any how need to handle a trap in that stage as well.

  Additionally, if you have 2 stages handling traps,  you will have prioritize on over the other.
  Suppose you take a trap from the decode stage but there exists an instruction in the subsequent
  pipeline buffers which will generate a memory exception. While taking the trap in the decode stage
  you have corrupted the csrs and this will screw up all further exception handling.

NOTE2 : Handling WFI.
  WFI is also handled in this stage. If a wfi instruction is encountered is treated as a NOP and
  simply dropped. Simultaenously a register is set. When the instruction requests to be decoded and
  the register is set,  the instruction will only progress if an interrupt has arrived. This will
  ensure that the interrupt is taken on the next instructions as required by the spec. When this
  interrupt is taken (under stall mode) then the register is reset and normal functionality resumes.

  If there are n - continous "wfi" instructions,  then n - interrupts will have to be serviced to resume
  the core.

NOTE3 : When an illegal exception is taken you have to store the instruction in the mtval register.
This enables trap handlers to quickly emulate the instruction in software. To do this, in case of an
illega exception we send the instruction as rs1 from stage2 and then pass it as the rd value after
exection stage.

--------------------------------------------------------------------------------------------------
*/
package stage2;
  // -- package imports --//
	import FIFOF::*;
	import TxRx:: *;
	import DReg::*;
	import Connectable::*;
	import GetPut::*;
	import ConfigReg :: * ;

  // -- project imports --//
	import registerfile::*;       // for instantiating the registerfile
	import decoder::*;            // for the decode functions.
  import common_types::*;       // for pipe - line types
  `include "common_params.bsv"  // for core parameters
  `include "Logger.bsv"         // for logging display statements.
  import globals::*;
`ifdef debug
  import debug_types :: *; // for importing the debug abstract interface
`endif


	interface Ifc_stage2;

    /*doc:subifc: recieve instruction and pc packet from stage1*/
		interface RXe#(PIPE1) rx_from_stage1;

    /*doc:subifc: send instruction meta data to stage3 */
    interface TXe#(Stage3Meta)    tx_meta_to_stage3;

    /*doc:subifc: send bad-address information to stage3 in case of TRAPs*/
    interface TXe#(Bit#(XLEN))    tx_mtval_to_stage3;

    (*always_ready*)
    /*doc:method: Latest value of operand1 from rf*/
    method RFOp1 mv_op1;

    (*always_ready*)
    /*doc:method: Latest value of operand2 from rf*/
    method RFOp2 mv_op2;

    (*always_ready*)
    /*doc:method: Latest value of operand3 from rf*/
    method RFOp3 mv_op3;

  `ifdef rtldump
    /*doc:subifc: receive instruction of trace from previous stage */
    interface RXe#(Bit#(32)) rx_inst;

    /*doc:subifc: send instruction trace to next stage */
    interface TXe#(Bit#(32)) tx_inst;
  `endif

    /*doc:method: input from commit stage (stage5) to update the regfile on instruction retirement*/
    method Action commit_rd (CommitData commit);

    (*always_ready*)
    /*doc:method: input from the csr file containing all the required csrs to capture exceptions.*/
    method Action csrs (CSRtoDecode csr);

    /*doc:method: this method indicates that a flush has been generated from the exe / wb stage and
    thus the current stage can quit the stall that was initiated due to an exception generation */
    method Action clear_stall (Bool upd);

    (*always_ready*)
    /*doc:method: method to update epochs on redirection from execute stage*/
		method Action update_eEpoch;

    (*always_ready*)
    /*doc:method method to update epochs on redirection from write - back stage*/
		method Action update_wEpoch;

		(*always_ready*)
		/*doc:method: method to indicate if the hart whould resume from a WFI*/
		method Action ma_resume_wfi (Bool w);

  `ifdef debug
    /*doc:method: interface to interact with debugger*/
    method ActionValue#(Bit#(XLEN)) debug_access_gprs(AbstractRegOp cmd);

    (*always_enabled, always_ready*)
    /*doc:method debug related info checking interrupts */
    method Action debug_status (DebugStatus status);
  `endif
	endinterface : Ifc_stage2

  (*synthesize*)
  module mkstage2#(parameter Bit#(XLEN) hartid) (Ifc_stage2);

    String stage2=""; // defined for logger

    // --------------------- Start instantiations ------------------------//

    /*doc:mod: instantiation of the registerfile module */
    Ifc_registerfile registerfile <- mkregisterfile(hartid);

    /*doc:mod FIFO to interface with stage0 and receive fetched instruction */
		RX#(PIPE1) rx <- mkRX;

    /*doc:mod FIFO interface to send the decoded information to the next stage.*/
    TX#(Stage3Meta)   tx_meta   <- mkTX;

    /*doc:mod FIFO interface to send the bad-address information to the next stage.*/
    TX#(Bit#(XLEN))   tx_mtval   <- mkTX;

  `ifdef rtldump
    // fifo interface used to transmit the trace of the instruction for rtl.dump generation
    TX#(Bit#(32)) txinst <- mkTX;
    RX#(Bit#(32)) rxinst <- mkRX;
  `endif

    /*doc:wire: wire to capture the latest csr values from csr-file*/
    Wire#(CSRtoDecode) wr_csrs <- mkWire();

    /*doc:reg: this register maintains the epoch value modified by the execute stage*/
		Reg#(Bit#(1)) eEpoch <- mkConfigReg(0);

    /*doc:reg: this register maintains the epoch value modified by the write-back stage*/
		Reg#(Bit#(1)) wEpoch <- mkConfigReg(0);

    /*doc:reg:
      this register is used to stall the current stage from processing any new instructions until a
      redirection from execute / write - back is received. The stall is generated when an trap is
      detected in this stage for the current instruction being processed. This prevents flooding
      the pipe with un - necessary instructions since a redirection is expected.*/
    Reg#(Bool) rg_stall <- mkReg(False);

    /*doc:reg:
      this register when True indicates the current stage is waiting for interrupts before
      sending any new info to the next stage*/
    Reg#(Bool) rg_wfi   <- mkReg(False);

    /*doc:wire: This wire indicates if any locally enabled interrupt is pending irrespective of the
    * global status of interrupt-enable or delegation. It simply carries mie&mip*/
    Wire#(Bool) wr_resume_wfi <- mkDWire(False);

    /*doc:reg:
      This register when set to true indicates that the current instruction being processed will
      have to be re - fetched and executed since the previous instruction was a CSR operation.*/
    Reg#(Bool) rg_rerun <- mkReg(False);

    /*doc:reg:
      This register when set to true indicates that the current instruction being processed will
      have to be re - fetched and executed since the previous instruction was a fencei instruction*/
    Reg#(Bool) rg_fencei_rerun <- mkReg(False);

  `ifdef supervisor
    /*doc:reg:
      This register when set to true indicates that the current instruction being processed will
      have to be re - fetched and executed since the previous instruction was a sfence instruction*/
    Reg#(Bool) rg_sfence_rerun <- mkReg(False);
  `endif

    /*doc:wire:
      the following wires are used to ensure that rg_rerun and rg_stall are not set in the cycle a
      redirection from the exe / wb stage is received.*/
    Wire#(Bool) wr_flush_from_exe <- mkDWire(False);
    Wire#(Bool) wr_flush_from_wb  <- mkDWire(False);

  `ifdef debug
    /*doc:wire: This wire will capture info about the current debug state of the core*/
    Wire#(DebugStatus) wr_debug_info <- mkWire();

    // This register indicates when an instruction passed the decode stage after a resume request is
    // received while is step is set.
    Reg#(Bool) rg_step_done <- mkReg(False);
  `endif

    /*doc:reg:
      This register holds the latest value of operand1 from the RF. This will get updated
      every time a retirement to the same register occurs.*/
    Reg#(RFOp1) rg_op1[2] <- mkCReg(2, unpack(0));

    /*doc:reg:
      This register holds the latest value of operand2 from the RF. This will get updated
      every time a retirement to the same register occurs.*/
    Reg#(RFOp2) rg_op2[2] <- mkCReg(2, unpack(0));

    /*doc:reg:
      This register holds the latest value of operand3 from the RF. This will get updated
      every time a retirement to the same register occurs.*/
    Reg#(RFOp3) rg_op3[2] <- mkCReg(2, unpack(0));

    // ---------------------- End Instatiations --------------------------//

    // ---------------------- Start Rules -------------------------------//

    // RuleName : decode_and_opfetch
    // Explicit Conditions : rg_stall == False
    // Implicit Conditions : rx.notEmpty and all tx fifos are not full
    // Description : This rule decodes the current fetched instruction, fetches the operands from the
    // registerfile and sends the required struct to the next stage.
    rule decode_and_opfetch(!rg_stall && rx.u.notEmpty && tx_mtval.u.notFull && !rg_wfi);

      // --- extract the fields from the packet received from the stage1 ---- //
	    let pc = rx.u.first.program_counter;
	    let inst = rx.u.first.instruction;
	    let epochs = rx.u.first.epochs;
      let trap = rx.u.first.trap;
      let trapcause = rx.u.first.cause;
    `ifdef compressed
      let upper_err = rx.u.first.upper_err;
      let compressed = rx.u.first.compressed ;
    `endif
    `ifdef bpu
      let btbresponse = rx.u.first.btbresponse;
    `endif
      // ---------------------------------------------------------------------------------------- //

      `logLevel( stage2, 0, $format("core:%2d ",hartid,"STAGE2: csrs:",fshow(wr_csrs)))

      // ----------------------------- perform decode ------------------------ //
      let decoded <- decoder_func(inst,trap, `ifdef compressed compressed, `endif
                                  trapcause, wr_csrs,
                                  rg_rerun, rg_fencei_rerun
                                  `ifdef supervisor ,rg_sfence_rerun `endif
                                  `ifdef debug ,wr_debug_info, rg_step_done `endif );
      let imm = decoded.meta.immediate;
      let func_cause = decoded.meta.funct;
      let instrType = decoded.meta.inst_type;
      let word32 = decode_word32(inst,wr_csrs.csr_misa[2]);
    `ifdef spfpu
      RFType rf1type = `ifdef spfpu decoded.op_type.rs1type == FloatingRF ? FRF : `endif IRF;
      RFType rf2type = `ifdef spfpu decoded.op_type.rs2type == FloatingRF ? FRF : `endif IRF;
    `endif
      `logLevel( stage2, 0, $format("core:%2d ",hartid,"STAGE2 : PC:%h Instruction:%h",pc, inst))
      `logLevel( stage2, 0, $format("core:%2d ",hartid,"STAGE2 : OpAddr: ",fshow(decoded.op_addr)))
      `logLevel( stage2, 0, $format("core:%2d ",hartid,"STAGE2 : OpType: ",fshow(decoded.op_type)))
      // ---------------------------------------------------------------------------------------- //

      // ---------------------- generate bad-address value in case of traps --------------------- //
        Bit#(XLEN) mtval = 0;
        if(instrType == TRAP && func_cause == `Illegal_inst )
            mtval = zeroExtend(inst); // for badaddr
    `ifdef supervisor
        if(instrType == TRAP && func_cause == `Inst_pagefault)
            mtval = zeroExtend(pc);
      `ifdef compressed
        if(instrType == TRAP && func_cause == `Inst_pagefault && upper_err)
            mtval = zeroExtend(pc) + 2;
      `endif
    `endif
        `logLevel( stage2, 1, $format("core:%2d ",hartid,"STAGE2: BadAddress(MTVAL): %h", mtval))
      // ---------------------------------------------------------------------------------------- //

      if({eEpoch, wEpoch} != epochs)begin
        `logLevel( stage2, 0, $format("core:%2d ",hartid,"STAGE2 : Dropping Instruction due to epoch mis - match"))
      end
      else if (instrType == WFI) begin
        if(!wr_flush_from_exe && !wr_flush_from_wb) begin
          `logLevel( stage2, 0, $format("core:%2d ",hartid,"STAGE2 : Encountered WFI"))
          rg_wfi <= True;
        end
        else
          `logLevel( stage2, 0, $format("core:%2d ",hartid,"STAGE2 : Dropping WFI"))
      end
      else begin

      // The following logic is used to ensure correct step functionality. When the core is halted
      // or free-running rg_step_done is set to false. When the step bit in dcsr is set and resume
      // request is received, the very next instruction (matching epochs) will set rg_step_done to
      // True. The core needs to halt after this instruction commit. Thus, the 2nd instruction in
      // the stream (which matches the epochs which could have changed if the first instruction is a
      // branch/jump) is tagged as a Trap with HaltStep cause code, thus causing the core to go back
      // to the halted stage. When the core is again halted then, rg_step_done is reset to False.
      `ifdef debug
        `logLevel( stage2, 0, $format("core:%2d ",hartid,"STAGE2: step_done:%b",rg_step_done))
        if(rg_step_done && wr_debug_info.core_is_halted)
          rg_step_done<=False;
        else
          rg_step_done <= !wr_debug_info.core_is_halted && wr_debug_info.step_set
                                                      && wr_debug_info.debugger_available;
      `endif

        // ---------------------------- read operands from the registerfile ----------------------//
        let rs1_from_rf <- registerfile.read_rs1(inst[19:15]
                            `ifdef spfpu ,rf1type `endif );
        let rs2_from_rf <- registerfile.read_rs2(inst[24:20]
                            `ifdef spfpu ,rf2type `endif );
      `ifdef spfpu
        let rs3 <- registerfile.read_rs3(inst[31:27]);
      `endif
        // -------------------------------------------------------------------------------------- //

        // ------------------------ modify operand values before enquing to next stage -----------//
        Bit#(ELEN) op1 =  (decoded.op_type.rs1type == IntegerRF && decoded.op_addr.rs1addr == 0)?
                            0 : rs1_from_rf;
        Bit#(ELEN) op2 =  (decoded.op_type.rs2type == Constant2) ? 'd2: // constant2 only is C enabled.
                          (decoded.op_type.rs2type == Constant4) ? 'd4:
                          (decoded.op_type.rs2type == Immediate) ? signExtend(imm) :
                          (decoded.op_addr.rs2addr == 0 && decoded.op_type.rs2type == IntegerRF)? 0
                          : rs2_from_rf;
      `ifdef spfpu
        Bit#(FLEN) op4 = (decoded.op_type.rs3type == FRF) ? rs3 : signExtend(imm);
      `else
        Bit#(FLEN) op4 = signExtend(imm);
      `endif
        // -------------------------------------------------------------------------------------- //

        rg_rerun <= decoded.meta.rerun && !wr_flush_from_exe && !wr_flush_from_wb;
        if(instrType == MEMORY && decoded.meta.memaccess == FenceI)
          rg_fencei_rerun <= True;
        else
          rg_fencei_rerun <= False;
      `ifdef supervisor
        if(instrType == MEMORY && decoded.meta.memaccess == SFence)
          rg_sfence_rerun <= True;
        else
          rg_sfence_rerun <= False;
      `endif

        // -------------------------- Enque relevant data to the next stage -------------------- //
        let stage3meta = Stage3Meta{funct : func_cause, memaccess : decoded.meta.memaccess,
                                    inst_type : instrType, pc : pc, epochs : epochs,
                                    rd: decoded.op_addr.rd
                                    `ifdef spfpu ,rdtype: decoded.op_type.rdtype `endif
                                    `ifdef RV64           , word32     :     word32
                                    `elsif dpfpu          , word32     :     word32 `endif
                                `ifdef bpu                , btbresponse:  btbresponse
                                    `ifdef compressed     , compressed : compressed `endif
                                `endif };

        tx_meta.u.enq(stage3meta);
        tx_mtval.u.enq(mtval);
      `ifdef rtldump
        txinst.u.enq(rxinst.u.first);
      `endif

        rg_op1[0] <= RFOp1{ addr: decoded.op_addr.rs1addr, data: op1,
                            optype: decoded.op_type.rs1type};
        rg_op2[0] <= RFOp2{ addr: decoded.op_addr.rs2addr, data: op2,
                            optype: decoded.op_type.rs2type};
        rg_op3[0] <= RFOp3{ data: op4 `ifdef spfpu ,addr: decoded.op_addr.rs3addr,
                            optype: decoded.op_type.rs3type `endif };
        // -------------------------------------------------------------------------------------- //
        if(instrType == TRAP)
          rg_stall <= True && !wr_flush_from_exe && !wr_flush_from_wb;

        `logLevel( stage2, 1, $format("core:%2d ",hartid,"STAGE2: ",fshow(stage3meta)))

      end
      rx.u.deq;
    `ifdef rtldump
      rxinst.u.deq;
    `endif
    endrule

    /*doc:rule: */
    rule rl_wait_for_interrupt(rg_wfi);
      if(wr_resume_wfi || wr_flush_from_wb || wr_flush_from_exe)
        rg_wfi <= False;
    endrule


    // interface to send decoded structs to the next stage.
    interface tx_meta_to_stage3   = tx_meta.e;
    interface tx_mtval_to_stage3  = tx_mtval.e;

  `ifdef rtldump
    interface tx_inst = txinst.e;
    interface rx_inst = rxinst.e;
  `endif

		method rx_from_stage1 = rx.e;

    method Action csrs (CSRtoDecode csr);
      wr_csrs <= csr;
    endmethod

		method Action commit_rd (CommitData commit);
      registerfile.commit_rd(commit);
      `logLevel( stage2, 0, $format("core:%2d ",hartid,"STAGE2: Commit: ",fshow(commit)))
      `logLevel( stage2, 0, $format("core:%2d ",hartid,"STAGE2: RgOp1: ",fshow(rg_op1[1])))
      `logLevel( stage2, 0, $format("core:%2d ",hartid,"STAGE2: RgOp2: ",fshow(rg_op2[1])))

    `ifdef spfpu
      if(commit.addr == rg_op1[1].addr)begin
        if(commit.rdtype == FRF && rg_op1[1].optype == FloatingRF)
          rg_op1[1].data<=commit.data;
        else if(commit.rdtype == IRF && rg_op1[1].addr!=0 && rg_op1[1].optype != FloatingRF)
          rg_op1[1].data<=commit.data;
      end

      if(commit.addr == rg_op2[1].addr)begin
        if(commit.rdtype == FRF && rg_op2[1].optype == FloatingRF)
          rg_op2[1].data<=commit.data;
        else if(commit.rdtype == IRF && rg_op2[1].addr!=0 && rg_op2[1].optype != FloatingRF)
          rg_op2[1].data<=commit.data;
      end

      if(rg_op3[1].addr == commit.addr && rg_op3[1].optype == FRF &&  commit.rdtype == FRF)
        rg_op3[1].data <= commit.data;

    `else
      if(rg_op1[1].addr == commit.addr && rg_op1[1].addr!=0)
          rg_op1[1].data <= commit.data;

      if(rg_op2[1].addr == commit.addr && rg_op2[1].addr!=0 )
          rg_op2[1].data <= commit.data;
    `endif
    endmethod

    // This method will get activated when there is a flush from the execute stage
		method Action update_eEpoch;
      wr_flush_from_exe <= True;
			eEpoch<=~eEpoch;
		endmethod

    // This method gets activated when there is a flush from the write - back stage.
		method Action update_wEpoch;
      wr_flush_from_wb <= True;
			wEpoch<=~wEpoch;
		endmethod

    method Action clear_stall (Bool upd) if(rg_stall);
      if(upd) begin
        rg_stall <= False;
        rg_rerun <= False;
      end
    endmethod

    /*doc:method: */
    method Action ma_resume_wfi (Bool w);
      wr_resume_wfi <= w;
    endmethod

  `ifdef debug
    method debug_access_gprs = registerfile.debug_access_gprs;
    method Action debug_status (DebugStatus status);
      wr_debug_info <= status;
    endmethod
  `endif
    method mv_op1 = rg_op1[0];
    method mv_op2 = rg_op2[0];
    method mv_op3 = rg_op3[0];
  endmodule
endpackage
