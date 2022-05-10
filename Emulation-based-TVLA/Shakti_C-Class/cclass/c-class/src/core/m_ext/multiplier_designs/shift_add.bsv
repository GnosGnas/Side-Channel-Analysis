package shift_add;


import Vector :: *;
import Randomizable:: *;
import common_types :: * ;
`include "common_params.bsv"
`include "Logger.bsv"
import DReg :: *;

//(*doc="note: The process function is included "*)
`include "process_func.bsv"

`define mul_per_cycle 8

//(*doc = "ifc:interface to receive inputs and to return the result "*)
interface Ifc_shift_add;
		method Action ma_inputs(Bit#(XLEN) in1, Bit#(XLEN) in2, Bit#(3) funct3 , Bool complement
                       `ifdef RV64 ,Bool word32 `endif );
		method MBoxOutput mv_output;
endinterface

(* synthesize *)
(*doc = "module:implements multiplication using eight plus"*)
module mk_shift_add (Ifc_shift_add);
	
	(*doc = "reg: this register is for storing 'funct3' value"*)	
	Reg#(Bit#(3)) rg_funct3 <- mkReg(0);

	(*doc = "reg: this register is for storing the word_flag value"*)	
	Reg#(Bool) rg_word_flag <- mkReg(False);

	(*doc = "reg: this register is for storing multiplier value"*)	
	Reg#(Bit#(XLEN)) rg_multiplier<- mkReg(0);

	(*doc = "reg: this register is for storing multiplicand value"*) 
	Reg#(Bit#(TMul#(2,XLEN))) rg_multiplicand<- mkReg(0);

	(*doc = "reg: this register is for storing result ofthe multiplication process"*)
	Reg#(Bit#(TMul#(2,XLEN))) rg_temp_prod<- mkReg(0);

  Reg#(Bool) rg_valid <- mkDWire(False);
  Reg#(Bit#(XLEN)) rg_result <- mkDWire(0);

  Reg#(Bool) rg_complement <- mkReg(False);

  Reg#(Bit#(TLog#(TAdd#(1,XLEN)))) rg_count <-mkReg(0);

  function Bit#(XLEN) fn_process_output ( Bit#(TMul#(2, XLEN)) out, Bit#(3) funct3, Bool complement
                                                              `ifdef RV64 ,Bool word_flag `endif );
    Bool lv_upperbits = unpack(|funct3[1:0]);

    if(complement)
      out=~out+1;

    Bit#(XLEN) default_out;
    if(lv_upperbits)
      default_out=truncateLSB(out);
    else
      default_out=truncate(out);

    `ifdef RV64
      if(word_flag)
        default_out = signExtend(default_out[31:0]);
    `endif
    return default_out;
  endfunction

	(*doc = "rule: this rule performs the multiplication only when the inputs are ready and\
		 the multiplier is non-zero.\
		 ** If the LSB of the multiplier is 1, then 'rg_temp_prod' is updated with the \
		    sum of 'rg_temp_prod' and multiplicand.\
		 ** If the second LSB of the multiplier is also 1, then 'rg_temp_prod' is again\
		    updated with the sum of 'rg_temp_prod' and multiplicand left shifted \
		    by one-bit.\
		** If the third LSB of the multiplier is also 1, then 'rg_temp_prod' is again\
		    updated with the sum of 'rg_temp_prod' and multiplicand left shifted \
		    by two-bits.\
		** If the eightth LSB of the multiplier is also 1, then 'rg_temp_prod' is again\
		    updated with the sum of 'rg_temp_prod' and multiplicand left shifted \
		    by three-bits.\
		** Irrespective of the LSB of multiplier, the multiplier is right shifted \
		   (by eight-bits) and the multiplicand is left shifted (by eight-bits)."*)


	rule rl_shift_add (rg_count != 0);

		/*(*doc = "lv_adder_inputs is a local vector to facilitate the addition of 	
			   multiplicand (or shifted multiplicand) and 'rg_temp_prod' if the LSB
			   (or second LSB or third LSB or eightth LSB) of multiplier is 1."*)*/
		Vector#(2,Bit#(TMul#(2,XLEN))) lv_adder_inputs= replicate(0);
		lv_adder_inputs[0]=rg_temp_prod;


    for(Integer i=0; i<`mul_per_cycle ; i=i+1)begin
      if(rg_multiplier[i] == 1)begin
        lv_adder_inputs[1] = rg_multiplicand << i;
        lv_adder_inputs[0] = lv_adder_inputs[0] + lv_adder_inputs[1];
      end
    end

    Bool earlyout = (rg_multiplier == 0);
    
    `logLevel( mul, 0, $format("MUL: Count:%d Temp:%h in1:%h in2:%h earlyout:%b", rg_count, rg_temp_prod,
    rg_multiplicand, rg_multiplier, earlyout))
		
		rg_temp_prod<=lv_adder_inputs[0];
		rg_multiplicand<=rg_multiplicand << `mul_per_cycle ;
		rg_multiplier<=rg_multiplier >> `mul_per_cycle ;
    if(rg_count == fromInteger((valueOf(XLEN)/`mul_per_cycle)) ) begin
      rg_valid <= True;
      rg_result <= fn_process_output(lv_adder_inputs[0], rg_funct3, rg_complement
                                      `ifdef RV64 rg_word_flag `endif );
      rg_count <= 0;
    end
    else
      rg_count <= rg_count + 1;
	endrule

	/*(*doc = "method: receives multiplier and multiplicand values and 
	initialises other registers with their initial values " *) */
		method Action ma_inputs(Bit#(XLEN) in1, Bit#(XLEN) in2, Bit#(3) funct3 , Bool complement
                       `ifdef RV64 ,Bool word32 `endif ) if(rg_count == 0);
		rg_multiplicand<=zeroExtend(in1);
		rg_multiplier<=in2;
		rg_funct3<=funct3;
    rg_complement <= complement;

		`ifdef RV64
		rg_word_flag<=word_flag;
		`endif
		rg_temp_prod<=0;
		rg_count <= rg_count + 1;
	endmethod 

	//(*doc = "method: returns the product when the result ready flag is set true " *)
		method MBoxOutput mv_output;
			return MBoxOutput{ valid: rg_valid, data:truncate(rg_result)};
	endmethod
	
endmodule

//(*doc = "module:it is the testbench for the multiplication module"*)
//module mk_Testbench (Empty);
//
//	
//	(*doc = "reg: this register holds the number of multiplications to be done"*)
//	Reg#(Bit#(TMul#(2,XLEN))) rg_trial_num<- mkReg(0);
//	
//	Ifc_shift_add m<- mk_shift_add;
//
//	Randomize#(Bit#(`num)) lv_random1 <- mkGenericRandomizer;
// 	Randomize#(Bit#(`num)) lv_random2 <- mkGenericRandomizer;
//
//	(*doc = "reg: this register is for storing first random number"*)
//	Reg#(Bit#(`num)) rg_random_num1<- mkReg(0);
//
//	(*doc = "reg: this register is for storing second random number"*)
//	Reg#(Bit#(`num)) rg_random_num2<- mkReg(0);
//
//        (*doc = "reg: this register holds True value if the two random number instances\
//	 have been initialised"*)
//	Reg#(Bool) rg_initialized <- mkReg(False); 
//
//	(*doc = "reg: this register holds the system's answer\
//	 of the multiplication of two given inputs"*)
//	Reg#(UInt#(TMul#(2,XLEN))) rg_system_answer<-mkReg(0);
//
//	(*doc = "rule: keeps on iterating until the two random number instances\
//	 have been initialised"*)
//	rule r3(!rg_initialized);
//
//		lv_random1.cntrl.init();
//		lv_random2.cntrl.init();
//		rg_initialized<=True;
//
//	endrule
//
//	(*doc = "rule: keeps on iterating until the number of multiplications specified \
//		has completed and the two random number instances have been initialised"*)
//	rule r1(rg_trial_num<=10000 && rg_initialized);
//		Bit#(TMul#(2,XLEN)) lv_zero_extended_random_num1;
//
//
//	 	let lv_random_num1 <- lv_random1.next();
//	 	let lv_random_num2 <- lv_random2.next();
//
//		rg_random_num1<=lv_random_num1;
//		rg_random_num2<=lv_random_num2;
//
//		lv_zero_extended_random_num1=zeroExtend(lv_random_num1);
//
//	 	UInt#(TMul#(2,XLEN)) lv_op1=unpack(zeroExtend(lv_random_num1));
//         	UInt#(TMul#(2,XLEN)) lv_op2=unpack(zeroExtend(lv_random_num2));
//
//		//(*doc="note: System answer is computed "*);
//	 	UInt#(TMul#(2,XLEN)) lv_sys_prod=lv_op1*lv_op2;
//
//		//(*doc="note: System answer is stored in rg_system_answer "*);
//		rg_system_answer<=lv_sys_prod;
//
//		$display("State - %d : Product of %d and %d ",rg_trial_num,lv_random_num1,
//		lv_random_num2);
//			
//		//$display("cycle %0d",cur_cycle);
//
//		/*(*doc="note: The start method is being called.
//		 For obtaining the lower 32 bits of the product, give input to funct3
//		 as 3'b000 [MUL] and for upper 32 bits as 3'b011 [MULHU] "*)*/
//		m.ma_start(lv_zero_extended_random_num1,
//		lv_random_num2, 3'b000 `ifdef RV64 ,rg_word_flag `endif );
//
//		rg_trial_num<=rg_trial_num+1;
//	endrule
//
//	(*doc = "rule: compares the system's answer with that generated\
//	 using our multiplication module"*)
//	rule r2;
//
//		//(*doc="note: The value returned by the result method is stored "*);
//		let lv_our_answer<- m.mav_result(rg_random_num1,rg_random_num2);
//
//		$display("Our result %b ",lv_our_answer);
//		$display("Sys result %b ",rg_system_answer);
//		let lv_comp=pack(rg_system_answer);
//
//
//		//(*doc="note: System answer is compared with our answer "*);
//		if(lv_our_answer==lv_comp[(`num-1):0])
//			$display("Pass");
//		else
//		begin
//			$display("Fail---------------------------------------------");
//		end
//		//$display("cycle %0d",cur_cycle);
//		
//	endrule
//
//endmodule
endpackage
