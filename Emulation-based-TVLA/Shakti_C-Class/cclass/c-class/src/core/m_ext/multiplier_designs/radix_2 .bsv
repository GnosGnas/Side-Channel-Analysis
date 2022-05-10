
/* Radix-2 Algorithm :
- Check 2 bits of the multiplier and correspondingly 
operate on the multiplicand (multiply with 0,1,-1)

-The two bits must be grouped in this fashion :
	Example : 6 bit number 6 cycles
	0 is appended to the right of the LSB of the multiplier.
		GrNum	 
		  0:	10011[1(0)]
		  1:	1001[11](0)
		  2: 	100[11]1(0)
		  3: 	10[01]11(0)
		  4: 	1[00]111(0)
		  5: 	[10]0111(0)
	
	     Grouped bits
	First bit    Second bit   Intermediate term
	   0             0             0
	   0             1             1*multiplicand
	   1             0             (-1)*multiplicand
	   1             1             0	
	
- Shift this intermediate term (g times right) where, 'g' is the group number(GrNum).
- For n-bit number, we will get 'n' such terms.
- Add these 'n' terms to get the product (takes n cycles)

-In this code we have reduced the number of cycles to n/8 by doing 
8 cycle operations in a single cycle 

*/

package radix_2;

	import Utils :: *;
	import Vector :: *;
	import Randomizable :: *;

	/*(*doc="note: Here 'num' denotes the number of bits in the input 
	and 'num2' is equal to 2 times 'num' "*);*/
	`define num 64
	`define num2 128

	/*(*doc="ifc: This interface contains two methods, one for getting the inputs 
	and the other for returning the output "*)*/
	interface Ifc_radix_2 ;
		method Action ma_inputs ( Bit#(`num) inp1, Bit#(`num) inp2 );
		method ActionValue #(Bit#(`num2)) mav_outputs ();
	endinterface 

	(*synthesize*)

	(*doc="module: This module computes the product of two inputs using\
	 radix 2 booth algorithm"*)
	module mk_radix_2 (Ifc_radix_2);

		(*doc="reg: This register holds the multiplier value "*)
		Reg#(Bit#(`num)) rg_multiplier <- mkReg(0);

		(*doc="reg: This register holds the multiplicand value "*)
		Reg#(Bit#(`num)) rg_multiplicand <- mkReg(0);

		(*doc="reg: This register holds the value of the final product "*)
		Reg#(Bit#(`num2)) rg_product <- mkReg(0);

		(*doc="reg: This register indicates whether the inputs are ready or not "*)
		Reg#(Bool) inp_ready <- mkReg(False);

		(*doc="reg: This register indicates whether the result is ready or not "*)
		Reg#(Bool) res_ready <- mkReg(False);

		(*doc="reg: This register keeps count of the number of steps \
		in the iterative process of radix 4 multiplication "*)
		Reg#(Int#(32)) rg_step <- mkReg(0);

		(*doc="reg: This register keeps track of the index of the group's starting bit "*)
		Reg#(Int#(32)) rg_start <- mkReg(0);

		(*doc="reg: This register keeps track of the group number(Here first group's number is 0)"*)
		Reg#(Int#(32)) rg_ends <- mkReg(1);

		(*doc="rule: This rule performs 8 steps of the radix_2 algorithm "*)
		rule rule_mul if(inp_ready && rg_step<(`num/8));

			/*(*doc="note: This variable holds the current value of the product 
			and is updated in every cycle  "*)*/
			Bit#(`num2) temp_prod=rg_product;
			Vector#(8,Bit#(`num2)) v_loc = replicate(0);
			Int#(32) lv_m=0,lv_i=0,lv_j=0,lv_k=0;

			/*(*doc="note: This 'if' block checks if 'rg_start' is 0 
				(which means this is the first grouping and checking for the input) 
				1. A '0' is appended and is grouped with the first bit
				   in the multiplier.

				2. This group is checked and a number is multpilied with 
				   the multiplicand accordingly, and that is stored in v_loc[0].

				3. This grouping and checking is repeated for
				   7 more groups (groups of 2) and those values are stored 
				   in v_loc[1],v_loc[2]....v_loc[7].

				4. These values in 'v_loc' array are shifted accordingly
				   and added to the product .

				5. 'rg_start' and 'rg_end' are also updated.
			"*)*/
			if(rg_start==0)
			begin
				if({rg_multiplier[0],0}==2'b00)
				begin
					v_loc[0]= 0;
				end
	
				if({rg_multiplier[0],0}== 2'b10)
				begin
					v_loc[0]= signExtend(rg_multiplicand)*-1;
				end

				lv_i=rg_start;
				lv_m=rg_ends;

				for(lv_j=1 ; lv_j<8 ;lv_j=lv_j+1 )
				begin   	
					if({rg_multiplier[lv_i+1],rg_multiplier[lv_i]}==2'b00 
					|| {rg_multiplier[lv_i+1],rg_multiplier[lv_i]}== 2'b11)
					begin
						v_loc[lv_j]= 0;
					end
	
					if({rg_multiplier[lv_i+1],rg_multiplier[lv_i]}== 2'b01)
					begin
						v_loc[lv_j]= signExtend(rg_multiplicand);
					end

					if({rg_multiplier[lv_i+1],rg_multiplier[lv_i]}==2'b10)
					begin
						v_loc[lv_j]= signExtend(rg_multiplicand)*-1;
					end

					/*(*doc="note: Shifting the values in 'v_loc' array 
					according to the group number "*)*/
					v_loc[lv_j]=v_loc[lv_j]<<lv_m;
					lv_i=lv_i+1;
					lv_m=lv_m+1;

				end
			end

			/*(*doc="note: If 'rg_start' is not equal to '0' 
				1. The bits in multiplier are grouped from
				   'rg_start' to 'rg_start + 1' (group of 2)

				2. This group is checked and a number is multpilied 
				   with the multiplicand accordingly,
				   and that is stored in v_loc[0].

				3. This grouping and checking is repeated
				   for 7 more groups (groups of 2) and those values are stored 
				   in v_loc[1],v_loc[2]....v_loc[7].

				4. These values in 'v_loc' array are shifted accordingly 
				   and added to the product.

				5. 'rg_start' and 'rg_end' are also updated.
			"*)*/
			else
			begin
				lv_i=rg_start;
				lv_m=rg_ends;

				for(lv_j=0 ; lv_j<8 ;lv_j=lv_j+1 )
				begin   	
			
					if({rg_multiplier[lv_i+1],rg_multiplier[lv_i]}==2'b00
					 || {rg_multiplier[lv_i+1],rg_multiplier[lv_i]}== 2'b11)
					begin
						v_loc[lv_j]= 0;
					end
	
					if({rg_multiplier[lv_i+1],rg_multiplier[lv_i]}== 2'b01)
					begin
						v_loc[lv_j]= signExtend(rg_multiplicand);
					end

					if({rg_multiplier[lv_i+1],rg_multiplier[lv_i]}==2'b10)
					begin
						v_loc[lv_j]= signExtend(rg_multiplicand)*-1;
					end

					/*(*doc="note: Shifting the values in 'v_loc' array
					 according to the group number "*)*/
					v_loc[lv_j]=v_loc[lv_j]<<lv_m;
					lv_i=lv_i+1;
					lv_m=lv_m+1;

				end
			end

			/*(*doc="note: This loop adds the 'v_loc' elements to the product "*)*/
			for(lv_k=0;lv_k<8;lv_k=lv_k+1)
			begin
				temp_prod=temp_prod+v_loc[lv_k];
				//$display("xxxxxxxxxx    %b ",v_loc[lv_k]);
			end

			/*(*doc="note: The product obtained in this stage is transferred 
			to the register 'rg_product'. And the other registers are also updated"*)*/		
			rg_product<=temp_prod;
			rg_ends<=lv_m;
			rg_start<=lv_i;
			rg_step<=rg_step+1;

			/*(*doc="note: Result ready flag is made true
			 in the last stage of the process"*)*/
			if(rg_step==(`num/8)-1)	
				res_ready<=True;

		endrule

		/*(*doc="method: This method takes the inputs and stores them in the registers.
		 It also initialises other registers to their initial values "*)*/
		method Action ma_inputs ( Bit#(`num) inp1, Bit#(`num) inp2 ) if(! inp_ready);

			rg_multiplier<=inp1;
			rg_multiplicand<=inp2;
			rg_product<=0;
			rg_step <=0;
			rg_start <=0;
			rg_ends<=1;
			inp_ready<=True;
	
		endmethod

		//(*doc="method: This method returns the final product if 'rg_res_ready' is True"*)
		method ActionValue #(Bit#(`num2)) mav_outputs () if(res_ready);

			res_ready<=False;
			inp_ready<=False;
			return rg_product;

		endmethod

	endmodule

	(*doc="module: This module is a testbench for the multiplier module"*)
	module mk_Testbench();

		(*doc = "reg: this register holds the number of multiplications to be done"*)
		Reg#(int) rg_trial_num <- mkReg(0);  

		Randomize#(Int#(`num)) lv_random1 <- mkGenericRandomizer;
		Randomize#(Bit#(`num)) lv_random2 <- mkGenericRandomizer;
	
		(*doc = "reg: this register holds True value if the two random number instances\
		 have been initialised"*)	
		Reg#(Bool) rg_initialized <- mkReg(False);

		(*doc = "reg: this register holds the system's answer of the multiplication\
		 of two given inputs"*)
		Reg#(Int#(TMul#(`num, 2))) rg_system_answer<-mkReg(0);

		Ifc_radix_2 inst <- mk_radix_2;

		(*doc = "rule: keeps on iterating until the two random number instances\
		 have been initialised"*)
		rule r3(!rg_initialized);

			lv_random1.cntrl.init();
			lv_random2.cntrl.init();
			rg_initialized<=True;

		endrule

		(*doc = "rule: keeps on iterating until the number of multiplications specified\
		 has completed and the two random number instances have been initialised"*)
		rule r1(rg_trial_num<=100000 && rg_initialized);

		 	let lv_random_num1 <- lv_random1.next();
		 	let lv_random_num2 <- lv_random2.next();

		 	Int#(TMul#(`num, 2)) lv_op1=signExtend(lv_random_num1);
			Int#(TMul#(`num, 2)) lv_op2=unpack(signExtend(lv_random_num2));

			//(*doc="note: System answer is computed "*);
			Int#(TMul#(`num, 2)) lv_sys_prod=lv_op1*lv_op2;

			$display("State - %d : Product of %d and %d ",rg_trial_num,
			lv_random_num2,lv_random_num1);

			rg_system_answer<=lv_sys_prod;
	
			//(*doc="note: The inputs method is being called "*);	
			inst.ma_inputs(lv_random_num2,pack(lv_random_num1));
			rg_trial_num<=rg_trial_num+1;

		endrule

		(*doc = "rule: compares the system's answer with that generated \
		using our multiplication module"*)	
		rule r2;

			//(*doc="note: The value returned by the outputs method is stored "*);
			let lv_our_answer <-inst.mav_outputs();
			Int#(`num2) h = unpack(lv_our_answer);

			//(*doc="note: System answer is compared with our answer "*);
			if(h==rg_system_answer)
				$display("Pass %d : %d ",h,rg_system_answer);
			else
			begin
				$display("Fail %d : %d ----------------------------------\
				---------------------------- ",h,rg_system_answer);
			end
		
		endrule

	endmodule

endpackage
