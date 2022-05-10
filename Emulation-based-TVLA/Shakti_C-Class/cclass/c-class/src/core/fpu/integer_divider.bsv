/*
Authors     : Vinod.G, Arjun Menon, Aditya Govardhan
Email       : g.vinod1993@gmail.com, c.arjunmenon@gmail.com
Last Update : 27th November 2017
See LICENSE for more details
Description:
TODO
*/

package integer_divider;
import UniqueWrappers::*;

interface Ifc_integer_divider#(numeric type fpman4);
	method Action _inputs(Bit#(fpman4) _denominator, Bit#(fpman4) _numerator);
	method Bit#(TAdd#(TMul#(fpman4,3),2)) result_();
    method Action flush;
endinterface

//(* synthesize *)
module mkinteger_divider(Ifc_integer_divider#(fpman4))
      provisos(
               Add#(TMul#(fpman4,3),2,op_fpman),
               Add#(fpman4,2,fpman6),
               Add#(fpman4,fpman6,acc_bits)
               //per request of bsc
                  
              );
    let fPMAN4 = valueOf(fpman4);

	Reg#(Bit#(op_fpman)) rg_inter_stage <- mkRegU();
	Reg#(Bit#(6)) rg_state <- mkReg(0);
	Wire#((Bit#(op_fpman))) wr_final_out <- mkWire;
    Wire#(Bool) wr_flush <- mkDWire(False);
    function Bit#(op_fpman) fn_divide_step (Bit#(op_fpman) packed_div, Bit#(1) final_stage, Bit#(1) is_even)
    provisos(
            
                    // fpman4 = 27
                    // fpman6 = 29
                    // opfpman = 83
                    // acc_btis = 56

            ); 
         let fPMAN4 = valueOf(fpman4);
         let aCC    = valueOf(acc_bits);
         let oP_FPMAN = valueOf(op_fpman);

         Bit#(fpman4) all_zeros = '0;
         Bit#(fpman4) _divisor   = packed_div[oP_FPMAN-1:aCC];
         Bit#(fpman6) _remainder = packed_div[aCC-1:fPMAN4];
         Bit#(fpman4) _dividend  = packed_div[fPMAN4-1:0];
         Bit#(acc_bits) accumulator = 0;

    for(Integer i = 0 ; i <=1  ; i=i+1) begin
      if(final_stage == 0 || (final_stage == 1 && i == 0)) begin
        if(_remainder[fPMAN4+1]==1'b0) begin
          accumulator = ({_remainder,_dividend}<<1) - {1'b0,_divisor,1'b0,all_zeros} ;
          accumulator[0] = 1'b1;
        end
        else begin
          accumulator = ({_remainder,_dividend}<<1) + {1'b0,_divisor,1'b0,all_zeros} ;
          accumulator[0] = 1'b0;
         end
        _remainder = accumulator[aCC-1:fPMAN4];
        _dividend = accumulator[fPMAN4-1:0];
    	end
    	else begin
        if(is_even == 0) begin
          if(_remainder[fPMAN4+1]==1'b0) begin
			      accumulator = ({_remainder,_dividend}<<1) - {1'b0,_divisor,1'b0,all_zeros} ;
		        accumulator[0] = 1'b1;
	        end
		      else begin
		    	  accumulator = ({_remainder,_dividend}<<1) + {1'b0,_divisor,1'b0,all_zeros} ;
		    	  accumulator[0] = 1'b0;
	        end
	    	  _remainder = accumulator[aCC-1:fPMAN4];
	    	  _dividend = accumulator[fPMAN4-1:0];
        end
        _dividend = _dividend - (_dividend ^ ('1));
        if(_remainder[fPMAN4+1] == 1'b1) begin
		      _remainder = _remainder + {1'b0,_divisor,1'b0};
		      _dividend = _dividend - 1;
	      end
	    end
    end
	return {_divisor, _remainder, _dividend};
endfunction

    Wrapper3#(Bit#(op_fpman),Bit#(1),Bit#(1),Bit#(op_fpman)) wfn_divide_step <- mkUniqueWrapper3(fn_divide_step);


    (*mutually_exclusive = "rl_flush,stage_1,recursive_stage,end_stage"*)

    rule rl_flush(wr_flush);
        rg_state <= 0;
    endrule

	rule stage_1(rg_state == 1 && !wr_flush);
		rg_state <= rg_state + 1;
        `ifdef verbose $display("Int Data %h rg_state %d",rg_inter_stage[55:0], rg_state); `endif
        let x <- wfn_divide_step.func(rg_inter_stage,0,0);
		rg_inter_stage <= x;
	endrule

	rule recursive_stage(rg_state > 1 && rg_state <= ((fromInteger(fPMAN4-5)>>1) +1) && !wr_flush );
	rg_state <= rg_state + 1;
    `ifdef verbose $display($time,"\t Int Data %h rg_state %d", rg_inter_stage[55:0], rg_state);`endif
        let x<- wfn_divide_step.func(rg_inter_stage,0,0);
        rg_inter_stage <=  x;
	endrule

	rule end_stage(rg_state == ((fromInteger(fPMAN4-5)>>1)+2) && !wr_flush);
        rg_state <= 0;
        `ifdef verbose $display($time,"\t End stage Int Data %h rg_state %d fpman4[0] %d", rg_inter_stage[55:0], rg_state, fromInteger(fPMAN4)[0]);`endif
        let x <- wfn_divide_step.func(rg_inter_stage,1,fromInteger(fPMAN4)[0]);
		wr_final_out <= x;
	endrule

	method Action _inputs(Bit#(fpman4) _denominator, Bit#(fpman4) _numerator)if(rg_state==0);
		rg_state <= rg_state + 1;
        Bit#(fpman4) man_all_zeros = '0;
        Bit#(op_fpman) packed_div = {_denominator,{2'b0,_numerator},man_all_zeros};
    `ifdef verbose $display("Numerator: %h Denominator: %h",_numerator,_denominator);`endif
        let x <- wfn_divide_step.func(packed_div,0,0);
		rg_inter_stage <= x;
	endmethod

	method Bit#(op_fpman) result_();
		return wr_final_out;
	endmethod

    method Action flush;
        wr_flush <= True;
    endmethod

endmodule

 module mkTb (Empty);

    Reg#(Bit#(32)) rg_clock <-mkReg(0);
    Reg#(Bit#(55)) rg_remainder <-mkReg(0);
//     Ifc_integer_divider#(27) instance_divider <-mkinteger_divider();

     Ifc_integer_divider#(27) instance_divider <-mkinteger_divider();

     rule rl_input1(rg_clock==1);
      instance_divider._inputs(27'h6d74e20,27'h68a4e18); // divisor, dividend 
     endrule

     rule rl_finish;
      let temp = instance_divider.result_();
 		  `ifdef verbose $display("Quotient=%h remainder=%h at %0d",temp[26:0],temp[53:27], rg_clock);`endif
     endrule
     
     rule rl_count_clock ;
       	rg_clock<=rg_clock+1;
       	if(rg_clock=='d35) 
          $finish(0);
     endrule
 endmodule
// (*synthesize*)
// module mkTb (Empty);
//
//    Reg#(Bit#(32)) rg_clock <-mkReg(0);
//
//     Ifc_integer_divider#(27) instance_divider <-mkinteger_divider();
//
//     rule rl_count_clock ;
//       	rg_clock<=rg_clock+1;
//       	if(rg_clock=='d60) $finish(0);
//     endrule
//
//     rule rl_input1(rg_clock==1);
//		`ifdef verbose $display("giving inputat %0d", rg_clock);`endif
//         instance_divider._inputs(27'd40,27'd800); // divisor, dividend 
//    `ifdef verbose $display("Expected Quotient: %d",27'd800/27'd40);`endif
//     endrule
//
//     rule rl_finish;
//         let temp = instance_divider.result_();
// 		`ifdef verbose $display("Quotient=%h remainder=%h at %0d",temp[26:0],temp[53:27], rg_clock);`endif
//     endrule
//
// endmodule

endpackage
