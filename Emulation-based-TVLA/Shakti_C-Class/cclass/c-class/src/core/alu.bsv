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

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR
IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
--------------------------------------------------------------------------------------------------

Module name : Riscv_arithmetic_unit.
author name : Neel Gala, Aditya Mathur
Email id : neelgala@gmail.com

This module is the arithmetic execution unit for the RISCV ISA.
It is a 64 bit implementation which is named as RV64.  The instruction with a "W" are RV64
instructions which ignore the upper 32 bits and operate on the lower 32 bits.
The arithmetic unit is implemented as a single case statement where the instruction bits define
the various operations to be executed.


*/

package alu;

  import Vector :: *;

`ifdef muldiv
  import mbox :: * ;
`endif

`ifdef spfpu
  import fpu::*;
`endif

  import common_types::*;
  import BUtils :: * ;
  `include "common_params.bsv"

`ifdef triggers
  function Tuple2#(Bool, Bit#(`causesize)) check_for_triggers(
                                                        Vector#(`trigger_num, TriggerData) tdata1,
                                                        Vector#(`trigger_num, Bit#(XLEN)) tdata2,
                                                        Vector#(`trigger_num, Bool) tenable,
                                                        Bit#(`vaddr) address, Bit#(XLEN) data,
                                                        Access_type  memaccess, Bit#(2) size );

    Bool trap = False;
    Bool chain = False;
    Bit#(`causesize) cause = `Breakpoint;
    Bit#(XLEN) compare_value ;
    for(Integer i=0; i<`trigger_num; i=i+1)begin
      if(tenable[i] &&& ((!trap && !chain) || (chain && trap))
                    &&& tdata1[i] matches tagged MCONTROL .mc
                    &&& ((mc.load == 1 && memaccess == Load && mc.select == 0) ||
                         (mc.store == 1 && memaccess == Store))
                    &&& ( mc.size ==0 || (mc.size == 1 && size == 0)
                        ||(mc.size == 2 && size == 1)
                        ||(mc.size == 3 && size == 2)
                      `ifdef RV64 || (mc.size == 5 && size == 3) `endif )
                    ) begin
        Bit#(XLEN) trigger_compare = tdata2[i];
        if(mc.select == 0)
          compare_value = address;
        else
          compare_value = data;
        if(mc.matched == 0)begin
          if(trigger_compare == compare_value)
            trap = True;
          else if(chain)
            trap = False;
        end
        if(mc.matched == 2)begin
          if(compare_value >= trigger_compare)
            trap = True;
          else if(chain)
            trap = False;
        end
        if(mc.matched == 3)begin
          if(compare_value < trigger_compare)
            trap = True;
          else if(chain)
            trap = False;
        end
      `ifdef debug
        if(trap && mc.action_ == 1)begin
          cause = `HaltTrigger;
          cause[`causesize - 1] = 1;
        end
      `endif
        chain = unpack(mc.chain);
      end
    end

    return tuple2(trap, cause);
  endfunction
`endif


	(*noinline*)
	function ALU_OUT fn_alu (Bit#(4) fn, Bit#(XLEN) op1, Bit#(XLEN) op2, Bit#(`vaddr) op3,
                           Bit#(`vaddr) effective_address, Instruction_type inst_type, Bit#(2) funct3
                           `ifdef RV64 , Bool word32 `endif  ,Bit#(1) misa_c
                         `ifdef triggers
                           ,Vector#(`trigger_num, TriggerData) tdata1
                           ,Vector#(`trigger_num, Bit#(XLEN))  tdata2
                           ,Vector#(`trigger_num, Bool)        tenable
                         `endif
                         `ifdef bpu , Bit#(`vaddr) nextpc, Bit#(1) prediction
                            `ifdef compressed ,Bool comp `endif
                         `endif );

    /*---------------------------- Perform all the arithmetic --------------------------------*/
    // ADD * ADDI * SUB*
    Bit#(TAdd#(XLEN, 1)) inv = duplicate(pack(fn[1]));
    let inv_op2 = {op2,1'b0}^inv;
    let op1_xor_op2 = op1^op2;
    Bit#(XLEN) adder_output = truncateLSB({op1,1'b1} + inv_op2);
    Bit#(1) adder_z_flag = ~|op1_xor_op2;
    // ---------------------------------------------------------------------------------------- //

    // ------------------------------- comparison based operations ---------------------------- //
    // SLT SLTU
    Bit#(1) sign = ~fn[1];
    Int#(TAdd#(XLEN, 1)) a = unpack({sign & op1[valueOf(XLEN)-1], op1});
    Int#(TAdd#(XLEN, 1)) b = unpack({sign & op2[valueOf(XLEN)-1], op2});
    Bool less = a < b;
    Bit#(1) branch_taken = case (fn)
      `FNSEQ : adder_z_flag;
      `FNSNE : ~adder_z_flag;
      `FNSLT, `FNSLTU : pack(less);
      default: pack(!less);
    endcase;
    // ---------------------------------------------------------------------------------------- //

    // ----------------------------- Shift based operations ----------------------------------- //
    // SLL SRL SRA
    //word32 is bool, shift_amt is used to describe the amount of shift
  `ifdef RV64
	  Bit#(6) shift_amt={((!word32) ? op2[5] : 0), op2[4 : 0]};
		Bit#(TDiv#(XLEN, 2)) upper_bits = word32 ? signExtend(fn[3] & op1[31]) : op1[63 : 32];
		Bit#(XLEN) shift_inright={upper_bits, op1[31 : 0]};//size of 64 bit
  `else
    Bit#(5) shift_amt = op2[4 : 0];
    Bit#(XLEN) shift_inright = zeroExtend(op1[31 : 0]);//size of 32bit
  `endif
	  let shin = (fn==`FNSR || fn==`FNSRA) ? shift_inright : reverseBits(shift_inright);
	  Int#(TAdd#(XLEN, 1)) t = unpack({(fn[3] & shin[valueOf(XLEN) - 1]), shin});
	  Int#(XLEN) shift_r = unpack(pack(t>>shift_amt)[valueOf(XLEN) - 1 : 0]);//shift right by shift_amt
	  let shift_l = reverseBits(pack(shift_r));//shift left
    // ---------------------------------------------------------------------------------------- //

    // ----------------------------- Mux for final output ------------------------------------ //
    Bit#(XLEN) final_output = case(fn)
      `FNADD, `FNSUB: adder_output;
      `FNSLT, `FNSGE, `FNSLTU, `FNSGEU: zeroExtend(pack(less));
      `FNSR, `FNSRA: pack(shift_r);
      `FNSL: pack(shift_l);
      `FNOR: (op1 | op2);
      `FNAND: (op1 & op2);
      default: op1_xor_op2;
    endcase;

    `ifdef RV64
  		if(word32)
	  		 final_output = signExtend(final_output[31 : 0]);
    `endif
    // ---------------------------------------------------------------------------------------- //
    // ------------------------- Exception detection ------------------------------------------- //
    Bool trap = ( effective_address[1] != 0 && misa_c == 0 &&
                       (inst_type == JALR || inst_type == JAL ||
                       (inst_type == BRANCH && branch_taken == 1)));
    // ----------------------------------------------------------------------------------------- //
    // --------------------------- Check for redirection -------------------------------------- //
    Bool flush = False;

    Bit#(`vaddr) redirect_pc = effective_address;
  `ifndef bpu
    if((inst_type == BRANCH && branch_taken == 1) || inst_type == JALR || inst_type == JAL )
	  	flush = True && !trap;
  `else
    Bit#(`vaddr) incr_value =`ifdef compressed comp ? 2: `endif 4;
    if(inst_type == BRANCH && branch_taken == 0)begin
      redirect_pc = op3 + incr_value;
    end
    if( (inst_type == BRANCH  && branch_taken != prediction) ||
        ( (inst_type == JALR || inst_type == JAL ) && nextpc != effective_address) )begin
	    flush = True && !trap;
    end
  `endif
    // --------------------------------------------------------------------------------------- //

    // ------------------------ check for load/store triggers ---------------------------------//
  `ifdef triggers
    // TODO. This can be moved to stage3 itself.
    let {trig_trap, trig_cause} = check_for_triggers(tdata1, tdata2, tenable, effective_address,
                                                     op2, memaccess, funct3[1:0]);
    if(inst_type == MEMORY && trig_trap)begin
      trap = True;
      cause = trig_cause;
    end
  `endif

    return ALU_OUT{trap           : trap,
                   aluresult      : zeroExtend(final_output),
                   redirect_pc    : redirect_pc,
                   redirect       : flush
                `ifdef bpu
                   ,branch_taken  : unpack(branch_taken)
                `endif };
	endfunction

`ifdef multicycle
  interface Ifc_multicycle_alu;
    /*doc:method: */
    method Action ma_inputs (Bit#(4) fn, Bit#(3) funct3, Bit#(ELEN) op1, Bit#(ELEN) op2,
                            Bit#(`vaddr) op3, Instruction_type inst_type
                            `ifdef RV64 , Bool word32 `endif );
    // method to send the output from the muldiv or fpu when outputs are ready
		method XBoxOutput mv_delayed_output;//returning the result

  `ifdef arith_trap
    //Read csr_reg to check if arith_exception is enabled
    method  Action ma_arith_trap_en(Bit#(1) en);
  `endif
  endinterface: Ifc_multicycle_alu

  (*synthesize*)
  module mkmulticycle_alu#(parameter Bit#(XLEN) hartid) (Ifc_multicycle_alu);
    // ------------------------ Start Instantiations ------------------------------------------- //
    // instantiate mul - div module if M extension enabled.
    `ifdef muldiv
      Ifc_mbox mbox <- mkmbox(hartid);
    `endif

    // instantiate fpu if F / D extension enabled
    `ifdef spfpu
      Ifc_fpu fpu <- mkfpu();
    `endif
    // ---------------------------------------------------------------------------------------- //

    // ------------------------------------------ rules --------------------------------------- //

    // Descriptions : This rule will send the inputs either to muldiv unit, fpu unit or the alu unit
    // depending on the instruction type. In case M, F, D extensions are all disabled then this
    // method acts as a single cycle ALU
    method Action ma_inputs (Bit#(4) fn, Bit#(3) funct3, Bit#(ELEN) op1, Bit#(ELEN) op2,
                            Bit#(TMax#(`vaddr,FLEN)) op3, Instruction_type inst_type
                            `ifdef RV64 , Bool word32 `endif );
      // send inputs to the muldiv unit and send a stall signal to the execute stage.
      `ifdef muldiv
        if(inst_type == MULDIV)begin
          mbox.ma_inputs( op1, op2, funct3 `ifdef RV64 ,word32 `endif );
        end
      `endif

      // send inputs to the float unit and send a stall signal to the execute stage.
      `ifdef spfpu
        if(inst_type == FLOAT)begin
          `ifndef dpfpu
            Bool word32 = True;
          `endif
          fpu._start(op1, op2, op3, fn, op3[11 : 5], funct3, op3[1 : 0],word32);
        end
      `endif
    endmethod

    // Descriptions : This method will respond to the execute stage with the output either from the
    // muldiv unit or the floating point unit.
		method XBoxOutput mv_delayed_output ;
    `ifdef spfpu
      if(fpu.get_result.valid)
        return fpu.get_result;
      else
    `endif
        return mbox.mv_output;
    endmethod

  `ifdef arith_trap
    method  Action ma_arith_trap_en(Bit#(1) en);
      mbox.ma_arith_trap_en(en);
    `ifdef spfpu
      fpu.rd_arith_excep_en(en);
    `endif
    endmethod
  `endif
  endmodule: mkmulticycle_alu
`endif

endpackage : alu
//    if((memaccess != Fence && memaccess != FenceI) &&
//        inst_type == MEMORY && (   (funct3[1 : 0] == 1 && effective_address[0] != 0)
//                              || (funct3[1 : 0] == 2 && effective_address[1 : 0] != 0)
//                  `ifdef RV64 || (funct3[1 : 0] == 3 && effective_address[2 : 0] != 0) `endif ) )begin
//      cause = memaccess == Load ? cause: `Store_addr_misaligned;
//      trap = True;
//    end
