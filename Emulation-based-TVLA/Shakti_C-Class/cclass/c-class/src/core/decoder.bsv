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
This module primarily holds the combo functions to decode the instructions and provide
various meta data to fetch operands and execute on them.

The module also contains functions to check if a particular csr access is valid or illegal

Interrupt checks are also performed in this package.

The decoder outputs minimal data required to peform operand fetch and executions in the later stage.

--------------------------------------------------------------------------------------------------
*/
package decoder;

  // pacakge imports from project
  import common_types::*;
  import BUtils::*;
  `include "common_params.bsv"
  (*noinline*)
  function Bool address_valid(Bit#(12) addr, Bit#(26) misa);
    Bool valid=False;
    case(addr[9:8])
      // user level CSRS
      'b00: case(addr[11:10])
              'b00: case (addr[7:0])
                `ifdef user
                  // User Trap setup and user trap handling registers
                  'h0, 'h4, 'h5, 'h40, 'h41, 'h42, 'h43, 'h44: valid=unpack(misa[13]&misa[20]);
                `endif
                  // user floating point csrs
                  'h1, 'h2, 'h3: valid=True;
              endcase
              // User Counters/Timers
            `ifdef user
              'b11: case(addr[7:5])
                  'b000: valid=True;
                `ifdef RV32
                  'b100: valid=True;
                `endif
              endcase
            `endif
             'b10: begin
                   valid =(addr[7:0]==0);
                   end
            endcase
      // supervisor level CSRS
    `ifdef supervisor
      'b01: case(addr[11:10])
              'b00: case(addr[7:4])
                // supervisor trap setup
                'h0:case(addr[3:0])
                  'h0, 'h4, 'h5, 'h6: valid=unpack(misa[18]);
                `ifdef usertraps
                  'h2, 'h3: valid=unpack(misa[13]&misa[20]);
                `endif
                endcase
                // supervisor trap handling.
                'h4: case(addr[3:0])
                  'h0, 'h1, 'h2, 'h3, 'h4: valid=unpack(misa[18]);
                endcase
                // supervisor protection and translation
                'h8: if(addr[3:0]==0) valid=unpack(misa[18]);
              endcase
            endcase
    `endif
    // machine level CSRS
    'b11: case(addr[11:10])
            // machine info registers
            'b11: if(addr[7:4]==1)
                    case(addr[3:0])
                      'h1, 'h2, 'h3, 'h4: valid=True;
                    endcase
            'b00: case(addr[7:4])
                    // Machine Trap Setup
                  'h0:case(addr[3:0])
                        'h0, 'h1, 'h4, 'h5, 'h6: valid=True;
                      `ifdef non_m_traps
                        'h2, 'h3: if( ((misa[13]&misa[20])==1) || misa[18]==1) valid=True;
                      `endif
                      endcase
                  // Machine counter Setup
                  'h2: if(addr[3:0] != 1 && addr[3:0] != 2) valid = True;
                  'h3: valid=True;
                    // Machine Trap Handling
                  'h4:case(addr[3:0])
                        'h0, 'h1, 'h2, 'h3, 'h4: valid=True;
                      endcase
                    // Maching Protection and Translation
                `ifdef pmp
                  'hA:case(addr[3:0])
                        'h0, 'h2 `ifdef RV32 ,'h1,'h3 `endif : valid=True;
                      endcase
                    // PMP ADDR registers
                  'hB: if((`PMPSIZE!=0 ) && addr[3:0]<=fromInteger(valueOf(TSub#(`PMPSIZE,1) ))) valid=True;
                `endif
                  endcase
              // Machine Counter/Timers
            'b10: if(addr[7:4] == 0 || addr[7:4] == 1 || addr[7:4] == 8 || addr[7:4] ==9)valid=True;
           // TODO B01 and 801 should be invalid
              // DTVEC and DEnable
            'b01: begin
                `ifdef debug
                  if( addr[7:0] == 'hC0 || addr[7:0] == 'hC1 ) valid = True;
                `endif
                `ifdef perfmonitors
                  if(addr[7:0] == 'hC2) valid = True;
                `endif
                `ifdef triggers
                  if( addr[7:4] == 'hA && addr[3:0] < 4) valid = True;
                `endif
                `ifdef dtim
                  if( addr[7:0] == 'hC3 || addr[7:0]== 'hC4) valid = True;
                `endif
                `ifdef itim
                  if( addr[7:0] == 'hC5 || addr[7:0]== 'hC6) valid = True;
                `endif
            end
          endcase
    endcase
    return valid;
  endfunction

  (*noinline*)
  function Bool hasCSRPermission(Bit#(12) address, Bool write,  Privilege_mode prv);
    Bit#(12) csr_index = pack(address);
    return ((pack(prv) >= csr_index[9:8]) && !(write && csr_index[11:10]==2'b11) );
  endfunction

  // if the operand is not 0 then the instruction will perform a write on the CSR.
  (*noinline*)
	function Bool valid_csr_access(Bit#(12) csr_addr, Bit#(5) operand, Bit#(2) operation,
                                  Bit#(1) tvm, Privilege_mode prv);
		Bool ret = hasCSRPermission(unpack(csr_addr), (operand != 0 || operation=='b01) ? True:False, prv);

    // accessing satp in supervisor mode with tvm=1 should raise an illegal exception
    if ( ret && csr_addr == 'h180 && tvm == 1 && prv == Supervisor)
      ret = False;
		return ret;
	endfunction

  (*noinline*)
	function Tuple2#(Bit#(`causesize), Bool) chk_interrupt(Privilege_mode prv, Bit#(XLEN) mstatus,
      Bit#(TAdd#(17, `ifdef debug 2 `else 0 `endif )) mip, 
      Bit#(17) mie 
      `ifdef non_m_traps , Bit#(12) mideleg `endif
      `ifdef supervisor
        ,Bit#(12) sip, Bit#(12) sie `ifdef usertraps , Bit#(12) sideleg `endif
      `endif
      `ifdef usertraps
        ,Bit#(12) uip, Bit#(12) uie
      `endif
      `ifdef debug
        ,DebugStatus debug, Bool step_done
      `endif );
    Bool m_enabled = (prv != Machine) || (mstatus[3]==1);
  `ifdef supervisor
    Bool s_enabled = (prv == User) || (mstatus[1]==1 && prv==Supervisor);
  `endif
  `ifdef usertraps
    Bool u_enabled = (mstatus[0]==1 && prv==User);
  `endif

  `ifdef debug
    Bit#(19) debug_interrupts = { mip[18],mip[17],17'd0};
    Bool d_enabled = debug.debugger_available && debug.core_debugenable;
  `endif

    // truncating because in debug mode mie and mip are 14 bits. 12-halt-req 13-resume-req
    Bit#(17) m_interrupts = mie & truncate(mip) & signExtend(pack(m_enabled))
             `ifdef non_m_traps & ~zeroExtend(mideleg) `endif
             `ifdef debug       & signExtend(pack(!debug.core_is_halted)) `endif ;
  `ifdef supervisor
    Bit#(12) s_interrupts = sie & sip & mideleg & signExtend(pack(s_enabled))
               `ifdef usertraps & ~sideleg `endif
               `ifdef debug     & signExtend(pack(!debug.core_is_halted)) `endif ;
  `endif
  `ifdef usertraps
    Bit#(12) u_interrupts = uie & uip & mideleg & signExtend(pack(u_enabled))
              `ifdef supervisor & sideleg `endif
              `ifdef debug      & signExtend(pack(!debug.core_is_halted)) `endif ;
  `endif

    Bit#(TAdd#(17, `ifdef debug 2 `else 0 `endif )) pending_interrupts = 
              `ifdef debug (d_enabled? debug_interrupts:0) | `endif
                           (m_enabled?zeroExtend(m_interrupts):0)
      `ifdef supervisor |  (s_enabled?zeroExtend(s_interrupts):0) `endif
      `ifdef usertraps  |  (u_enabled?zeroExtend(u_interrupts):0) `endif ;
		// format pendingInterrupt value to return
    Bool taketrap=unpack(|pending_interrupts) `ifdef debug ||  (step_done && !debug.core_is_halted) `endif ;
    Bit#(TSub#(`causesize, 1)) int_cause='1;
  `ifdef debug
    if(step_done && !debug.core_is_halted) begin
      int_cause = `HaltStep;
    end
    else if(pending_interrupts[17] == 1)
      int_cause = `HaltDebugger;
    else if(pending_interrupts[18] == 1)
      int_cause = `Resume_int;
    else
  `endif
  `ifdef perfmonitors
    if(pending_interrupts[16] == 1)
      int_cause = `CounterInterrupt;
    else 
  `endif
    if(pending_interrupts[11]==1)
      int_cause=`Machine_external_int;
    else if(pending_interrupts[3]==1)
      int_cause=`Machine_soft_int;
    else if(pending_interrupts[7]==1)
      int_cause=`Machine_timer_int;
  `ifdef supervisor
    else if(pending_interrupts[9]==1)
      int_cause=`Supervisor_external_int;
    else if(pending_interrupts[1]==1)
      int_cause=`Supervisor_soft_int;
    else if(pending_interrupts[5]==1)
      int_cause=`Supervisor_timer_int;
  `endif
  `ifdef user
    else if(pending_interrupts[8]==1)
      int_cause=`User_external_int;
    else if(pending_interrupts[0]==1)
      int_cause=`User_soft_int;
    else if(pending_interrupts[4]==1)
      int_cause=`User_timer_int;
  `endif


		return tuple2({1'b1,int_cause}, taketrap);
	endfunction

  typedef enum {Q0='b00, Q1='b01, Q2='b10} Quadrant deriving(Bits,Eq,FShow);
  (*noinline*)
  function DecodeOut decoder_func_32(Bit#(32) inst, CSRtoDecode csrs
                                    `ifdef compressed , Bool compressed `endif );

    Bit#(1) fs = |csrs.csr_mstatus[14:13];
    Bit#(3) frm = csrs.frm;

  `ifdef debug
    Bool ebreakm = unpack(csrs.csr_dcsr[15]);
    Bool ebreaks = unpack(`ifdef supervisor csrs.csr_dcsr[14] `else 0 `endif );
    Bool ebreaku = unpack(`ifdef user csrs.csr_dcsr[13] `else 0 `endif );
  `endif

    // ------- Default declarations of all local variables -----------//

		Bit#(5) rs1=inst[19:15];
		Bit#(5) rs2=inst[24:20];
		Bit#(5) rd =inst[11:7] ;
		Bit#(5) opcode= inst[6:2];
		Bit#(3) funct3= inst[14:12];
    Bit#(7) funct7 = inst[31:25];
		Bool word32 =False;

		//operand types
		Op1type rs1type=IntegerRF;
		Op2type rs2type=IntegerRF;

    // ------------------------------------------------------------------

    //---------------- Decoding the immediate values-------------------------------------

    // Identify the type of intruction first
    Bool stype= (opcode=='b01000 || (opcode=='b01001 && csrs.csr_misa[5]==1) );
    Bool btype= (opcode=='b11000);
    Bool utype= (opcode=='b01101 || opcode=='b00101);
    Bool jtype= (opcode=='b11011);
    Bool r4type= (opcode[4:2]=='b100);
    Bool atomictype=(opcode=='b01011);

    // refer to section 2.3 (Immediate Encoding Variants) of the risc-v iser spec for more details
    // on the following logic.
    // The default values are chosen such that in case of FPU,  the immediate encoding will hold the
    // upper 7-bit for further decoding.
    // The default values also enable capturing the encoding for atomic operations as well.
    Bit#(1) bit0 = inst[20]; // because of I-type instructions
    `ifdef atomic
      if(atomictype)
        bit0=0;
      else
    `endif
    if(stype)
      bit0=inst[7];
    else if(btype || utype || jtype)
      bit0=0;

    Bit#(4) bit1_4=inst[24:21]; // I/J-type instructions
    `ifdef atomic
      if(atomictype)
        bit1_4=0;
      else
    `endif
    if(stype || btype) // S/B-Type
      bit1_4=inst[11:8];
    else if(utype) // U type
      bit1_4=0;

    Bit#(6) bit5_10=inst[30:25];
    `ifdef atomic
      if(atomictype)
        bit5_10=0;
      else
    `endif
    if(utype)
      bit5_10=0;

    Bit#(1) bit11 = inst[31]; // I/S type
    `ifdef atomic
      if(atomictype)
        bit11=0;
      else
    `endif
    if(btype)
      bit11=inst[7];
    else if(utype)
      bit11=0;
    else if(jtype)
      bit11=inst[20];

    Bit#(8) bit12_19=duplicate(inst[31]); // I/S/B type
    `ifdef atomic
      if(atomictype)
        bit12_19=0;
      else
    `endif
    if(utype || jtype)
      bit12_19=inst[19:12];

    Bit#(11) bit20_30=duplicate(inst[31]); // I/B/S/J type
    `ifdef atomic
      if(atomictype)
        bit20_30=0;
      else
    `endif
    if(utype)
      bit20_30=inst[30:20];
    Bit#(1) bit31= `ifdef atomic (atomictype)?0: `endif inst[31];
    Bit#(32) immediate_value={bit31, bit20_30, bit12_19, bit11, bit5_10, bit1_4, bit0};
    // ----------------------------------------------------------------------------------

    //memory access type
		Access_type mem_access=Load;
		if(stype)
		mem_access=Store;
    if(funct3[0]==0 && opcode=='b00011)
      mem_access=Fence;
    if(funct3[0]==1 && opcode=='b00011)
      mem_access=FenceI;
  `ifdef atomic
    if(opcode=='b01011)
      mem_access=Atomic;
  `endif
  `ifdef supervisor
    if(opcode=='b11100 && funct7=='b0001001 && funct3==0) // SFENCE
      mem_access=SFence;
  `endif


    // Following table describes what the ALU will need for some critical operations. Based on this
    // the next set of logic is implemented. rs1+ rs2 is a XLEN bit adder. rs3+ rs4 is `paddr bit
    // adder.
    // Now PC can be present either in rs1 or rs3. This has been done to reduce the mux to the ALU
    // in the next stage. There will only be a mux in the next stage to identify the PC and send it
    // to the next stage.
    //
    //          rs1   rs2   rs3   rs4
    // Branch   OP1   OP2   PC    Imm
    // JAL      PC    'd4   PC    Imm   (rs1=0, rs2=0 since neither required)
    // JALR     PC    'd4   op1   Imm   (rs2=0 since not required)
    // LOAD     PC    op2   op1   Imm   (rs2=0 since not required) // PC needs to be sent as well
    // STORE    PC    op2   op1   Imm   (both required. op2 is the data)
    // AUIPC    PC    Imm   PC    Imm   (rs1=0, rs2=0 since neither required)
    // Atomic   PC    op1   op1    0
    /////////////////////////////////////////////////////////////////////////////////

		//instruction following U OR UJ TYPE INSTRUCTION FORMAT
		//funct3[2]==1 might not be required as division is not included till now
		if (opcode==`JAL_op  || opcode==`LUI_op || opcode==`AUIPC_op ||
        (opcode==`SYSTEM_INSTR_op && funct3[2]==1))
			rs1=0;
		if ( (opcode==`SYSTEM_INSTR_op `ifdef supervisor && funct3!=0 && funct7!='b0001001 `endif )
          || opcode[4:2]=='b000 || opcode==`LUI_op // CSR ( and not SFENCE) or (Load) or LUI
  			  ||opcode[4:2] == 'b001 || opcode==`JAL_op || opcode==`JALR_op	|| // AUIPC or JAL or JALR
          (opcode[4:2]=='b101 && funct7[5]==1 && (csrs.csr_misa[3]|csrs.csr_misa[5])==1) )
			rs2=0;
		if (opcode==`BRANCH_op || opcode[4:1]=='b0100 || (opcode=='b00011))
			rd=0;

		if(opcode==`JAL_op || opcode==`JALR_op|| opcode==`AUIPC_op )
			rs1type=PC;
    `ifdef spfpu
	    else if(opcode[4:2]=='b100 || (opcode[4:2]=='b101 && // (F(N)MADD or F(N)SUB)
		    (funct7[6:3]!='b1101 && funct7[6:3]!='b1111)))     // some of the conversion operations
			rs1type=FloatingRF;
    `endif

		if(opcode==`JALR_op || opcode==`JAL_op || opcode=='b00011)
			`ifdef compressed if(compressed) rs2type = Constant2; else `endif
      rs2type=Constant4;
    else if(opcode[4:2] == 'b001 || opcode==`LUI_op )
			rs2type=Immediate;
    `ifdef spfpu // All convert + FSQRToperations do not need rs2
      else if((opcode[4:2]=='b101 && funct7[5]!='b1) || opcode==`FSTORE_op || opcode[4:2]=='b100)
	      rs2type=FloatingRF;
    `endif
// ------------------------------------------------------------------------------------------- //
  Bit#(`causesize) trapcause=`Illegal_inst;
  Bool validload = `ifdef RV32 funct3!=3 && funct3!=7 `else funct3!=7 `endif ;
  Bool validFload = fs!=0 && ((csrs.csr_misa[5]==1 &&  funct3==2) `ifdef dpfpu || (csrs.csr_misa[3]==1 && funct3==3) `endif ) ;
`ifdef RV32
  Bool validImm = (funct3==1)?(funct7==0):(funct3==5)? (funct7 == 'b0000000 || funct7=='b0100000):True;
  Bool validImm32 = False;
`else
  Bool validImm = (funct3==1)?(funct7[6:1]==0):(funct3==5)? (funct7[6:1] == 'b000000 || funct7[6:1]=='b010000):True;
  Bool validImm32 = (funct3==0)?True:(funct3==1)? (funct7==0):(funct3==5)?(funct7=='b0000000 || funct7=='b0100000):False;
`endif
  Bool validStore = `ifdef RV32 funct3<3 `else funct3<4 `endif ;
  Bool validFStore = (csrs.csr_misa[5]==1 && fs!=0 && funct3==2) `ifdef dpfpu || (csrs.csr_misa[3]==1 && fs!=0 && funct3==3) `endif ;
  Bool validAtomicOp = case(inst[31:27])
      'd0, 'd1, 'd3, 'd4, 'd8, 'd12, 'd16, 'd20, 'd24, 'd28: True;
      'd2: if (inst[24:20]==0) True; else False;
      default: False;
    endcase;
  Bool validAtomic = (csrs.csr_misa[0]==1 && (funct3==2 `ifdef RV64 || funct3==3 `endif ) && validAtomicOp);
  Bool validMul = (csrs.csr_misa[12]==1 && funct7==1)?True:False;
  Bool validOp = (funct3==0 || funct3==5)?(funct7 == 'b0000000 || funct7=='b0100000):(funct7==0);
  Bool validMul32 = (csrs.csr_misa[12]==1 && funct7==1 && (funct3==0 || funct3>3));
  Bool validOp32  = (funct3==1)?(funct7==0):(funct3==0 || funct3==5)?(funct7=='b0000000||funct7=='b0100000):False;
  Bool validFloat = fs!=0 && ((funct7[0]==0 && csrs.csr_misa[5]==1) `ifdef dpfpu || (funct7[0]==1 &&  csrs.csr_misa[3]==1) `endif );
  Bool validFNM = inst[26]==0 && validFloat;
  Bool valid_rounding = (funct3=='b111)?(frm!='b101 && frm!='b110):(funct3!='b101 && funct3!='b110);
  //TODO: RM field check
  Bool validFloatOpF = case(inst[31:27])
    'b00000, 'b00001, 'b00010, 'b00011: valid_rounding; // FADD, FSUB, FMUL, FDIV
    'b01011: (inst[24:20]==0 && valid_rounding); // FSQRT.S
    'b00100: (funct3<3); // FSGNJ.S FSGNJN.S FSGNJX.S
    'b00101: (funct3<2); // FMIN.S FMAX.S
    'b11000: (inst[24:21]==0 && valid_rounding); // FCVT.W.S FCVT.WU.S
    'b11100: (inst[24:20]==0 && (funct3==0 || funct3==1)); // FMV.X.W, FCLASS.S
    'b10100: (funct3<3); //FEQ.S FLT.S FLE.S
    'b11010: (inst[24:21]==0 && valid_rounding); // FCVT.S.W FCVT.S.WU
    'b11110: (inst[24:20]==0 && funct3==0); //FMV.W.X
    default: False;
  endcase;
  Bool validFloatOpD = case(inst[31:27])
    'b11000: (inst[24:21]=='b0001 && valid_rounding); // FCVT.L.D FCVT.LU.D
    'b11010: (inst[24:21]=='b0001 && valid_rounding); // FCVT.D.L FCVT.D.LU
  `ifdef dpfpu
    'b11110: (inst[24:20]==0 && funct3==0); // FMV.D.X
    'b11100: (inst[24:20]==0 && funct3==0); // FMV.X.D
  `endif
    'b01000: (inst[24:21]=='b0 && valid_rounding && inst[25] == ~inst[20]); // FCVT.S.D
    default: False;
  endcase;
	Bool address_is_valid=address_valid(inst[31:20],csrs.csr_misa);
	Bool access_is_valid=valid_csr_access(inst[31:20],inst[19:15], inst[13:12],
                                        	csrs.csr_mstatus[20], csrs.prv);
  Instruction_type inst_type = TRAP;
  case (opcode[4:3])
    'b00: case(opcode[2:0])
        'b000: if(validload) inst_type=MEMORY;      // Load
      `ifdef spfpu
        'b001: if(validFload) inst_type=MEMORY;     // F-Load
      `endif
        'b011: if(funct3==0 || funct3==1) inst_type = MEMORY;    // Fence, FenceI
        'b100: if(validImm) inst_type = ALU;        // OP-Imm
        'b101: inst_type=ALU;                       // AUIPC
      `ifdef RV64
        'b110: if(validImm32) inst_type = ALU;      // Op-IMM32
      `endif
      endcase
    'b01: case(opcode[2:0])
        'b000: if(validStore) inst_type = MEMORY;     // Store
      `ifdef spfpu
        'b001: if(validFStore) inst_type = MEMORY;    // F-Store
      `endif
      `ifdef atomic
        'b011: if(validAtomic) inst_type = MEMORY;    // Atomic
      `endif
        'b100: `ifdef muldiv  if(validMul) inst_type=MULDIV; else `endif  // MULDIV
                if(validOp) inst_type=ALU; // OP
        'b101: inst_type = ALU;
      `ifdef RV64
        'b110: `ifdef muldiv if(validMul32) inst_type=MULDIV; else `endif // MULDIV-32
              if(validOp32) inst_type=ALU; // OP
      `endif
      endcase
  `ifdef spfpu
    'b10: case(opcode[2:0])
      'b000, 'b001, 'b010, 'b011:if(validFNM && valid_rounding) inst_type=FLOAT;
      'b100: if(validFNM && (validFloatOpF || validFloatOpD)) inst_type=FLOAT;
      endcase
  `endif
    'b11: case(opcode[2:0])
      'b000: if(funct3!=2 && funct3!=3) inst_type=BRANCH; // BRANCH
      'b001: if(funct3==0) inst_type=JALR; // JALR
      'b011: inst_type=JAL; // jal
      'b100: case(funct3)
          'b000:  if(inst[31:7]==0) trapcause=(csrs.csr_misa[20]==1 && csrs.prv==User)?`Ecall_from_user:
                                             (csrs.csr_misa[18]==1 && csrs.prv==Supervisor)?`Ecall_from_supervisor:
                                              `Ecall_from_machine;
                  else if(inst[31:7]=='h2000) begin
                  `ifdef debug
                    if( (ebreakm && csrs.prv == Machine) || (ebreaks && csrs.prv == Supervisor) ||
                        (ebreaku && csrs.prv == User)) begin
                      trapcause = `HaltEbreak;
                      trapcause[`causesize - 1] = 1;
                    end
                    else
                  `endif
                    trapcause = `Breakpoint;
                 end
                 // URET op
                 else if(inst[31:20]=='h002 && inst[19:15]==0 && inst[11:7]==0 && csrs.csr_misa[13]==1) inst_type=SYSTEM_INSTR;
              `ifdef supervisor
                // SRET
                 else if(inst[31:20]=='h102 && inst[19:15]==0 && inst[11:7]==0 && csrs.csr_misa[18]==1 &&
                        csrs.prv!=User && (csrs.prv==Machine || (csrs.prv==Supervisor &&
                        csrs.csr_mstatus[22]==0))) inst_type=SYSTEM_INSTR;
              `endif
                // MRET
                else if(inst[31:20]=='h302 && inst[19:15]==0 && inst[11:7]==0 && csrs.prv==Machine)
                        inst_type=SYSTEM_INSTR;
                else if(inst[31:20]=='h105 && inst[19:15]==0 && inst[11:7]==0 ) begin
                   if(csrs.csr_mstatus[21] == 0 || csrs.prv == Machine)
                      inst_type=WFI;
                end
              `ifdef supervisor
                else if(inst[31:25]=='b0001001 && inst[11:7]==0)begin
                  if(csrs.csr_mstatus[20]==0 || csrs.prv == Machine) 
                    inst_type=MEMORY; // SFENCE
                end
              `endif
          default: if(funct3!=0 && funct3!=4 && access_is_valid && address_is_valid)
                    inst_type=SYSTEM_INSTR;
      endcase
    endcase
  endcase
  if(inst[1:0]!='b11 && inst_type != TRAP)begin
    inst_type=TRAP;
    trapcause=`Illegal_inst;
  end

  // checks: TVM=1 TW=1 TSR=0
// --------------------------------------------------------------------------------------------//

    // --------- Function for ALU -------------
    // In case of Atomic operations as well,  the immediate portion will ensure the right opcode is
    // sent to the cache for operations.
		Bit#(4) fn=0;
    `ifdef atomic
    if( opcode==`ATOMIC_op )begin
      if((inst[27]|inst[28]) == 1)
        fn={inst[29:27],1'b1};
      else
        fn={inst[31:29],inst[27]};
    end
    `endif
		if(opcode==`BRANCH_op )begin
			if(funct3[2]==0)
				fn={2'b0,1,funct3[0]};
			else
				fn={1'b1,funct3};
		end
		else if(`ifdef RV64 opcode==`IMM_ARITHW_op || `endif opcode==`IMM_ARITH_op )begin
			fn=case(funct3)
				'b010: 'b1100;
				'b011: 'b1110;
				'b101: if(funct7[5]==1) 'b1011; else 'b0101;
				default:{1'b0,funct3};
			endcase;
		end
		else if(`ifdef RV64 opcode==`ARITHW_op || `endif opcode==`ARITH_op )begin
			fn=case(funct3)
				'b000:if(funct7[5]==1) 'b1010; else 'b0000;
				'b010:'b1100;
				'b011:'b1110;
				'b101:if (funct7[5]==1) 'b1011;else 'b0101;
				default:{1'b0,funct3};
			endcase;
		end
    else if(opcode[4:3]=='b10 && (csrs.csr_misa[5]|csrs.csr_misa[3])==1) // floating point instructions
	  		fn=opcode[3:0];
    // ---------------------------------------

    if(inst_type==SYSTEM_INSTR)
      immediate_value={'d0,inst[19:15],immediate_value[11:0]};// TODO fix this
  `ifdef spfpu
    if(inst_type==FLOAT && funct3=='b111)
      funct3=frm;
  `endif
    Bit#(7) temp1 = {fn,funct3};
    if(inst_type==TRAP)
      temp1=zeroExtend(trapcause);

    Bool rerun = mem_access==Fence || mem_access==FenceI || inst_type==SYSTEM_INSTR
                `ifdef supervisor || mem_access==SFence `endif ;
  `ifdef spfpu
    Bit#(5) rs3=inst[31:27];
 		RFType rs3type=FRF;
    RFType rdtype=IRF;

    if(opcode=='b00001 || (opcode[4:2]=='b101 &&
       funct7[6:3]!='b1010 && funct7[6:3]!='b1100 && funct7[6:3]!='b1110 ) || opcode[4:2]=='b100)
      rdtype=FRF;
    if(!r4type)begin
      rs3type=IRF;
      rs3=0;
    end
  `endif

    let op_addr = OpAddr{rs1addr:rs1, rs2addr:rs2, rd:rd
            `ifdef spfpu ,rs3addr: rs3 `endif };
    let op_type = OpType{rs1type: rs1type, rs2type:rs2type
          `ifdef spfpu ,rs3type: rs3type, rdtype: rdtype `endif };
    let instr_meta = InstrMeta{inst_type: inst_type, memaccess: mem_access,funct:temp1,
                              immediate: immediate_value, rerun:rerun};
    return DecodeOut{op_addr:op_addr, op_type:op_type, meta:instr_meta
                    `ifdef compressed , compressed:False `endif };

  endfunction

  (*noinline*)
  function Bool decode_word32 (Bit#(32) inst, Bit#(1) misa_c);
    Bool word32=False;
    `ifdef RV64
		  Bit#(5) opcode= inst[6:2];
      Bit#(7) funct7 = inst[31:25];
      if(misa_c==1 && inst[1:0]!='b11)begin
        Quadrant quad =unpack(inst[1:0]);
        Bit#(3) funct3 = inst[15:13];
        if( quad ==Q1 && (funct3=='b001 || (funct3=='b100 && inst[12:10]=='b111 && inst[6]=='b0)))
          word32=True;
      end
      else begin
		    Bit#(3) funct3= inst[14:12];
  		  if(opcode==`IMM_ARITHW_op || opcode==`MULDIVW_op ||  opcode==`ARITHW_op ||
            `ifdef spfpu (opcode[4:3]=='b10 && funct7[0]==0)|| `endif
            (opcode[4:1]=='b0101 && funct3[0]==0))
      	word32=True;
      end
    `endif
    return word32;
  endfunction

  function ActionValue#(DecodeOut) decoder_func(Bit#(32) inst, Bool trap
								`ifdef compressed , Bool compressed `endif ,
                Bit#(`causesize) cause, CSRtoDecode csrs, Bool curr_rerun,
                Bool rerun_fencei `ifdef supervisor ,Bool rerun_sfence `endif
                `ifdef debug , DebugStatus debug, Bool step_done `endif ) =  actionvalue
      DecodeOut result_decode = decoder_func_32(inst, csrs `ifdef compressed ,compressed `endif );
      let {icause, takeinterrupt} = chk_interrupt( csrs.prv, csrs.csr_mstatus,
          csrs.csr_mip, csrs.csr_mie `ifdef non_m_traps ,csrs.csr_mideleg `endif
        `ifdef supervisor
          ,csrs.csr_sip, csrs.csr_sie `ifdef usertraps ,csrs.csr_sideleg `endif
        `endif
        `ifdef usertraps
          ,csrs.csr_uip, csrs.csr_uie
        `endif
        `ifdef debug
          ,debug, step_done
        `endif );
      Bit#(7) func_cause=result_decode.meta.funct;
      Instruction_type x_inst_type = result_decode.meta.inst_type;
      Op1type x_rs1type = result_decode.op_type.rs1type;
      Op2type x_rs2type = result_decode.op_type.rs2type;
      Bit#(5) x_rs1addr = result_decode.op_addr.rs1addr;
      Bit#(5) x_rs2addr = result_decode.op_addr.rs2addr;

      if(curr_rerun)begin
        x_inst_type=TRAP;
        func_cause=rerun_fencei?`IcacheFence : `ifdef supervisor rerun_sfence?`SFence: `endif `Rerun ;
        result_decode.meta.rerun=False;
      end
      else if(takeinterrupt)begin
        func_cause=zeroExtend(icause);
        x_inst_type=TRAP;
      end
      else if(trap) begin
        x_inst_type=TRAP;
        func_cause = zeroExtend(cause) ;
      end

      if(x_inst_type == TRAP)begin
        x_rs2addr=0;
        x_rs1addr=0;
        x_rs2type=IntegerRF;
        if(func_cause == `Inst_access_fault
            `ifdef supervisor ||  func_cause==`Inst_pagefault `endif )
          x_rs1type=PC;
        else
          x_rs1type=IntegerRF;
      end
      result_decode.meta.inst_type=x_inst_type;
      result_decode.meta.funct=func_cause;
      result_decode.op_type.rs1type=x_rs1type;
      result_decode.op_type.rs2type=x_rs2type;
      result_decode.op_addr.rs1addr=x_rs1addr;
      result_decode.op_addr.rs2addr=x_rs2addr;
      return result_decode;

  endactionvalue;
endpackage
