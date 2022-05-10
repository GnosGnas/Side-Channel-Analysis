package booth_pipelined_32_4x8;

import Utils :: *;
import Vector :: *;
import Randomizable:: *;

//(*doc="note: This code works for 32 bits only. Do not change these constant values "*)

//(*doc = " note:'num' is the number of bits of the input"*)
`define num 32
//(*doc = " note:'num2' is twice the number of bits of the input"*)
`define num2 64

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
This is 4x8 pipelined Booth multiplication.
For the computation of the product of two 32-bit numbers, we require 32 steps.
There are 8 stages in the pipeline and in each stage, four steps of the booth multiplication 
is performed.
So, on the whole in the 8 stages, 4x8=32 steps of the booth multiplication will be performed
and at the end of the 8th stage we will get the output.
The output is the concatenation of the values present in 'a' and 'q'registers of the 8th stage."*) 

 */

//(*doc = "ifc:interface to receive inputs and to return the result "*)
interface Ifc_booth_pipelined_32_4x8 ;
	method Action ma_inputs ( Bit#(`num) inp1, Bit#(`num) inp2 );
	method ActionValue #(Bit#(`num2)) mav_outputs ();
endinterface 

(*synthesize*)
(*doc = "module:implements multiplication using  4x8 pipelined booth algorithm"*)
module mk_booth_pipelined_32_4x8 (Ifc_booth_pipelined_32_4x8);
	
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
	Vector#(8,Reg#(Bit#(1))) rg_flag <-replicateM (mkReg(0));


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


	/* (*doc = "func: function to perform pipeline's stage-1 operation.\
	     The first 4 steps of 32 steps of the multiplication process is performed.\
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
		//----------------------------------------------------

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





			rg_pipe1_q1<=lv_local_q1; 
			rg_pipe1_multiplier<=lv_local_q;
			rg_pipe1_a<=lv_local_a;
			rg_pipe1_m<=rg_multiplicand;
			rg_flag[0]<=1;
		end

		endaction;
	endfunction

	/* (*doc = "func: function to perform pipeline's stage-2 operation.\
	     The next 4 steps of 32 steps of the multiplication process is performed.\
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
		//----------------------------------------------------
			
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




			rg_pipe2_q1<=lv_local_q1; 
			rg_pipe2_multiplier<=lv_local_q;
			rg_pipe2_a<=lv_local_a;
			rg_flag[1]<=1;
			rg_pipe2_m<=lv_pipe1_m;
		end
		endaction;
	endfunction

	/* (*doc = "func: function to perform pipeline's stage-3 operation.\
	     The next 4 steps of 32 steps of the multiplication process is performed.\
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
		cycle and rg_flag[2] is set to 0 so that stage-4 operations need not be performed 
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
		//----------------------------------------------------

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


			rg_pipe3_q1<=lv_local_q1; 
			rg_pipe3_multiplier<=lv_local_q;
			rg_pipe3_a<=lv_local_a;
			rg_flag[2]<=1;
			rg_pipe3_m<=lv_pipe2_m;
		end
		endaction;
	endfunction

	/* (*doc = "func: function to perform pipeline's stage-4 operation.\
	     The next 4 steps of 32 steps of the multiplication process is performed.\
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
		//----------------------------------------------------

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




			rg_pipe4_q1<=lv_local_q1; 
			rg_pipe4_multiplier<=lv_local_q;
			rg_pipe4_a<=lv_local_a;
			rg_flag[3]<=1;
			rg_pipe4_m<=lv_pipe3_m;
		end
		endaction;
	endfunction

	/* (*doc = "func: function to perform pipeline's stage-5 operation.\
	     The next 4 steps of 32 steps of the multiplication process is performed.\
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
		//----------------------------------------------------

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



	
			rg_pipe5_q1<=lv_local_q1; 
			rg_pipe5_multiplier<=lv_local_q;
			rg_pipe5_a<=lv_local_a;
			rg_flag[4]<=1;
			rg_pipe5_m<=lv_pipe4_m;
		end
		endaction;
	endfunction

	/* (*doc = "func: function to perform pipeline's stage-6 operation.\
	     The next 4 steps of 32 steps of the multiplication process is performed.\
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

		//----------------------------------------------------

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


			rg_pipe6_q1<=lv_local_q1; 
			rg_pipe6_multiplier<=lv_local_q;
			rg_pipe6_a<=lv_local_a;
			rg_flag[5]<=1;
			rg_pipe6_m<=lv_pipe5_m;
		end
	endaction;
	endfunction

	/* (*doc = "func: function to perform pipeline's stage-7 operation.\
	     The next 4 steps of 32 steps of the multiplication process is performed.\
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

		//----------------------------------------------------

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





			rg_pipe7_q1<=lv_local_q1; 
			rg_pipe7_multiplier<=lv_local_q;
			rg_pipe7_a<=lv_local_a;
			rg_flag[6]<=1;
			rg_pipe7_m<=lv_pipe6_m;
		end
	endaction;
	endfunction

	/* (*doc = "func: function to perform pipeline's stage-8 operation.\
	     The next 4 steps of 32 steps of the multiplication process is performed.\
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
		cycle and rg_flag[7] is set to 0 as the stage-8 4 steps operation are not performed."*)*/

		if(prev_check==0)
			rg_flag[7]<=0;
		else
		begin
			/*(*doc =" note: The local variables lv_local_a ,lv_local_q and lv_local_q1
			   holds the current value of a,q and q1 respectively everytime the 
			   prev_check is true.
			   All the computations are done in these local variables so that at the
			   end of the four steps,the values stored in these variables can be
			   transferred to the respective registers of stage-8.The rg_res_ready is set
			   True so that the answer can be returned in the next cycle"*)*/

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

		//----------------------------------------------------

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




			rg_pipe8_q1<=lv_local_q1; 
			rg_pipe8_multiplier<=lv_local_q;
			rg_pipe8_a<=lv_local_a;
			rg_res_ready<=True;
			rg_pipe8_m<=lv_pipe7_m;
		end
	endaction;
	endfunction


	(*doc = "rule: This rule calls all the 8 pipeline stages functions\
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
			  'rg_pipe8_a'and 'rg_pipe8_multiplier'registers which is 
			   num2-bit number."*)*/
		Bit#(`num2) lv_ans={rg_pipe8_a,rg_pipe8_multiplier};
		return lv_ans;
	endmethod


endmodule

(*doc = "module: this is the testbench for our multiplication module"*)
module mk_Testbench();

	Ifc_booth_pipelined_32_4x8 inst <- mk_booth_pipelined_32_4x8;
	
	(*doc = "reg: this register holds the system's answer of the multiplication of \
		 two given inputs of each trial"*)
	Vector#(10,Reg#(Int#(TMul#(`num, 2)))) v_system_answer<-replicateM(mkReg(0));

	(*doc = "reg: this register keeps track of the index in system's answer register"*)
	Reg#(Bit#(4)) rg_state_rl1 <- mkReg(0);

	(*doc = "reg: this register keeps track of the index in system's answer register for\
		 comparison of the answers"*)
	Reg#(Bit#(4)) rg_state_rl2 <- mkReg(0);

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
	rule rl1 if (rg_trials_rl1<=10 && rg_initialized);
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
		if(rg_state_rl1!=9)
			rg_state_rl1<=rg_state_rl1+1;
		else
			rg_state_rl1<=0;

		$display("start cycle is %d ----- Inp : %d and %d ",cur_cycle,lv_random_num2,lv_random_num1);

		rg_trials_rl1<=rg_trials_rl1+1;

	endrule

	(*doc = "rule: compares the system's answer with that generated using our multiplication module"*)	
	rule rl2 if(rg_trials_rl2<=10);

		//(*doc="note: The value returned by the outputs method is stored "*);
		let c <- inst.mav_outputs;

		Int#(`num2) h = unpack(c);

		if(rg_state_rl2!=9)
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
