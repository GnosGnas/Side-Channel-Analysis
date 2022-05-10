package single_cycle_wallace_multiplier;

	import LFSR :: *;
	import Vector :: *;
	import Randomizable:: *;

  import common_types :: * ;
  `include "Logger.bsv"

	`define num 32
	`define stages 9

	/*(*doc = " note: Values for
	'num' : 'stages'
	8 bits :  5 
	16 bits : 7 
	32 bits : 9 
	64 bits : 11
	
	** Use this command to compile for 32 and 64 bits :-
bsc +RTS -K90M -RTS -u -sim -keep-fires -steps-max-intervals 2000000 -g mk_Testbench single_cycle_wallace_multiplier.bsv 

 	"*)*/		

	//(*doc = "ifc:interface to receive inputs and to return the result "*)
	interface Ifc_single_cycle_wallace_multiplier;
		method Action ma_inputs(Bit#(XLEN) in1, Bit#(XLEN) in2, Bit#(3) funct3, Bool complement 
                                    `ifdef RV64 , Bool word32 `endif );
		method MBoxOutput mv_output;//returning the result
	endinterface

	(*synthesize*)
	(*doc = "module:implements multiplication of any given inputs "*)
	module mk_single_cycle_wallace_multiplier (Ifc_single_cycle_wallace_multiplier);

		(*doc = "reg: this register is for storing 'funct3' value"*)	
		Reg#(Bit#(3)) rg_fn3 <- mkReg(0);
    Reg#(Bool)        rg_complement <- mkReg(False);

  `ifdef RV64
		(*doc = "reg: this register is for storing the word_flag value"*)	
		Reg#(Bool) rg_word_flag <- mkReg(False);		
  `endif

		(*doc = "reg: this register is for storing first input value"*)
		Reg#(Bit#(`num)) rg_inp1 <- mkReg(0);

		(*doc = "reg: this register is for storing second input value"*)
		Reg#(Bit#(`num)) rg_inp2 <- mkReg(0);

		/* (*doc = "func: function to multiply two numbers using \
		single cycle wallace tree multiplier algorithm" *)*/
		function Bit#(`num) fn_mult(Bit#(`num) inp1,Bit#(`num) inp2, Bit#(3) funct3, 
                                                                                  Bool complement);

			Vector#(TMul#(`num, 2),Bit#(1)) v_zero_array =replicate(0);

			Vector#(`num,Vector#(TMul#(`num, 2),Bit#(1))) v_prev_stage_res 
			=replicate(v_zero_array);

			Vector#(`num,Vector#(TMul#(`num, 2),Bit#(1))) v_cur_stage_res 
			=replicate(v_zero_array);

			Vector#(`num,Vector#(TMul#(`num, 2),Bit#(1))) v_prev_stage_res_validity
			=replicate(v_zero_array);

			Vector#(`num,Vector#(TMul#(`num, 2),Bit#(1))) v_cur_stage_res_validity
			=replicate(v_zero_array);

			Bit#(1) lv_c;
			Bit#(TMul#(`num, 2)) lv_answ;
			Integer lv_i,lv_j;

			/*(*doc= note: This loop generates the partial product 
			and stores it in 'v_prev_stage_res' and  'v_prev_stage_res_validity'
			 stores 0's or 1's , which indicate whether the corresponding value 
			in 'v_prev_stage_res' is valid or not *)*/

			for(lv_i=0;lv_i<`num;lv_i=lv_i+1)      
				for(lv_j=0;lv_j<`num;lv_j=lv_j+1)
				begin
					lv_c= inp2[`num-1-lv_i]&inp1[`num-1-lv_j];	
					v_prev_stage_res[`num-1-lv_i][1+lv_j+lv_i]=lv_c ;
					v_prev_stage_res_validity[`num-1-lv_i][1+lv_j+lv_i]=1 ;
				end

			Integer lv_stage_count,lv_invalid_row_check,lv_stop,lv_num_of_valid_rows=`num;
			Integer lv_v,lv_u,lv_n;
			Bit#(1) lv_carry_valid,lv_carry;
			Bit#(3) lv_validity_check;


			//(*doc = "note: This loop runs 'stages' number of times" *)
			for(lv_stage_count=0;lv_stage_count<`stages-1;
			lv_stage_count=lv_stage_count+1)
			begin

				/*(*doc = "note: This loop groups 3 rows at a time
				in the 'v_prev_stage_res' and performs addition operation
				,using either half adder or full adder depending on 
				the number of valid elements in each column
				and stores the 'sum' and 'carry' in the 'v_curr_stage_res' matrix, 
				with 'sum' in one row and 'carry' in the next row.
				Thus, every 3 rows in prev_stage gives rose to 2 rows in curr_stage " *)*/

				for(lv_u=0,lv_v=0;lv_u+3<=lv_num_of_valid_rows;
				lv_u=lv_u+3,lv_v=lv_v+2) 
				begin
	
					/*(*doc = "note: This loop traverses through each column 
					and checks how many bits are valid 
					in the 3 grouped rows and accordingly obtains their sum and carry.
					And then stores them in 'v_cur_stage_res'" *)*/ 
							       
					for(lv_j=2*`num-1;lv_j>=0;lv_j=lv_j-1)
					begin
						lv_validity_check=
						{v_prev_stage_res_validity[lv_u][lv_j]
						,v_prev_stage_res_validity[lv_u+1][lv_j]
						,v_prev_stage_res_validity[lv_u+2][lv_j]};

						if(lv_validity_check==3'b001)
						begin
							lv_carry=0;

							lv_carry_valid=0;

							v_cur_stage_res[lv_v][lv_j]
							=v_prev_stage_res[lv_u+2][lv_j];

							v_cur_stage_res_validity[lv_v][lv_j]=1;
						end
						else if(lv_validity_check==3'b010)
						begin
							lv_carry=0;

							lv_carry_valid=0;

							v_cur_stage_res[lv_v][lv_j]
							=v_prev_stage_res[lv_u+1][lv_j];

							v_cur_stage_res_validity[lv_v][lv_j]=1;
						end

						else if(lv_validity_check ==3'b100)
						begin
							lv_carry=0;

							lv_carry_valid=0;

							v_cur_stage_res[lv_v][lv_j]
							=v_prev_stage_res[lv_u][lv_j];

							v_cur_stage_res_validity[lv_v][lv_j]=1;
						end

						else if(lv_validity_check==3'b110)
						begin
							lv_carry=(v_prev_stage_res[lv_u][lv_j]
							&v_prev_stage_res[lv_u+1][lv_j]);

							lv_carry_valid=1;

							v_cur_stage_res[lv_v][lv_j]
							=v_prev_stage_res[lv_u][lv_j]
							^v_prev_stage_res[lv_u+1][lv_j];

							v_cur_stage_res_validity[lv_v][lv_j]=1;
						end

						else if(lv_validity_check==3'b101)
						begin
							lv_carry=(v_prev_stage_res[lv_u][lv_j]
							&v_prev_stage_res[lv_u+2][lv_j]);

							lv_carry_valid=1;

							v_cur_stage_res[lv_v][lv_j]
							=v_prev_stage_res[lv_u][lv_j]
							^v_prev_stage_res[lv_u+2][lv_j];

							v_cur_stage_res_validity[lv_v][lv_j]=1;
						end

						else if(lv_validity_check==3'b011)
						begin
							lv_carry=(v_prev_stage_res[lv_u+1][lv_j]
							& v_prev_stage_res[lv_u+2][lv_j]);
							lv_carry_valid=1;
							v_cur_stage_res[lv_v][lv_j]
							=v_prev_stage_res[lv_u+1][lv_j]
							^v_prev_stage_res[lv_u+2][lv_j];
							v_cur_stage_res_validity[lv_v][lv_j]=1;
						end


						else if(lv_validity_check==3'b111)
						begin
							lv_carry=(v_prev_stage_res[lv_u][lv_j]
							& v_prev_stage_res[lv_u+1][lv_j])
							|(v_prev_stage_res[lv_u+2][lv_j]
							&(v_prev_stage_res[lv_u][lv_j]
							^v_prev_stage_res[lv_u+1][lv_j]));

							lv_carry_valid=1;

							v_cur_stage_res[lv_v][lv_j]
							=v_prev_stage_res[lv_u][lv_j]
							^v_prev_stage_res[lv_u+1][lv_j]
							^v_prev_stage_res[lv_u+2][lv_j];

							v_cur_stage_res_validity[lv_v][lv_j]=1;
						end

						else if (lv_validity_check==3'b000)
						begin
							lv_carry_valid=0;
							lv_carry=0;
							v_cur_stage_res[lv_v][lv_j]=0;
							v_cur_stage_res_validity[lv_v][lv_j]=0;
						end

						if(lv_j!=0)
						begin
							v_cur_stage_res[lv_v+1][lv_j-1]=lv_carry;

							v_cur_stage_res_validity[lv_v+1][lv_j-1]
							=lv_carry_valid;
						end
					end	     
				end

		
				lv_invalid_row_check=0;
				lv_stop=0;

				/*(*doc = "note: This loop performs two operations: 
				1. Transfers the rows that could not be grouped as 3 
				and are left out in the 'prev_stage', to the 'cur_stage'  
		
				2. Checks for the first row in 'prev_stage' , 
				where all the validity bits are 0 (invalid row) and 
				assigns 'lv_num_of_valid_rows' with that row index 
		
				" *)*/

				for(lv_i=lv_u,lv_n=lv_v;lv_i<`num;lv_i=lv_i+1,lv_n=lv_n+1 )
				begin
					if(lv_stop==0) 
					begin			
						v_cur_stage_res[lv_n]=v_prev_stage_res[lv_i];
						v_cur_stage_res_validity[lv_n]=
						v_prev_stage_res_validity[lv_i];

						if((v_prev_stage_res_validity[lv_i]==v_zero_array)
							&&(lv_invalid_row_check==0))
						begin
							 lv_num_of_valid_rows=lv_i-1;
							 lv_invalid_row_check=1;
							 lv_stop=1;
						end
					end	
				end
		
				/*(*doc=" note:All the 'cur_stage' values (result and validity) 
				are transferred to 'prev_stage' matrix and the
				'cur_stage' matrices are set to 0 "*)*/
				v_prev_stage_res=v_cur_stage_res;
				v_prev_stage_res_validity=v_cur_stage_res_validity;
				v_cur_stage_res=replicate(v_zero_array);
				v_cur_stage_res_validity=replicate(v_zero_array);
			end

			/*(*doc=" note: Last stage of Wallace Tree multiplication is reached, 
			where only two rows are left

			 1.  This loop traverses the columns of 'v_cur_stage_res'
			 and operates on the 2 rows to compute the 'sum' and 'carry'.

			 2.  The 'carry' of the previous column is included
			 in computing the 'sum' and 'carry'of the next column (ripple addition).

			 "*)*/
						
			lv_u=0;lv_v=0;

			for(lv_j=2*`num-1;lv_j>=0;lv_j=lv_j-1)
			begin
				lv_validity_check ={v_prev_stage_res_validity[lv_u][lv_j],
				v_prev_stage_res_validity[lv_u+1][lv_j],
				v_prev_stage_res_validity[lv_u+2][lv_j]};

				if(lv_validity_check==3'b001)
				begin
					lv_carry=0;
					lv_carry_valid=0;
					v_cur_stage_res[lv_v][lv_j]=v_prev_stage_res[lv_u+2][lv_j];
					v_cur_stage_res_validity[lv_v][lv_j]=1;
				end
				else if(lv_validity_check==3'b010)
				begin
					lv_carry=0;
					lv_carry_valid=0;
					v_cur_stage_res[lv_v][lv_j]=v_prev_stage_res[lv_u+1][lv_j];
					v_cur_stage_res_validity[lv_v][lv_j]=1;
				end
				else if(lv_validity_check ==3'b100)
				begin
					lv_carry=0;
					lv_carry_valid=0;
					v_cur_stage_res[lv_v][lv_j]=v_prev_stage_res[lv_u][lv_j];
					v_cur_stage_res_validity[lv_v][lv_j]=1;
				end
				else if(lv_validity_check==3'b110)
				begin
					lv_carry=(v_prev_stage_res[lv_u][lv_j]
					&v_prev_stage_res[lv_u+1][lv_j]);

					lv_carry_valid=1;

					v_cur_stage_res[lv_v][lv_j]=v_prev_stage_res[lv_u][lv_j]
					^v_prev_stage_res[lv_u+1][lv_j];

					v_cur_stage_res_validity[lv_v][lv_j]=1;
				end
				else if(lv_validity_check==3'b101)
				begin
					lv_carry=(v_prev_stage_res[lv_u][lv_j]
					&v_prev_stage_res[lv_u+2][lv_j]);

					lv_carry_valid=1;

					v_cur_stage_res[lv_v][lv_j]=v_prev_stage_res[lv_u][lv_j]
					^v_prev_stage_res[lv_u+2][lv_j];

					v_cur_stage_res_validity[lv_v][lv_j]=1;
				end
				else if(lv_validity_check==3'b011)
				begin
					lv_carry=(v_prev_stage_res[lv_u+1][lv_j]
					& v_prev_stage_res[lv_u+2][lv_j]);

					lv_carry_valid=1;

					v_cur_stage_res[lv_v][lv_j]=v_prev_stage_res[lv_u+1][lv_j]
					^v_prev_stage_res[lv_u+2][lv_j];

					v_cur_stage_res_validity[lv_v][lv_j]=1;
				end
				else if(lv_validity_check==3'b111)
				begin
					lv_carry=(v_prev_stage_res[lv_u][lv_j]
					& v_prev_stage_res[lv_u+1][lv_j])
					|(v_prev_stage_res[lv_u+2][lv_j]
					&(v_prev_stage_res[lv_u][lv_j]
					^v_prev_stage_res[lv_u+1][lv_j]));

					lv_carry_valid=1;

					v_cur_stage_res[lv_v][lv_j]=v_prev_stage_res[lv_u][lv_j]
					^v_prev_stage_res[lv_u+1][lv_j]
					^v_prev_stage_res[lv_u+2][lv_j];

					v_cur_stage_res_validity[lv_v][lv_j]=1;
				end
				else if (lv_validity_check==3'b000)
				begin
					lv_carry_valid=0;
					lv_carry=0;
					v_cur_stage_res[lv_v][lv_j]=0;
					v_cur_stage_res_validity[lv_v][lv_j]=0;
				end
				v_prev_stage_res[2][lv_j-1]=lv_carry;
				v_prev_stage_res_validity[2][lv_j-1]=lv_carry_valid;
			end
					     
			lv_u=3;lv_v=2;

	 		for(lv_i=lv_u,lv_n=lv_v;lv_i<`num;lv_i=lv_i+1,lv_n=lv_n+1 )  
			begin
				v_cur_stage_res[lv_n]=v_prev_stage_res[lv_i];
				v_cur_stage_res_validity[lv_n]=v_prev_stage_res_validity[lv_i];
			end

			/*(*doc=" note : All the 'cur_stage' values (result and validity) 
			are transferred to 'prev_stage' matrix and the 
			'cur_stage' matrices are set to 0 "*)*/
			v_prev_stage_res=v_cur_stage_res;
			v_prev_stage_res_validity=v_cur_stage_res_validity;
			v_cur_stage_res=replicate(v_zero_array);
			v_cur_stage_res_validity=replicate(v_zero_array);

			/*(*doc="note: The first row of 'prev_stage_res', 
			which holds the final product is transferred to 'lv_answ'" *) */
			for(lv_i=0;lv_i<2*`num;lv_i=lv_i+1)
		 		lv_answ[lv_i]=v_prev_stage_res[0][2*`num-1-lv_i] ;
    
      Bool lv_upperbits = unpack(|funct3[1:0]);

      if(complement)
        lv_answ = ~lv_answ + 1;

      Bit#(`num) default_out;
      if(lv_upperbits)
        default_out=truncateLSB(lv_answ);
      else
        default_out=truncate(lv_answ);

      `ifdef RV64
        if(word_flag)
          default_out = signExtend(default_out[31:0]);
      `endif
			// (*doc="note: The answer is returned " *)
			return default_out;

		endfunction
		
		/* (*doc = "method: receives multiplier and multiplicand values and 
		initialises other registers with their initial values " *) */
		method Action ma_inputs(Bit#(XLEN) in1, Bit#(XLEN) in2, Bit#(3) funct3, Bool complement 
                                    `ifdef RV64 , Bool word32 `endif );
				rg_inp1 <= in1;
				rg_inp2 <= in2;
				rg_fn3 <= funct3;
        rg_complement <= complement;

				`ifdef RV64
				  rg_word_flag<=word32;
				`endif

		endmethod

			
		//(*doc = "method: returns the product when the result ready flag is set true " *)
		method MBoxOutput mv_output;
			return MBoxOutput{ valid: True, data:fn_mult(rg_inp1, rg_inp2, rg_fn3, rg_complement)};
		endmethod

	endmodule


