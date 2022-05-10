/*
Authors     : Vinod.G, Aditya Govardhan
Email       : g.vinod1993@gmail.com
Last Update : 27th November 2017
See LICENSE for more details

Description:
This module performs the sign injection on the floating point value taken from the rs1 register.
The different instructions work as follows
FSGNJ : Operation bit - 000, The final result is same as that of operand1 but has the sign of operand 2's sign.
FSGNJN :  Operation bit - 001, The final result is same as that of operand 1 but has the opposite sign of operand 2's sign
FSGNJX : Operation bit - 010, The final result is same as that of operand 1 but the sign bit is the exclusive-or of operand 1 and operand 2
*/

package fpu_sign_injection;

import common_types::*;
`include "common_params.bsv"
`include "fpu.defines"

interface Ifc_fpu_sign_injection#(numeric type fpinp, numeric type fpman, numeric type fpexp);
	method ActionValue#(Floating_output#(fpinp)) _start(Bit#(fpinp) operand1, Bit#(fpinp) operand2, Bit#(3) operation);
endinterface

`ifdef fpu_hierarchical
interface Ifc_fpu_sign_injection32;
	method ActionValue#(Floating_output#(32)) _start(Bit#(32) operand1, Bit#(32) operand2, Bit#(3) operation);
endinterface

interface Ifc_fpu_sign_injection64;
	method ActionValue#(Floating_output#(64)) _start(Bit#(64) operand1, Bit#(64) operand2, Bit#(3) operation);
endinterface
`endif


module mkfpu_sign_injection(Ifc_fpu_sign_injection#(fpinp,fpman,fpexp))
	provisos (
		 Add#(TAdd#(fpexp,fpman),1,fpinp),	                //Defining fpinp to be fpexp + fpman + 1
       Add#(fpexp,2,fpexp2)
		 );

   let fPINP  = valueOf(fpinp);

	method ActionValue#(Floating_output#(fpinp)) _start(Bit#(fpinp) operand1, Bit#(fpinp) operand2, Bit#(3) operation);

     if(operation == 3'b000)                           //FSGNJ
	    operand1[fPINP-1] = operand2[fPINP-1];
	 else if(operation == 3'b001)			   //FSNGNJN
	    operand1[fPINP-1] = ~operand2[fPINP-1];
	 else 						   //FSGNJX
	    operand1[fPINP-1] = operand1[fPINP-1]^operand2[fPINP-1];

		Bit#(5) lv_exception = 0;

	return Floating_output { 
		final_result : zeroExtend(operand1),
		fflags : lv_exception};
	endmethod
endmodule


`ifdef fpu_hierarchical
    (*synthesize*)
    module mkfpu_sign_injection32(Ifc_fpu_sign_injection32);
        Ifc_fpu_sign_injection#(32,23,8) uut <- mkfpu_sign_injection();
    	method ActionValue#(Floating_output#(32)) _start(Bit#(32) operand1, Bit#(32) operand2, Bit#(3) operation);
               let x <- uut._start(operand1,operand2,operation);
               return x;
        endmethod 
    endmodule
    
    (*synthesize*)
    module mkfpu_sign_injection64(Ifc_fpu_sign_injection64);
        Ifc_fpu_sign_injection#(64,52,11) uut <- mkfpu_sign_injection();
        method ActionValue#(Floating_output#(64)) _start(Bit#(64) operand1, Bit#(64) operand2, Bit#(3) operation);
            let x <- uut._start(operand1,operand2,operation);
            return x;
        endmethod
    endmodule
`endif

// module mkTb_fpu_sign_injection();
// Ifc_fpu_sign_injection#(32,23,8) inst_fpu_sign_injection <- mkfpu_sign_injection();
// Reg#(Bit#(32)) rg_clock <- mkReg(0);
// Reg#(Bit#(32)) rg_operand1<-mkReg('hff800000); 
// Reg#(Bit#(32)) rg_operand2<-mkReg('hff800000); 

// rule get_input(rg_clock == 0);
// inst_fpu_sign_injection._start(rg_operand1,rg_operand2,'b000);
// rg_clock <= rg_clock + 1;
// endrule

// rule get_output;
// let lv_result = inst_fpu_sign_injection.result_();  
// `ifdef verbose $display("Result is: %h",lv_result.final_result); `endif
// `ifdef verbose $display("Sign=%b Exponent=%b Mantissa=%b",lv_result.final_result[31],lv_result.final_result[30:23],lv_result.final_result[22:0]); `endif
// $finish(0);
// endrule



// endmodule		 
endpackage
