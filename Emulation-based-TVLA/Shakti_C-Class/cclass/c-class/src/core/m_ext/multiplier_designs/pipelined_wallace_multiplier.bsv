package pipelined_wallace_multiplier;

/*(*doc=" !!!! This design is for 32 bits only !!!! "*)*/

	import LFSR         :: *;
	import Vector         :: *;
	import Utils         :: *;
	import Randomizable   :: *;

//(*doc="note: The process function is included "*)
`include "process_func.bsv"


	/*(*doc="note: Here 'num' denotes the number of bits in the input and it is 32
		
		** Use this command to COMPILE:
bsc +RTS -K90M -RTS -u -sim -keep-fires -steps-max-intervals 2000000 -g mk_Testbench pipelined_multiplier.bsv 

		** Use this command to LINK:
bsc +RTS -K90M -RTS -sim -e mk_Testbench

		** Use this command to SIMULATE:
./a.out -V

 

	"*);*/


	`define num 32

	//(*doc = "ifc: This interface has methods to get inputs and give outputs"*)
	interface Ifc_pipelined_wallace_multiplier;
		method Action ma_inputs (Bit#(`num) a,Bit#(`num) b,
			Bit#(3) funct3 `ifdef RV64 ,Bool word_flag `endif );
		method ActionValue #(Bit#(`num)) mav_outputs ();
	endinterface

	(*synthesize*)
	
	(*doc = "module: This module computes the product of two inputs "*)
	module mk_pipelined_wallace_multiplier (Ifc_pipelined_wallace_multiplier);

		(*doc = "reg: this register is for storing 'funct3' value"*)	
		Reg#(Bit#(3)) rg_funct3 <- mkReg(0);

		(*doc = "reg: this register is for storing the word_flag value"*)	
		Reg#(Bool) rg_word_flag <- mkReg(False);


		(*doc = "reg: This register stores one operand "*)
		Reg#(Bit#(`num)) rg_a <- mkReg(0);

		(*doc = "reg: This register stores another operand "*)
		Reg#(Bit#(`num)) rg_b <- mkReg(0);

		(*doc = "reg: This register stores one operand,\
		to be used during the results stage "*)
		Reg#(Bit#(`num)) rg_final_a <- mkReg(0);

		(*doc = "reg: This register stores another operand,\
		to be used during the results stage "*)
		Reg#(Bit#(`num)) rg_final_b <- mkReg(0);


		(*doc = "reg:  This register indicates whether the result is ready or not "*)
		Reg#(Bool) rg_res_ready <- mkReg(False);

		(*doc = "reg:This register indicates whether the inputs are ready or not "*)
		Reg#(Bool) rg_inp_ready <- mkReg(False);

		(*doc = "reg: This register stores the final answer "*)
		Reg#(Bit#(TMul#(`num, 2))) rg_ans <- mkReg(0);

		(*doc = "note: Here if rg_flag[i] is set to 1 in the current cycle,\
		 then (i+2)th stage\
		 will be performed in the next cycle.\
 		 Example: If rg_flag[0] is set to 1 in the current cycle, then mul_2 will be \
		 performed in the next cycle."*)
		Vector#(10,Reg#(Bit#(1))) rg_flag <- replicateM(mkReg(0));
		
		(*doc = "reg: This 3 x 2num register stores the values of 3 partial products\
		 at a time with one partial product in each row."*)
		Reg#(Vector#(3,(Bit#(TMul#(`num, 2))))) rg_stage1_x <- mkReg(replicate(0));
		(*doc = "reg: This 3 X 2num register stores\
		 the validity of the partial product values in the 3 rows"*)
		Reg#(Vector#(3,(Bit#(TMul#(`num, 2))))) rg_stage1_valid <-mkReg(replicate(0));
		(*doc = "reg: This register stores the first operand used in this stage"*)
		Reg#(Bit#(`num)) rg_stage1_a <- mkReg(0);
		(*doc = "reg: This register stores the second operand used in this stage"*)
		Reg#(Bit#(`num)) rg_stage1_b <- mkReg(0);



		(*doc = "reg: This 3 x 2num register stores the values of 3 partial products\
		 at a time with one partial product in each row."*)
		Reg#(Vector#(3,(Bit#(TMul#(`num, 2))))) rg_stage2_x <- mkReg(replicate(0));
		(*doc = "reg: This 3 X 2num register stores\
		 the validity of the partial product values in the 3 rows"*)
		Reg#(Vector#(3,(Bit#(TMul#(`num, 2))))) rg_stage2_valid <-mkReg(replicate(0));
		(*doc = "reg: This register stores the first operand used in this stage"*)
		Reg#(Bit#(`num)) rg_stage2_a <- mkReg(0);
		(*doc = "reg: This register stores the second operand used in this stage"*)
		Reg#(Bit#(`num)) rg_stage2_b <- mkReg(0);



		(*doc = "reg: This 3 x 2num register stores the values of 3 partial products\
		 at a time with one partial product in each row."*)
		Reg#(Vector#(3,(Bit#(TMul#(`num, 2))))) rg_stage3_x <- mkReg(replicate(0));
		(*doc = "reg: This 3 X 2num register stores\
		 the validity of the partial product values in the 3 rows"*)
		Reg#(Vector#(3,(Bit#(TMul#(`num, 2))))) rg_stage3_valid <-mkReg(replicate(0));
		(*doc = "reg: This register stores the first operand used in this stage"*)
		Reg#(Bit#(`num)) rg_stage3_a <- mkReg(0);
		(*doc = "reg: This register stores the second operand used in this stage"*)
		Reg#(Bit#(`num)) rg_stage3_b <- mkReg(0);




		(*doc = "reg: This 3 x 2num register stores the values of 3 partial products\
		 at a time with one partial product in each row."*)
		Reg#(Vector#(3,(Bit#(TMul#(`num, 2))))) rg_stage4_x <- mkReg(replicate(0));
		(*doc = "reg: This 3 X 2num register stores\
		 the validity of the partial product values in the 3 rows"*)
		Reg#(Vector#(3,(Bit#(TMul#(`num, 2))))) rg_stage4_valid <-mkReg(replicate(0));
		(*doc = "reg: This register stores the first operand used in this stage"*)
		Reg#(Bit#(`num)) rg_stage4_a <- mkReg(0);
		(*doc = "reg: This register stores the second operand used in this stage"*)
		Reg#(Bit#(`num)) rg_stage4_b <- mkReg(0);


		(*doc = "reg: This 3 x 2num register stores the values of 3 partial products\
		 at a time with one partial product in each row."*)
		Reg#(Vector#(3,(Bit#(TMul#(`num, 2))))) rg_stage5_x <- mkReg(replicate(0));
		(*doc = "reg: This 3 X 2num register stores\
		 the validity of the partial product values in the 3 rows"*)
		Reg#(Vector#(3,(Bit#(TMul#(`num, 2))))) rg_stage5_valid <-mkReg(replicate(0));
		(*doc = "reg: This register stores the first operand used in this stage"*)
		Reg#(Bit#(`num)) rg_stage5_a <- mkReg(0);
		(*doc = "reg: This register stores the second operand used in this stage"*)
		Reg#(Bit#(`num)) rg_stage5_b <- mkReg(0);


		(*doc = "reg: This 3 x 2num register stores the values of 3 partial products\
		 at a time with one partial product in each row."*)
		Reg#(Vector#(3,(Bit#(TMul#(`num, 2))))) rg_stage6_x <- mkReg(replicate(0));
		(*doc = "reg: This 3 X 2num register stores\
		 the validity of the partial product values in the 3 rows"*)
		Reg#(Vector#(3,(Bit#(TMul#(`num, 2))))) rg_stage6_valid <-mkReg(replicate(0));
		(*doc = "reg: This register stores the first operand used in this stage"*)
		Reg#(Bit#(`num)) rg_stage6_a <- mkReg(0);
		(*doc = "reg: This register stores the second operand used in this stage"*)
		Reg#(Bit#(`num)) rg_stage6_b <- mkReg(0);


		(*doc = "reg: This 3 x 2num register stores the values of 3 partial products\
		 at a time with one partial product in each row."*)
		Reg#(Vector#(3,(Bit#(TMul#(`num, 2))))) rg_stage7_x <- mkReg(replicate(0));
		(*doc = "reg: This 3 X 2num register stores\
		 the validity of the partial product values in the 3 rows"*)
		Reg#(Vector#(3,(Bit#(TMul#(`num, 2))))) rg_stage7_valid <-mkReg(replicate(0));
		(*doc = "reg: This register stores the first operand used in this stage"*)
		Reg#(Bit#(`num)) rg_stage7_a <- mkReg(0);
		(*doc = "reg: This register stores the second operand used in this stage"*)
		Reg#(Bit#(`num)) rg_stage7_b <- mkReg(0);

		(*doc = "reg: This 3 x 2num register stores the values of 3 partial products\
		 at a time with one partial product in each row."*)
		Reg#(Vector#(3,(Bit#(TMul#(`num, 2))))) rg_stage8_x <- mkReg(replicate(0));
		(*doc = "reg: This 3 X 2num register stores\
		 the validity of the partial product values in the 3 rows"*)
		Reg#(Vector#(3,(Bit#(TMul#(`num, 2))))) rg_stage8_valid <-mkReg(replicate(0));
		(*doc = "reg: This register stores the first operand used in this stage"*)
		Reg#(Bit#(`num)) rg_stage8_a <- mkReg(0);
		(*doc = "reg: This register stores the second operand used in this stage"*)
		Reg#(Bit#(`num)) rg_stage8_b <- mkReg(0);






		//(*doc = "func: Displays the intermediate stages.(!For the debugging purpose!)"*)
		function Action fn_disp ( Vector#(3,Bit#(TMul#(`num, 2))) loc_x,
		 Vector#(3,Bit#(TMul#(`num, 2))) loc_val);
			return
			action
				Bit#(TMul#(`num, 2)) v_local_x;
				Bit#(TMul#(`num, 2)) v_local_valid;
				Integer lv_m,lv_n;
				for(lv_m=0;lv_m<3;lv_m=lv_m+1)
				begin
					v_local_x=loc_x[lv_m];
					v_local_valid=loc_val[lv_m];
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



		/*(*doc = "func: Generates partial products ,(first 3 rows) .
		'v_local_x' stores the partial products and 'v_local_valid' 
		indicates whether the values in 'v_local_x' are valid or not "*)*/		
		function Action fn_partial (Bit#(`num) a, Bit#(`num) b, Bool inp_check);
			return
			action

				if(!inp_check)
					rg_flag[0]<=0;

				else
				begin

					Integer lv_i,lv_j;
					Vector#(3,Bit#(TMul#(`num, 2))) v_local_x 
					=replicate(0);
					Vector#(3,Bit#(TMul#(`num, 2))) v_local_valid
					 =replicate(0);
					
					/*(*doc="note: First 3 partial products
					 generated and stored"*)*/		
					for(lv_i=0;lv_i<3;lv_i=lv_i+1)
					begin
						for(lv_j=0;lv_j<`num;lv_j=lv_j+1)
						begin	
							v_local_x[lv_i][lv_j+lv_i]=
							 b[lv_i]&a[lv_j];
							v_local_valid[lv_i][lv_j+lv_i]=1;
						end
					end

					/*(*doc="note: The partial products, valid bits,
 					flag bit and the operands are 
					transferred to the stage 1 registers"*)*/
					rg_stage1_x<=v_local_x;
					rg_stage1_valid<=v_local_valid;
					rg_stage1_a<=a;
					rg_stage1_b<=b;
					rg_flag[0]<=1;
				end

			endaction;
		endfunction

		/*(*doc = "func: Performs half or full adder operation on the 3 rows of
		 stage 1 registers,depending on the number of valid values in each column and
		 produces 'sum' and 'carry' rows .
		 Hence, 3 rows in this stage gives 2 rows in the next stage. 
		 Then, the next partial product is generated and
		 inserted as the third row for the next stage "*)*/
		function Action fn_stage_2( Bit#(`num) a, Bit#(`num) b,
		 Vector#(3,(Bit#(TMul#(`num, 2)))) pp_value ,
		  Vector#(3,(Bit#(TMul#(`num, 2)))) pp_valid , Bit#(1) inp_check ) ;

			return
			action

				if(inp_check==0)
					rg_flag[1]<=0;

				else

				begin
					Bit#(1)  lv_carry_valid,lv_carry;
					Bit#(1)  lv_prev_carry_valid,lv_prev_carry;
					Integer lv_j,lv_i;
					Bit#(3) lv_d;

					/*(*doc="note :The partial product values in 
					previous stage registers is transferred
					to the local variable"*)*/
					Vector#(3,Bit#(TMul#(`num, 2))) v_local_x=pp_value;
					Vector#(3,Bit#(TMul#(`num, 2))) v_local_valid=pp_valid;
					
					/*(*doc="note: The addition operation on the 3 rows 
					in the previous stage registers is carried out and
					 sum is inserted to the first row,
					 carry to the second row "*)*/
					for(lv_i=0;lv_i<4;lv_i=lv_i+1)
					begin

						lv_carry_valid=0;
						lv_carry=0;
						lv_prev_carry_valid=0;
						lv_prev_carry=0;		 

						for(lv_j=0;lv_j<2*`num;lv_j=lv_j+1)
						begin
							lv_d ={v_local_valid[0][lv_j],
							v_local_valid[1][lv_j]
							,v_local_valid[2][lv_j]};

							if(lv_d==3'b001)
							begin
								lv_carry=0;
								lv_carry_valid=0;
								v_local_x[0][lv_j]=
								v_local_x[2][lv_j];
								v_local_valid[0][lv_j]=1;
							end

							else if(lv_d==3'b010)
							begin
								lv_carry=0;
								lv_carry_valid=0;
								v_local_x[0][lv_j]=
								v_local_x[1][lv_j];
								v_local_valid[0][lv_j]=1;
							end

							else if(lv_d ==3'b100)
							begin
								lv_carry=0;
								lv_carry_valid=0;
								v_local_x[0][lv_j]=
								v_local_x[0][lv_j];
								v_local_valid[0][lv_j]=1;
							end

							else if(lv_d==3'b110)
							begin
								lv_carry=(v_local_x[0][lv_j]
								&v_local_x[1][lv_j]);

								lv_carry_valid=1;

								v_local_x[0][lv_j]
								=v_local_x[0][lv_j]
								^v_local_x[1][lv_j];

								v_local_valid[0][lv_j]=1;
							end

							else if(lv_d==3'b101)
							begin
								lv_carry=(v_local_x[0][lv_j]
								&v_local_x[2][lv_j]);

								lv_carry_valid=1;

								v_local_x[0][lv_j]
								=v_local_x[0][lv_j]
								^v_local_x[2][lv_j];

								v_local_valid[0][lv_j]=1;
							end

							else if(lv_d==3'b011)
							begin
								lv_carry=(v_local_x[1][lv_j]
								& v_local_x[2][lv_j]);

								lv_carry_valid=1;

								v_local_x[0][lv_j]
								=v_local_x[1][lv_j]
								^v_local_x[2][lv_j];

								v_local_valid[0][lv_j]=1;
							end


							else if(lv_d==3'b111)
							begin
								lv_carry=(v_local_x[0][lv_j]
								& v_local_x[1][lv_j])
								|(v_local_x[2][lv_j]
								&(v_local_x[0][lv_j]
								^v_local_x[1][lv_j]));

								lv_carry_valid=1;

								v_local_x[0][lv_j]
								=v_local_x[0][lv_j]
								^v_local_x[1][lv_j]
								^v_local_x[2][lv_j];

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
				
						v_local_x[2]=0;
						v_local_valid[2]=0;

						/*(*doc="note:The next partial product
						 is generated and inserted to the last(3rd) row,
						  completing the group of 3 rows "*)*/
						for(lv_j=0;lv_j<`num;lv_j=lv_j+1)
							begin	
								v_local_x[2][lv_j+3+lv_i]
								= b[3+lv_i]&a[lv_j];
								v_local_valid[2][lv_j+3+lv_i]=1;
							end
					end

					/*(*doc="note: The partial products, valid bits,
 					flag bit and the operands are 
					transferred to the stage 2 registers"*)*/
					rg_stage2_x<=v_local_x;
					rg_stage2_valid<=v_local_valid;
					rg_stage2_a<=a;
					rg_stage2_b<=b;
					rg_flag[1]<=1;
				end
												
			endaction;
		endfunction

		/*(*doc = "func: Performs half or full adder operation on the 3 rows of
		 stage 2 registers,depending on the number of valid values in each column and
		 produces 'sum' and 'carry' rows .
		 Hence, 3 rows in this stage gives 2 rows in the next stage. 
		 Then, the next partial product is generated and
		 inserted as the third row for the next stage "*)*/
		function Action fn_stage_3( Bit#(`num) a, Bit#(`num) b, 
		Vector#(3,(Bit#(TMul#(`num, 2)))) pp_value ,  
		Vector#(3,(Bit#(TMul#(`num, 2)))) pp_valid , Bit#(1) inp_check ) ;

			return
			action

				if(inp_check==0)
					rg_flag[2]<=0;

				else

				begin
					Bit#(1)  lv_carry_valid,lv_carry;
					Bit#(1)  lv_prev_carry_valid,lv_prev_carry;
					Integer lv_j,lv_i;
					Bit#(3) lv_d;

					/*(*doc="note :The partial product values in 
					previous stage registers is transferred
					to the local variable"*)*/
					Vector#(3,Bit#(TMul#(`num, 2))) v_local_x=pp_value;
					Vector#(3,Bit#(TMul#(`num, 2))) v_local_valid=pp_valid;
					
					/*(*doc="note: The addition operation on the 3 rows 
					in the previous stage registers is carried out and
					 sum is inserted to the first row,
					 carry to the second row "*)*/
					for(lv_i=0;lv_i<4;lv_i=lv_i+1)
					begin

						lv_carry_valid=0;
						lv_carry=0;
						lv_prev_carry_valid=0;
						lv_prev_carry=0;		 

						for(lv_j=0;lv_j<2*`num;lv_j=lv_j+1)
						begin
							lv_d ={v_local_valid[0][lv_j],
							v_local_valid[1][lv_j]
							,v_local_valid[2][lv_j]};

							if(lv_d==3'b001)
							begin
								lv_carry=0;
								lv_carry_valid=0;
								v_local_x[0][lv_j]
								=v_local_x[2][lv_j];
								v_local_valid[0][lv_j]=1;
							end

							else if(lv_d==3'b010)
							begin
								lv_carry=0;
								lv_carry_valid=0;
								v_local_x[0][lv_j]
								=v_local_x[1][lv_j];
								v_local_valid[0][lv_j]=1;
							end

							else if(lv_d ==3'b100)
							begin
								lv_carry=0;
								lv_carry_valid=0;
								v_local_x[0][lv_j]
								=v_local_x[0][lv_j];
								v_local_valid[0][lv_j]=1;
							end

							else if(lv_d==3'b110)
							begin
								lv_carry=(v_local_x[0][lv_j]
								&v_local_x[1][lv_j]);

								lv_carry_valid=1;

								v_local_x[0][lv_j]
								=v_local_x[0][lv_j]
								^v_local_x[1][lv_j];

								v_local_valid[0][lv_j]=1;
							end

							else if(lv_d==3'b101)
							begin
								lv_carry=(v_local_x[0][lv_j]
								&v_local_x[2][lv_j]);

								lv_carry_valid=1;

								v_local_x[0][lv_j]
								=v_local_x[0][lv_j]
								^v_local_x[2][lv_j];

								v_local_valid[0][lv_j]=1;
							end

							else if(lv_d==3'b011)
							begin
								lv_carry=(v_local_x[1][lv_j]
								& v_local_x[2][lv_j]);

								lv_carry_valid=1;

								v_local_x[0][lv_j]
								=v_local_x[1][lv_j]
								^v_local_x[2][lv_j];

								v_local_valid[0][lv_j]=1;
							end


							else if(lv_d==3'b111)
							begin
								lv_carry=(v_local_x[0][lv_j]
								& v_local_x[1][lv_j])
								|(v_local_x[2][lv_j]
								&(v_local_x[0][lv_j]
								^v_local_x[1][lv_j]));

								lv_carry_valid=1;

								v_local_x[0][lv_j]
								=v_local_x[0][lv_j]
								^v_local_x[1][lv_j]
								^v_local_x[2][lv_j];

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
				
						v_local_x[2]=0;
						v_local_valid[2]=0;

						/*(*doc="note:The next partial product
						 is generated and inserted to the last(3rd) row,
						  completing the group of 3 rows "*)*/
						for(lv_j=0;lv_j<`num;lv_j=lv_j+1)
							begin	
								v_local_x[2][lv_j+7+lv_i]
								= b[7+lv_i]&a[lv_j];
								v_local_valid[2][lv_j+7+lv_i]=1 ;
							end
					end

					/*(*doc="note: The partial products, valid bits,
 					flag bit and the operands are 
					transferred to the stage 3 registers"*)*/
					rg_stage3_x<=v_local_x;
					rg_stage3_valid<=v_local_valid;
					rg_stage3_a<=a;
					rg_stage3_b<=b;
					rg_flag[2]<=1;
				end
												
			endaction;
		endfunction


		/*(*doc = "func: Performs half or full adder operation on the 3 rows of
		 stage 3 registers,depending on the number of valid values in each column and
		 produces 'sum' and 'carry' rows .
		 Hence, 3 rows in this stage gives 2 rows in the next stage. 
		 Then, the next partial product is generated and
		 inserted as the third row for the next stage "*)*/
		function Action fn_stage_4( Bit#(`num) a, Bit#(`num) b,
		 Vector#(3,(Bit#(TMul#(`num, 2)))) pp_value ,
		  Vector#(3,(Bit#(TMul#(`num, 2)))) pp_valid , Bit#(1) inp_check ) ;

			return
			action

				if(inp_check==0)
					rg_flag[3]<=0;

				else

				begin
					Bit#(1)  lv_carry_valid,lv_carry;
					Bit#(1)  lv_prev_carry_valid,lv_prev_carry;
					Integer lv_j,lv_i;
					Bit#(3) lv_d;

					/*(*doc="note :The partial product values in 
					previous stage registers is transferred
					to the local variable"*)*/
					Vector#(3,Bit#(TMul#(`num, 2))) v_local_x=pp_value;
					Vector#(3,Bit#(TMul#(`num, 2))) v_local_valid=pp_valid;
					
					/*(*doc="note: The addition operation on the 3 rows 
					in the previous stage registers is carried out and
					 sum is inserted to the first row,
					 carry to the second row "*)*/
					for(lv_i=0;lv_i<4;lv_i=lv_i+1)
					begin

						lv_carry_valid=0;
						lv_carry=0;
						lv_prev_carry_valid=0;
						lv_prev_carry=0;		 

						for(lv_j=0;lv_j<2*`num;lv_j=lv_j+1)
						begin
							lv_d ={v_local_valid[0][lv_j]
							,v_local_valid[1][lv_j]
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
								lv_carry=(v_local_x[0][lv_j]
								&v_local_x[1][lv_j]);

								lv_carry_valid=1;

								v_local_x[0][lv_j]=v_local_x[0][lv_j]
								^v_local_x[1][lv_j];

								v_local_valid[0][lv_j]=1;
							end

							else if(lv_d==3'b101)
							begin
								lv_carry=(v_local_x[0][lv_j]
								&v_local_x[2][lv_j]);

								lv_carry_valid=1;

								v_local_x[0][lv_j]=v_local_x[0][lv_j]
								^v_local_x[2][lv_j];

								v_local_valid[0][lv_j]=1;
							end

							else if(lv_d==3'b011)
							begin
								lv_carry=(v_local_x[1][lv_j]
								& v_local_x[2][lv_j]);

								lv_carry_valid=1;

								v_local_x[0][lv_j]=v_local_x[1][lv_j]
								^v_local_x[2][lv_j];

								v_local_valid[0][lv_j]=1;
							end


							else if(lv_d==3'b111)
							begin
								lv_carry=(v_local_x[0][lv_j]
								& v_local_x[1][lv_j])
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
				
						v_local_x[2]=0;
						v_local_valid[2]=0;
			
						/*(*doc="note:The next partial product
						 is generated and inserted to the last(3rd) row,
						  completing the group of 3 rows "*)*/
						for(lv_j=0;lv_j<`num;lv_j=lv_j+1)
							begin	
								v_local_x[2][lv_j+11+lv_i]
								= b[11+lv_i]&a[lv_j];
								v_local_valid[2][lv_j+11+lv_i]=1 ;
							end
					end

					/*(*doc="note: The partial products, valid bits,
 					flag bit and the operands are 
					transferred to the stage 4 registers"*)*/
					rg_stage4_x<=v_local_x;
					rg_stage4_valid<=v_local_valid;
					rg_stage4_a<=a;
					rg_stage4_b<=b;
					rg_flag[3]<=1;
				end
												
			endaction;
		endfunction

	
		/*(*doc = "func: Performs half or full adder operation on the 3 rows of
		 stage 4 registers,depending on the number of valid values in each column and
		 produces 'sum' and 'carry' rows .
		 Hence, 3 rows in this stage gives 2 rows in the next stage. 
		 Then, the next partial product is generated and
		 inserted as the third row for the next stage "*)*/
		function Action fn_stage_5( Bit#(`num) a, Bit#(`num) b, 
		Vector#(3,(Bit#(TMul#(`num, 2)))) pp_value , 
		 Vector#(3,(Bit#(TMul#(`num, 2)))) pp_valid , Bit#(1) inp_check ) ;

			return
			action

				if(inp_check==0)
					rg_flag[4]<=0;

				else

				begin
					Bit#(1)  lv_carry_valid,lv_carry;
					Bit#(1)  lv_prev_carry_valid,lv_prev_carry;
					Integer lv_j,lv_i;
					Bit#(3) lv_d;

					/*(*doc="note :The partial product values in 
					previous stage registers is transferred
					to the local variable"*)*/					
					Vector#(3,Bit#(TMul#(`num, 2))) v_local_x=pp_value;
					Vector#(3,Bit#(TMul#(`num, 2))) v_local_valid=pp_valid;
					
					/*(*doc="note: The addition operation on the 3 rows 
					in the previous stage registers is carried out and
					 sum is inserted to the first row,
					 carry to the second row "*)*/
					for(lv_i=0;lv_i<4;lv_i=lv_i+1)
					begin

						lv_carry_valid=0;
						lv_carry=0;
						lv_prev_carry_valid=0;
						lv_prev_carry=0;		 

						for(lv_j=0;lv_j<2*`num;lv_j=lv_j+1)
						begin
							lv_d ={v_local_valid[0][lv_j]
							,v_local_valid[1][lv_j]
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
								lv_carry=(v_local_x[0][lv_j]
								&v_local_x[1][lv_j]);

								lv_carry_valid=1;

								v_local_x[0][lv_j]=v_local_x[0][lv_j]
								^v_local_x[1][lv_j];

								v_local_valid[0][lv_j]=1;
							end

							else if(lv_d==3'b101)
							begin
								lv_carry=(v_local_x[0][lv_j]
								&v_local_x[2][lv_j]);

								lv_carry_valid=1;

								v_local_x[0][lv_j]=v_local_x[0][lv_j]
								^v_local_x[2][lv_j];

								v_local_valid[0][lv_j]=1;
							end

							else if(lv_d==3'b011)
							begin
								lv_carry=(v_local_x[1][lv_j]
								& v_local_x[2][lv_j]);

								lv_carry_valid=1;

								v_local_x[0][lv_j]=v_local_x[1][lv_j]
								^v_local_x[2][lv_j];

								v_local_valid[0][lv_j]=1;
							end


							else if(lv_d==3'b111)
							begin
								lv_carry=(v_local_x[0][lv_j]
								& v_local_x[1][lv_j])
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
			
						v_local_x[2]=0;
						v_local_valid[2]=0;

						/*(*doc="note:The next partial product
						 is generated and inserted to the last(3rd) row,
						  completing the group of 3 rows "*)*/
						for(lv_j=0;lv_j<`num;lv_j=lv_j+1)
							begin	
								v_local_x[2][lv_j+15+lv_i]
								= b[15+lv_i]&a[lv_j];
								v_local_valid[2][lv_j+15+lv_i]=1 ;
							end
					end


					/*(*doc="note: The partial products, valid bits,
 					flag bit and the operands are 
					transferred to the stage 5 registers"*)*/
					rg_stage5_x<=v_local_x;
					rg_stage5_valid<=v_local_valid;
					rg_stage5_a<=a;
					rg_stage5_b<=b;
					rg_flag[4]<=1;
				end
												
			endaction;
		endfunction


		/*(*doc = "func: Performs half or full adder operation on the 3 rows of
		 stage 5 registers,depending on the number of valid values in each column and
		 produces 'sum' and 'carry' rows .
		 Hence, 3 rows in this stage gives 2 rows in the next stage. 
		 Then, the next partial product is generated and
		 inserted as the third row for the next stage "*)*/
		function Action fn_stage_6( Bit#(`num) a, Bit#(`num) b,
		 Vector#(3,(Bit#(TMul#(`num, 2)))) pp_value , 
		 Vector#(3,(Bit#(TMul#(`num, 2)))) pp_valid , Bit#(1) inp_check ) ;

			return
			action

				if(inp_check==0)
					rg_flag[5]<=0;

				else

				begin
					Bit#(1)  lv_carry_valid,lv_carry;
					Bit#(1)  lv_prev_carry_valid,lv_prev_carry;
					Integer lv_j,lv_i;
					Bit#(3) lv_d;

					/*(*doc="note :The partial product values in 
					previous stage registers is transferred
					to the local variable"*)*/
					Vector#(3,Bit#(TMul#(`num, 2))) v_local_x=pp_value;
					Vector#(3,Bit#(TMul#(`num, 2))) v_local_valid=pp_valid;
					
					/*(*doc="note: The addition operation on the 3 rows 
					in the previous stage registers is carried out and
					 sum is inserted to the first row,
					 carry to the second row "*)*/
					for(lv_i=0;lv_i<4;lv_i=lv_i+1)
					begin

						lv_carry_valid=0;
						lv_carry=0;
						lv_prev_carry_valid=0;
						lv_prev_carry=0;		 

						for(lv_j=0;lv_j<2*`num;lv_j=lv_j+1)
						begin
							lv_d ={v_local_valid[0][lv_j]
							,v_local_valid[1][lv_j]
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
								lv_carry=(v_local_x[0][lv_j]
								&v_local_x[1][lv_j]);

								lv_carry_valid=1;

								v_local_x[0][lv_j]=v_local_x[0][lv_j]
								^v_local_x[1][lv_j];

								v_local_valid[0][lv_j]=1;
							end

							else if(lv_d==3'b101)
							begin
								lv_carry=(v_local_x[0][lv_j]
								&v_local_x[2][lv_j]);

								lv_carry_valid=1;

								v_local_x[0][lv_j]=v_local_x[0][lv_j]
								^v_local_x[2][lv_j];

								v_local_valid[0][lv_j]=1;
							end

							else if(lv_d==3'b011)
							begin
								lv_carry=(v_local_x[1][lv_j]
								& v_local_x[2][lv_j]);

								lv_carry_valid=1;

								v_local_x[0][lv_j]=v_local_x[1][lv_j]
								^v_local_x[2][lv_j];

								v_local_valid[0][lv_j]=1;
							end


							else if(lv_d==3'b111)
							begin
								lv_carry=(v_local_x[0][lv_j]
								& v_local_x[1][lv_j])
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
				
						v_local_x[2]=0;
						v_local_valid[2]=0;

						/*(*doc="note:The next partial product
						 is generated and inserted to the last(3rd) row,
						  completing the group of 3 rows "*)*/
						for(lv_j=0;lv_j<`num;lv_j=lv_j+1)
							begin	
								v_local_x[2][lv_j+19+lv_i]
								= b[19+lv_i]&a[lv_j];
								v_local_valid[2][lv_j+19+lv_i]=1 ;
							end
					end

					/*(*doc="note: The partial products, valid bits,
 					flag bit and the operands are 
					transferred to the stage 6 registers"*)*/
					rg_stage6_x<=v_local_x;
					rg_stage6_valid<=v_local_valid;
					rg_stage6_a<=a;
					rg_stage6_b<=b;
					rg_flag[5]<=1;
				end
												
			endaction;
		endfunction


		/*(*doc = "func: Performs half or full adder operation on the 3 rows of
		 stage 6 registers,depending on the number of valid values in each column and
		 produces 'sum' and 'carry' rows .
		 Hence, 3 rows in this stage gives 2 rows in the next stage. 
		 Then, the next partial product is generated and
		 inserted as the third row for the next stage "*)*/		
		function Action fn_stage_7( Bit#(`num) a, Bit#(`num) b,
		 Vector#(3,(Bit#(TMul#(`num, 2)))) pp_value ,
		Vector#(3,(Bit#(TMul#(`num, 2)))) pp_valid , Bit#(1) inp_check ) ;

			return
			action

				if(inp_check==0)
					rg_flag[6]<=0;

				else

				begin
					Bit#(1)  lv_carry_valid,lv_carry;
					Bit#(1)  lv_prev_carry_valid,lv_prev_carry;
					Integer lv_j,lv_i;
					Bit#(3) lv_d;

					/*(*doc="note :The partial product values in 
					previous stage registers is transferred
					to the local variable"*)*/
					Vector#(3,Bit#(TMul#(`num, 2))) v_local_x=pp_value;
					Vector#(3,Bit#(TMul#(`num, 2))) v_local_valid=pp_valid;
					
					/*(*doc="note: The addition operation on the 3 rows 
					in the previous stage registers is carried out and
					 sum is inserted to the first row,
					 carry to the second row "*)*/
					for(lv_i=0;lv_i<4;lv_i=lv_i+1)
					begin

						lv_carry_valid=0;
						lv_carry=0;
						lv_prev_carry_valid=0;
						lv_prev_carry=0;		 

						for(lv_j=0;lv_j<2*`num;lv_j=lv_j+1)
						begin
							lv_d ={v_local_valid[0][lv_j]
							,v_local_valid[1][lv_j]
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
								lv_carry=(v_local_x[0][lv_j]
								&v_local_x[1][lv_j]);

								lv_carry_valid=1;

								v_local_x[0][lv_j]=v_local_x[0][lv_j]
								^v_local_x[1][lv_j];

								v_local_valid[0][lv_j]=1;
							end

							else if(lv_d==3'b101)
							begin
								lv_carry=(v_local_x[0][lv_j]
								&v_local_x[2][lv_j]);

								lv_carry_valid=1;

								v_local_x[0][lv_j]=v_local_x[0][lv_j]
								^v_local_x[2][lv_j];

								v_local_valid[0][lv_j]=1;
							end

							else if(lv_d==3'b011)
							begin
								lv_carry=(v_local_x[1][lv_j]
								& v_local_x[2][lv_j]);

								lv_carry_valid=1;

								v_local_x[0][lv_j]=v_local_x[1][lv_j]
								^v_local_x[2][lv_j];

								v_local_valid[0][lv_j]=1;
							end


							else if(lv_d==3'b111)
							begin
								lv_carry=(v_local_x[0][lv_j]
								& v_local_x[1][lv_j])
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
				
						v_local_x[2]=0;
						v_local_valid[2]=0;

						/*(*doc="note:The next partial product
						 is generated and inserted to the last(3rd) row,
						  completing the group of 3 rows "*)*/
						for(lv_j=0;lv_j<`num;lv_j=lv_j+1)
							begin	
								v_local_x[2][lv_j+23+lv_i]
								= b[23+lv_i]&a[lv_j];
								v_local_valid[2][lv_j+23+lv_i]=1 ;
							end
					end

					/*(*doc="note: The partial products, valid bits,
 					flag bit and the operands are 
					transferred to the stage 7 registers"*)*/
					rg_stage7_x<=v_local_x;
					rg_stage7_valid<=v_local_valid;
					rg_stage7_a<=a;
					rg_stage7_b<=b;
					rg_flag[6]<=1;
				end
												
			endaction;
		endfunction


		/*(*doc = "func: Performs half or full adder operation on the 3 rows of
		 stage 7 registers,depending on the number of valid values in each column and
		 produces 'sum' and 'carry' rows .
		 Hence, 3 rows in this stage gives 2 rows in the next stage. 
		 Then, the next partial product is generated and
		 inserted as the third row for the next stage "*)*/
		function Action fn_stage_8( Bit#(`num) a, Bit#(`num) b,
		 Vector#(3,(Bit#(TMul#(`num, 2)))) pp_value , 
		Vector#(3,(Bit#(TMul#(`num, 2)))) pp_valid , Bit#(1) inp_check ) ;

			return
			action

				if(inp_check==0)
					rg_flag[7]<=0;

				else
				begin
					Bit#(1)  lv_carry_valid,lv_carry;
					Bit#(1)  lv_prev_carry_valid,lv_prev_carry;
					Integer lv_j,lv_i;
					Bit#(3) lv_d;

					/*(*doc="note :The partial product values in 
					previous stage registers is transferred
					to the local variable"*)*/
					Vector#(3,Bit#(TMul#(`num, 2))) v_local_x=pp_value;
					Vector#(3,Bit#(TMul#(`num, 2))) v_local_valid=pp_valid;
					
					/*(*doc="note: The addition operation on the 3 rows 
					in the previous stage registers is carried out and
					 sum is inserted to the first row,
					 carry to the second row "*)*/
					for(lv_i=0;lv_i<4;lv_i=lv_i+1)
					begin

						lv_carry_valid=0;
						lv_carry=0;
						lv_prev_carry_valid=0;
						lv_prev_carry=0;		 

						for(lv_j=0;lv_j<2*`num;lv_j=lv_j+1)
						begin
							lv_d ={v_local_valid[0][lv_j]
							,v_local_valid[1][lv_j]
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
								lv_carry=(v_local_x[0][lv_j]
								&v_local_x[1][lv_j]);

								lv_carry_valid=1;

								v_local_x[0][lv_j]=v_local_x[0][lv_j]
								^v_local_x[1][lv_j];

								v_local_valid[0][lv_j]=1;
							end

							else if(lv_d==3'b101)
							begin
								lv_carry=(v_local_x[0][lv_j]
								&v_local_x[2][lv_j]);

								lv_carry_valid=1;

								v_local_x[0][lv_j]=v_local_x[0][lv_j]
								^v_local_x[2][lv_j];

								v_local_valid[0][lv_j]=1;
							end

							else if(lv_d==3'b011)
							begin
								lv_carry=(v_local_x[1][lv_j]
								& v_local_x[2][lv_j]);

								lv_carry_valid=1;

								v_local_x[0][lv_j]=v_local_x[1][lv_j]
								^v_local_x[2][lv_j];

								v_local_valid[0][lv_j]=1;
							end


							else if(lv_d==3'b111)
							begin
								lv_carry=(v_local_x[0][lv_j]
								& v_local_x[1][lv_j])
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
				
						v_local_x[2]=0;
						v_local_valid[2]=0;

						/*(*doc="note:The next partial product
						 is generated and inserted to the last(3rd) row,
						  completing the group of 3 rows "*)*/
						for(lv_j=0;lv_j<`num;lv_j=lv_j+1)
							begin	
								v_local_x[2][lv_j+27+lv_i]
								= b[27+lv_i]&a[lv_j];
								v_local_valid[2][lv_j+27+lv_i]=1 ;
							end
					end


					/*(*doc="note: The partial products, valid bits,
 					flag bit and the operands are 
					transferred to the stage 7 registers"*)*/
					rg_stage8_x<=v_local_x;
					rg_stage8_valid<=v_local_valid;
					rg_stage8_a<=a;
					rg_stage8_b<=b;
					rg_flag[7]<=1;
				end
												
			endaction;
		endfunction



		
		/*(*doc = "func: 

		 -- Performs half or full adder operation on the 3 rows of
		 stage 8 registers,depending on the number of valid values in each column and
		 produces 'sum' and 'carry' rows .

		 -- Hence, 3 rows in this stage gives 2 rows in the next stage. 

		 -- Then, the next partial product is generated and
		 inserted as the third row for the next stage, and the next addition is performed.

		 -- Then, the two rows left are added (ripple addition) to produce the result "*)

		*/
		function Action fn_last_stage(  Bit#(`num) a, Bit#(`num) b, 
		Vector#(3,(Bit#(TMul#(`num, 2)))) pp_value ,  
		Vector#(3,(Bit#(TMul#(`num, 2)))) pp_valid , Bit#(1) inp_check );
			return
			action

				if(inp_check==1)

				begin

					Bit#(1)  lv_carry_valid,lv_carry;
					Bit#(1)  lv_prev_carry_valid,lv_prev_carry;
					Integer lv_j;
					Bit#(3) lv_d;

					/*(*doc="note :The partial product values in 
					previous stage registers is transferred
					to the local variable"*)*/
					Vector#(3,Bit#(TMul#(`num, 2))) v_local_x=pp_value;
					Vector#(3,Bit#(TMul#(`num, 2))) v_local_valid=pp_valid;


					lv_carry_valid=0;
					lv_carry=0;
					lv_prev_carry_valid=0;
					lv_prev_carry=0;		 

					/*(*doc="note: The addition operation on the 3 rows 
					in the previous stage registers is carried out and
					 sum is inserted to the first row,
					 carry to the second row "*)*/					
					for(lv_j=0;lv_j<2*`num;lv_j=lv_j+1)
					begin
						lv_d ={v_local_valid[0][lv_j]
							,v_local_valid[1][lv_j]
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
							lv_carry=(v_local_x[0][lv_j]
							&v_local_x[1][lv_j]);

							lv_carry_valid=1;

							v_local_x[0][lv_j]=v_local_x[0][lv_j]
							^v_local_x[1][lv_j];

							v_local_valid[0][lv_j]=1;
						end

						else if(lv_d==3'b101)
						begin
							lv_carry=(v_local_x[0][lv_j]
							&v_local_x[2][lv_j]);

							lv_carry_valid=1;

							v_local_x[0][lv_j]=v_local_x[0][lv_j]
							^v_local_x[2][lv_j];

							v_local_valid[0][lv_j]=1;
						end

						else if(lv_d==3'b011)
						begin
							lv_carry=(v_local_x[1][lv_j]
							& v_local_x[2][lv_j]);

							lv_carry_valid=1;

							v_local_x[0][lv_j]=v_local_x[1][lv_j]
							^v_local_x[2][lv_j];

							v_local_valid[0][lv_j]=1;
						end


						else if(lv_d==3'b111)
						begin
							lv_carry=(v_local_x[0][lv_j]
							& v_local_x[1][lv_j])
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
				
					v_local_x[2]=0;
					v_local_valid[2]=0;

					/*(*doc="note:The next partial product
					is generated and inserted to the last(3rd) row,
					  completing the group of 3 rows "*)*/
					for(lv_j=0;lv_j<`num;lv_j=lv_j+1)
					begin	
						v_local_x[2][lv_j+31]= b[31]&a[lv_j];
						v_local_valid[2][lv_j+31]=1 ;
					end

	

					lv_carry_valid=0;
					lv_carry=0;
					lv_prev_carry_valid=0;
					lv_prev_carry=0;
		 
					/*(*doc="note: The addition operation on the 3 rows 
					from the previous stage is carried out and
					 sum is inserted to the first row,
					 carry to the second row "*)*/
					for(lv_j=0;lv_j<2*`num;lv_j=lv_j+1)
					begin
						lv_d ={v_local_valid[0][lv_j]
						,v_local_valid[1][lv_j]
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
							lv_carry=(v_local_x[0][lv_j]
							&v_local_x[1][lv_j]);

							lv_carry_valid=1;

							v_local_x[0][lv_j]=v_local_x[0][lv_j]
							^v_local_x[1][lv_j];

							v_local_valid[0][lv_j]=1;
						end

						else if(lv_d==3'b101)
						begin
							lv_carry=(v_local_x[0][lv_j]
							&v_local_x[2][lv_j]);

							lv_carry_valid=1;

							v_local_x[0][lv_j]=v_local_x[0][lv_j]
							^v_local_x[2][lv_j];

							v_local_valid[0][lv_j]=1;
						end

						else if(lv_d==3'b011)
						begin
							lv_carry=(v_local_x[1][lv_j]
							& v_local_x[2][lv_j]);

							lv_carry_valid=1;

							v_local_x[0][lv_j]=v_local_x[1][lv_j]
							^v_local_x[2][lv_j];

							v_local_valid[0][lv_j]=1;
						end


						else if(lv_d==3'b111)
						begin
							lv_carry=(v_local_x[0][lv_j]
							& v_local_x[1][lv_j])
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
				
				
					
					lv_carry_valid=0;
					lv_carry=0;
					lv_prev_carry_valid=0;
					lv_prev_carry=0;

					/*(*doc="note: The ripple addition operation on the 2 rows 
					 is carried out and the answer is determined"*)*/		 

					for(lv_j=0;lv_j<2*`num;lv_j=lv_j+1)
					begin
						lv_d ={v_local_valid[0][lv_j]
						,v_local_valid[1][lv_j]
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
							lv_carry=(v_local_x[0][lv_j]
							&v_local_x[1][lv_j]);

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
							lv_carry=(v_local_x[1][lv_j]
							& lv_prev_carry);

							lv_carry_valid=1;

							v_local_x[0][lv_j]=v_local_x[1][lv_j]
							^ lv_prev_carry;

							v_local_valid[0][lv_j]=1;
						end


						else if(lv_d==3'b111)
						begin
							lv_carry=(v_local_x[0][lv_j]
							& v_local_x[1][lv_j])
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

					/*(*doc="note: The first row of 'v_local_x' 
					holds the final product "*)*/					
					rg_ans<=v_local_x[0];
					rg_final_a<=a;
					rg_final_b<=b;
					rg_res_ready<=True;

				end								
			endaction;
		endfunction

		(*doc = "rule: Once the input is ready, the stages are executed parallely "*)		
		rule rl1 ;

			fn_partial(rg_a,rg_b,rg_inp_ready);

			fn_stage_2(rg_stage1_a,rg_stage1_b,rg_stage1_x,rg_stage1_valid,rg_flag[0]);
			fn_stage_3(rg_stage2_a,rg_stage2_b,rg_stage2_x,rg_stage2_valid,rg_flag[1]);
			fn_stage_4(rg_stage3_a,rg_stage3_b,rg_stage3_x,rg_stage3_valid,rg_flag[2]);
			fn_stage_5(rg_stage4_a,rg_stage4_b,rg_stage4_x,rg_stage4_valid,rg_flag[3]);
			fn_stage_6(rg_stage5_a,rg_stage5_b,rg_stage5_x,rg_stage5_valid,rg_flag[4]);
			fn_stage_7(rg_stage6_a,rg_stage6_b,rg_stage6_x,rg_stage6_valid,rg_flag[5]);
			fn_stage_8(rg_stage7_a,rg_stage7_b,rg_stage7_x,rg_stage7_valid,rg_flag[6]);

			fn_last_stage(rg_stage8_a,rg_stage8_b,rg_stage8_x,
			rg_stage8_valid,rg_flag[7]);
			
		
		endrule


	       /*(*doc = "method: Stores the inputs in the registers if the new inputs differ
		 from the previous inputs
		and initialises other registers used "*)*/
	       method Action ma_inputs (Bit#(`num) inp1, Bit#(`num) inp2,
			Bit#(3) funct3 `ifdef RV64 ,Bool word_flag `endif );

			if(inp1!=rg_a || inp2!=rg_b)
			begin
				rg_a<=inp1;
				rg_b<=inp2;
				rg_funct3<=funct3;

				`ifdef RV64
				rg_word_flag<=word_flag;

				`endif

				rg_inp_ready<=True;
			end
			else
				rg_inp_ready<=False;
		endmethod

		//(*doc = "method: Returns the product once the result is ready "*)
		method ActionValue #(Bit#(`num)) mav_outputs()if(rg_res_ready);
			
			//$display(" adsd %d", $time);
			rg_res_ready<=False;
			/*doc("note: The process function is called on the obtained product"*)*/
			Bit#(`num) answ= fn_process(rg_final_a,rg_final_b,
			rg_ans,rg_funct3 `ifdef RV64 ,rg_word_flag `endif );

			return answ;
		
		endmethod

	endmodule


	(*doc = "module: Tests the design by providing random inputs "*)
	module mk_Testbench ();

		(*doc = "reg: this register holds the system's answer of the multiplication of \
		 two given inputs of each trial"*)
		Vector#(18,Reg#(UInt#(TMul#(`num, 2)))) v_system_answer<-replicateM(mkReg(0));

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

		Randomize#(Bit#(`num)) a1 <- mkGenericRandomizer;
		Randomize#(Bit#(`num)) b1 <- mkGenericRandomizer;

		(*doc = "reg: This register indicates whether the random operands\
		 have been initialized or not "*)
		Reg#(Bool) rg_initialized <- mkReg(False);
	
		Ifc_pipelined_wallace_multiplier inst <- mk_pipelined_wallace_multiplier;

		(*doc = "rule: Initialises the random input variables "*)
		rule r3(!rg_initialized);

			a1.cntrl.init();
			b1.cntrl.init();
			rg_initialized<=True;
		endrule

		(*doc = "rule: Calls the input method with the random inputs generated "*)
		rule r1(rg_trials_rl1<=10 && rg_initialized);

			 let a <- a1.next();
			 let b <- b1.next();

			 UInt#(TMul#(`num, 2)) rand_op_a=unpack(zeroExtend(a));
			 UInt#(TMul#(`num, 2)) rand_op_b=unpack(zeroExtend(b));

			//(*doc="note: System answer is computed "*);
			v_system_answer[rg_state_rl1]<=rand_op_a*rand_op_b;

			 //(*doc="note: The inputs method is being called "*);		
			 inst.ma_inputs(a,b,3'b000 `ifdef RV64 ,rg_word_flag `endif );
			 
			/*(*doc="note: When the system_answer[9] is used for storing the system's answer,
			 the next system's answer will be stored in system_answer[0] as output for
			 the each input comes in every 10th cycle and the comparison with system's
			 answer will be done in 10th cycle and we can write new values in 
			 system_answer[0] in next cycle."*);*/
			if(rg_state_rl1!=17)
				rg_state_rl1<=rg_state_rl1+1;
			else
				rg_state_rl1<=0;

			$display("start cycle is %d ----- Inp : %d and %d ",cur_cycle,a,b);

			rg_trials_rl1<=rg_trials_rl1+1;

		endrule

		(*doc = "rule: Calls the output method, compares our result with the original\
		 and displays the status "*)
		rule r2 if(rg_trials_rl2<=10);
			//(*doc="note: The value returned by the outputs method is stored "*);
			let c <-inst.mav_outputs();
			
			
			if(rg_state_rl2!=17)
				rg_state_rl2<=rg_state_rl2+1;
			else
				rg_state_rl2<=0;
			$display(" Trials :%d ---- end cycle is %d ",rg_trials_rl2,cur_cycle);


			let d = pack(v_system_answer[rg_state_rl2]);
			//(*doc="note: System answer is compared with our answer "*);
			if(c==d[(`num-1):0])
				$display("Pass %d : %d ",c,d);
			else
			begin
				$display("Fail %d : %d -------------------------------------------",
				c,d);
			end

			rg_trials_rl2<=rg_trials_rl2+1;

			
			endrule

	endmodule


endpackage

