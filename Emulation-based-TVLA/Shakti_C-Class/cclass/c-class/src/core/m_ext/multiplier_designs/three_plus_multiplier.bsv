package three_plus_multiplier;

import Utils :: *;
import Vector :: *;
import Randomizable:: *;

//(*doc="note: The process function is included "*)
`include "process_func.bsv"

//(*doc = " 'num' is the number of bits of the input"*)
`define num 32
//(*doc = " 'num2' is twice the number of bits of the input"*)
`define num2 64

//(*doc = "ifc:interface to receive inputs and to return the result "*)
interface Ifc_three_plus_multiplier;
   method Action ma_start (Bit#(`num2) multiplicand,Bit#(`num) multiplier,
			Bit#(3) funct3 `ifdef RV64 ,Bool word_flag `endif );
   method ActionValue #(Bit#(`num)) mav_result(Bit#(`num) in1, Bit#(`num) in2);
endinterface

(* synthesize *)
(*doc = "module:implements multiplication using three plus"*)
module mk_three_plus_multiplier (Ifc_three_plus_multiplier);

	(*doc = "reg: this register is for storing 'funct3' value"*)	
	Reg#(Bit#(3)) rg_funct3 <- mkReg(0);

	(*doc = "reg: this register is for storing the word_flag value"*)	
	Reg#(Bool) rg_word_flag <- mkReg(False);

	(*doc = "reg: this register is for storing multiplier value"*)	
	Reg#(Bit#(`num)) rg_multiplier<- mkReg(0);

	(*doc = "reg: this register is for storing multiplicand value"*) 
	Reg#(Bit#(`num2)) rg_multiplicand<- mkReg(0);

	(*doc = "reg: this register is for storing result ofthe multiplication process"*)
	Reg#(Bit#(`num2)) rg_temp_prod<- mkReg(0);

	(*doc = "reg: this register holds True value if results are ready"*) 
	Reg#(Bool) rg_res_ready <- mkReg(False);

	(*doc = "reg: this register holds True value if inputs are ready"*)	
	Reg#(Bool) rg_inp_ready <- mkReg(False);

	(*doc = "reg: this register holds True value if the multiplication has finished"*)
	Reg#(Bit#(1)) rg_stop <- mkReg(0);

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
		** Irrespective of the LSB of multiplier, the multiplier is right shifted \
		   (by three-bits) and the multiplicand is left shifted (by three-bits)."*)

	rule cycle1 (rg_multiplier!=0 && rg_inp_ready==True);
		/*(*doc = "lv_adder_inputs is a local vector to facilitate the addition of 	
			   multiplicand (or shifted multiplicand) and 'rg_temp_prod' if the LSB
			   (or second LSB or third LSB) of multiplier is 1."*)*/
		Vector#(2,Bit#(`num2)) lv_adder_inputs= replicate(0);
		lv_adder_inputs[0]=rg_temp_prod;

		if(rg_multiplier[0]==1)
		begin
			lv_adder_inputs[1]=rg_multiplicand;
			lv_adder_inputs[0]=lv_adder_inputs[0]+lv_adder_inputs[1];	
		end

		if(rg_multiplier[1]==1)
		begin
			lv_adder_inputs[1]=rg_multiplicand<<1;
			lv_adder_inputs[0]=lv_adder_inputs[0]+lv_adder_inputs[1];	
		end
		
		if(rg_multiplier[2]==1)
		begin
			lv_adder_inputs[1]=rg_multiplicand<<2;
			lv_adder_inputs[0]=lv_adder_inputs[0]+lv_adder_inputs[1];	
		end
		
		rg_temp_prod<=lv_adder_inputs[0];
		rg_multiplicand<=rg_multiplicand<<3;
		rg_multiplier<=rg_multiplier>>3;
		rg_res_ready<=True;
		//$display("cycle :: %0d",cur_cycle);
	endrule

	(*doc = "rule: this rule executes only when the multiplier is zero "*)
	rule cycle2 if(rg_multiplier==0 && rg_inp_ready==True && rg_stop==0);
		rg_res_ready<=True;
		/*(*doc = " Once the multipier becomes zero, the multiplication is completed.	 
		            So,'rg_stop' is assigned value 1."*)*/
		rg_stop<=1;
	endrule

	/*(*doc = "method: receives multiplier and multiplicand values and 
	initialises other registers with their initial values " *) */
	method Action ma_start (Bit#(`num2) multiplicand,Bit#(`num) multiplier,
	Bit#(3) funct3 `ifdef RV64 ,Bool word_flag `endif )if(rg_multiplier==0&&rg_inp_ready==False);
		rg_multiplicand<=multiplicand;
		rg_multiplier<=multiplier;

		rg_funct3<=funct3;

		`ifdef RV64
		rg_word_flag<=word_flag;

		`endif
		rg_temp_prod<=0;
		rg_inp_ready<=True;
		rg_stop<=0;
		//$display("start method cycle %0d",cur_cycle);
	endmethod 

	//(*doc = "method: returns the product when the result ready flag is set true " *)
	method ActionValue #(Bit#(`num)) mav_result(Bit#(`num) in1, Bit#(`num) in2) if(
				rg_multiplier==0 && rg_res_ready==True);
		rg_res_ready<=False;
		rg_inp_ready<=False;
		
		/*doc("note: The process function is called on the obtained product"*)*/
		Bit#(`num) answ= fn_process(in1,in2,
		rg_temp_prod,rg_funct3 `ifdef RV64 ,rg_word_flag `endif );

		return answ;
		
	endmethod

