package booth_iterative;

import Utils :: *;
import Vector :: *;
import Randomizable:: *;

//(*doc = " note:'num' is the number of bits of the input"*)
`define num 64
//(*doc = " note:'num2' is twice the number of bits of the input"*)
`define num2 128

/*(*doc=" note : BOOTH ALGORITHM:
- Multiplier and Multiplicand are stored (in 'q' and 'm')
- A one bit value q-1 stores 0 initially
- A n bit value 'a' is initialised to 0 
- Count Variable(step) is made equal to the number of bits (n)
-{q[0],q-1} is checked
	-if (10) then a=a-m
	-if (01) then a=a+m
-and  {a,q,q-1} is shifted right arithmetically
-and count=count-1
-This is repeated until count reaches 0
-The product is then available in {a,q} (size- 2n)"*)*/

 
//(*doc = "ifc:interface to receive inputs and to return the result "*)
interface Ifc_booth_iterative ;
	method Action ma_inputs ( Bit#(`num) inp1, Bit#(`num) inp2 );
	method ActionValue #(Bit#(`num2)) mav_outputs ();
endinterface 

(*synthesize*)
(*doc = "module:implements multiplication using booth algorithm"*)
module mk_booth_iterative (Ifc_booth_iterative);

	(*doc = "reg: this register is for storing multiplier value"*)
	Reg#(Bit#(`num)) rg_multiplier <- mkReg(0);

	(*doc = "reg: this register is for storing multiplicand value"*) 
	Reg#(Bit#(`num)) rg_multiplicand <- mkReg(0);
	
	(*doc = "reg: this is a num-bit register that plays the role of the 'a' register\
		as mentioned in the booth algorithm."*)	
	Reg#(Bit#(`num)) rg_a <- mkReg(0);
	
	(*doc = "reg: this is a 1-bit register that that plays the role of the 'q-1' register\
		 as mentioned in the booth algorithm."*)	
	Reg#(Bit#(1)) rg_q1 <- mkReg(0);

	(*doc = "reg: this register holds True value if inputs are ready"*)	
	Reg#(Bool) rg_inp_ready <- mkReg(False);

	(*doc = "reg: this register holds True value if results are ready"*) 
	Reg#(Bool) rg_res_ready <- mkReg(False);

	(*doc = "reg: this register keeps count of the number of steps in the iterative process\
		 of booth multiplicaton"*)	
	Reg#(Bit#(10)) rg_step <- mkReg(0);
	
	(*doc = "rule: this rule performs the multiplication ... only when the inputs are ready and\
    		 the number of steps in the multiplication process is less than 'num' .\
		 First,the value of {rg_multiplier[0],rg_q1} is checked.\
		    **If it is equal to '10','rg_a' register is updated with rg_a-rg_multiplicand.\
		    **If it is equal to '01','rg_a' register is updated with rg_a+rg_multiplicand.\
		 Then,{rg_a,rg_multiplier,rg_q1} is shifted right arithmetically.\
		 Then, 'rg_step' is incremented."*)
	rule rule_mul if(rg_inp_ready && rg_step<`num );
		/*(*doc =" note: The local variables lv_local_a and lv_local_q holds the
			   current value of rg_a and rg_multiplier respectively in each iteration.
			   All the computations are done in these local variables so that at the
			   end of each iteration,the values stored in these variables can be
			   transferred to the respective registers."*)*/
		Bit#(`num) lv_local_a= rg_a;
		Bit#(`num) lv_local_q= rg_multiplier;
	
		if({rg_multiplier[0],rg_q1}==2'b10)
			lv_local_a = lv_local_a - rg_multiplicand;

		else if({rg_multiplier[0],rg_q1}==2'b01)
			lv_local_a = lv_local_a + rg_multiplicand;

		lv_local_q=lv_local_q>>1;
		lv_local_q[`num-1]=lv_local_a[0];
		lv_local_a=lv_local_a>>1;
		lv_local_a[`num-1]=lv_local_a[`num-2];
		rg_q1<=rg_multiplier[0];	 
		rg_multiplier<=lv_local_q;
		rg_a<=lv_local_a;
		rg_step<=rg_step+1;

		/*(*doc =" note: Results ready flag 'rg_res_ready' is made True in the 
			   last stage of the multiplication process."*)*/
		if(rg_step==`num-1)
			rg_res_ready<=True;
	
	endrule

	/*(*doc = "method: receives multiplier and multiplicand values.
		   It also initialises the 'a','q1'and'step' registers." *)*/
	method Action ma_inputs ( Bit#(`num) inp1, Bit#(`num) inp2 ) if(! rg_inp_ready);
		rg_multiplier<=inp1;
		rg_multiplicand<=inp2;
		rg_a<=0;
		rg_q1<=0;
		rg_step<=0;
		rg_inp_ready<=True;
	endmethod

	//(*doc = "method: returns the product when the'rg_res_ready' flag is True."*)
	method ActionValue #(Bit#(`num2)) mav_outputs () if(rg_res_ready);
		rg_res_ready<=False;
		rg_inp_ready<=False;
		/*(*doc = "note:The product is the concatenation of the values present in 'rg_a'
			   and 'rg_multiplier'registers which is num2-bit number."*)*/
		Bit#(`num2) lv_ans={rg_a,rg_multiplier};
		return lv_ans;
	endmethod

endmodule

(*doc = "module:it is the testbench for the booth iterative multiplication module"*)
module mk_Testbench();

	Ifc_booth_iterative inst <- mk_booth_iterative;

	(*doc = "reg: this register holds the number of multiplications to be done"*)
	Reg#(int) rg_trial_num <- mkReg(0);  

	Randomize#(Int#(`num)) lv_random1 <- mkGenericRandomizer;
	Randomize#(Bit#(`num)) lv_random2 <- mkGenericRandomizer;
	
	(*doc = "reg: this register holds True value if the two random number \
		 instances have been initialised"*)	
	Reg#(Bool) rg_initialized <- mkReg(False);

	(*doc = "reg: this register holds the system's answer of the multiplication\
		 of two given inputs"*)
	Reg#(Int#(TMul#(`num, 2))) rg_system_answer<-mkReg(0);

	
	(*doc = "rule: keeps on iterating until the two random number instances\
		 have been initialised"*)
	rule r3(!rg_initialized);
		lv_random1.cntrl.init();
		lv_random2.cntrl.init();
		rg_initialized<=True;
	endrule

	(*doc = "rule: keeps on iterating until the number of multiplications specified\
		 has completed and the two random number instances have been initialised"*)
	rule r1(rg_trial_num<=10000 && rg_initialized);
	 	let lv_random_num1 <- lv_random1.next();
	 	let lv_random_num2 <- lv_random2.next();

         	Int#(TMul#(`num, 2)) lv_op1=signExtend(lv_random_num1);
		Int#(TMul#(`num, 2)) lv_op2=unpack(signExtend(lv_random_num2));

		//(*doc =" note: System's answer is computed."*)
		Int#(TMul#(`num, 2)) lv_sys_prod=lv_op1*lv_op2;

		$display("State - %d : Product of %d and %d ",
			rg_trial_num,lv_random_num2,lv_random_num1);

		//(*doc =" note: System's answer is stored in rg_system_answer."*)
		rg_system_answer<=lv_sys_prod;	

		//(*doc =" note: Input method is being called."*)
		inst.ma_inputs(lv_random_num2,pack(lv_random_num1));

		rg_trial_num<=rg_trial_num+1;

	endrule

	(*doc = "rule: compares the system's answer with that generated using our \
		 multiplication module"*)	
	rule r2;
		/*(*doc =" note: The value returned by the output method is stored \
			   in lv_our_answer."*)*/
		let lv_our_answer <-inst.mav_outputs();

		Int#(`num2) h = unpack(lv_our_answer);

		/*(*doc =" note: System's answer and the answer returned by the output\
		 	   method is compared."*)*/
		if(h==rg_system_answer)
			$display("Pass %d : %d ",h,rg_system_answer);
		else
		begin
			$display("Fail %d : %d -------------------------------------",
				h,rg_system_answer);
		end
		
	endrule


endmodule

endpackage
