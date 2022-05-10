/*
Authors     : Vinod.G
Email       : g.vinod1993@gmail.com
Last Update : 27th November 2017 
See LICENSE for more details
Description:
TODO
*/
package fpu_convert_sp_dp;
`define verbose
import common_types::*;
import UniqueWrappers::*;
`include "common_params.bsv"
`include "fpu.defines"
interface Ifc_fpu_convert_sp_dp;
	method ActionValue#(Floating_output#(64))_start(Bit#(1) sign, Bit#(8) exponent, Bit#(23) mantissa, Bit#(3) rounding_mode, Bit#(5) flags);
endinterface

interface Ifc_fpu_convert_dp_sp;
	method ActionValue#(Floating_output#(32)) _start(Bit#(1) sign, Bit#(11) exponent, Bit#(52) mantissa, Bit#(3) rounding_mode, Bit#(5) flags);
endinterface

function Bit#(m) zeroExtendLSB(Bit#(n) value)
    provisos(Add#(a__, n, m));

    Bit#(m) resp = 0;
    resp[valueOf(m)-1:valueOf(m)-valueOf(n)] = value;
    return resp;
endfunction

function Bit#(m) truncateLSB(Bit#(n) value);
    return value[valueOf(n)-1:valueOf(n)-valueOf(m)];
endfunction

function Bit#(69) floatDouble(Bit#(1) sign, Bit#(8) exponent, Bit#(23) mantissa, Bit#(3) rounding_mode, Bit#(5) flags);
    Bit#(5) exception = 0;
    if (flags[3]==1)
        return {5'b0,sign,63'b0};
    else if (flags[2] == 1 || flags[0] == 1) begin
        exception[4] = flags[0];
        return {exception,1'b0,11'd-1,1'b1,51'b0};
    end
    else if (flags[1] == 1)
        return {exception,sign,11'd-1,52'd0}; 
    else begin
        if(flags[4]==0) begin   //Normal numbers
            Bit#(11) expo = zeroExtend(exponent) + 'd896;
            Bit#(52) mant = zeroExtendLSB(mantissa);
            return {exception,sign,expo,mant};
        end
        else begin  //Denormal numbers
            let lv_zeros = countZerosMSB(mantissa);
            Bit#(11) expo = 'd896 - zeroExtend(pack(lv_zeros));   //What if lv_zeros is so much?
            Bit#(52) man = zeroExtendLSB(mantissa << lv_zeros);
            man = man<<1;  //To throw off implicit bit
            return {exception,sign, expo, man};
        end
    end
endfunction

function ActionValue#(Bit#(37)) doubleFloat(Bit#(1) sign, Bit#(11) exponent, Bit#(52) mantissa, Bit#(3) rounding_mode, Bit#(5) flags)
    =actionvalue
    Bit#(5) exception = 0;
    bit denormal = 0;
    `ifdef verbose $display("sign : %b exponent : %b mantissa : %b flags : %b",sign,exponent,mantissa, flags); `endif
    if (flags[3]==1) begin
        return {5'b0,sign,31'b0};
    end
    else if (flags[2] == 1 || flags[0] == 1) begin
        exception[4] = flags[0];
        return {exception,1'b0,8'd-1,1'b1,22'b0};
    end
    else if (flags[1] == 1)
        return {exception,sign,8'd-1,23'd0};
    else if (exponent > 'd1150) begin
         exception[2] = 1;
         exception[0] = 1;
        `ifdef verbose $display("overflow");  `endif
        if(rounding_mode == 3'b001) //Round to zero 
            return {exception,sign,7'd-1,1'b0,23'd-1};  //Highest positive number 7f7fffff
        else if (rounding_mode == 3'b010)  //Round down
            if(sign == 0)
                return {exception,1'b0,7'd-1,1'b0,23'd-1};
            else
                return {exception,1'b1,8'd-1,23'd0};
        else if (rounding_mode == 3'b011 && sign == 1)
            return {exception,1'b1,7'd-1,1'b0,23'd-1};
        else
            return {exception,sign,8'd-1,23'd0};
    end
    else begin
        `ifdef verbose $display("sign : %b exponent %b mantissa %b rounding %b flags %b",sign,exponent,mantissa,rounding_mode,flags); `endif
        Bit#(32) res = 0;
        Bit#(49) man = 0;
        Bit#(8)  expo = 0;
        bit underflow = 0;
        bit lv_guard = 0;
        bit lv_denormal_roundup = 0;
        let lv_sticky = |mantissa[26:0];
        `ifdef verbose $display("exponent : %d",exponent); `endif
        if (exponent <= 'd872) begin    //1023-127-24 Underflow
            if(rounding_mode == 3'b010 && sign == 1) //Round Down
                res = {1'b1,30'b0,1'b1};
            else if(rounding_mode == 3'b011 && sign == 0)
                res = 1;
            else
                res = {sign,'0};
            underflow = 1;
            exception[1] = 1;
            exception[0] = 1;
        end
        else if (exponent <= 'd896) begin  //Denormal number //Set sticky bit!!!
            `ifdef verbose $display("Denormal lv_sticky : %b", lv_sticky); `endif
            let shiftDist = 'd896 - exponent;
            man = {1'b1,mantissa[51:27],23'd0} >> shiftDist;
            if(man[23:0] != 0)
                lv_sticky = 1;
            `ifdef verbose $display("lv_guard : %b shiftDist : %d",lv_guard, shiftDist); `endif
            expo = '0;
            denormal = 1;
            `ifdef verbose $display("expo : %b man : %b",expo,man); `endif
        end
        else begin      //Normal number
            expo = truncate(exponent - 'd896);
            man = zeroExtendLSB(mantissa[51:27]);
            `ifdef verbose $display("expo : %b man : %b",expo,man); `endif
        end
        lv_guard = man[25];
        let lv_round = man[24];
        let lv_inexact = 0;
        let lv_round_up = 0;
        if(((lv_guard | lv_round | lv_sticky)) == 1)
            lv_inexact = 1;
        if(denormal == 1 && lv_inexact == 1) begin
            exception[1] = 1;
            exception[0] = 1;
        end
            exception[0] = exception[0] | lv_inexact;
      if(flags[2]==0 && flags[0] == 0 && flags[1]==0 && flags[3] == 0) begin
        if(rounding_mode == 'b000) 
			lv_round_up = lv_guard & (lv_round|lv_sticky|man[26]);
		else if(rounding_mode == 'b100)
			lv_round_up = lv_guard; //& (lv_round|lv_sticky|sign);
		else if(rounding_mode == 'b011) 
			lv_round_up = (lv_guard|lv_round|lv_sticky) & ~sign;
		else if(rounding_mode == 'b010)
            lv_round_up = (lv_guard|lv_round|lv_sticky) & sign;
        `ifdef verbose $display("lv_roundup : %b",lv_round_up); `endif
        Bit#(24) fman = zeroExtend(man[48:26]);
        `ifdef verbose $display("fman: %b",fman); `endif
        if(lv_round_up == 1)
            fman = fman + 1;
        if(fman[23] == 1)
            expo = expo + 1;
        if(underflow==0)
        res = {sign,expo,fman[22:0]};
    end
        return {exception,res};
    end
endactionvalue;

`ifdef fpu_hierarchical
(*synthesize*)
`endif
module mkfpu_convert_sp_dp(Ifc_fpu_convert_sp_dp);
	method ActionValue#(Floating_output#(64))_start(Bit#(1) sign, Bit#(8) exponent, Bit#(23) mantissa, Bit#(3) rounding_mode, Bit#(5) flags);
            `ifdef verbose $display("sign : %b exponent %b mantissa %b rounding_mode %b flags %b",sign,exponent,mantissa,rounding_mode,flags); `endif
            let x = floatDouble(sign,exponent,mantissa,rounding_mode,flags); 
            return Floating_output{
                                          final_result : x[63:0],
                                          fflags       : x[68:64]
                                        };
    endmethod
endmodule

`ifdef fpu_hierarchical
(*synthesize*)
`endif
module mkfpu_convert_dp_sp(Ifc_fpu_convert_dp_sp);
	method ActionValue#(Floating_output#(32)) _start(Bit#(1) sign, Bit#(11) exponent, Bit#(52) mantissa, Bit#(3) rounding_mode, Bit#(5) flags);
            `ifdef verbose $display("sign : %b exponent %b mantissa %b rounding_mode %b flags %b",sign,exponent,mantissa,rounding_mode,flags); `endif
            let x<- doubleFloat(sign,exponent,mantissa,rounding_mode,flags);
            return Floating_output{
                                          final_result : x[31:0],
                                          fflags       : x[36:32] //raise flags 
                                        };
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


	Reg#(Bit#(32)) rg_clock <-mkReg(0);
    //Reg#(Bit#(64)) wr_operand1 <- mkReg(64'h3721795900000000);
    //Reg#(Bit#(64)) wr_operand1 <- mkReg(64'h372741b800000000);
      Reg#(Bit#(64)) wr_operand1 <- mkReg(64'hffffffff7f814000);
    //Reg#(Bit#(64)) rg__operand1ut1 <- mkReg(64'h019000000000000);

	Ifc_fpu_convert_dp_sp cvt <- mkfpu_convert_dp_sp;

	rule rl_clock;
        rg_clock<=rg_clock+1;
        if(rg_clock=='d60) begin
    	    $finish(0);
        end
	endrule
        
	rule give__operand1ut(rg_clock==2);
           let {man1,man2,man3}     <- getMant64.func(wr_operand1, 0,0);
           let {exp1,exp2,exp3}     <- getExp64.func(wr_operand1, 0,0);
           let {x1,x2,x3}           <- condFlags64.func(tuple2(man1,exp1),tuple2(0,0),tuple2(0,0));
           `ifdef verbose $display("sign: %b exponent : %b mantissa : %b",wr_operand1[63],exp1,man1); `endif
           `ifdef verbose $display("exponent: %d",exp1); `endif
          let x <- cvt._start(wr_operand1[63],exp1,man1,3'b011,x1);
		  `ifdef verbose $display("Output= %h fflags %h" , x.final_result,x.fflags,$time); `endif
    endrule

    
endmodule

endpackage
