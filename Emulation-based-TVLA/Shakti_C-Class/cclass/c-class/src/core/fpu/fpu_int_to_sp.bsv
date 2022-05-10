/*
Authors     : Vinod.G
Email       : g.vinod1993@gmail.com
Last Update : 27th November 2017
See LICENSE for more details
Description:
TODO
*/
package fpu_int_to_sp;

import common_types ::*;
import UniqueWrappers::*;
`include "common_params.bsv"	
`include "fpu.defines"
interface Ifc_fpu_int_to_sp;
    method ActionValue#(Floating_output#(32)) _start(Bit#(64) inp_int, Bit#(1) unsigned_bit, Bit#(1) long, Bit#(3) rounding_mode);
endinterface
    

    function Bit#(37) roundFunc(Bit#(n) unrounded, Bit#(8) expo, Bit#(3) rounding_mode)
          provisos(
                   Add#(a__,32,n)
                  );
           let nInd = valueOf(n);
           bit guard  = unrounded[nInd-25];
           bit round  = unrounded[nInd-26];
           bit sticky = 0;
           bit sign = unrounded[nInd-1];
           Bit#(8) local_expo = expo;
           Bit#(TSub#(n,26)) sticky_check = unrounded[nInd-27:0];  
           if(sticky_check != '0)
               sticky = 1;
           bit inexact  = (guard | round | sticky);
           bit lv_roundup = 0;
           Bit#(25) lv_man = {2'b0,unrounded[nInd-2:nInd-24]};
           if(rounding_mode == 'b000) 
		        lv_roundup = guard & (unrounded[nInd-24] | round | sticky);
	       else if (rounding_mode == 'b100)
		        lv_roundup = guard; //& (round | sticky | ~sign);
	       else if (rounding_mode == 'b011)
		        lv_roundup = (guard | round | sticky) & (~sign);
	       else if (rounding_mode == 'b010)
		        lv_roundup = (guard | round | sticky) & (sign);
           if(lv_roundup == 1)
           lv_man = lv_man + 1;
           if(lv_man[23] == 1) begin
               local_expo = local_expo + 1;
           end
           let fflags = {1'b0,1'b0,1'b0,1'b0,inexact};
        return {fflags,sign,local_expo,lv_man[22:0]};
    endfunction
   
    function Bit#(37) fcvt_s_w_l (Bit#(n) inp, Bit#(1) unsigned_bit, Bit#(3) rounding_mode)
        provisos(
                Add#(a__,32,n),
                Log#(n,logN),
                Add#(b__,logN,8),
                Add#(c__, logN, TLog#(TAdd#(1, n)))
                );
           let nInd = valueOf(n);
           Bool ubit = (unsigned_bit == 1);
           Bit#(1) lv_sign = ubit? 0 : inp[nInd-1];
           Bool sbit = (lv_sign == 1);
           Bit#(7)  bias = '1;
           Bit#(8)  expo = zeroExtend(bias) + fromInteger(nInd-1);
           if(sbit)
               inp = ~inp + 1;
           Bit#(logN) lv_zeros = truncate(pack(countZerosMSB(inp)));
           inp = inp << lv_zeros;
           expo = expo - zeroExtend(pack(lv_zeros));
           Bit#(TSub#(n,1)) inpS = inp[nInd-2:0];
           Bit#(n) inp_temp = {lv_sign,inpS};
           Bit#(37) res = roundFunc(inp_temp, expo,  rounding_mode);
           return res;
    endfunction

    
`ifdef fpu_hierarchical
(*synthesize*)
`endif
module mkfpu_int_to_sp(Ifc_fpu_int_to_sp);

        
    Wrapper3#(Bit#(32), Bit#(1), Bit#(3),Bit#(37)) fcvt_s_wwu <- mkUniqueWrapper3(fcvt_s_w_l);
    Wrapper3#(Bit#(64), Bit#(1), Bit#(3),Bit#(37)) fcvt_s_llu <- mkUniqueWrapper3(fcvt_s_w_l);

    method ActionValue#(Floating_output#(32)) _start(Bit#(64) inp_int, Bit#(1) unsigned_bit, Bit#(1) long, Bit#(3) rounding_mode);
        `ifdef verbose $display($time,"\tGiving inputs: %h unsigned %b long %b rounding %b", inp_int, unsigned_bit, long, rounding_mode); `endif
		  Floating_output#(32) wr_final_out=?;
        if((inp_int == 0 && long==1) || (inp_int[31:0] == 0 && long == 0))
                    wr_final_out = Floating_output{ final_result : 32'b0,
                                                     fflags       : 5'b0
                                           } ;
        else if(long == 0) begin
            Bit#(32) inp32 = truncate(inp_int);
            `ifdef verbose $display("inp_int : %b",inp32); `endif
            Bit#(1) lv_sign = inp32[31];
            if(unsigned_bit == 0) begin
                if((inp32 & 'h7fffffff) == 0) begin
                    Bit#(32) res = lv_sign==1? {1'b1,8'h9e,'0} : '0;
                    wr_final_out = Floating_output{
                                                    final_result : res,
                                                    fflags        : 0
                                                   };
                end
                else begin
                    Bit#(37) ressw <- fcvt_s_wwu.func(inp32,unsigned_bit,rounding_mode);
                    wr_final_out = Floating_output{
                                                  final_result : (ressw[31:0]),
                                                  fflags       : ressw[36:32]
                                                   };
                end
            end
            else begin
                Bit#(37) res <- fcvt_s_wwu.func(inp32,unsigned_bit,rounding_mode);
                wr_final_out = Floating_output{
                                                final_result  : (res[31:0]),
                                                fflags        : res[36:32]
                                                };
            end          
        end
        else begin
            Bit#(37) res <- fcvt_s_llu.func(inp_int,unsigned_bit,rounding_mode);
            wr_final_out = Floating_output {
                                             final_result : res[31:0],
                                             fflags       : res[36:32]
                                            };

        end
		return wr_final_out;
    endmethod
endmodule

module mkTb(Empty);
   Reg#(Bit#(64)) rg_operand1<-mkReg(64'h039e781bab642be4); 
   //Reg#(Bit#(64)) rg_operand1<-mkReg(~(64'hfffffffffffff812)+1); 
   Reg#(Bit#(32)) rg_clock<-mkReg(0); 
   Ifc_fpu_int_to_sp itof <- mkfpu_int_to_sp();
   Reg#(Bit#(32)) rg_arbit <-mkReg(0);

   rule rl_clk_count;
      rg_clock<=rg_clock+1;
   endrule

   rule rl_start_1(rg_clock=='d0);
       `ifdef verbose $display("Giving inputs rg_operand 1 : %h through testbench",rg_operand1,$time); `endif
      let abc<-itof._start(zeroExtend(rg_operand1),1'b1,1'b0,3'b000);
       `ifdef verbose $display("Final result= %h fflags= %h", abc.final_result, abc.fflags, $time); `endif
       $finish(0);
   endrule

endmodule
endpackage
