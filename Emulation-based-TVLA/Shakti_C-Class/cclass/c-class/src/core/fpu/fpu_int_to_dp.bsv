/*
Authors     : Vinod.G
Email       : g.vinod1993@gmail.com
Last Update : 27th November 2017
See LICENSE for more details
Description:
TODO
*/
package fpu_int_to_dp;
import common_types ::*;
import UniqueWrappers::*;
`include "common_params.bsv"	
`include "fpu.defines"
//TODO Rework and optimize
function Bit#(m) zeroExtendLSB(Bit#(n) value)
    provisos(Add#(a__, n, m));

    Bit#(m) resp = 0;
    resp[valueOf(m)-1:valueOf(m)-valueOf(n)] = value;
    return resp;
endfunction

function Bit#(m) truncateLSB(Bit#(n) value);
    return value[valueOf(n)-1:valueOf(n)-valueOf(m)];
endfunction

interface Ifc_fpu_int_to_dp;
    method ActionValue#(Floating_output#(64)) _start(Bit#(64) inp_int, Bit#(1) unsigned_bit, Bit#(1) long, Bit#(3) rounding_mode);
endinterface
    

    function Bit#(69) roundFunc(Bit#(64) unrounded, Bit#(11) expo, Bit#(3) rounding_mode);
           bit guard  = unrounded[10];
           bit round  = unrounded[9];
           bit sticky = 0;
           bit sign = unrounded[63];
           Bit#(11) local_expo = expo;
           Bit#(9) sticky_check = unrounded[8:0];  
           if(sticky_check != '0)
               sticky = 1;
           bit inexact  = (guard | round | sticky);
           bit lv_roundup = 0;
           Bit#(54) lv_man = {2'b0,unrounded[62:11]};
           if(rounding_mode == 'b000) 
		        lv_roundup = guard & (unrounded[11] | round | sticky);
	       else if (rounding_mode == 'b100)
		        lv_roundup = guard; //& (round | sticky | ~sign);
	       else if (rounding_mode == 'b011)
		        lv_roundup = (guard | round | sticky) & (~sign);
	       else if (rounding_mode == 'b010)
		        lv_roundup = (guard | round | sticky) & (sign);
           if(lv_roundup == 1)
           lv_man = lv_man + 1;
           if(lv_man[52] == 1) begin
               local_expo = local_expo + 1;
           end
           let fflags = {1'b0,1'b0,1'b0,1'b0,inexact};
        return {fflags,sign,local_expo,lv_man[51:0]};
    endfunction
  
 `ifdef fpu_hierarchical
  (*synthesize*)
 `endif
 module mkfpu_int_to_dp(Ifc_fpu_int_to_dp);

    //Wrapper3#(Bit#(32), Bit#(1), Bit#(3),Bit#(69)) fcvt_d_wwu <- mkUniqueWrapper3(fcvt_s_w_l);
    //Wrapper3#(Bit#(64), Bit#(1), Bit#(3),Bit#(69)) fcvt_d_llu <- mkUniqueWrapper3(fcvt_s_w_l);

    method ActionValue#(Floating_output#(64)) _start(Bit#(64) inp_int, Bit#(1) unsigned_bit, Bit#(1) long, Bit#(3) rounding_mode);
			Floating_output#(64) wr_final_out=?;
        `ifdef verbose $display($time,"Giving inputs: %h unsigned %b long %b rounding %b", inp_int, unsigned_bit, long, rounding_mode); `endif
        if((inp_int == 0 && long==1) || (inp_int[31:0] == 0 && long == 0))
                    wr_final_out = Floating_output{ final_result : 64'b0,
                                                     fflags       : 5'b0
                                           } ;
        else if(long == 0) begin
                Bit#(32) inp32 = inp_int[31:0];
                `ifdef verbose $display("inp_int : %b",inp32); `endif
                Bool ubit = (unsigned_bit == 1);
                Bit#(1) lv_sign = ubit? 0 : inp32[31];
                Bool sbit = (lv_sign==1);
                Bit#(10) bias = '1;
                Bit#(11) expo = zeroExtend(bias) + 31;
                if(sbit)
                    inp32 = ~inp32+1;
                Bit#(5) lv_zeros = truncate(pack(countZerosMSB(inp32)));
                inp32 = inp32 << lv_zeros;
                expo = expo - zeroExtend(lv_zeros);
                Bit#(52) mantissa = zeroExtendLSB(inp32[30:0]);
                Bit#(64) res = {lv_sign,expo,mantissa};
                    wr_final_out = Floating_output {
                                                      final_result : res,
                                                      fflags       : 0
                                                    };
            end
            else begin
                 `ifdef verbose $display("inp_int : %b",inp_int); `endif
                Bool ubit = (unsigned_bit == 1);
                Bit#(1) lv_sign = ubit? 0 : inp_int[63];
                Bool sbit = (lv_sign==1);
                Bit#(10) bias = '1;
                Bit#(11) expo = zeroExtend(bias) + 63;
                if(sbit)
                    inp_int = ~inp_int + 1;
                Bit#(6) lv_zeros = truncate(pack(countZerosMSB(inp_int)));
                inp_int = inp_int << lv_zeros;
                expo = expo - zeroExtend(lv_zeros);
                Bit#(69) res = roundFunc({lv_sign,inp_int[62:0]},expo,rounding_mode);
                    wr_final_out = Floating_output {
                                                      final_result : res[63:0],
                                                      fflags       : res[68:64]
                                                    };
  
            end
			return wr_final_out;
    endmethod
endmodule

//module mkTb(Empty);
//   Reg#(Bit#(64)) rg_operand1<-mkReg(64'hffffffffe945c730); 
//   //Reg#(Bit#(64)) rg_operand1<-mkReg(~(64'hfffffffffffff812)+1); 
//   Reg#(Bit#(32)) rg_clock<-mkReg(0); 
//   Ifc_fpu_int_to_dp itod <- mkfpu_int_to_dp();
//   Reg#(Bit#(32)) rg_arbit <-mkReg(0);
//
//   rule rl_clk_count;
//      rg_clock<=rg_clock+1;
//   endrule
//
//   rule rl_start_1(rg_clock=='d0);
//       `ifdef verbose $display("Giving inputs rg_operand 1 : %h through testbench",rg_operand1,$time); `endif
//      itod._start(zeroExtend(rg_operand1),1'b0,1'b0,3'b000);
//   endrule
//
//   rule rl_display_result;
//           let abc = itod.result_();
//       `ifdef verbose $display("Final result= %h", abc.final_result,$time); `endif
//       $finish(0);
//   endrule
//endmodule
endpackage
