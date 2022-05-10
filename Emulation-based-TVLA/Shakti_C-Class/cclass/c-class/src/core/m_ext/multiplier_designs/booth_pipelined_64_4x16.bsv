package booth_pipelined_64_4x16;

import Utils :: *;
import Vector :: *;
import Randomizable:: *;
//(*doc = " note: This code works for 64-bit only.Do not change the constant values."*)

//(*doc = " note :'num' is the number of bits of the input"*)
`define num 64
//(*doc = " note :'num2' is twice the number of bits of the input"*)
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
-The product is then available in {a,q} (size- 2n).
The number of steps required to compute the product of two n-bit number is n.
This is 4x16 pipelined Booth multiplication.
For the computation of the product of two 64-bit numbers, we require 64 steps.
There are 16 stages in the pipeline and in each stage, four steps of the booth multiplication 
is performed.
So, on the whole in the 16 stages, 4x16=64 steps of the booth multiplication will be performed
and at the end of the 16th stage we will get the output.
The output is the concatenation of the values present in 'a' and 'q'registers of the 16th stage."*) 

 */

//(*doc = "ifc:interface to receive inputs and to return the result "*)
interface Ifc_booth_pipelined_64_4x16 ;
	method Action ma_inputs ( Bit#(`num) inp1, Bit#(`num) inp2 );
	method ActionValue #(Bit#(`num2)) mav_outputs ();
endinterface 