//	(*doc = "module:it is the testbench for the multiplication module"*)
//	module mk_Testbench ();
//
//		(*doc = "reg: this register holds the number of multiplications to be done"*)
//		Reg#(int) rg_trial_num <- mkReg(0);  
//
//		Randomize#(Bit#(`num)) lv_random1 <- mkGenericRandomizer;
//		Randomize#(Bit#(`num)) lv_random2 <- mkGenericRandomizer;
//
//		(*doc = "reg: this register is for storing first random number"*)
//		Reg#(Bit#(`num)) rg_random_num1<- mkReg(0);
//
//		(*doc = "reg: this register is for storing second random number"*)
//		Reg#(Bit#(`num)) rg_random_num2<- mkReg(0);
//	
//		(*doc = "reg: this register holds True value \
//		if the two random number instances have been initialised"*)	
//		Reg#(Bool) rg_initialized <- mkReg(False);
//
//		(*doc = "reg: this register holds the system's answer \
//		of the multiplication of two given inputs"*)
//		Reg#(UInt#(TMul#(`num, 2))) rg_system_answer<-mkReg(0);
//
//		Ifc_single_cycle_wallace_multiplier inst <- mk_single_cycle_wallace_multiplier;
//
//		(*doc = "rule: keeps on iterating until \
//		the two random number instances have been initialised"*)
//		rule r3(!rg_initialized);
//
//			lv_random1.cntrl.init();
//			lv_random2.cntrl.init();
//			rg_initialized<=True;
//		endrule
//
//		(*doc = "rule: keeps on iterating until the\
//		 number of multiplications specified has completed and \
//		 the two random number instances have been initialised"*)
//		rule r1(rg_trial_num<=1000000 && rg_initialized);
//
//		 	let lv_random_num1 <- lv_random1.next();
//		 	let lv_random_num2 <- lv_random2.next();
//
//			rg_random_num1<=lv_random_num1;
//			rg_random_num2<=lv_random_num2;
//
//		 	UInt#(TMul#(`num, 2)) lv_op1=unpack(zeroExtend(lv_random_num1));
//			UInt#(TMul#(`num, 2)) lv_op2=unpack(zeroExtend(lv_random_num2));
//
//			//(*doc="note: System answer is computed "*);
//			UInt#(TMul#(`num, 2)) lv_sys_prod=lv_op1*lv_op2;
//
//			//(*doc="note: System answer is stored in rg_system_answer "*);
//			rg_system_answer<=lv_sys_prod;
//
//			$display("State - %d : Product of %d and %d ",rg_trial_num,lv_random_num1
//			,lv_random_num2);
//				
//			/*(*doc="note: The start method is being called.
//			For obtaining the lower 32 bits of the product, give input to funct3
//			as 3'b000 [MUL] and for upper 32 bits as 3'b011 [MULHU] "*)*/
//			inst.ma_start(lv_random_num1,
//			lv_random_num2, 3'b000 `ifdef RV64 ,rg_word_flag `endif );
//
//			rg_trial_num<=rg_trial_num+1;
//
//		endrule
//
//		(*doc = "rule: compares the system's answer with\
//		 that generated using our multiplication module"*)	
//		rule r2;
//
//			//(*doc="note: The value returned by the result method is stored "*);
//			let lv_our_answer<- inst.mav_result(rg_random_num1,rg_random_num2);
//
//			$display("Our result %b ",lv_our_answer);
//			$display("Sys result %b ",rg_system_answer);
//			let lv_comp=pack(rg_system_answer);
//
//
//			//(*doc="note: System answer is compared with our answer "*);
//			if(lv_our_answer==lv_comp[(`num-1):0])
//				$display("Pass");
//			else
//			begin
//				$display("Fail---------------------------------------------");
//			end
//			//$display("cycle %0d",cur_cycle);
//			
//		endrule
//
//	endmodule
endpackage