endmodule

(*doc = "module:it is the testbench for the multiplication module"*)
module mk_Testbench (Empty);

	(*doc = "reg: this register holds the number of multiplications to be done"*)
	Reg#(Bit#(`num2)) rg_trial_num<- mkReg(0);
	
	Ifc_three_plus_multiplier m<- mk_three_plus_multiplier;

	Randomize#(Bit#(`num)) lv_random1 <- mkGenericRandomizer;
 	Randomize#(Bit#(`num)) lv_random2 <- mkGenericRandomizer;

	(*doc = "reg: this register is for storing first random number"*)
	Reg#(Bit#(`num)) rg_random_num1<- mkReg(0);

	(*doc = "reg: this register is for storing second random number"*)
	Reg#(Bit#(`num)) rg_random_num2<- mkReg(0);

        (*doc = "reg: this register holds True value if the two random number instances\
	 have been initialised"*)
	Reg#(Bool) rg_initialized <- mkReg(False); 

	(*doc = "reg: this register holds the system's answer\
	 of the multiplication of two given inputs"*)
	Reg#(UInt#(`num2)) rg_system_answer<-mkReg(0);

	(*doc = "rule: keeps on iterating until the two random number instances\
	 have been initialised"*)
	rule r3(!rg_initialized);

		lv_random1.cntrl.init();
		lv_random2.cntrl.init();
		rg_initialized<=True;

	endrule

	(*doc = "rule: keeps on iterating until the number of multiplications specified \
		has completed and the two random number instances have been initialised"*)
	rule r1(rg_trial_num<=100 && rg_initialized);
		Bit#(`num2) lv_zero_extended_random_num1;


	 	let lv_random_num1 <- lv_random1.next();
	 	let lv_random_num2 <- lv_random2.next();

		rg_random_num1<=lv_random_num1;
		rg_random_num2<=lv_random_num2;

		lv_zero_extended_random_num1=zeroExtend(lv_random_num1);

	 	UInt#(`num2) lv_op1=unpack(zeroExtend(lv_random_num1));
         	UInt#(`num2) lv_op2=unpack(zeroExtend(lv_random_num2));

		//(*doc="note: System answer is computed "*);
	 	UInt#(`num2) lv_sys_prod=lv_op1*lv_op2;

		//(*doc="note: System answer is stored in rg_system_answer "*);
		rg_system_answer<=lv_sys_prod;

		$display("State - %d : Product of %d and %d ",rg_trial_num,lv_random_num1,
		lv_random_num2);
			
		//$display("cycle %0d",cur_cycle);

		/*(*doc="note: The start method is being called.
		 For obtaining the lower 32 bits of the product, give input to funct3
		 as 3'b000 [MUL] and for upper 32 bits as 3'b011 [MULHU] "*)*/
		m.ma_start(lv_zero_extended_random_num1,
		lv_random_num2, 3'b000 `ifdef RV64 ,rg_word_flag `endif );

		rg_trial_num<=rg_trial_num+1;
	endrule

	(*doc = "rule: compares the system's answer with that generated\
	 using our multiplication module"*)
	rule r2;

		//(*doc="note: The value returned by the result method is stored "*);
		let lv_our_answer<- m.mav_result(rg_random_num1,rg_random_num2);

		$display("Our result %b ",lv_our_answer);
		$display("Sys result %b ",rg_system_answer);
		let lv_comp=pack(rg_system_answer);


		//(*doc="note: System answer is compared with our answer "*);
		if(lv_our_answer==lv_comp[(`num-1):0])
			$display("Pass");
		else
		begin
			$display("Fail---------------------------------------------");
		end
		//$display("cycle %0d",cur_cycle);
		
	endrule

endmodule
endpackage