(*synthesize*)
(*doc = "module:implements multiplication using  4x16 pipelined booth algorithm"*)
module mk_booth_pipelined_64_4x16 (Ifc_booth_pipelined_64_4x16);
	
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

	(*doc = "note: Here if rg_flag[i] is set to 1 in the current cycle, then (i+2)th stage\
		 will be performed in the next cycle.\
 		 Example: If rg_flag[0] is set to 1 in the current cycle, then mul_2 will be \
		 performed in the next cycle.  "*)
	Vector#(16,Reg#(Bit#(1))) rg_flag <-replicateM (mkReg(0));


	(*doc = "reg: this register is for storing multiplier value in stage 1"*)
	Reg#(Bit#(`num)) rg_pipe1_multiplier <- mkReg(0);
	(*doc = "reg: this register is for storing multiplicand value in stage 1"*)
	Reg#(Bit#(`num)) rg_pipe1_m <- mkReg(0);
	(*doc = "reg: this is a num-bit'a' register of stage 1"*)
	Reg#(Bit#(`num)) rg_pipe1_a <- mkReg(0);
	(*doc = "reg: this is a 1-bit 'q-1' register of stage 1"*)
	Reg#(Bit#(1)) rg_pipe1_q1 <- mkReg(0);

	(*doc = "reg: this register is for storing multiplier value in stage 2"*)
	Reg#(Bit#(`num)) rg_pipe2_multiplier <- mkReg(0);
	(*doc = "reg: this register is for storing multiplicand value in stage 2"*)
	Reg#(Bit#(`num)) rg_pipe2_m <- mkReg(0);
	(*doc = "reg: this is a num-bit 'a' register of stage 2"*)
	Reg#(Bit#(`num)) rg_pipe2_a <- mkReg(0);
	(*doc = "reg: this is a 1-bit 'q-1' register of stage 2"*)
	Reg#(Bit#(1)) rg_pipe2_q1 <- mkReg(0);

	(*doc = "reg: this register is for storing multiplier value in stage 3"*)
	Reg#(Bit#(`num)) rg_pipe3_multiplier <- mkReg(0);
	(*doc = "reg: this register is for storing multiplicand value in stage 3"*)
	Reg#(Bit#(`num)) rg_pipe3_m <- mkReg(0);
	(*doc = "reg: this is a num-bit 'a' register of stage 3"*)
	Reg#(Bit#(`num)) rg_pipe3_a <- mkReg(0);
	(*doc = "reg: this is a 1-bit 'q-1' register of stage 3"*)
	Reg#(Bit#(1)) rg_pipe3_q1 <- mkReg(0);

	(*doc = "reg: this register is for storing multiplier value in stage 4"*)
	Reg#(Bit#(`num)) rg_pipe4_multiplier <- mkReg(0);
	(*doc = "reg: this register is for storing multiplicand value in stage 4"*)
	Reg#(Bit#(`num)) rg_pipe4_m <- mkReg(0);
	(*doc = "reg: this is a num-bit 'a' register of stage 4"*)
	Reg#(Bit#(`num)) rg_pipe4_a <- mkReg(0);
	(*doc = "reg: this is a 1-bit 'q-1' register of stage 4"*)
	Reg#(Bit#(1)) rg_pipe4_q1 <- mkReg(0);

	(*doc = "reg: this register is for storing multiplier value in stage 5"*)
	Reg#(Bit#(`num)) rg_pipe5_multiplier <- mkReg(0);
	(*doc = "reg: this register is for storing multiplicand value in stage 5"*)
	Reg#(Bit#(`num)) rg_pipe5_m <- mkReg(0);
	(*doc = "reg: this is a num-bit 'a' register of stage 5"*)
	Reg#(Bit#(`num)) rg_pipe5_a <- mkReg(0);
	(*doc = "reg: this is a 1-bit 'q-1' register of stage 5"*)
	Reg#(Bit#(1)) rg_pipe5_q1 <- mkReg(0);

	(*doc = "reg: this register is for storing multiplier value in stage 6"*)
	Reg#(Bit#(`num)) rg_pipe6_multiplier <- mkReg(0);
	(*doc = "reg: this register is for storing multiplicand value in stage 6"*)
	Reg#(Bit#(`num)) rg_pipe6_m <- mkReg(0);
	(*doc = "reg: this is a num-bit 'a' register of stage 6"*)
	Reg#(Bit#(`num)) rg_pipe6_a <- mkReg(0);
	(*doc = "reg: this is a 1-bit 'q-1' register of stage 6"*)
	Reg#(Bit#(1)) rg_pipe6_q1 <- mkReg(0);

	(*doc = "reg: this register is for storing multiplier value in stage 7"*)
	Reg#(Bit#(`num)) rg_pipe7_multiplier <- mkReg(0);
	Reg#(Bit#(`num)) rg_pipe7_m <- mkReg(0);
	(*doc = "reg: this is a num-bit 'a' register of stage 7"*)
	Reg#(Bit#(`num)) rg_pipe7_a <- mkReg(0);
	(*doc = "reg: this is a 1-bit 'q-1' register of stage 7"*)
	Reg#(Bit#(1)) rg_pipe7_q1 <- mkReg(0);

	(*doc = "reg: this register is for storing multiplier value in stage 8"*)
	Reg#(Bit#(`num)) rg_pipe8_multiplier <- mkReg(0);
	(*doc = "reg: this register is for storing multiplicand value in stage 8"*)
	Reg#(Bit#(`num)) rg_pipe8_m <- mkReg(0);
	(*doc = "reg: this is a num-bit 'a' register of stage 8"*)
	Reg#(Bit#(`num)) rg_pipe8_a <- mkReg(0);
	(*doc = "reg: this is a 1-bit 'q-1' register of stage 8"*)
	Reg#(Bit#(1)) rg_pipe8_q1 <- mkReg(0);

	(*doc = "reg: this register is for storing multiplier value in stage 9"*)
	Reg#(Bit#(`num)) rg_pipe9_multiplier <- mkReg(0);
	(*doc = "reg: this register is for storing multiplicand value in stage 9"*)
	Reg#(Bit#(`num)) rg_pipe9_m <- mkReg(0);
	(*doc = "reg: this is a num-bit 'a' register of stage 9"*)
	Reg#(Bit#(`num)) rg_pipe9_a <- mkReg(0);
	(*doc = "reg: this is a 1-bit 'q-1' register of stage 9"*)
	Reg#(Bit#(1)) rg_pipe9_q1 <- mkReg(0);

	(*doc = "reg: this register is for storing multiplier value in stage 10"*)
	Reg#(Bit#(`num)) rg_pipe10_multiplier <- mkReg(0);
	(*doc = "reg: this register is for storing multiplicand value in stage 10"*)
	Reg#(Bit#(`num)) rg_pipe10_m <- mkReg(0);
	(*doc = "reg: this is a num-bit 'a' register of stage 10"*)
	Reg#(Bit#(`num)) rg_pipe10_a <- mkReg(0);
	(*doc = "reg: this is a 1-bit 'q-1' register of stage 10"*)
	Reg#(Bit#(1)) rg_pipe10_q1 <- mkReg(0);

	(*doc = "reg: this register is for storing multiplier value in stage 11"*)
	Reg#(Bit#(`num)) rg_pipe11_multiplier <- mkReg(0);
	(*doc = "reg: this register is for storing multiplicand value in stage 11"*)
	Reg#(Bit#(`num)) rg_pipe11_m <- mkReg(0);
	(*doc = "reg: this is a num-bit 'a' register of stage 11"*)
	Reg#(Bit#(`num)) rg_pipe11_a <- mkReg(0);
	(*doc = "reg: this is a 1-bit 'q-1' register of stage 11"*)
	Reg#(Bit#(1)) rg_pipe11_q1 <- mkReg(0);

	(*doc = "reg: this register is for storing multiplier value in stage 12"*)
	Reg#(Bit#(`num)) rg_pipe12_multiplier <- mkReg(0);
	(*doc = "reg: this register is for storing multiplicand value in stage 12"*)
	Reg#(Bit#(`num)) rg_pipe12_m <- mkReg(0);
	(*doc = "reg: this is a num-bit 'a' register of stage 12"*)
	Reg#(Bit#(`num)) rg_pipe12_a <- mkReg(0);
	(*doc = "reg: this is a 1-bit 'q-1' register of stage 12"*)
	Reg#(Bit#(1)) rg_pipe12_q1 <- mkReg(0);

	(*doc = "reg: this register is for storing multiplier value in stage 13"*)
	Reg#(Bit#(`num)) rg_pipe13_multiplier <- mkReg(0);
	Reg#(Bit#(`num)) rg_pipe13_m <- mkReg(0);
	(*doc = "reg: this is a num-bit 'a' register of stage 13"*)
	Reg#(Bit#(`num)) rg_pipe13_a <- mkReg(0);
	(*doc = "reg: this is a 1-bit 'q-1' register of stage 13"*)
	Reg#(Bit#(1)) rg_pipe13_q1 <- mkReg(0);

	(*doc = "reg: this register is for storing multiplier value in stage 14"*)
	Reg#(Bit#(`num)) rg_pipe14_multiplier <- mkReg(0);
	(*doc = "reg: this register is for storing multiplicand value in stage 14"*)
	Reg#(Bit#(`num)) rg_pipe14_m <- mkReg(0);
	(*doc = "reg: this is a num-bit 'a' register of stage 14"*)
	Reg#(Bit#(`num)) rg_pipe14_a <- mkReg(0);
	(*doc = "reg: this is a 1-bit 'q-1' register of stage 14"*)
	Reg#(Bit#(1)) rg_pipe14_q1 <- mkReg(0);

	(*doc = "reg: this register is for storing multiplier value in stage 15"*)
	Reg#(Bit#(`num)) rg_pipe15_multiplier <- mkReg(0);
	(*doc = "reg: this register is for storing multiplicand value in stage 15"*)
	Reg#(Bit#(`num)) rg_pipe15_m <- mkReg(0);
	(*doc = "reg: this is a num-bit 'a' register of stage 15"*)
	Reg#(Bit#(`num)) rg_pipe15_a <- mkReg(0);
	(*doc = "reg: this is a 1-bit 'q-1' register of stage 15"*)
	Reg#(Bit#(1)) rg_pipe15_q1 <- mkReg(0);

	(*doc = "reg: this register is for storing multiplier value in stage 16"*)
	Reg#(Bit#(`num)) rg_pipe16_multiplier <- mkReg(0);
	(*doc = "reg: this register is for storing multiplicand value in stage 16"*)
	Reg#(Bit#(`num)) rg_pipe16_m <- mkReg(0);
	(*doc = "reg: this is a num-bit 'a' register of stage 16"*)
	Reg#(Bit#(`num)) rg_pipe16_a <- mkReg(0);
	(*doc = "reg: this is a 1-bit register 'q-1' register of stage 16"*)
	Reg#(Bit#(1)) rg_pipe16_q1 <- mkReg(0);


	/* (*doc = "func: function to perform pipeline's stage 1 operation.\
	     The first 4 steps of 64 steps of the multiplication process is performed.\
	     That is, 4 times the following operation is performed.\
		 First,the value of {rg_multiplier[0],rg_q1} is checked.\
		   **If it is equal to '10','rg_a' register is updated with rg_a-rg_multiplicand.\
		   **If it is equal to '01','rg_a' register is updated with rg_a+rg_multiplicand.\
		 Then,{rg_a,rg_multiplier,rg_q1} is shifted right arithmetically.\" *)*/
	function Action fn_pipe_stage_1(Bit#(`num) a,Bit#(`num) q,Bit#(1) q1, Bool inp_check ) ;
		return
		action

		/*(*doc =" note: the first 4 steps operation is performed only when 
			inp_check is true,i.e, the inputs are ready.
		When inp_check is False,the first 4 steps operation is not performed in the current
		cycle and rg_flag[0] is set to 0 so that stage-2 operations need not be performed 
		in the next cycle as the stage-1 operations are not performed."*)*/	   

		if(!inp_check)
			rg_flag[0]<=0;


		else
		begin
			/*(*doc =" note: The local variables lv_local_a ,lv_local_q and lv_local_q1 
			   holds the current value of a,q and q1 respectively everytime the 
			   inp_check is true.
			   All the computations are done in these local variables so that at the
			   end of the four steps,the values stored in these variables can be
			   transferred to the respective registers of stage-1.The rg_flag[0] is set
			   to 1 so that stage-2 operations will be performed in the next cycle"*)*/

			Bit#(`num) lv_local_a= a;
			Bit#(`num) lv_local_q= q;
			Bit#(1) lv_local_q1= q1;
		
			//$display("mul 1 cycle is %d ",cur_cycle);

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - rg_multiplicand;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + rg_multiplicand;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - rg_multiplicand;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + rg_multiplicand;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - rg_multiplicand;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + rg_multiplicand;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------


			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - rg_multiplicand;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + rg_multiplicand;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];




			rg_pipe1_q1<=lv_local_q1; 
			rg_pipe1_multiplier<=lv_local_q;
			rg_pipe1_a<=lv_local_a;
			rg_pipe1_m<=rg_multiplicand;
			rg_flag[0]<=1;
		end

		endaction;
	endfunction

	/* (*doc = "func: function to perform pipeline's stage 2 operation.\
	     The next 4 steps of 64 steps of the multiplication process is performed.\
	     That is, 4 times the following operation is performed.\
		 First,the value of {rg_multiplier[0],rg_q1} is checked.\
		   **If it is equal to '10','rg_a' register is updated with rg_a-rg_multiplicand.\
		   **If it is equal to '01','rg_a' register is updated with rg_a+rg_multiplicand.\
		 Then,{rg_a,rg_multiplier,rg_q1} is shifted right arithmetically.\" *)*/
	function Action fn_pipe_stage_2(Bit#(`num) a,Bit#(`num) q,Bit#(1) q1,Bit#(`num) lv_pipe1_m,
				Bit#(1) prev_check);

		return
		action

		/*(*doc =" note: the 4 steps operation is performed only when 
			prev_check is true,i.e, the previous stage 4 steps operations were 
			performed in the previous cycle.
		When prev_check is False,the 4 steps operation is not performed in the current
		cycle and rg_flag[1] is set to 0 so that stage-3 operations need not be performed 
		in the next cycle as the stage-2 4 steps operation are not performed."*)*/

		if(prev_check ==0)
			rg_flag[1]<=0;
		else
		begin
			/*(*doc =" note: The local variables lv_local_a ,lv_local_q and lv_local_q1 
			   holds the current value of a,q and q1 respectively everytime the 
			   prev_check is true.
			   All the computations are done in these local variables so that at the
			   end of the four steps,the values stored in these variables can be
			   transferred to the respective registers of stage-2.The rg_flag[1] is set
			   to 1 so that stage-3 operations will be performed in the next cycle"*)*/
			
			Bit#(`num) lv_local_a= a;
			Bit#(`num) lv_local_q= q;
			Bit#(1) lv_local_q1= q1;
		
			//$display("mul2 cycle is %d ",cur_cycle);		
			
			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe1_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe1_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe1_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe1_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe1_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe1_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------


			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe1_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe1_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];


			rg_pipe2_q1<=lv_local_q1; 
			rg_pipe2_multiplier<=lv_local_q;
			rg_pipe2_a<=lv_local_a;
			rg_flag[1]<=1;
			rg_pipe2_m<=lv_pipe1_m;
		end
		endaction;
	endfunction

	/* (*doc = "func: function to perform pipeline's stage 3 operation.\
	     The next 4 steps of 64 steps of the multiplication process is performed.\
	     That is, 4 times the following operation is performed.\
		 First,the value of {rg_multiplier[0],rg_q1} is checked.\
		   **If it is equal to '10','rg_a' register is updated with rg_a-rg_multiplicand.\
		   **If it is equal to '01','rg_a' register is updated with rg_a+rg_multiplicand.\
		 Then,{rg_a,rg_multiplier,rg_q1} is shifted right arithmetically.\" *)*/
	function Action fn_pipe_stage_3(Bit#(`num) a,Bit#(`num) q,Bit#(1) q1,Bit#(`num) lv_pipe2_m, 
					Bit#(1) prev_check ) ;


		return
		action

		/*(*doc =" note: the 4 steps operation is performed only when 
			prev_check is true,i.e, the previous stage 4 steps operations were 
			performed in the previous cycle.
		When prev_check is False,the 4 steps operation is not performed in the current
		cycle and rg_flag[2] is set to 0 so that stage 4 operations need not be performed 
		in the next cycle as the stage-3 4 steps operation are not performed."*)*/

		if(prev_check==0)
			rg_flag[2]<=0;
		else
		begin
			/*(*doc =" note: The local variables lv_local_a ,lv_local_q and lv_local_q1 
			   holds the current value of a,q and q1 respectively everytime the 
			   prev_check is true.
			   All the computations are done in these local variables so that at the
			   end of the four steps,the values stored in these variables can be
			   transferred to the respective registers of stage-3.The rg_flag[2] is set
			   to 1 so that stage-4 operations will be performed in the next cycle"*)*/

			Bit#(`num) lv_local_a= a;
			Bit#(`num) lv_local_q= q;
			Bit#(1) lv_local_q1= q1;
		
			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe2_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe2_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe2_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe2_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe2_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe2_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------


			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe2_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe2_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];



			rg_pipe3_q1<=lv_local_q1; 
			rg_pipe3_multiplier<=lv_local_q;
			rg_pipe3_a<=lv_local_a;
			rg_flag[2]<=1;
			rg_pipe3_m<=lv_pipe2_m;
		end
		endaction;
	endfunction

	/* (*doc = "func: function to perform pipeline's stage 4 operation.\
	     The next 4 steps of 64 steps of the multiplication process is performed.\
	     That is, 4 times the following operation is performed.\
		 First,the value of {rg_multiplier[0],rg_q1} is checked.\
		   **If it is equal to '10','rg_a' register is updated with rg_a-rg_multiplicand.\
		   **If it is equal to '01','rg_a' register is updated with rg_a+rg_multiplicand.\
		 Then,{rg_a,rg_multiplier,rg_q1} is shifted right arithmetically.\" *)*/
	function Action fn_pipe_stage_4(Bit#(`num) a,Bit#(`num) q,Bit#(1) q1,Bit#(`num) lv_pipe3_m,
					 Bit#(1) prev_check )  ;


		return
		action

		/*(*doc =" note: the 4 steps operation is performed only when 
			prev_check is true,i.e, the previous stage 4 steps operations were 
			performed in the previous cycle.
		When prev_check is False,the 4 steps operation is not performed in the current
		cycle and rg_flag[3] is set to 0 so that stage-5 operations need not be performed 
		in the next cycle as the stage-4 4 steps operation are not performed."*)*/

		if(prev_check==0)
			rg_flag[3]<=0;
		else
		begin
			/*(*doc =" note: The local variables lv_local_a ,lv_local_q and lv_local_q1
			   holds the current value of a,q and q1 respectively everytime the 
			   prev_check is true.
			   All the computations are done in these local variables so that at the
			   end of the four steps,the values stored in these variables can be
			   transferred to the respective registers of stage-4.The rg_flag[3] is set
			   to 1 so that stage-5 operations will be performed in the next cycle"*)*/

			Bit#(`num) lv_local_a= a;
			Bit#(`num) lv_local_q= q;
			Bit#(1) lv_local_q1= q1;
		
			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe3_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe3_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe3_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe3_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe3_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe3_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------


			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe3_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe3_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];




			rg_pipe4_q1<=lv_local_q1; 
			rg_pipe4_multiplier<=lv_local_q;
			rg_pipe4_a<=lv_local_a;
			rg_flag[3]<=1;
			rg_pipe4_m<=lv_pipe3_m;
		end
		endaction;
	endfunction

	/* (*doc = "func: function to perform pipeline's stage 5 operation.\
	     The next 4 steps of 64 steps of the multiplication process is performed.\
	     That is, 4 times the following operation is performed.\
		 First,the value of {rg_multiplier[0],rg_q1} is checked.\
		   **If it is equal to '10','rg_a' register is updated with rg_a-rg_multiplicand.\
		   **If it is equal to '01','rg_a' register is updated with rg_a+rg_multiplicand.\
		 Then,{rg_a,rg_multiplier,rg_q1} is shifted right arithmetically.\" *)*/
	function Action fn_pipe_stage_5(Bit#(`num) a,Bit#(`num) q,Bit#(1) q1,Bit#(`num) lv_pipe4_m,
					Bit#(1) prev_check ) ;

		
		return
		action

		/*(*doc =" note: the 4 steps operation is performed only when 
			prev_check is true,i.e, the previous stage 4 steps operations were 
			performed in the previous cycle.
		When prev_check is False,the 4 steps operation is not performed in the current
		cycle and rg_flag[4] is set to 0 so that stage-6 operations need not be performed 
		in the next cycle as the stage-5 4 steps operation are not performed."*)*/

		if(prev_check==0)
			rg_flag[4]<=0;
		else
		begin
			/*(*doc =" note: The local variables lv_local_a ,lv_local_q and lv_local_q1
			   holds the current value of a,q and q1 respectively everytime the 
			   prev_check is true.
			   All the computations are done in these local variables so that at the
			   end of the four steps,the values stored in these variables can be
			   transferred to the respective registers of stage-5.The rg_flag[4] is set
			   to 1 so that stage-6 operations will be performed in the next cycle"*)*/

			Bit#(`num) lv_local_a= a;
			Bit#(`num) lv_local_q= q;
			Bit#(1) lv_local_q1= q1;
		
			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe4_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe4_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe4_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe4_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe4_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe4_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------


			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe4_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe4_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];




			rg_pipe5_q1<=lv_local_q1; 
			rg_pipe5_multiplier<=lv_local_q;
			rg_pipe5_a<=lv_local_a;
			rg_flag[4]<=1;
			rg_pipe5_m<=lv_pipe4_m;
		end
		endaction;
	endfunction

	/* (*doc = "func: function to perform pipeline's stage 6 operation.\
	     The next 4 steps of 64 steps of the multiplication process is performed.\
	     That is, 4 times the following operation is performed.\
		 First,the value of {rg_multiplier[0],rg_q1} is checked.\
		   **If it is equal to '10','rg_a' register is updated with rg_a-rg_multiplicand.\
		   **If it is equal to '01','rg_a' register is updated with rg_a+rg_multiplicand.\
		 Then,{rg_a,rg_multiplier,rg_q1} is shifted right arithmetically.\" *)*/

	function Action fn_pipe_stage_6(Bit#(`num) a,Bit#(`num) q,Bit#(1) q1,Bit#(`num) lv_pipe5_m,
					Bit#(1) prev_check )  ;
		
		return
		action
		/*(*doc =" note: the 4 steps operation is performed only when 
			prev_check is true,i.e, the previous stage 4 steps operations were 
			performed in the previous cycle.
		When prev_check is False,the 4 steps operation is not performed in the current
		cycle and rg_flag[5] is set to 0 so that stage-7 operations need not be performed 
		in the next cycle as the stage-6 4 steps operation are not performed."*)*/

		if(prev_check==0)
			rg_flag[5]<=0;
		else
		begin
			/*(*doc =" note: The local variables lv_local_a ,lv_local_q and lv_local_q1
			   holds the current value of a,q and q1 respectively everytime the 
			   prev_check is true.
			   All the computations are done in these local variables so that at the
			   end of the four steps,the values stored in these variables can be
			   transferred to the respective registers of stage-6.The rg_flag[5] is set
			   to 1 so that stage-7 operations will be performed in the next cycle"*)*/

			Bit#(`num) lv_local_a= a;
			Bit#(`num) lv_local_q= q;
			Bit#(1) lv_local_q1= q1;
		
			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe5_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe5_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe5_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe5_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe5_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe5_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------


			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe5_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe5_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];




			rg_pipe6_q1<=lv_local_q1; 
			rg_pipe6_multiplier<=lv_local_q;
			rg_pipe6_a<=lv_local_a;
			rg_flag[5]<=1;
			rg_pipe6_m<=lv_pipe5_m;
		end
	endaction;
	endfunction

	/* (*doc = "func: function to perform pipeline's stage 7 operation.\
	     The next 4 steps of 64 steps of the multiplication process is performed.\
	     That is, 4 times the following operation is performed.\
		 First,the value of {rg_multiplier[0],rg_q1} is checked.\
		   **If it is equal to '10','rg_a' register is updated with rg_a-rg_multiplicand.\
		   **If it is equal to '01','rg_a' register is updated with rg_a+rg_multiplicand.\
		 Then,{rg_a,rg_multiplier,rg_q1} is shifted right arithmetically.\" *)*/

	function Action fn_pipe_stage_7(Bit#(`num) a,Bit#(`num) q,Bit#(1) q1,Bit#(`num) lv_pipe6_m,
					Bit#(1) prev_check )  ;
		
		return
		action

		/*(*doc =" note: the 4 steps operation is performed only when 
			prev_check is true,i.e, the previous stage 4 steps operations were 
			performed in the previous cycle.
		When prev_check is False,the 4 steps operation is not performed in the current
		cycle and rg_flag[6] is set to 0 so that stage-8 operations need not be performed 
		in the next cycle as the stage-7 4 steps operation are not performed."*)*/

		if(prev_check==0)
			rg_flag[6]<=0;
		else
		begin
			/*(*doc =" note: The local variables lv_local_a ,lv_local_q and lv_local_q1
			   holds the current value of a,q and q1 respectively everytime 
			   the prev_check is true.
			   All the computations are done in these local variables so that at the
			   end of the four steps,the values stored in these variables can be
			   transferred to the respective registers of stage-7.The rg_flag[6] is set
			   to 1 so that stage-8 operations will be performed in the next cycle"*)*/

			Bit#(`num) lv_local_a= a;
			Bit#(`num) lv_local_q= q;
			Bit#(1) lv_local_q1= q1;

		
			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe6_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe6_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe6_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe6_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe6_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe6_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------


			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe6_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe6_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];




			rg_pipe7_q1<=lv_local_q1; 
			rg_pipe7_multiplier<=lv_local_q;
			rg_pipe7_a<=lv_local_a;
			rg_flag[6]<=1;
			rg_pipe7_m<=lv_pipe6_m;
		end
	endaction;
	endfunction

	/* (*doc = "func: function to perform pipeline's stage 8 operation.\
	     The next 4 steps of 64 steps of the multiplication process is performed.\
	     That is, 4 times the following operation is performed.\
		 First,the value of {rg_multiplier[0],rg_q1} is checked.\
		   **If it is equal to '10','rg_a' register is updated with rg_a-rg_multiplicand.\
		   **If it is equal to '01','rg_a' register is updated with rg_a+rg_multiplicand.\
		 Then,{rg_a,rg_multiplier,rg_q1} is shifted right arithmetically.\" *)*/
	function Action fn_pipe_stage_8(Bit#(`num) a,Bit#(`num) q,Bit#(1) q1,Bit#(`num) lv_pipe7_m,
					 Bit#(1) prev_check )  ;
		
		return
		action

		/*(*doc =" note: the 4 steps operation is performed only when 
			prev_check is true,i.e, the previous stage 4 steps operations were 
			performed in the previous cycle.
		When prev_check is False,the 4 steps operation is not performed in the current
		cycle and rg_flag[7] is set to 0 so that stage-9 operations need not be performed 
		in the next cycle as the stage-8 4 steps operation are not performed."*)*/

		if(prev_check==0)
			rg_flag[7]<=0;
		else
		begin
			/*(*doc =" note: The local variables lv_local_a ,lv_local_q and lv_local_q1
			   holds the current value of a,q and q1 respectively everytime the 
			   prev_check is true.
			   All the computations are done in these local variables so that at the
			   end of the four steps,the values stored in these variables can be
			   transferred to the respective registers of stage-8.The rg_flag[7] is set
			   to 1 so that stage-9 operations will be performed in the next cycle"*)*/

			Bit#(`num) lv_local_a= a;
			Bit#(`num) lv_local_q= q;
			Bit#(1) lv_local_q1= q1;
		
			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe7_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe7_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe7_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe7_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe7_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe7_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------


			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe7_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe7_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];




			rg_pipe8_q1<=lv_local_q1; 
			rg_pipe8_multiplier<=lv_local_q;
			rg_pipe8_a<=lv_local_a;
			rg_flag[7]<=1;
			rg_pipe8_m<=lv_pipe7_m;
		end
	endaction;
	endfunction

	/* (*doc = "func: function to perform pipeline's stage 9 operation.\
	     The next 4 steps of 64 steps of the multiplication process is performed.\
	     That is, 4 times the following operation is performed.\
		 First,the value of {rg_multiplier[0],rg_q1} is checked.\
		   **If it is equal to '10','rg_a' register is updated with rg_a-rg_multiplicand.\
		   **If it is equal to '01','rg_a' register is updated with rg_a+rg_multiplicand.\
		 Then,{rg_a,rg_multiplier,rg_q1} is shifted right arithmetically.\" *)*/
	function Action fn_pipe_stage_9(Bit#(`num) a,Bit#(`num) q,Bit#(1) q1,Bit#(`num) lv_pipe8_m,
					 Bit#(1) prev_check )  ;
		
		return
		action

		/*(*doc =" note: the 4 steps operation is performed only when 
			prev_check is true,i.e, the previous stage 4 steps operations were 
			performed in the previous cycle.
		When prev_check is False,the 4 steps operation is not performed in the current
		cycle and rg_flag[8] is set to 0 so that stage-10 operations need not be performed 
		in the next cycle as the stage-9 4 steps operation are not performed."*)*/

		if(prev_check==0)
			rg_flag[8]<=0;
		else
		begin
			/*(*doc =" note: The local variables lv_local_a ,lv_local_q and lv_local_q1
			   holds the current value of a,q and q1 respectively everytime the 
			   prev_check is true.
			   All the computations are done in these local variables so that at the
			   end of the four steps,the values stored in these variables can be
			   transferred to the respective registers of stage-9.The rg_flag[8] is set
			   to 1 so that stage-10 operations will be performed in the next cycle"*)
			*/
			Bit#(`num) lv_local_a= a;
			Bit#(`num) lv_local_q= q;
			Bit#(1) lv_local_q1= q1;
		
			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe8_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe8_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe8_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe8_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe8_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe8_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------


			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe8_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe8_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];




			rg_pipe9_q1<=lv_local_q1; 
			rg_pipe9_multiplier<=lv_local_q;
			rg_pipe9_a<=lv_local_a;
			rg_flag[8]<=1;
			rg_pipe9_m<=lv_pipe8_m;
		end

	endaction;
	endfunction

	/* (*doc = "func: function to perform pipeline's stage 10 operation.\
	     The next 4 steps of 64 steps of the multiplication process is performed.\
	     That is, 4 times the following operation is performed.\
		 First,the value of {rg_multiplier[0],rg_q1} is checked.\
		   **If it is equal to '10','rg_a' register is updated with rg_a-rg_multiplicand.\
		   **If it is equal to '01','rg_a' register is updated with rg_a+rg_multiplicand.\
		 Then,{rg_a,rg_multiplier,rg_q1} is shifted right arithmetically.\" *)*/
	function Action fn_pipe_stage_10 (Bit#(`num) a,Bit#(`num) q,Bit#(1) q1,
					 Bit#(`num) lv_pipe9_m, Bit#(1) prev_check )  ;
		
		return
		action

		/*(*doc =" note: the 4 steps operation is performed only when 
			prev_check is true,i.e, the previous stage 4 steps operations were 
			performed in the previous cycle.
		When prev_check is False,the 4 steps operation is not performed in the current
		cycle and rg_flag[9] is set to 0 so that stage-11 operations need not be performed 
		in the next cycle as the stage-10 4 steps operation are not performed."*)*/

		if(prev_check==0)
			rg_flag[9]<=0;
		else
		begin
			/*(*doc =" note: The local variables lv_local_a ,lv_local_q and lv_local_q1 
			   holds the current value of a,q and q1 respectively everytime the 
			   prev_check is true.
			   All the computations are done in these local variables so that at the
			   end of the four steps,the values stored in these variables can be
			   transferred to the respective registers of stage-10.The rg_flag[9] is 
			   set to 1 so that stage-11 operations will be performed in the 
			   next cycle"*)
			*/
			Bit#(`num) lv_local_a= a;
			Bit#(`num) lv_local_q= q;
			Bit#(1) lv_local_q1= q1;
		
			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe9_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe9_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe9_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe9_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe9_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe9_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------


			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe9_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe9_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];




			rg_pipe10_q1<=lv_local_q1; 
			rg_pipe10_multiplier<=lv_local_q;
			rg_pipe10_a<=lv_local_a;
			rg_flag[9]<=1;
			rg_pipe10_m<=lv_pipe9_m;
		end	
	endaction;
	endfunction

	/* (*doc = "func: function to perform pipeline's stage 11 operation.\
	     The next 4 steps of 64 steps of the multiplication process is performed.\
	     That is, 4 times the following operation is performed.\
		 First,the value of {rg_multiplier[0],rg_q1} is checked.\
		   **If it is equal to '10','rg_a' register is updated with rg_a-rg_multiplicand.\
		   **If it is equal to '01','rg_a' register is updated with rg_a+rg_multiplicand.\
		 Then,{rg_a,rg_multiplier,rg_q1} is shifted right arithmetically.\" *)*/
	function Action fn_pipe_stage_11 (Bit#(`num) a,Bit#(`num) q,Bit#(1) q1,
				 Bit#(`num) lv_pipe10_m, Bit#(1) prev_check )  ;
		
		return
		action

		/*(*doc =" note: the 4 steps operation is performed only when 
			prev_check is true,i.e, the previous stage 4 steps operations were 
			performed in the previous cycle.
		When prev_check is False,the 4 steps operation is not performed in the current
		cycle and rg_flag[10] is set to 0 so that stage-12 operations need not be performed 
		in the next cycle as the stage-11 4 steps operation are not performed."*)*/

		if(prev_check==0)
			rg_flag[10]<=0;
		else
		begin
			/*(*doc =" note: The local variables lv_local_a ,lv_local_q and lv_local_q1
			   holds the current value of a,q and q1 respectively everytime the 
			   prev_check is true.
			   All the computations are done in these local variables so that at the
			   end of the four steps,the values stored in these variables can be
			   transferred to the respective registers of stage-11.The rg_flag[10] is 
			   set to 1 so that stage-12 operations will be performed in the 
			   next cycle"*)
			*/
			Bit#(`num) lv_local_a= a;
			Bit#(`num) lv_local_q= q;
			Bit#(1) lv_local_q1= q1;
			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe10_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe10_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe10_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe10_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe10_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe10_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------


			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe10_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe10_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];



			rg_pipe11_q1<=lv_local_q1; 
			rg_pipe11_multiplier<=lv_local_q;
			rg_pipe11_a<=lv_local_a;
			rg_flag[10]<=1;
			rg_pipe11_m<=lv_pipe10_m;
		end	
	endaction;
	endfunction

	/* (*doc = "func: function to perform pipeline's stage 12 operation.\
	     The next 4 steps of 64 steps of the multiplication process is performed.\
	     That is, 4 times the following operation is performed.\
		 First,the value of {rg_multiplier[0],rg_q1} is checked.\
		   **If it is equal to '10','rg_a' register is updated with rg_a-rg_multiplicand.\
		   **If it is equal to '01','rg_a' register is updated with rg_a+rg_multiplicand.\
		 Then,{rg_a,rg_multiplier,rg_q1} is shifted right arithmetically.\" *)*/
	function Action fn_pipe_stage_12 (Bit#(`num) a,Bit#(`num) q,Bit#(1) q1,
				 Bit#(`num) lv_pipe11_m, Bit#(1) prev_check )  ;
		
		return
		action

		/*(*doc =" note: the 4 steps operation is performed only when 
			prev_check is true,i.e, the previous stage 4 steps operations were 
			performed in the previous cycle.
		When prev_check is False,the 4 steps operation is not performed in the current
		cycle and rg_flag[11] is set to 0 so that stage-13 operations need not be performed 
		in the next cycle as the stage-12 4 steps operation are not performed."*)*/

		if(prev_check==0)
			rg_flag[11]<=0;
		else
		begin
			/*(*doc =" note: The local variables lv_local_a ,lv_local_q and lv_local_q1
			   holds the current value of a,q and q1 respectively everytime the 
			   prev_check is true.
			   All the computations are done in these local variables so that at the
			   end of the four steps,the values stored in these variables can be
			   transferred to the respective registers of stage-12.The rg_flag[11] is 
			   set to 1 so that stage-13 operations will be performed in the 
			   next cycle"*)
			*/
			Bit#(`num) lv_local_a= a;
			Bit#(`num) lv_local_q= q;
			Bit#(1) lv_local_q1= q1;
			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe11_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe11_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe11_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe11_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe11_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe11_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------


			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe11_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe11_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];




			rg_pipe12_q1<=lv_local_q1; 
			rg_pipe12_multiplier<=lv_local_q;
			rg_pipe12_a<=lv_local_a;
			rg_flag[11]<=1;
			rg_pipe12_m<=lv_pipe11_m;
		end	
	endaction;
	endfunction

	/* (*doc = "func: function to perform pipeline's stage 13 operation.\
	     The next 4 steps of 64 steps of the multiplication process is performed.\
	     That is, 4 times the following operation is performed.\
		 First,the value of {rg_multiplier[0],rg_q1} is checked.\
		   **If it is equal to '10','rg_a' register is updated with rg_a-rg_multiplicand.\
		   **If it is equal to '01','rg_a' register is updated with rg_a+rg_multiplicand.\
		 Then,{rg_a,rg_multiplier,rg_q1} is shifted right arithmetically.\" *)*/
	function Action fn_pipe_stage_13 (Bit#(`num) a,Bit#(`num) q,Bit#(1) q1,
		 Bit#(`num) lv_pipe12_m, Bit#(1) prev_check )  ;
		
		return
		action

		/*(*doc =" note: the 4 steps operation is performed only when 
			prev_check is true,i.e, the previous stage 4 steps operations were 
			performed in the previous cycle.
		When prev_check is False,the 4 steps operation is not performed in the current
		cycle and rg_flag[12] is set to 0 so that stage-14 operations need not be performed 
		in the next cycle as the stage-13 4 steps operation are not performed."*)*/

		if(prev_check==0)
			rg_flag[12]<=0;
		else
		begin
			/*(*doc =" note: The local variables lv_local_a ,lv_local_q and lv_local_q1
			   holds the current value of a,q and q1 respectively everytime the 
			   prev_check is true.
			   All the computations are done in these local variables so that at the
			   end of the four steps,the values stored in these variables can be
			   transferred to the respective registers of stage-13.The rg_flag[12] is 
			   set to 1 so that stage-14 operations will be performed in 
			   the next cycle"*)
			*/
			Bit#(`num) lv_local_a= a;
			Bit#(`num) lv_local_q= q;
			Bit#(1) lv_local_q1= q1;
			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe12_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe12_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe12_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe12_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe12_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe12_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------


			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe12_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe12_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];




			rg_pipe13_q1<=lv_local_q1; 
			rg_pipe13_multiplier<=lv_local_q;
			rg_pipe13_a<=lv_local_a;
			rg_flag[12]<=1;
			rg_pipe13_m<=lv_pipe12_m;
		end

	endaction;
	endfunction

	/* (*doc = "func: function to perform pipeline's stage 14 operation.\
	     The next 4 steps of 64 steps of the multiplication process is performed.\
	     That is, 4 times the following operation is performed.\
		 First,the value of {rg_multiplier[0],rg_q1} is checked.\
		   **If it is equal to '10','rg_a' register is updated with rg_a-rg_multiplicand.\
		   **If it is equal to '01','rg_a' register is updated with rg_a+rg_multiplicand.\
		 Then,{rg_a,rg_multiplier,rg_q1} is shifted right arithmetically.\" *)*/
	function Action fn_pipe_stage_14 (Bit#(`num) a,Bit#(`num) q,Bit#(1) q1, Bit#(`num) lv_pipe13_m, Bit#(1) prev_check )  ;
		
		return
		action

		/*(*doc =" note: the 4 steps operation is performed only when 
			prev_check is true,i.e, the previous stage 4 steps operations were 
			performed in the previous cycle.
		When prev_check is False,the 4 steps operation is not performed in the current
		cycle and rg_flag[13] is set to 0 so that stage-15 operations need not be performed 
		in the next cycle as the stage-14 4 steps operation are not performed."*)*/

		if(prev_check==0)
			rg_flag[13]<=0;
		else
		begin
			/*(*doc =" note: The local variables lv_local_a ,lv_local_q and lv_local_q1
			   holds the current value of a,q and q1 respectively everytime the 
			   prev_check is true.
			   All the computations are done in these local variables so that at the
			   end of the four steps,the values stored in these variables can be
			   transferred to the respective registers of stage-14.The rg_flag[13] is 
			   set to 1 so that stage-15 operations will be performed in the 
			   next cycle"*)
			*/

			Bit#(`num) lv_local_a= a;
			Bit#(`num) lv_local_q= q;
			Bit#(1) lv_local_q1= q1;
		
			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe13_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe13_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe13_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe13_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe13_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe13_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------


			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe13_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe13_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];




			rg_pipe14_q1<=lv_local_q1; 
			rg_pipe14_multiplier<=lv_local_q;
			rg_pipe14_a<=lv_local_a;
			rg_flag[13]<=1;
			rg_pipe14_m<=lv_pipe13_m;
		end	
	endaction;
	endfunction


	/* (*doc = "func: function to perform pipeline's stage 15 operation.\
	     The next 4 steps of 64 steps of the multiplication process is performed.\
	     That is, 4 times the following operation is performed.\
		 First,the value of {rg_multiplier[0],rg_q1} is checked.\
		   **If it is equal to '10','rg_a' register is updated with rg_a-rg_multiplicand.\
		   **If it is equal to '01','rg_a' register is updated with rg_a+rg_multiplicand.\
		 Then,{rg_a,rg_multiplier,rg_q1} is shifted right arithmetically.\" *)*/

	function Action fn_pipe_stage_15 (Bit#(`num) a,Bit#(`num) q,Bit#(1) q1,
		 Bit#(`num) lv_pipe14_m, Bit#(1) prev_check )  ;
		
		return
		action

		/*(*doc =" note: the 4 steps operation is performed only when 
			prev_check is true,i.e, the previous stage 4 steps operations were 
			performed in the previous cycle.
		When prev_check is False,the 4 steps operation is not performed in the current
		cycle and rg_flag[14] is set to 0 so that stage-16 operations need not be performed 
		in the next cycle as the stage-15 4 steps operation are not performed."*)*/

		if(prev_check==0)
			rg_flag[14]<=0;
		else
		begin
			/*(*doc =" note: The local variables lv_local_a ,lv_local_q and lv_local_q1
			   holds the current value of a,q and q1 respectively everytime the 
			   prev_check is true.
			   All the computations are done in these local variables so that at the
			   end of the four steps,the values stored in these variables can be
			   transferred to the respective registers of stage-15.The rg_flag[14] is 
			   set to 1 so that stage-16 operations will be performed in the 
		           next cycle"*)
			*/
			Bit#(`num) lv_local_a= a;
			Bit#(`num) lv_local_q= q;
			Bit#(1) lv_local_q1= q1;
			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe14_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe14_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe14_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe14_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe14_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe14_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------


			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe14_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe14_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];




			rg_pipe15_q1<=lv_local_q1; 
			rg_pipe15_multiplier<=lv_local_q;
			rg_pipe15_a<=lv_local_a;
			rg_flag[14]<=1;
			rg_pipe15_m<=lv_pipe14_m;
		end

	endaction;
	endfunction


	/* (*doc = "func: function to perform pipeline's stage 16 operation.\
	     The next 4 steps of 64 steps of the multiplication process is performed.\
	     That is, 4 times the following operation is performed.\
		 First,the value of {rg_multiplier[0],rg_q1} is checked.\
		   **If it is equal to '10','rg_a' register is updated with rg_a-rg_multiplicand.\
		   **If it is equal to '01','rg_a' register is updated with rg_a+rg_multiplicand.\
		 Then,{rg_a,rg_multiplier,rg_q1} is shifted right arithmetically.\" *)*/
	function Action fn_pipe_stage_16 (Bit#(`num) a,Bit#(`num) q,Bit#(1) q1, Bit#(`num) lv_pipe15_m, Bit#(1) prev_check )  ;
		
		return
		action

		/*(*doc =" note: the 4 steps operation is performed only when 
			prev_check is true,i.e, the previous stage 4 steps operations were 
			performed in the previous cycle.
		When prev_check is False,the 4 steps operation is not performed in the current
		cycle and rg_flag[15] is set to 0 as the stage-16 4 steps operation are not performed."*)*/

		if(prev_check==0)
			rg_flag[15]<=0;
		else
		begin
			/*(*doc =" note: The local variables lv_local_a ,lv_local_q and lv_local_q1 
			   holds the current value of a,q and q1 respectively everytime the 
			   prev_check is true.
			   All the computations are done in these local variables so that at the
			   end of the four steps,the values stored in these variables can be
			   transferred to the respective registers of stage-16.The rg_res_ready 
			   flag is set True as the 64 steps has completed"*)
			*/
			Bit#(`num) lv_local_a= a;
			Bit#(`num) lv_local_q= q;
			Bit#(1) lv_local_q1= q1;
		
			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe15_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe15_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe15_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe15_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------

			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe15_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe15_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];

		//-----------------------------------------------------------


			if({lv_local_q[0],lv_local_q1}==2'b10)
				lv_local_a = lv_local_a - lv_pipe15_m;

			else if({lv_local_q[0],lv_local_q1}==2'b01)
				lv_local_a = lv_local_a + lv_pipe15_m;

			lv_local_q1=lv_local_q[0];

			lv_local_q=lv_local_q>>1;
			lv_local_q[`num-1]=lv_local_a[0];

			lv_local_a=lv_local_a>>1;
			lv_local_a[`num-1]=lv_local_a[`num-2];




			rg_pipe16_q1<=lv_local_q1; 
			rg_pipe16_multiplier<=lv_local_q;
			rg_pipe16_a<=lv_local_a;
			rg_pipe16_m<=lv_pipe15_m;
			rg_res_ready<=True;

		end	
	endaction;
	endfunction

	(*doc = "rule: This rule calls all the 16 pipeline stages functions\
		 with inputs as the previous stage's register contents. All the stages\
		 will be performed simultaneously in each clock cycle.\
		 In this way,they perform the pipeline operation."*)
	rule multiply ;

	fn_pipe_stage_1(rg_a,rg_multiplier,rg_q1,rg_inp_ready);
	fn_pipe_stage_2(rg_pipe1_a,rg_pipe1_multiplier,rg_pipe1_q1,rg_pipe1_m,rg_flag[0]);
	fn_pipe_stage_3(rg_pipe2_a,rg_pipe2_multiplier,rg_pipe2_q1,rg_pipe2_m,rg_flag[1]);
	fn_pipe_stage_4(rg_pipe3_a,rg_pipe3_multiplier,rg_pipe3_q1,rg_pipe3_m,rg_flag[2]);
	fn_pipe_stage_5(rg_pipe4_a,rg_pipe4_multiplier,rg_pipe4_q1,rg_pipe4_m,rg_flag[3]);
	fn_pipe_stage_6(rg_pipe5_a,rg_pipe5_multiplier,rg_pipe5_q1,rg_pipe5_m,rg_flag[4]);
	fn_pipe_stage_7(rg_pipe6_a,rg_pipe6_multiplier,rg_pipe6_q1,rg_pipe6_m,rg_flag[5]);
	fn_pipe_stage_8(rg_pipe7_a,rg_pipe7_multiplier,rg_pipe7_q1,rg_pipe7_m,rg_flag[6]);
	fn_pipe_stage_9(rg_pipe8_a,rg_pipe8_multiplier,rg_pipe8_q1,rg_pipe8_m,rg_flag[7]);
	fn_pipe_stage_10(rg_pipe9_a,rg_pipe9_multiplier,rg_pipe9_q1,rg_pipe9_m,rg_flag[8]);
	fn_pipe_stage_11(rg_pipe10_a,rg_pipe10_multiplier,rg_pipe10_q1,rg_pipe10_m,rg_flag[9]);
	fn_pipe_stage_12(rg_pipe11_a,rg_pipe11_multiplier,rg_pipe11_q1,rg_pipe11_m,rg_flag[10]);
	fn_pipe_stage_13(rg_pipe12_a,rg_pipe12_multiplier,rg_pipe12_q1,rg_pipe12_m,rg_flag[11]);
	fn_pipe_stage_14(rg_pipe13_a,rg_pipe13_multiplier,rg_pipe13_q1,rg_pipe13_m,rg_flag[12]);
	fn_pipe_stage_15(rg_pipe14_a,rg_pipe14_multiplier,rg_pipe14_q1,rg_pipe14_m,rg_flag[13]);
	fn_pipe_stage_16(rg_pipe15_a,rg_pipe15_multiplier,rg_pipe15_q1,rg_pipe15_m,rg_flag[14]);

	endrule

	/*(*doc = "method: receives multiplier and multiplicand values.
	   It also initialises the 'a'and'q1'registers only when either of the present inputs\
	   is not equal to any of the previous inputs." *)*/
	method Action ma_inputs ( Bit#(`num) inp1, Bit#(`num) inp2 );
		if(inp1!=rg_multiplier || inp2!=rg_multiplicand)
		begin
			rg_multiplier<=inp1;
			rg_multiplicand<=inp2;
			rg_a<=0;
			rg_q1<=0;
			rg_inp_ready<=True;
		end
		else
			rg_inp_ready<=False;
		
	endmethod

	//(*doc = "method: returns the product when the'rg_res_ready' flag is True."*)
	method ActionValue #(Bit#(`num2)) mav_outputs () if(rg_res_ready);
		rg_res_ready<=False;
		/*(*doc = "note:The product is the concatenation of the values present in 
		           'rg_pipe16_a'and 'rg_pipe16_multiplier'registers which is 
			   num2-bit number."*)*/
		Bit#(`num2) lv_ans={rg_pipe16_a,rg_pipe16_multiplier};
		return lv_ans;
	endmethod


endmodule

(*doc = "module: this is the testbench for our multiplication module"*)
module mk_Testbench();

	Ifc_booth_pipelined_64_4x16 inst <- mk_booth_pipelined_64_4x16;
	
	(*doc = "reg: this register holds the system's answer of the multiplication of \
		 two given inputs of each trial"*)
	Vector#(18,Reg#(Int#(TMul#(`num, 2)))) v_system_answer<-replicateM(mkReg(0));

	(*doc = "reg: this register keeps track of the index in system's answer register"*)
	Reg#(Bit#(5)) rg_state_rl1 <- mkReg(0);

	(*doc = "reg: this register keeps track of the index in system's answer register for\
		 comparison of the answers"*)
	Reg#(Bit#(5)) rg_state_rl2 <- mkReg(0);

	(*doc = "reg: this register counts the number of multiplications to be done and\
		 it is the counter in rule rl1"*)
	Reg#(Bit#(32)) rg_trials_rl1 <- mkReg(0);

	(*doc = "reg: this register counts the number of multiplications to be done and\
		 it is the counter in rule rl2"*)
	Reg#(Bit#(32)) rg_trials_rl2 <- mkReg(0);

	Randomize#(Int#(`num)) lv_random2 <- mkGenericRandomizer;
	Randomize#(Bit#(`num)) lv_random1 <- mkGenericRandomizer;
	
	(*doc = "reg: this register holds True value if the two random number instances have been initialised"*)	
	Reg#(Bool) rg_initialized <- mkReg(False);

	(*doc = "rule: keeps on iterating until the two random number instances have been initialised"*)
	rule r3(!rg_initialized);

		lv_random1.cntrl.init();
		lv_random2.cntrl.init();
		rg_initialized<=True;
	endrule

	(*doc = "rule: keeps on iterating until the number of multiplications specified has completed and the two random number instances 			 have been initialised"*)
	rule rl1 if (rg_trials_rl1<=1000 && rg_initialized);
		let lv_random_num1 <- lv_random1.next();
	 	let lv_random_num2 <- lv_random2.next();
         	Int#(TMul#(`num, 2)) lv_op1=signExtend(lv_random_num2);
		Int#(TMul#(`num, 2)) lv_op2=unpack(signExtend(lv_random_num1));

		//(*doc="note: System answer is computed "*);
		v_system_answer[rg_state_rl1]<=lv_op1*lv_op2;

		//(*doc="note: The inputs method is being called "*);
		inst.ma_inputs(lv_random_num1, pack(lv_random_num2));

		/*(*doc="note: When the system_answer[9] is used for storing the system's answer,
			 the next system's answer will be stored in system_answer[0] as output for
			 the each input comes in every 10th cycle and the comparison with system's
			 answer will be done in 10th cycle and we can write new values in 
			 system_answer[0] in next cycle."*);*/
		if(rg_state_rl1!=17)
			rg_state_rl1<=rg_state_rl1+1;
		else
			rg_state_rl1<=0;

		$display("start cycle is %d ----- Inp : %d and %d ",cur_cycle,lv_random_num2,lv_random_num1);

		rg_trials_rl1<=rg_trials_rl1+1;

	endrule

	(*doc = "rule: compares the system's answer with that generated using our multiplication module"*)	
	rule rl2 if(rg_trials_rl2<=1000);

		//(*doc="note: The value returned by the outputs method is stored "*);
		let c <- inst.mav_outputs;

		Int#(`num2) h = unpack(c);

		if(rg_state_rl2!=17)
			rg_state_rl2<=rg_state_rl2+1;
		else
			rg_state_rl2<=0;
		$display(" Trials :%d ---- end cycle is %d ",rg_trials_rl2,cur_cycle);

		//(*doc="note: System answer is compared with our answer "*);
		if(h==v_system_answer[rg_state_rl2])
			$display("Pass %d : %d ",h,v_system_answer[rg_state_rl2]);
		else
		begin
			$display("Fail %d : %d -------------------------------------------",
			h,v_system_answer[rg_state_rl2]);
		end

		rg_trials_rl2<=rg_trials_rl2+1;
	endrule

endmodule

endpackage
