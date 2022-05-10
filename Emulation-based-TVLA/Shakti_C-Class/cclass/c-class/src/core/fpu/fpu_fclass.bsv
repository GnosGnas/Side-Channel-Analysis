/*
Authors     : Vinod.G, Renuka Venkat
Email       : g.vinod1993@gmail.com
Last Update : 27th November 2017
See License for More Details
Description:
This module examines the floating point input and outputs the class of floating point number. The corresponding bit of the output register is set according to the class of instructions given by the table below,
                           bit                  Class
                            0                   Negative Infinity
                            1                   Negative Normal Number 
                            2                   Negative Subnormal Number
                            3                   Negative Zero
                            4                   Positive Zero
                            5                   Positive Subnormal Number
                            6                   Positive Normal Number
                            7                   Positive Infinity
                            8                   Signaling NaN
                            9                   Quiet NaN

The module examines and finds the class as follows 
Sign	Exponent (e)	Fraction (f)	Value
0	00⋯00	          00⋯00	        +0

0	00⋯00	          00⋯01        Positive Denormalized Real
                          ⋮                   0.f × 2(−b+1)
                          11⋯11	

0       00⋯01             XX⋯XX	       Positive Normalized Real
           ⋮                                   1.f × 2(e−b)                         
        11⋯10	            

0	11⋯11	          00⋯00	        +∞

0	11⋯11	          00⋯01        SNaN
                          ⋮
                          01⋯11	

0	11⋯11	          1X⋯XX	       QNaN


1	00⋯00	          00⋯00	       −0

1	00⋯00	          00⋯01        Negative Denormalized Real
                          ⋮                   −0.f × 2(−b+1)
                          11⋯11	

1	00⋯01             XX⋯XX	       Negative Normalized Real
        ⋮                                      −1.f × 2(e−b)
        11⋯10	

1	11⋯11	          00⋯00	       −∞

1	11⋯11	          00⋯01        SNaN
                          ⋮
                          01⋯11	

1	11⋯11	          1X⋯XX	       QNaN

*/


package fpu_fclass;

import common_types::*;
`include "common_params.bsv"	
`include "fpu.defines"	

interface Ifc_fpu_fclass#(numeric type fpinp, numeric type fpman, numeric type fpexp);
	method ActionValue#(Floating_output#(fpinp)) _start(Bit#(1) sign1,Bit#(fpman)mantissa,Bit#(fpexp)exponent, Bit#(5) flags);
endinterface

`ifdef fpu_hierarchical
interface Ifc_fpu_fclass32;
	method ActionValue#(Floating_output#(32)) _start(Bit#(1) sign1,Bit#(23)mantissa,Bit#(8)exponent, Bit#(5) flags);
endinterface

interface Ifc_fpu_fclass64;
	method ActionValue#(Floating_output#(64)) _start(Bit#(1) sign1,Bit#(52)mantissa,Bit#(11)exponent, Bit#(5) flags);
endinterface
`endif

module mkfpu_fclass(Ifc_fpu_fclass#(fpinp,fpman,fpexp))
	provisos (
		Add#(TAdd#(fpexp,fpman),1,fpinp),	                //Defining fpinp to be fpexp + fpman + 1
		Add#(fpexp,2,fpexp2),
    Add#(a__, 10, fpinp)
		 );

	let fPINP  = valueOf(fpinp);
	let fPMAN  = valueOf(fpman);
	let fPEXP  = valueOf(fpexp);

	method ActionValue#(Floating_output#(fpinp)) _start(Bit#(1) sign1,Bit#(fpman)mantissa,Bit#(fpexp)exponent, Bit#(5) flags);
	
		Bit#(10) result_fclass;
        Bool sbit = (sign1==1);
        Bool inf  = (flags[1]==1);
        Bool normal = (flags == '0);
        Bool subnormal = (flags[4] == 1);
        Bool zero    = (flags[3] == 1);
		if(sbit && inf)  //negtive infinity
		begin	
		result_fclass = 'd1;	
		end

		else if(sbit && normal)  //negative normal
		begin	
		result_fclass = 'd2;
	    end
		
		else if(sbit && subnormal) //negative subnormal
		begin	
		result_fclass = 'd4;
		end

		else if(sbit && zero)  //-0
		begin
		result_fclass = 'd8;
		end

		else if(!sbit && zero) // +0
		begin
		result_fclass = 'd16;
		end

		else if( !sbit && subnormal) //positive subnormal	
		begin	
		result_fclass = 'd32;
	    end

		else if(!sbit && normal)  //positive normal
		begin
		result_fclass = 'd64;
		end

		else if(!sbit && inf) //positive infinity
		begin
		result_fclass = 'd128;	
		end

		else if (flags[0]==1) //Signaling NaN	
		begin
  		result_fclass = 'd256; 
		end

		else  //quiet NaN	
		begin
		  result_fclass = 'd512; 
		end

			

		return Floating_output { 
			final_result : zeroExtend(result_fclass),
			fflags: 5'b0 };
	endmethod
endmodule

`ifdef fpu_hierarchical
(*synthesize*)
module mkfpu_fclass32(Ifc_fpu_fclass32);
    Ifc_fpu_fclass#(32,23,8) uut <- mkfpu_fclass();
	method ActionValue#(Floating_output#(32)) _start(Bit#(1) sign1,Bit#(23)mantissa,Bit#(8)exponent, Bit#(5) flags);
        let x <- uut._start(sign1,mantissa,exponent,flags);
        return x;
    endmethod
endmodule

(*synthesize*)
module mkfpu_fclass64(Ifc_fpu_fclass64);
    Ifc_fpu_fclass#(64,52,11) uut <- mkfpu_fclass();
	method ActionValue#(Floating_output#(64)) _start(Bit#(1) sign1,Bit#(52)mantissa,Bit#(11)exponent, Bit#(5) flags);
        let x <- uut._start(sign1,mantissa,exponent,flags);
        return x;
    endmethod
endmodule
`endif

// (*synthesize*)
// 	module mkTb_fpu_fclass();
// 	Ifc_fpu_fclass#(32,23,8) inst_fpu_fclass <- mkfpu_fclass();
// 	Reg#(Bit#(32)) rg_clock <- mkReg(0);
// 	Reg#(Bit#(32)) rg_operand1<-mkReg('h7f8ff000); //positive normal set 6

// 	rule get_input(rg_clock == 0);
// 		inst_fpu_fclass._start(rg_operand1);
// 		rg_clock <= rg_clock + 1;
// 	endrule

// 	rule get_output;
// 		let lv_result = inst_fpu_fclass.result_();  
// 		`ifdef verbose $display("Result is: %h",lv_result.final_result); `endif
// 		$finish(0);
// 	endrule

// endmodule		 

endpackage
