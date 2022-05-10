package multi_cycle_wallace_multiplier;

	import LFSR         :: *;
	import Vector         :: *;
	import Utils         :: *;
	import Randomizable   :: *;
	//(*doc="note: The process function is included "*)
	`include "process_func.bsv"

	/*(*doc="note: Here 'num' denotes the number of bits in the input
		
		** Use this command to compile for 64 bits :-
	bsc +RTS -K90M -RTS -u -sim -keep-fires -steps-max-intervals 2000000 
	-g mk_Testbench multi_cycle_wallace_multiplier.bsv 

	"*);*/
	`define num 32

	//(*doc = "ifc: This interface has methods to get inputs and give outputs"*)
	interface Ifc_multi_cycle_wallace_multiplier;
		method Action ma_start (Bit#(`num) inp1,Bit#(`num) inp2,
			Bit#(3) funct3 `ifdef RV64 ,Bool word_flag `endif );
   		method ActionValue #(Bit#(`num)) mav_result(Bit#(`num) in1, Bit#(`num) in2);
	endinterface

	(*synthesize*)
	
	(*doc = "module: This module computes the product of two inputs "*)
	module mk_multi_cycle_wallace_multiplier (Ifc_multi_cycle_wallace_multiplier);
		(*doc = "reg: this register is for storing 'funct3' value"*)	
		Reg#(Bit#(3)) rg_funct3 <- mkReg(0);

		(*doc = "reg: this register is for storing the word_flag value"*)	
		Reg#(Bool) rg_word_flag <- mkReg(False);

		(*doc = "reg: This register stores one operand "*)
		Reg#(Bit#(`num)) rg_a <- mkReg(0);

		(*doc = "reg: This register stores another operand "*)
		Reg#(Bit#(`num)) rg_b <- mkReg(0);

		(*doc = "reg:This register indicates whether the result is ready or not "*)
		Reg#(Bool) rg_res_ready <- mkReg(False);

		(*doc = "reg:This register indicates whether the inputs are ready or not "*)
		Reg#(Bool) rg_inp_ready <- mkReg(False);

		(*doc = "reg: This register indicates whether\
		 the partial products are generated or not "*)
		Reg#(Bool) rg_part_ready <- mkReg(False);
 
		(*doc = "reg: This register indicates whether \
		the last stage has been reached or not "*)
		Reg#(Bool) rg_last_ready <- mkReg(False);

		(*doc = "reg: This register keeps track of the number of steps taken\
		 for the complete operation "*)
		Reg#(int) rg_step <- mkReg(0);

		(*doc = "reg: This register stores the final answer "*)
		Reg#(Bit#(TMul#(`num, 2))) rg_ans <- mkReg(0);
		
		(*doc = "reg: This 3 x 2num register stores the values of 3 partial products\
		 at a time with one partial product in each row."*)
		Reg#(Vector#(3,(Bit#(TMul#(`num, 2))))) rg_x <- mkReg(replicate(0));

		(*doc = "reg: This 3 X 2num register stores\
		 the validity of the partial product values in the 3 rows"*)
		Reg#(Vector#(3,(Bit#(TMul#(`num, 2))))) rg_valid <-mkReg(replicate(0));


		/*(*doc = "func: Generates partial products , 3 rows at a time .
		'v_local_x' stores the partial products and 'v_local_valid' 
		indicates whether the values in 'v_local_x' are valid or not "*)*/		
		function Action fn_partial (Bit#(`num) a, Bit#(`num) b);
			return
			action
				Integer lv_i,lv_j;
				Vector#(3,Bit#(TMul#(`num, 2))) v_local_x =replicate(0);
				Vector#(3,Bit#(TMul#(`num, 2))) v_local_valid =replicate(0);
			
				for(lv_i=0;lv_i<3;lv_i=lv_i+1)
				begin
					for(lv_j=0;lv_j<`num;lv_j=lv_j+1)
					begin	
						v_local_x[lv_i][lv_j+lv_i]= b[lv_i]&a[lv_j];
						v_local_valid[lv_i][lv_j+lv_i]=1 ;
					end
				end	
				rg_x<=v_local_x;
				rg_valid<=v_local_valid;

			endaction;
		endfunction


		//(*doc = "func: Displays the intermediate stages.(!For the debugging purpose!)"*)
		function Action fn_disp ();
			return
			action
				Bit#(TMul#(`num, 2)) v_local_x;
				Bit#(TMul#(`num, 2)) v_local_valid;
				Integer lv_m,lv_n;
				for(lv_m=0;lv_m<3;lv_m=lv_m+1)
				begin
					v_local_x=rg_x[lv_m];
					v_local_valid=rg_valid[lv_m];
					for(lv_n=2*`num-1;lv_n>=0;lv_n=lv_n-1)
					begin
						if(v_local_valid[lv_n]==1)
							$display(" %b ",v_local_x[lv_n]);
						else
							$display(" x ");
					end
					$display("\n");
				end

				$display("------------------------");

			endaction;
		endfunction

		/*(*doc = "func: Performs half or full adder operation on the 3 rows, 
		depending on the number of valid values in each column and
		 produces 'sum' and 'carry' rows .
		Hence, 3 rows in this stage gives 2 rows in the next stage"*)*/
		function Action fn_stage( Bit#(`num) a, Bit#(`num) b);

			return
			action
				Bit#(1)  lv_carry_valid=0,lv_carry=0;
				Bit#(1)  lv_prev_carry_valid=0,lv_prev_carry=0;
				Integer lv_j;
				Int#(32) lv_e,lv_t;
				Bit#(3) lv_d;

				Vector#(3,Bit#(TMul#(`num, 2))) v_local_x=rg_x;
				Vector#(3,Bit#(TMul#(`num, 2))) v_local_valid=rg_valid;
						 

				for(lv_j=0;lv_j<2*`num;lv_j=lv_j+1)
				begin
					lv_d ={v_local_valid[0][lv_j],v_local_valid[1][lv_j]
					,v_local_valid[2][lv_j]};

					if(lv_d==3'b001)
					begin
						lv_carry=0;
						lv_carry_valid=0;
						v_local_x[0][lv_j]=v_local_x[2][lv_j];
						v_local_valid[0][lv_j]=1;
					end

					else if(lv_d==3'b010)
					begin
						lv_carry=0;
						lv_carry_valid=0;
						v_local_x[0][lv_j]=v_local_x[1][lv_j];
						v_local_valid[0][lv_j]=1;
					end

					else if(lv_d ==3'b100)
					begin
						lv_carry=0;
						lv_carry_valid=0;
						v_local_x[0][lv_j]=v_local_x[0][lv_j];
						v_local_valid[0][lv_j]=1;
					end

					else if(lv_d==3'b110)
					begin
						lv_carry=(v_local_x[0][lv_j]&v_local_x[1][lv_j]);

						lv_carry_valid=1;

						v_local_x[0][lv_j]=v_local_x[0][lv_j]
						^v_local_x[1][lv_j];

						v_local_valid[0][lv_j]=1;
					end

					else if(lv_d==3'b101)
					begin
						lv_carry=(v_local_x[0][lv_j]&v_local_x[2][lv_j]);

						lv_carry_valid=1;

						v_local_x[0][lv_j]=v_local_x[0][lv_j]
						^v_local_x[2][lv_j];

						v_local_valid[0][lv_j]=1;
					end

					else if(lv_d==3'b011)
					begin
						lv_carry=(v_local_x[1][lv_j]& v_local_x[2][lv_j]);

						lv_carry_valid=1;

						v_local_x[0][lv_j]=v_local_x[1][lv_j]
						^v_local_x[2][lv_j];

						v_local_valid[0][lv_j]=1;
					end


					else if(lv_d==3'b111)
					begin
						lv_carry=(v_local_x[0][lv_j]& v_local_x[1][lv_j])
						|(v_local_x[2][lv_j]&(v_local_x[0][lv_j]
						^v_local_x[1][lv_j]));

						lv_carry_valid=1;

						v_local_x[0][lv_j]=v_local_x[0][lv_j]
						^v_local_x[1][lv_j]^v_local_x[2][lv_j];

						v_local_valid[0][lv_j]=1;
					end

					else if (lv_d==3'b000)
					begin
						lv_carry=0;
						lv_carry_valid=0;
						v_local_x[0][lv_j]=0;
						v_local_valid[0][lv_j]=0;
					end

		
				
					
					v_local_x[1][lv_j]=lv_prev_carry;
					v_local_valid[1][lv_j]=lv_prev_carry_valid;
					lv_prev_carry=lv_carry;
					lv_prev_carry_valid=lv_carry_valid;
				
				end
					
				/*(*doc="note: The computation above, fills two rows 
				of 'v_local_x' with sum and carry. 
				Now if the last stage of the process has not been reached yet, 
				the next partial product row has to be inserted 
				in the 3rd row of 'v_local_x',to carry out the same
				 3 row operation in the next cycle (step) "*)*/
				
				if(rg_step<`num)
				begin
  
					/*(*doc="note: This loop sets the proper
					 valid bits at 'v_local_valid',
					 to insert the next partial product row at
					 the 3rd row of 'v_local_x' "*)*/

					for( lv_e=0;lv_e<2*`num;lv_e=lv_e+1)
					begin
						if(lv_e>=rg_step && lv_e<rg_step+`num)
							v_local_valid[2][lv_e]=1;
						else
							v_local_valid[2][lv_e]=0;
					end

					/*(*doc="note: The next partial product is computed
					 by checking the multiplier bit ( b[rg_step] )
					and  inserted into the 3rd row of 'v_local_x' "*)*/
					if(b[rg_step]==1)
					begin
						for(lv_t=0;lv_t<`num;lv_t=lv_t+1)
						begin		
							v_local_x[2][rg_step+lv_t]=a[lv_t];
						end
					end

					else
					begin
						for(lv_t=0;lv_t<=`num;lv_t=lv_t+1)
						begin		
							v_local_x[2][rg_step+lv_t]=0;
						end					
					end

				end

				/*(*doc="note: If the last stage has been reached the 
				3rd row of 'v_local_x' is made invalid by setting 
				'v_local_valid[2]' as 0 "*)*/
				else
					for(lv_e=0;lv_e<2*`num;lv_e=lv_e+1)
						v_local_valid[2][lv_e]=0;
				rg_x<=v_local_x;
				rg_valid<=v_local_valid;
												
			endaction;
		endfunction

		/*(*doc ="func: Performs (ripple) addtion operation on the 2 rows in the last stage
		 and produces the result"*)*/
		function Action fn_last_stage();
			return
			action
				Bit#(1)  lv_carry_valid=0,lv_carry=0;
				Bit#(1)  lv_prev_carry_valid=0,lv_prev_carry=0;
				Integer lv_j;
				Bit#(3) lv_d;

				Vector#(3,Bit#(TMul#(`num, 2))) v_local_x=rg_x;
				Vector#(3,Bit#(TMul#(`num, 2))) v_local_valid=rg_valid;
						 

				for(lv_j=0;lv_j<2*`num;lv_j=lv_j+1)
				begin
					lv_d ={v_local_valid[0][lv_j],v_local_valid[1][lv_j]
					,lv_prev_carry_valid};
					if(lv_d==3'b001)
					begin
						lv_carry=0;
						lv_carry_valid=0;
						v_local_x[0][lv_j]=lv_prev_carry;
						v_local_valid[0][lv_j]=1;
					end

					else if(lv_d==3'b010)
					begin
						lv_carry=0;
						lv_carry_valid=0;
						v_local_x[0][lv_j]=v_local_x[1][lv_j];
						v_local_valid[0][lv_j]=1;
					end

					else if(lv_d ==3'b100)
					begin
						lv_carry=0;
						lv_carry_valid=0;
						v_local_x[0][lv_j]=v_local_x[0][lv_j];
						v_local_valid[0][lv_j]=1;
					end

					else if(lv_d==3'b110)
					begin
						lv_carry=(v_local_x[0][lv_j]&v_local_x[1][lv_j]);

						lv_carry_valid=1;

						v_local_x[0][lv_j]=v_local_x[0][lv_j]
						^v_local_x[1][lv_j];

						v_local_valid[0][lv_j]=1;
					end

					else if(lv_d==3'b101)
					begin
						lv_carry=(v_local_x[0][lv_j]&lv_prev_carry);

						lv_carry_valid=1;

						v_local_x[0][lv_j]=v_local_x[0][lv_j]
						^lv_prev_carry;

						v_local_valid[0][lv_j]=1;
					end

					else if(lv_d==3'b011)
					begin
						lv_carry=(v_local_x[1][lv_j]& lv_prev_carry);

						lv_carry_valid=1;

						v_local_x[0][lv_j]=v_local_x[1][lv_j]
						^ lv_prev_carry;

						v_local_valid[0][lv_j]=1;
					end


					else if(lv_d==3'b111)
					begin
						lv_carry=(v_local_x[0][lv_j]& v_local_x[1][lv_j])
						|(lv_prev_carry&(v_local_x[0][lv_j]
						^v_local_x[1][lv_j]));

						lv_carry_valid=1;

						v_local_x[0][lv_j]=v_local_x[0][lv_j]
						^v_local_x[1][lv_j]^lv_prev_carry;

						v_local_valid[0][lv_j]=1;
					end

					else if (lv_d==3'b000)
					begin
						lv_carry=0;
						lv_carry_valid=0;
						v_local_x[0][lv_j]=0;
						v_local_valid[0][lv_j]=0;
					end

					v_local_x[1][lv_j]=lv_prev_carry;
					v_local_valid[1][lv_j]=lv_prev_carry_valid;
					lv_prev_carry=lv_carry;
					lv_prev_carry_valid=lv_carry_valid;
				
				end

				//(*doc="note: The first row of 'rg_x' holds the final product "*)					
				rg_x<=v_local_x;
				rg_valid<=v_local_valid;
												
			endaction;
		endfunction

		(*doc = "rule: Once the input is ready, the partial products are generated "*)		
		rule rl1 if(rg_inp_ready);

			fn_partial(rg_a,rg_b);
			rg_part_ready<=True;
			rg_inp_ready<=False;
			rg_step<=3;

			//$display("rl1 : %d ",cur_cycle);
		
		endrule

		(*doc = "rule: Once the partial products are ready, \
		each stage operation is repeatedly performed "*)
		rule rl2 if(rg_part_ready && rg_step<=`num);
			
			fn_stage(rg_a,rg_b);
			rg_step<=rg_step+1; 
			//fn_disp();
			//$display("rl2 : %d ",cur_cycle);
		
		endrule

		(*doc = "rule: When the last stage is reached, \
		the operation for last stage is performed and the answer is obtained "*)
		rule rl3 if(rg_step==`num+1);
			
			//fn_disp();
			fn_last_stage();
			rg_part_ready<=False;
			rg_last_ready<=True;
			rg_step<=3;
			//$display("rl3 : %d ",cur_cycle);

		endrule
	
		(*doc = "rule: Once the last stage operation is complete,\
		 the answer is transferred to the answer register "*)
		rule rl4 if(rg_last_ready);
			
			Bit#(TMul#(`num, 2)) v_local_x_0=rg_x[0];
			//fn_disp();
			rg_ans<=v_local_x_0;
			rg_last_ready<=False;
			rg_res_ready<=True;
		
		endrule
		/*(*doc = "method: receives multiplier and multiplicand values and 
		initialises other registers with their initial values " *) */
		method Action ma_start (Bit#(`num) inp1,Bit#(`num) inp2,
		Bit#(3) funct3 `ifdef RV64 ,Bool word_flag `endif )if(!rg_inp_ready && 
		!rg_part_ready && !rg_last_ready && !rg_res_ready);

				rg_a<= inp1;
				rg_b<= inp2;
				rg_funct3<=funct3;

				Vector#(3,Bit#(TMul#(`num, 2))) v_local_x=replicate(0);
				Vector#(3,Bit#(TMul#(`num, 2))) v_local_valid=replicate(0);

				rg_x<=v_local_x;
				rg_valid<=v_local_valid;

				`ifdef RV64
				rg_word_flag<=word_flag;

				`endif

				rg_inp_ready<=True;

		endmethod

		//(*doc = "method: returns the product when the result ready flag is set true " *)
		method ActionValue #(Bit#(`num)) mav_result(Bit#(`num) in1, Bit#(`num) in2) if(
					rg_res_ready==True);

			rg_res_ready<=False;

			/*doc("note: The process function is called on the obtained product"*)*/
			Bit#(`num) answ= fn_process(in1,in2,
			rg_ans,rg_funct3 `ifdef RV64 ,rg_word_flag `endif );

			return answ;
		endmethod

	endmodule

	(*doc = "module: Tests the design by providing random inputs "*)
	module mk_Testbench ();

		(*doc = "reg: This register stores the number of test input cases"*)		
		Reg#(int) rg_state <- mkReg(0);

		Randomize#(Bit#(`num)) a1 <- mkGenericRandomizer;
		Randomize#(Bit#(`num)) b1 <- mkGenericRandomizer;
		
		(*doc = "reg: this register is for storing first random number"*)
		Reg#(Bit#(`num)) rg_random_num1<- mkReg(0);

		(*doc = "reg: this register is for storing second random number"*)
		Reg#(Bit#(`num)) rg_random_num2<- mkReg(0);

		(*doc = "reg: This register indicates whether the random operands\
		 have been initialized or not "*)
		Reg#(Bool) rg_initialized <- mkReg(False);
		
		(*doc = "reg: This register stores the product of the operands using * operator"*)
		Reg#(UInt#(TMul#(`num, 2))) rg_product<-mkReg(0);

		Ifc_multi_cycle_wallace_multiplier inst <- mk_multi_cycle_wallace_multiplier;

		(*doc = "rule: Initialises the random input variables "*)
		rule r3(!rg_initialized);

			a1.cntrl.init();
			b1.cntrl.init();
			rg_initialized<=True;
		endrule
		
		(*doc = "rule: keeps on iterating until the\
		number of multiplications specified has completed and \
		the two random number instances have been initialised"*)
		rule r1(rg_state<=1000 && rg_initialized);

			 let a <- a1.next();
			 let b <- b1.next();

			 rg_random_num1<=a;
			 rg_random_num2<=b;

			 UInt#(TMul#(`num, 2)) rand_op_a=unpack(zeroExtend(a));
			 UInt#(TMul#(`num, 2)) rand_op_b=unpack(zeroExtend(b));

			 //(*doc="note: System answer is computed "*);
			 UInt#(TMul#(`num, 2)) rand_prod=rand_op_a*rand_op_b;

			 $display("State - %d : Product of %d and %d ",rg_state,a,b);

			 //(*doc="note: System answer is stored in rg_system_answer "*);
			 rg_product<=rand_prod;

			 /*(*doc="note: The start method is being called.
			 For obtaining the lower 32 bits of the product, give input to funct3
			 as 3'b000 [MUL] and for upper 32 bits as 3'b011 [MULHU] "*)*/
			 inst.ma_start(a,
			 b, 3'b000 `ifdef RV64 ,rg_word_flag `endif );

			 rg_state<=rg_state+1;

			 $display("r1 : %d ",cur_cycle);

		endrule
	
		
		(*doc = "rule: Calls the output method, compares our result with the original\
		 and displays the status "*)
		rule r2;
			
			//(*doc="note: The value returned by the result method is stored "*);
			let lv_our_answer<- inst.mav_result(rg_random_num1,rg_random_num2);

			$display("Our result %b ",lv_our_answer);
			$display("Sys result %b ",rg_product);
			let lv_comp=pack(rg_product);


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

