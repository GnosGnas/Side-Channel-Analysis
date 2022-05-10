/*
Authors     : Vinod.G
Email       : g.vinod1993@gmail.com
Last Update : 27th November 2017
See LICENSE for more details
Description :
TODO
*/

package fpu_dp_to_int;

import common_types::*;
import UniqueWrappers::*;
`include "common_params.bsv"
`include "fpu.defines"
interface Ifc_fpu_dp_to_int;
	method ActionValue#(Floating_output#(ELEN)) _start(Bit#(1) sign,Bit#(11) exponent, Bit#(52) mantissa,  bit convert_unsigned, bit convert_long, Bit#(3) rounding_mode, Bit#(5) flags);
endinterface

`ifdef fpu_hierarchical
(*synthesize*)
`endif
module mkfpu_dp_to_int(Ifc_fpu_dp_to_int);
	method ActionValue#(Floating_output#(ELEN)) _start(Bit#(1) lv_sign,Bit#(11) lv_exponent, Bit#(52) lv_mantissa,  bit convert_unsigned, bit convert_long, Bit#(3) rounding_mode, Bit#(5) flags);
		bit lv_overflow = 0;
		bit lv_zero = flags[3];
		bit lv_infinity = flags[1];
        bit lv_invalid = flags[0] | flags[2];
        bit lv_denormal = flags[4];
        bit lv_manzero = |lv_mantissa;
        bit lv_inexact = 0;
        Bool to_round = False;
        Bool rne = (rounding_mode == 3'b000);
        Bool rtz = (rounding_mode == 3'b001);
        Bool rdn = (rounding_mode == 3'b010);
        Bool rup = (rounding_mode == 3'b011);
        Bool rmm = (rounding_mode == 3'b100);
        Bit#(12) lv_exp = {1'b0,lv_exponent};
		`ifdef verbose $display("sign = %b exponent = %h mantissa = %h zero_flag = %b invalid_flag = %b infinity: %b Denormal : %b", lv_sign, lv_exponent, lv_mantissa, lv_zero, lv_invalid, lv_infinity, lv_denormal); `endif
		Int#(11) lv_original_exponent = unpack(truncate(lv_exp - 1023));  // removing the bias
        `ifdef verbose $display("lv_original_exponent : %d flags: %b",lv_original_exponent,flags); `endif
        Bit#(ELEN) final_result = 0;
		Bit#(TAdd#(52, ELEN)) final_man = {'0,1'b1,lv_mantissa};
        
        if(lv_zero == 1)
           final_result = 0;
       else if(lv_denormal == 1 || (lv_original_exponent <= -1 && (lv_infinity|lv_invalid) == 0)) begin
         if(lv_sign==1 && convert_unsigned==1 && ((lv_original_exponent==-1 && (rmm||(rne && lv_manzero==1))) || (lv_original_exponent<=-1 &&rdn)))
             lv_invalid = 1;
          else
             lv_inexact = 1;
           if(lv_sign == 0 && rup)
               final_result = 1;
           else if(rdn && lv_sign == 1 && convert_unsigned == 0)
               final_result = '1;
           else if(lv_original_exponent == -1 && (rmm||(rne && lv_manzero == 1)))begin
               if(lv_sign == 0)
                   final_result = 1;
               else if(convert_unsigned == 0)
                   final_result = '1;
               else
                   final_result = 0;
           end
           else
               final_result = 0;
       end
        else if(convert_long == 0) begin         //FCVT.W.D FCVT.WU.D
            if(convert_unsigned == 0) begin //FCVT.W.D
                Bit#(31) all_ones = '1;
                if(lv_infinity == 1 || lv_invalid == 1) begin
                   final_result = (lv_sign==1) ?(lv_invalid==1? zeroExtend(all_ones) : signExtend(32'h80000000)) : zeroExtend(all_ones); 
                end
               else if(lv_original_exponent < 'd31) begin
                   final_man = final_man << lv_original_exponent;
                   Bit#(32) y = final_man[83:52];
                   final_result = signExtend(y);
                   lv_mantissa = final_man[51:0];
                   to_round = True;
               end
               else if(lv_original_exponent >= 'd31) begin
                   `ifdef verbose $display("Overflow");`endif
                   //lv_overflow = 1;
                     lv_invalid = 1;
                   if(lv_sign == 0)
                    final_result = zeroExtend(all_ones);
                   else begin
                       if(lv_original_exponent == 'd31 && lv_manzero == 0)
                           lv_invalid = 0;
                    final_result = signExtend(32'h80000000);
                   end
               end
            end
            else begin     //FCVT.WU.D
               Bit#(32) all_ones = '1;
               if(lv_infinity == 1 || lv_invalid == 1)
                   final_result = (lv_sign==1) ? (lv_invalid==1? signExtend(all_ones) : '0) : signExtend(all_ones); 
               else if(lv_original_exponent < 'd32) begin
                   final_man = final_man << lv_original_exponent;
                   Bit#(32) y = final_man[83:52];
                   `ifdef verbose $display("final_man = %d",final_man); `endif
                   final_result = signExtend(y);
                   lv_mantissa = final_man[51:0];
                   to_round = True;
               end
               else if(lv_original_exponent >= 'd32) begin
                   `ifdef verbose $display("Overflow");`endif
                   //lv_overflow = 1;
                     lv_invalid = 1;
                   if(lv_sign == 0)
                    final_result = signExtend(all_ones);
                   else
                    final_result = '0;
               end
            end
        end
        else begin
            if(convert_unsigned == 0) begin //FCVT.L.D
                Bit#(63) all_ones = '1;
               if(lv_infinity == 1 || lv_invalid == 1)
                   final_result = (lv_sign==1) ?(lv_invalid==1? zeroExtend(all_ones) : signExtend(64'h8000000000000000)) : zeroExtend(all_ones); 
               else if(lv_original_exponent < 'd63) begin
                   final_man = final_man << lv_original_exponent;
                   `ifdef verbose $display("final_man : %b",final_man);`endif
                   Bit#(64) y = zeroExtend(final_man[115:52]);
                   final_result = y;
                   lv_mantissa = final_man[51:0];
                   to_round = True;
               end
               else if(lv_original_exponent >= 'd63) begin
                   `ifdef verbose $display("Overflow");`endif
                   //lv_overflow = 1;
                     lv_invalid = 1;
                   if(lv_sign == 0)
                    final_result = zeroExtend(all_ones);
                   else begin
                       if(lv_original_exponent == 'd63 && lv_manzero == 0)
                           lv_invalid = 0;
                    final_result = signExtend(64'h8000000000000000);
                   end
               end
            end
            else begin     //FCVT.LU.D
               Bit#(64) all_ones = '1;
               if(lv_infinity == 1 || lv_invalid == 1)
                   final_result = (lv_sign==1) ? (lv_invalid==1? signExtend(all_ones) : '0) : signExtend(all_ones); 
               else if(lv_original_exponent < 'd64) begin
                   final_man = final_man << lv_original_exponent;
                   `ifdef verbose $display("final_man = %d",final_man); `endif
                   Bit#(64) y = zeroExtend(final_man[115:52]);
                   final_result = y;
                   lv_mantissa = final_man[51:0];
                   to_round = True;
               end
               else if(lv_original_exponent >= 'd64) begin
                   `ifdef verbose $display("Overflow");`endif
                   //lv_overflow = 1;
                    lv_invalid = 1;
                   if(lv_sign == 0)
                    final_result = signExtend(all_ones);
                   else
                    final_result = '0;
               end
            end

        end
 
		bit lv_guard = lv_mantissa[51];	        //MSB of the already shifted mantissa is guard bit
    	bit lv_round = lv_mantissa[50];	        //next bit is round bit
    	bit lv_sticky = |(lv_mantissa<<2);		//remaining bits determine the sticky bit
	    bit lv_round_up = 0;
    	bit lv_inexact1 = lv_guard | lv_round | lv_sticky;
        if(to_round) begin
	    if(rne) 		lv_round_up = lv_guard & (final_result[0] | lv_round | lv_sticky);	//Round to nearest ties to even
	    else if(rmm) lv_round_up = lv_guard; //& (lv_round | lv_sticky | ~lv_sign);			//Round to nearest ties to max magnitude
	    else if(rdn) lv_round_up = lv_inexact1 & (lv_sign);								//Round down to -infinity
	    else if(rup) lv_round_up = lv_inexact1 & (~lv_sign);								//Round up to +infinity
        lv_inexact = lv_inexact | lv_inexact1;
        `ifdef verbose $display("lv_inexact: %b lv_guard: %b lv_round : %b lv_sticky: %b lv_sign %b",lv_inexact,lv_guard,lv_round,lv_sticky,lv_sign); `endif
            if(lv_round_up == 1) begin 
                lv_invalid = 1;
                if(convert_long == 0 && convert_unsigned == 0 && lv_original_exponent == 30 && final_result[30:0] == '1 && lv_sign == 0)  //Overflow..  Beyond representable number after rounding
                        final_result = 64'h7fffffff;
                else if(convert_long == 0 && convert_unsigned == 1 && lv_original_exponent == 31 && final_result[31:0] == '1 && lv_sign == 0)
                    final_result = 64'hffffffffffffffff; //Should verify again
                else if(convert_long == 1 && convert_unsigned == 0 && lv_original_exponent == 62 && final_result[62:0] == '1 && lv_sign == 0)  //Overflow..  Beyond representable number after rounding
                        final_result = 64'h7fffffffffffffff;
                else if(convert_long == 1 && convert_unsigned == 1 && lv_original_exponent == 63 && final_result[63:0] == '1 && lv_sign == 0)
                    final_result = 64'hffffffffffffffff;                
                else begin
                lv_invalid = 0;
				final_result = final_result + 1;
                if(convert_long == 0 && final_result[31]==1)
                    final_result = signExtend(final_result[31:0]);
                end
            end
        `ifdef verbose $display("rounding_mode == %b",rounding_mode); `endif
		`ifdef verbose $display("round_up = %b", lv_round_up); `endif

			if(convert_unsigned == 0 && lv_sign == 1)begin		//Negating the output if floating point number is negative and converted to signed word/long
				final_result = ~final_result + 1;
				if(convert_long == 0 && final_result[31]==1)
                    final_result = signExtend(final_result[31:0]);
                `ifdef verbose $display("Negating output final_result : %b", final_result); `endif
			end
            else if(convert_unsigned == 1 && lv_sign == 1) begin	//TODO What happens when negative floating point is converted to unsigned int, right now rounded to zero
				final_result = 0;
                lv_invalid = 1;
            end
		end
    if((lv_invalid|lv_infinity) == 1) begin  //What about Quiet NaN?? What does the Spec Say?
            lv_overflow = 0;
            lv_inexact = 0;
    end
Bit#(5) fflags={lv_invalid|lv_infinity,1'b0,lv_overflow,1'b0,lv_inexact};
		return  Floating_output{
										final_result: final_result,
										fflags: fflags};


    endmethod
endmodule
module mkTb(Empty);

    function Tuple3#(Bit#(5), Bit#(5), Bit#(5)) condFlags (Tuple2#(Bit#(m), Bit#(e)) x, Tuple2#(Bit#(m), Bit#(e)) y, Tuple2#(Bit#(m),Bit#(e)) z);
        let s = valueOf(m);
        let man1  = tpl_1(x);
        let expo1 = tpl_2(x);
        let man2  = tpl_1(y);
        let expo2 = tpl_2(y);
        let man3  = tpl_1(z);
        let expo3 = tpl_2(z);
        Bit#(5) flags1, flags2,flags3;
        Bool expZ1 = (expo1 == 0);
        Bool manZ1 = (man1  == 0);
        Bool expO1 = (expo1 == '1);
        Bool manO1 = (man1  == '1);
        Bool topB1 = (man1[s-1] == 1);
        Bool expZ2 = (expo2 == 0);
        Bool manZ2 = (man2  == 0);
        Bool expO2 = (expo2 == '1);
        Bool manO2 = (man2  == '1);
        Bool topB2 = (man2[s-1] == 1 && man2 !=0);
        Bool expZ3 = (expo3 == 0);
        Bool manZ3 = (man3  == 0);
        Bool expO3 = (expo3 == '1);
        Bool manO3 = (man3  == '1);
        Bool topB3 = (man3[s-1] == 1 && man3 !=0);
        flags1 = {pack(expZ1 && !manZ1),pack(manZ1 && expZ1),pack(expO1 && topB1),pack(expO1 && manZ1),pack(expO1 && !topB1 && !manZ1)}; //Denormal, isZero, QNaN, Infinity, SNaN
        flags2 = {pack(expZ2 && !manZ2),pack(manZ2 && expZ2),pack(expO2 && topB2),pack(expO2 && manZ2),pack(expO2 && !topB2 && !manZ2)}; //Denormal, isZero, QNaN, Infinity, SNaN
        flags3 = {pack(expZ3 && !manZ3),pack(manZ3 && expZ3),pack(expO3 && topB3),pack(expO3 && manZ3),pack(expO3 && !topB3 && !manZ3)}; //Denormal, isZero, QNaN, Infinity, SNaN
        return tuple3(flags1,flags2,flags3);
    endfunction

    function Tuple3#(Bit#(m),Bit#(m), Bit#(m)) getMantissa (Bit#(n) op1, Bit#(n) op2, Bit#(n) op3)
        provisos(Add#(TAdd#(m,1),e,n),
                 Add#(7,a__,e)
                );
        let expo = valueOf(e);
        let man  = valueOf(m);
        return tuple3(op1[man-1:0],op2[man-1:0],op3[man-1:0]);
    endfunction

    function Tuple3#(Bit#(e), Bit#(e), Bit#(e)) getExp (Bit#(n) op1, Bit#(n) op2, Bit#(n) op3)
        provisos(Add#(TAdd#(m,1),e,n),
                 Add#(7,a__,e)
                );
        let inp = valueOf(n);
        let man  = valueOf(m);
        return tuple3(op1[inp-2:man], op2[inp-2:man], op3[inp-2:man]);
    endfunction

    function Bool isNaNBox(Bit#(64) op);
        return (op[63:32]=='1);
    endfunction

    function Tuple3#(Bit#(32),Bit#(32),Bit#(32)) setCanNaN (Bit#(64) op1, Bit#(64) op2, Bit#(64) op3);
        return tuple3(isNaNBox(op1)? truncate(op1) : 32'h7fc00000, isNaNBox(op2)? truncate(op2) : 32'h7fc00000, isNaNBox(op3)? truncate(op3) : 32'h7fc00000);
    endfunction
Wrapper3#(Tuple2#(Bit#(23), Bit#(8)),Tuple2#(Bit#(23), Bit#(8)), Tuple2#(Bit#(23), Bit#(8)),  Tuple3#(Bit#(5),Bit#(5),Bit#(5)))    condFlags32     <- mkUniqueWrapper3(condFlags);
    Wrapper3#(Tuple2#(Bit#(52), Bit#(11)),Tuple2#(Bit#(52), Bit#(11)),Tuple2#(Bit#(52), Bit#(11)), Tuple3#(Bit#(5),Bit#(5),Bit#(5)))   condFlags64     <- mkUniqueWrapper3(condFlags);
    Wrapper3#(Bit#(32),Bit#(32),Bit#(32),Tuple3#(Bit#(23),Bit#(23),Bit#(23)))                                                          getMant32       <- mkUniqueWrapper3(getMantissa);
    Wrapper3#(Bit#(32),Bit#(32),Bit#(32),Tuple3#(Bit#(8),Bit#(8),Bit#(8)))                                                             getExp32        <- mkUniqueWrapper3(getExp);
    Wrapper3#(Bit#(64),Bit#(64),Bit#(64),Tuple3#(Bit#(52),Bit#(52),Bit#(52)))                                                          getMant64       <- mkUniqueWrapper3(getMantissa);
    Wrapper3#(Bit#(64),Bit#(64),Bit#(64),Tuple3#(Bit#(11),Bit#(11),Bit#(11)))                                                          getExp64        <- mkUniqueWrapper3(getExp);
    Wrapper3#(Bit#(64),Bit#(64),Bit#(64),Tuple3#(Bit#(32),Bit#(32),Bit#(32)))                                                          setCanonicalNaN <- mkUniqueWrapper3(setCanNaN);


 	Ifc_fpu_dp_to_int converter <- mkfpu_dp_to_int();
 	Reg#(Bit#(32)) state_clock <- mkReg(0);
 	   Reg#(Bit#(64)) wr_operand1 <- mkReg('h0200000000000000);
 	   //Reg#(Bit#(32)) wr_operand1 <- mkReg('hbf214efa);
 	   //Reg#(Bit#(32)) wr_operand1 <- mkReg('h91c82527);
    
 	rule state_clock_count;
 		state_clock <= state_clock + 1;
 		if(state_clock == 'd5) $finish;
 	endrule

 	rule give_input(state_clock == 'd1);
 	//	let {op1,op2,op3} <- setCanonicalNaN.func(wr_operand1,'0,'0);
			let {man1,man2,man3}   <- getMant64.func(wr_operand1, 0,0);
            let {exp1,exp2,exp3}   <- getExp64.func(wr_operand1, 0,0);
            let {flags1,flags2,flags3} <- condFlags64.func(tuple2(man1,exp1),tuple2(man2,exp2),tuple2(0,0));
            let sign1 = wr_operand1[63];
`ifdef verbose $display("input %b %b %b given at %0d", sign1, exp1, man1, state_clock); `endif
 	let x<-	converter._start(sign1,exp1,man1, 0, 0, 3'b000,flags1);
 		`ifdef verbose $display("output %h fflags : %h at %h", x.final_result, x.fflags, state_clock); `endif
 	endrule


 endmodule
endpackage
