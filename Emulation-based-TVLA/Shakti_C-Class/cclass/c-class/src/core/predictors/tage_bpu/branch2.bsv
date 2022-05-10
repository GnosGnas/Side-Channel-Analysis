package branch2;

import BRAMCore :: *;
import Randomizable :: *;
import Vector :: *;
import tage_types :: *;
import FIFO :: *;
import FIFOF :: *;

//size of the tables are assumed by default to be the following values; if any changes are made, corresponding changes have to be made in the address calculations in the rules and methods and functions
`define SIZE_BIMODAL 4096  //size of the tables
`define SIZE_GLOBAL 1024
`define BIMODAL_MAX_ADDR 4095
`define GLOBAL_MAX_ADDR 1023
`define BIMODAL_ADDR 12
`define GLOBAL_ADDR 10
`define DATA_SIZE_BIMODAL 4
`define DATA_SIZE_GLOBAL 12
`define TAG_SIZE 8
`define HIST_SIZE 80 //no. of history bits
`define PC_SIZE 32
`define BANKS 5
`define WRITE True
`define READ False
`define COUNTER_SIZE 3
`define PIPELINE_DEPTH 6

//for debugging
String gv_file0="bimodal.bin";
String gv_file1="bank1.bin";
String gv_file2="bank2.bin";
String gv_file3="bank3.bin";
String gv_file4="bank4.bin";
String gv_dump="trace1.dump";
String gv_dump2="trace5.dump";
String gv_dump3="trace7.dump";
//

/*typedef Bit#(TLog#(`SIZE_BIMODAL)) Gv_bimodal_addr;
typedef Bit#(TLog#(`SIZE_GLOBAL)) Gv_global_addr;
typedef Bit#(`DATA_SIZE_BIMODAL) Gv_bimodal_data;
typedef Bit#(`DATA_SIZE_GLOBAL) Gv_global_data;
typedef Bit#(`TAG_SIZE) Gv_tag;
typedef Bit#(`HIST_SIZE) Gv_hist;
typedef Bit#(`PC_SIZE) Gv_pc;
typedef Bit#(TSub#(`TAG_SIZE,1)) Gv_secondary_csr;
typedef Bit#(TLog#(`BANKS)) Gv_bank_num;
typedef Bit#(`COUNTER_SIZE) Gv_counter;
//structure for the training data into the predictor
typedef struct{Gv_pc pc;Bool hit;Bool truth;Bit#(1) prediction;Gv_counter counter;Gv_tag tag;Bit#(TAdd#(`BANKS,0)) bank_bits;Gv_bank_num bank_num;Gv_counter bimodal;} Gv_train_predictor deriving(Bits);
//structure for the value returned by the mn_get method
typedef struct{Bit#(1) prediction;Gv_counter counter;Gv_tag tag;Bit#(TAdd#(`BANKS,0)) bank_bits;Gv_bank_num bank_num;Gv_counter bimodal_counter;} Gv_return_predictor deriving(Bits);
*/


//functions
//compares tag with hash function output
function Bool fn_compare(Gv_tag x,Gv_tag y);
	return (x==y)?True:False;
endfunction 


//hash functions
function Gv_global_addr fn_hash_indx(Bit#(20) pc,Bit#(10) csr);
	return pc[9:0]^pc[19:10]^csr;
endfunction


function Gv_tag fn_hash_tag(Gv_tag pc,Gv_tag csr1,Gv_secondary_csr csr2);
	return pc^csr1^{csr2,1'b0};
endfunction


//interface
interface Ifc_branch;
	//enters pc into module,performs hash and initiates bram requests
	method Action ma_put(Gv_pc pc);
	//returns the prediction result
	method ActionValue#(Gv_return_predictor) mn_get;
	//to train the predictor
	method Action ma_train(Gv_train_predictor training_data);
	//to update shadow regs
	method Action ma_shadow(Bit#(1) prediction);
	//to initialize the predictor banks at any time
	method Action ma_flush;
endinterface


//module
(*synthesize*)
module mkbranch(Ifc_branch);
	//port 'a' for read and port 'b' for write
	BRAM_DUAL_PORT#(Gv_bimodal_addr,Gv_bimodal_data) bram_bimodal <- mkBRAMCore2Load(`SIZE_BIMODAL,False,gv_file0,True);
	BRAM_DUAL_PORT#(Gv_global_addr,Gv_global_data) bram_bank1 <- mkBRAMCore2Load(`SIZE_GLOBAL,False,gv_file1,True);
	BRAM_DUAL_PORT#(Gv_global_addr,Gv_global_data) bram_bank2 <- mkBRAMCore2Load(`SIZE_GLOBAL,False,gv_file2,True);
	BRAM_DUAL_PORT#(Gv_global_addr,Gv_global_data) bram_bank3 <- mkBRAMCore2Load(`SIZE_GLOBAL,False,gv_file3,True);
	BRAM_DUAL_PORT#(Gv_global_addr,Gv_global_data) bram_bank4 <- mkBRAMCore2Load(`SIZE_GLOBAL,False,gv_file4,True);
	//to generate random bank numbers during entry stealing in training
	Randomize#(Gv_bank_num) random_bank0 <- mkConstrainedRandomizer(1,4);
	Randomize#(Gv_bank_num) random_bank1 <- mkConstrainedRandomizer(2,4);
	Randomize#(Gv_bank_num) random_bank2 <- mkConstrainedRandomizer(3,4);

	//outputs of the banks
	Wire#(Gv_bimodal_data) wr_bimodal_out <- mkWire();
	Wire#(Gv_global_data) wr_bank1_out <- mkWire();
	Wire#(Gv_global_data) wr_bank2_out <- mkWire();
	Wire#(Gv_global_data) wr_bank3_out <- mkWire();
	Wire#(Gv_global_data) wr_bank4_out <- mkWire();
	//copy of incoming pc for update stages
	Reg#(Gv_pc) rg_pc_copy <- mkReg(0);
	//to control flushing operation
	Reg#(Bool) rg_flush <- mkReg(False);
	//holds the addresses of the memory locations while flushing; incremented from 0 till max address
	//bimodal flush address is taken to be 13 bits instead of Gv_bimodal_addr because it reduces critical path delay during comparison in rl_flush
	Reg#(Bit#(TAdd#(`BIMODAL_ADDR,1))) rg_bimodal_flush_addr <- mkReg(0);
	Reg#(Gv_global_addr) rg_global_flush_addr <- mkReg(0);
	//to initialize the random number generators
	Reg#(Bool) rg_init_rand <- mkReg(True);

	//global history
	Reg#(Gv_hist) rg_real_global_history <- mkReg(0);
	//csrs for hash functions
	Reg#(Gv_tag) rg_bank1_csr_p <- mkReg(0);
	Reg#(Gv_tag) rg_bank2_csr_p <- mkReg(0);
	Reg#(Gv_tag) rg_bank3_csr_p <- mkReg(0);
	Reg#(Gv_tag) rg_bank4_csr_p <- mkReg(0);
	//secondary csrs for tag calculation
	Reg#(Gv_secondary_csr) rg_bank1_csr_s <- mkReg(0);
	Reg#(Gv_secondary_csr) rg_bank2_csr_s <- mkReg(0);
	Reg#(Gv_secondary_csr) rg_bank3_csr_s <- mkReg(0);
	Reg#(Gv_secondary_csr) rg_bank4_csr_s <- mkReg(0);
	//csrs for index calculation
	Reg#(Gv_global_addr) rg_bank2_csr_indx <- mkReg(0);
	Reg#(Gv_global_addr) rg_bank3_csr_indx <- mkReg(0);
	Reg#(Gv_global_addr) rg_bank4_csr_indx <- mkReg(0);


	//primary csrs for tag calculation
	Reg#(Gv_hist) rg_global_history <- mkReg(0);
	Reg#(Bit#(TAdd#(`TAG_SIZE,`PIPELINE_DEPTH))) crg_bank1_csr_p[2] <- mkCReg(2,0);
	Reg#(Bit#(TAdd#(`TAG_SIZE,`PIPELINE_DEPTH))) crg_bank2_csr_p[2] <- mkCReg(2,0);
	Reg#(Bit#(TAdd#(`TAG_SIZE,`PIPELINE_DEPTH))) crg_bank3_csr_p[2] <- mkCReg(2,0);
	Reg#(Bit#(TAdd#(`TAG_SIZE,`PIPELINE_DEPTH))) crg_bank4_csr_p[2] <- mkCReg(2,0);
	//secondary csrs for tag calculation
	Reg#(Bit#(TAdd#(TSub#(`TAG_SIZE,1),`PIPELINE_DEPTH))) crg_bank1_csr_s[2] <- mkCReg(2,0);
	Reg#(Bit#(TAdd#(TSub#(`TAG_SIZE,1),`PIPELINE_DEPTH))) crg_bank2_csr_s[2] <- mkCReg(2,0);
	Reg#(Bit#(TAdd#(TSub#(`TAG_SIZE,1),`PIPELINE_DEPTH))) crg_bank3_csr_s[2] <- mkCReg(2,0);
	Reg#(Bit#(TAdd#(TSub#(`TAG_SIZE,1),`PIPELINE_DEPTH))) crg_bank4_csr_s[2] <- mkCReg(2,0);
	//csrs for index calculation
	Reg#(Bit#(TAdd#(`GLOBAL_ADDR,`PIPELINE_DEPTH))) crg_bank2_csr_indx[2] <- mkCReg(2,0);
	Reg#(Bit#(TAdd#(`GLOBAL_ADDR,`PIPELINE_DEPTH))) crg_bank3_csr_indx[2] <- mkCReg(2,0);
	Reg#(Bit#(TAdd#(`GLOBAL_ADDR,`PIPELINE_DEPTH))) crg_bank4_csr_indx[2] <- mkCReg(2,0);
	//counts number of inflight branch instructions in pipeline
	Reg#(Bit#(TLog#(`PIPELINE_DEPTH))) crg_inflight[2] <- mkCReg(2,0);
	//cregs for speculative training of history
	Reg#(Bit#(TAdd#(`GLOBAL_ADDR,1))) crg_hist0[2] <- mkCReg(2,0);
	Reg#(Bit#(TAdd#(`GLOBAL_ADDR,1))) crg_hist1[2] <- mkCReg(2,0);

	Reg#(Bit#(TAdd#(`GLOBAL_ADDR,1))) crg_hist[2] <- mkCReg(2,0);
	//to choose between the 2 cregs
	Reg#(Bit#(1)) rg_choice <- mkReg(0);
	//to schedule mn_get() after train
	Wire#(Bit#(1)) wr_shift_in <- mkWire;

	//final prediction bit; 1 if branch taken is the prediction and 0 otherwise
	Wire#(Bit#(1)) wr_prediction <- mkWire;
	//counter value of matching bank
	Wire#(Gv_counter) wr_counter <- mkWire;
	//m and u bits of all banks; bank_bits[4] is bimodal m bit, bank_bits[3] is for bank 1 u bit, bank_bits[2] is for bank2 and so on
	Wire#(Bit#(TAdd#(`BANKS,0))) wr_bank_bits <- mkWire;	
	//tag value of matching bank
	Wire#(Gv_tag) wr_tag <- mkWire;
	//bank number of matching bank
	Wire#(Gv_bank_num) wr_bank_num <- mkWire;
	//counter value of bank 0
	Wire#(Gv_counter) wr_bimodal_counter <- mkWire;
	//will fire of rl_predict
	FIFOF#(Bool) ff_rl_predict <- mkLFIFOF();
	//to control shifting wrt rl_shift_hist and ma_train
	Wire#(Bool) wr_fubar <- mkDWire(False);

	let dump1 <- mkReg(InvalidFile);
	let dump2 <- mkReg(InvalidFile);
	let dump3 <- mkReg(InvalidFile);
	Reg#(Bool) file_open <- mkReg(True);

	//rule to perform the complete prediction; computes hash outputs,performs comparisons and muxing(through if else tree)
	//updates the counter value of matching bank as well as m,u bits of all banks and the bank no. of matching bank
/*	rule rl_predict;
		let lv_bimodal_out= bram_bimodal.a.read();
		let lv_bank1_out= bram_bank1.a.read();
		let lv_bank2_out= bram_bank2.a.read();
		let lv_bank3_out= bram_bank3.a.read();
		let lv_bank4_out= bram_bank4.a.read();
		let dummy= ff_rl_predict.first();
		ff_rl_predict.deq();
		//compare tag output of bank 4 with hash function output
		Bool lv_compare1=fn_compare(lv_bank1_out[`TAG_SIZE:1], fn_hash_tag(rg_pc_copy[`TAG_SIZE-1:0],(crg_bank1_csr_p[0])[`TAG_SIZE-1:0],(crg_bank1_csr_s[0])[`TAG_SIZE-2:0])); 
		//compare tag output of bank 3 with hash function output
		Bool lv_compare2=fn_compare(lv_bank2_out[`TAG_SIZE:1], fn_hash_tag(rg_pc_copy[`TAG_SIZE-1:0],(crg_bank2_csr_p[0])[`TAG_SIZE-1:0],(crg_bank2_csr_s[0])[`TAG_SIZE-2:0])); 
		//compare tag output of bank 2 with hash function output
		Bool lv_compare3=fn_compare(lv_bank3_out[`TAG_SIZE:1], fn_hash_tag(rg_pc_copy[`TAG_SIZE-1:0],(crg_bank3_csr_p[0])[`TAG_SIZE-1:0],(crg_bank3_csr_s[0])[`TAG_SIZE-2:0])); 
		//compare tag output of bank 1 with hash function output
		Bool lv_compare4=fn_compare(lv_bank4_out[`TAG_SIZE:1], fn_hash_tag(rg_pc_copy[`TAG_SIZE-1:0],(crg_bank4_csr_p[0])[`TAG_SIZE-1:0],(crg_bank4_csr_s[0])[`TAG_SIZE-2:0])); 
		
		Bit#(1) lv_prediction=0;

		$fwrite(dump3,"%b:%b:%b:%b:%b:%b:%b:%b:%b:%b:%b:%b:%b",lv_bimodal_out,lv_bank1_out,(crg_bank1_csr_p[0])[7:0],(crg_bank1_csr_s[0])[6:0],lv_bank2_out,(crg_bank2_csr_p[0])[7:0],(crg_bank2_csr_s[0])[6:0],lv_bank3_out,(crg_bank3_csr_p[0])[7:0],(crg_bank3_csr_s[0])[6:0],lv_bank4_out,(crg_bank4_csr_p[0])[7:0],(crg_bank4_csr_s[0])[6:0],"\n");

		wr_bank_bits<= {lv_bimodal_out[0],lv_bank1_out[0],lv_bank2_out[0],lv_bank3_out[0],lv_bank4_out[0]};
		wr_bimodal_counter<= lv_bimodal_out[`COUNTER_SIZE:1];

		if (lv_compare4)   
		begin             
			lv_prediction= lv_bank4_out[`DATA_SIZE_GLOBAL-1];     //for type conversion from Bit#(1) to Bool	
			wr_counter<= lv_bank4_out[`DATA_SIZE_GLOBAL-1:`TAG_SIZE+1];
			wr_tag<= lv_bank4_out[`TAG_SIZE:1];
			wr_bank_num<= 3'b100;
		end

		else 
		begin
			if(lv_compare3) 
			begin
				lv_prediction= lv_bank3_out[`DATA_SIZE_GLOBAL-1];			
				wr_counter<= lv_bank3_out[`DATA_SIZE_GLOBAL-1:`TAG_SIZE+1];
				wr_tag<= lv_bank3_out[`TAG_SIZE:1];
				wr_bank_num<= 3'b011;
			end

			else 
			begin
				if(lv_compare2) 
				begin
					lv_prediction= lv_bank2_out[`DATA_SIZE_GLOBAL-1]; 		
					wr_counter<= lv_bank2_out[`DATA_SIZE_GLOBAL-1:`TAG_SIZE+1];
					wr_tag<= lv_bank2_out[`TAG_SIZE:1];
					wr_bank_num<= 3'b010;
				end

				else 
				begin
					if(lv_compare1) 
					begin
						lv_prediction= lv_bank1_out[`DATA_SIZE_GLOBAL-1];	
						wr_counter<= lv_bank1_out[`DATA_SIZE_GLOBAL-1:`TAG_SIZE+1];
						wr_tag<= lv_bank1_out[`TAG_SIZE:1];
						wr_bank_num<= 3'b001;
					end
	
					else                                                                                          //none of the tags match
					begin						
						lv_prediction= lv_bimodal_out[`COUNTER_SIZE];	
						wr_counter<= lv_bimodal_out[`COUNTER_SIZE:1];
						wr_tag<= ?;
						wr_bank_num<= 3'b000;
					end                                                     
				end
			end
		end
		
		wr_prediction<= lv_prediction;
		
		//updating internal regs
		//index csrs
		Bit#(TAdd#(`GLOBAL_ADDR,`PIPELINE_DEPTH)) lv_temp2=crg_bank2_csr_indx[0];
		Bit#(TAdd#(`GLOBAL_ADDR,`PIPELINE_DEPTH)) lv_temp3=crg_bank3_csr_indx[0];
		Bit#(TAdd#(`GLOBAL_ADDR,`PIPELINE_DEPTH)) lv_temp4=crg_bank4_csr_indx[0];

		crg_bank2_csr_indx[0] <= (crg_bank2_csr_indx[0] << 1) | zeroExtend(rg_global_history[9]^lv_prediction^lv_temp2[9]); 			//Calculating new values of cyclic
		crg_bank3_csr_indx[0] <= (crg_bank3_csr_indx[0] << 1) | zeroExtend(rg_global_history[29]^lv_prediction^lv_temp3[9]); 			// shift registers
		crg_bank4_csr_indx[0] <= (crg_bank4_csr_indx[0] << 1) | zeroExtend(rg_global_history[69]^lv_prediction^lv_temp4[9]);

		//tag csrs
		//primary
		crg_bank2_csr_p[0] <= {((crg_bank2_csr_p[0])[13:4] << 1 | zeroExtend(rg_global_history[9]^(crg_bank2_csr_p[0])[3])), (crg_bank2_csr_p[0])[3:0] << 1 | zeroExtend(lv_prediction^(crg_bank2_csr_p[0])[7])};
		crg_bank3_csr_p[0] <= crg_bank3_csr_p[0] << 1 | zeroExtend(rg_global_history[29]^lv_prediction^(crg_bank3_csr_p[0])[7]);
		crg_bank4_csr_p[0] <= crg_bank4_csr_p[0] << 1 | zeroExtend(rg_global_history[69]^lv_prediction^(crg_bank4_csr_p[0])[7]);
		//secondary
		crg_bank2_csr_s[0] <= {(crg_bank2_csr_s[0])[12:7] << 1 | zeroExtend((crg_bank2_csr_s[0])[6]),((crg_bank2_csr_s[0])[5]^(rg_global_history[9])), (crg_bank2_csr_p[0])[5:0] << 1 | zeroExtend(lv_prediction^(crg_bank2_csr_p[0])[6])};
		crg_bank3_csr_s[0] <= {((crg_bank3_csr_s[0])[12:5] << 1 |zeroExtend(rg_global_history[29]^(crg_bank3_csr_p[0])[4])), (crg_bank3_csr_p[0])[4:0] << 1 | zeroExtend(lv_prediction^(crg_bank3_csr_p[0])[7])};
		crg_bank4_csr_s[0] <= {((crg_bank4_csr_s[0])[12:3] << 1 |zeroExtend(rg_global_history[69]^(crg_bank4_csr_p[0])[2])), (crg_bank4_csr_p[0])[2:0] << 1 | zeroExtend(lv_prediction^(crg_bank4_csr_p[0])[7])};

		if(rg_choice==0)
		begin	
			Bit#((TAdd#(`GLOBAL_ADDR,1))) lv_temp= crg_hist0[0];
			Bit#(`GLOBAL_ADDR) lv_gnd=0;
			crg_hist0[0]<= (crg_hist0[0]<<1) | {lv_gnd,lv_prediction};
			wr_shift_in<= (crg_hist0[0])[`GLOBAL_ADDR-1];
			crg_bank1_csr_p[0] <= {((crg_bank1_csr_p[0])[13:6] << 1) | {7'b0,((crg_hist0[0])[9]^(crg_bank1_csr_p[0])[5])}, ((crg_bank1_csr_p[0])[5:0] << 1) | {5'b0, lv_prediction^(crg_bank1_csr_p[0])[7]}};
		crg_bank1_csr_s[0] <= {((crg_bank1_csr_s[0])[12:4] << 1 | zeroExtend((crg_hist0[0])[9]^(crg_bank1_csr_p[0])[2])), (crg_bank1_csr_p[0])[3:0] << 1 | zeroExtend(lv_prediction^(crg_bank1_csr_p[0])[7])};
		end

		else
		begin
			Bit#((TAdd#(`GLOBAL_ADDR,1))) lv_temp= crg_hist1[0];
			Bit#(`GLOBAL_ADDR) lv_gnd=0;
			crg_hist1[0]<= (crg_hist1[0]<<1) | {lv_gnd,lv_prediction};
			wr_shift_in<= (crg_hist1[0])[`GLOBAL_ADDR-1];
			crg_bank1_csr_p[0] <= {((crg_bank1_csr_p[0])[13:6] << 1) | {7'b0,((crg_hist1[0])[9]^(crg_bank1_csr_p[0])[5])}, ((crg_bank1_csr_p[0])[5:0] << 1) | {5'b0, lv_prediction^(crg_bank1_csr_p[0])[7]}};
		crg_bank1_csr_s[0] <= {((crg_bank1_csr_s[0])[12:4] << 1 | zeroExtend((crg_hist1[0])[9]^(crg_bank1_csr_p[0])[2])), (crg_bank1_csr_p[0])[3:0] << 1 | zeroExtend(lv_prediction^(crg_bank1_csr_p[0])[7])};
		end

		crg_inflight[0]<= crg_inflight[0]+1;	
		wr_fubar<= True;
		//$display("%0d:",lv_prediction);
		//$display("%0d",crg_inflight[0],"\n");
	endrule*/


	(* preempts = "ma_train,rl_shift_hist" *)
	//update history
	rule rl_shift_hist(wr_fubar);
		Bit#(TSub#(`HIST_SIZE,1)) lv_gnd=0;
		rg_global_history<= (rg_global_history<<1) | {lv_gnd,wr_shift_in};
	endrule
		
	rule rl_file(file_open);
		File lfh <- $fopen(gv_dump,"w");
		File lfi <- $fopen(gv_dump2,"w");
		File lfj <- $fopen(gv_dump3,"w");
		//File lfk <- $fopen(file_dump4,"w");
		//dump4<= lfk;		
		//dump2<= lfi;		
		dump1<= lfh;
		dump2<= lfi;
		dump3<= lfj;
		file_open<= False;
	endrule

	//initializes all bank entries with counter value=011(weakly taken), tag=0 and LSB=0;stops when the bank with the largest number of entries has been filled
	rule rl_flush(rg_flush);
		Gv_global_addr lv_global_size= `GLOBAL_MAX_ADDR;

		if(rg_global_flush_addr< lv_global_size)
		begin
			bram_bank1.b.put(`WRITE,rg_global_flush_addr,12'b011000000000);
			bram_bank2.b.put(`WRITE,rg_global_flush_addr,12'b011000000000);
			bram_bank3.b.put(`WRITE,rg_global_flush_addr,12'b011000000000);
			bram_bank4.b.put(`WRITE,rg_global_flush_addr,12'b011000000000);
			rg_global_flush_addr<= rg_global_flush_addr+1;
		end
		
		else
		begin
			bram_bank1.b.put(`WRITE,lv_global_size,12'b011000000000);
			bram_bank2.b.put(`WRITE,lv_global_size,12'b011000000000);
			bram_bank3.b.put(`WRITE,lv_global_size,12'b011000000000);
			bram_bank4.b.put(`WRITE,lv_global_size,12'b011000000000);
			if(`GLOBAL_MAX_ADDR>`BIMODAL_MAX_ADDR)
				rg_flush<= False;	
		end

		//different comparison scheme than what is followed for global banks to reduce critical path delay and increase maximum operating frequency
		//min clk period changes from 3.4ns to 3.23 ns on doing this 
		if(rg_bimodal_flush_addr[`BIMODAL_ADDR]==0)
		begin
			bram_bimodal.b.put(`WRITE,rg_bimodal_flush_addr[`BIMODAL_ADDR-1:0],4'b0110);
			rg_bimodal_flush_addr<= rg_bimodal_flush_addr+1;
		end

		else
		begin
			if(`BIMODAL_MAX_ADDR>`GLOBAL_MAX_ADDR)
				rg_flush<= False;
		end
	endrule

	//initializes the random number generators on the very first cycle; doesnt execute ever after that
	rule rl_init_rand(rg_init_rand);
		random_bank0.cntrl.init();
		random_bank1.cntrl.init();
		random_bank2.cntrl.init();
		rg_init_rand<= False;
	endrule


	//enters pc into module and issues read requests to the brams to perform prediction 
	method Action ma_put(Gv_pc pc);
		//calculate addresses to be sent to bram banks
		Gv_global_addr lv_actual_hist= 0;
		Gv_bimodal_addr lv_bimodal_addr=pc[`BIMODAL_ADDR-1:0];

		Bit#((TAdd#(`GLOBAL_ADDR,1))) lv_temp= crg_hist[1];
		lv_actual_hist= lv_temp[`GLOBAL_ADDR-1:0];		
		//$display("%b",crg_hist0[1],"\n");	
		
		Bit#(TAdd#(`GLOBAL_ADDR,`PIPELINE_DEPTH)) lv_temp2=crg_bank2_csr_indx[1];
		
		Bit#(TAdd#(`GLOBAL_ADDR,`PIPELINE_DEPTH)) lv_temp3=crg_bank3_csr_indx[1];
		
		Bit#(TAdd#(`GLOBAL_ADDR,`PIPELINE_DEPTH)) lv_temp4=crg_bank4_csr_indx[1];
		/*$display("%b:",lv_actual_hist);
		$display("%b:",lv_temp2[9:0]);
		$display("%b:",lv_temp3[9:0]);
		$display("%b:",lv_temp4[9:0],"\n");

		$display("%b:",(crg_bank1_csr_p[1])[7:0]);
		$display("%b:",(crg_bank2_csr_p[1])[7:0]);
		$display("%b:",(crg_bank3_csr_p[1])[7:0]);	
		$display("%b:",(crg_bank4_csr_p[1])[7:0]);
		$display("%b:",(crg_bank1_csr_s[1])[6:0]);
		$display("%b:",(crg_bank2_csr_s[1])[6:0]);
		$display("%b:",(crg_bank3_csr_s[1])[6:0]);
		$display("%b:",(crg_bank4_csr_s[1])[6:0],"\n");*/

		//only for debugging
		Bit#(90) lv_global_history= {rg_global_history,(crg_hist[1])[`GLOBAL_ADDR-1:0]}; 

		//$fwrite(dump1,"%b:%b:%b:%b:%b:%b:%b:%b:%b:%b:%b:%b:%b",lv_global_history[79:0],lv_actual_hist,lv_temp2[9:0],lv_temp3[9:0],lv_temp4[9:0],(crg_bank1_csr_p[1])[7:0],(crg_bank2_csr_p[1])[7:0],(crg_bank3_csr_p[1])[7:0],(crg_bank4_csr_p[1])[7:0],(crg_bank1_csr_s[1])[6:0],(crg_bank2_csr_s[1])[6:0],(crg_bank3_csr_s[1])[6:0],(crg_bank4_csr_s[1])[6:0],"\n");

		Gv_global_addr lv_bank1_addr=fn_hash_indx(pc[19:0],lv_actual_hist);
		Gv_global_addr lv_bank2_addr=fn_hash_indx(pc[19:0],lv_temp2[`GLOBAL_ADDR-1:0]);
		Gv_global_addr lv_bank3_addr=fn_hash_indx(pc[19:0],lv_temp3[`GLOBAL_ADDR-1:0]);
		Gv_global_addr lv_bank4_addr=fn_hash_indx(pc[19:0],lv_temp4[`GLOBAL_ADDR-1:0]);
		
		//issue read requests to all banks
		bram_bimodal.a.put(`READ,lv_bimodal_addr,?);
		
		
		bram_bank1.a.put(`READ,lv_bank1_addr,?);
		
		
		bram_bank2.a.put(`READ,lv_bank2_addr,?);
		

		bram_bank3.a.put(`READ,lv_bank3_addr,?);
		

		bram_bank4.a.put(`READ,lv_bank4_addr,?);
		

		//copy pc value into a local register for further use in rules
		rg_pc_copy<= pc;
		
		//ff_rl_predict.enq(True);
		//$display("%0d",crg_inflight[0],"\n");

	endmethod


	//returns prediction along with training data and updates history reg
	method ActionValue#(Gv_return_predictor) mn_get;
		let lv_bimodal_out= bram_bimodal.a.read();
		let lv_bank1_out= bram_bank1.a.read();
		let lv_bank2_out= bram_bank2.a.read();
		let lv_bank3_out= bram_bank3.a.read();
		let lv_bank4_out= bram_bank4.a.read();
		//let dummy= ff_rl_predict.first();
		//ff_rl_predict.deq();
		Bit#(1) lv_prediction=0;
		Bit#(3) lv_counter=0;
		Bit#(3) lv_bimodal_counter=0;
		Bit#(5) lv_bank_bits=0;
		Bit#(3) lv_bank_num=0;
		Bit#(8) lv_tag=0;

		//compare tag output of bank 4 with hash function output
		Bool lv_compare1=fn_compare(lv_bank1_out[`TAG_SIZE:1], fn_hash_tag(rg_pc_copy[`TAG_SIZE-1:0],(crg_bank1_csr_p[0])[`TAG_SIZE-1:0],(crg_bank1_csr_s[0])[`TAG_SIZE-2:0])); 
		//compare tag output of bank 3 with hash function output
		Bool lv_compare2=fn_compare(lv_bank2_out[`TAG_SIZE:1], fn_hash_tag(rg_pc_copy[`TAG_SIZE-1:0],(crg_bank2_csr_p[0])[`TAG_SIZE-1:0],(crg_bank2_csr_s[0])[`TAG_SIZE-2:0])); 
		//compare tag output of bank 2 with hash function output
		Bool lv_compare3=fn_compare(lv_bank3_out[`TAG_SIZE:1], fn_hash_tag(rg_pc_copy[`TAG_SIZE-1:0],(crg_bank3_csr_p[0])[`TAG_SIZE-1:0],(crg_bank3_csr_s[0])[`TAG_SIZE-2:0])); 
		//compare tag output of bank 1 with hash function output
		Bool lv_compare4=fn_compare(lv_bank4_out[`TAG_SIZE:1], fn_hash_tag(rg_pc_copy[`TAG_SIZE-1:0],(crg_bank4_csr_p[0])[`TAG_SIZE-1:0],(crg_bank4_csr_s[0])[`TAG_SIZE-2:0])); 


		//$display("here_predict");
		//$fwrite(dump3,"%b:%b:%b:%b:%b:%b:%b:%b:%b:%b:%b:%b:%b",lv_bimodal_out,lv_bank1_out,rg_bank1_csr_p,rg_bank1_csr_s,lv_bank2_out,rg_bank2_csr_p,rg_bank2_csr_s,lv_bank3_out,rg_bank3_csr_p,rg_bank3_csr_s,lv_bank4_out,rg_bank4_csr_p,rg_bank4_csr_s,"\n");
		
		lv_bank_bits= {lv_bimodal_out[0],lv_bank1_out[0],lv_bank2_out[0],lv_bank3_out[0],lv_bank4_out[0]};
		lv_bimodal_counter= lv_bimodal_out[`COUNTER_SIZE:1];

		if (lv_compare4)   
		begin             
			lv_prediction= lv_bank4_out[`DATA_SIZE_GLOBAL-1];     //for type conversion from Bit#(1) to Bool	
			lv_counter= lv_bank4_out[`DATA_SIZE_GLOBAL-1:`TAG_SIZE+1];
			lv_tag= lv_bank4_out[`TAG_SIZE:1];
			lv_bank_num= 3'b100;
		end

		else 
		begin
			if(lv_compare3) 
			begin
				lv_prediction= lv_bank3_out[`DATA_SIZE_GLOBAL-1];			
				lv_counter= lv_bank3_out[`DATA_SIZE_GLOBAL-1:`TAG_SIZE+1];
				lv_tag= lv_bank3_out[`TAG_SIZE:1];
				lv_bank_num= 3'b011;
			end

			else 
			begin
				if(lv_compare2) 
				begin
					lv_prediction= lv_bank2_out[`DATA_SIZE_GLOBAL-1]; 		
					lv_counter= lv_bank2_out[`DATA_SIZE_GLOBAL-1:`TAG_SIZE+1];
					lv_tag= lv_bank2_out[`TAG_SIZE:1];
					lv_bank_num= 3'b010;
				end

				else 
				begin
					if(lv_compare1) 
					begin
						lv_prediction= lv_bank1_out[`DATA_SIZE_GLOBAL-1];	
						lv_counter= lv_bank1_out[`DATA_SIZE_GLOBAL-1:`TAG_SIZE+1];
						lv_tag= lv_bank1_out[`TAG_SIZE:1];
						lv_bank_num= 3'b001;
					end
	
					else                                                                                          //none of the tags match
					begin						
						lv_prediction= lv_bimodal_out[`COUNTER_SIZE];	
						lv_counter= lv_bimodal_out[`COUNTER_SIZE:1];
						lv_tag= ?;
						lv_bank_num= 3'b000;
					end                                                     
				end
			end
		end
		//$display("%0d:",lv_prediction);
		//$display("%0d",crg_inflight[0],"\n");

		wr_prediction<= lv_prediction;
		Gv_return_predictor return_vals;
		return_vals.prediction= lv_prediction;
		return_vals.counter= lv_counter;
		return_vals.tag= lv_tag;
		return_vals.bank_bits= lv_bank_bits;
		return_vals.bank_num= lv_bank_num;
		return_vals.bimodal_counter= lv_bimodal_counter;
		return return_vals;
	endmethod

	//to start flush operation
	method Action ma_flush if(!rg_flush);        //condition is used to prevent ma_flush from interrupting an already executing flush operation
		rg_flush<= True;
		rg_bimodal_flush_addr<= 0;
		rg_global_flush_addr<= 0;
	endmethod	


	method Action ma_shadow(Bit#(1) prediction);
		//updating internal regs
		//index csrs
		Bit#(TAdd#(`GLOBAL_ADDR,`PIPELINE_DEPTH)) lv_temp2=crg_bank2_csr_indx[0];
		Bit#(TAdd#(`GLOBAL_ADDR,`PIPELINE_DEPTH)) lv_temp3=crg_bank3_csr_indx[0];
		Bit#(TAdd#(`GLOBAL_ADDR,`PIPELINE_DEPTH)) lv_temp4=crg_bank4_csr_indx[0];

		crg_bank2_csr_indx[0] <= (crg_bank2_csr_indx[0] << 1) | zeroExtend(rg_global_history[9]^prediction^lv_temp2[9]); 			//Calculating new values of cyclic
		crg_bank3_csr_indx[0] <= (crg_bank3_csr_indx[0] << 1) | zeroExtend(rg_global_history[29]^prediction^lv_temp3[9]); 			// shift registers
		crg_bank4_csr_indx[0] <= (crg_bank4_csr_indx[0] << 1) | zeroExtend(rg_global_history[69]^prediction^lv_temp4[9]);

		//tag csrs
		//primary
		crg_bank2_csr_p[0] <= {((crg_bank2_csr_p[0])[13:4] << 1 | zeroExtend(rg_global_history[9]^(crg_bank2_csr_p[0])[3])), (crg_bank2_csr_p[0])[3:0] << 1 | zeroExtend(prediction^(crg_bank2_csr_p[0])[7])};
		crg_bank3_csr_p[0] <= crg_bank3_csr_p[0] << 1 | zeroExtend(rg_global_history[29]^prediction^(crg_bank3_csr_p[0])[7]);
		crg_bank4_csr_p[0] <= crg_bank4_csr_p[0] << 1 | zeroExtend(rg_global_history[69]^prediction^(crg_bank4_csr_p[0])[7]);
		//secondary
		crg_bank2_csr_s[0] <= {(crg_bank2_csr_s[0])[12:7] << 1 | zeroExtend((crg_bank2_csr_s[0])[6]),((crg_bank2_csr_s[0])[5]^(rg_global_history[9])), (crg_bank2_csr_p[0])[5:0] << 1 | zeroExtend(prediction^(crg_bank2_csr_p[0])[6])};
		crg_bank3_csr_s[0] <= {((crg_bank3_csr_s[0])[12:5] << 1 |zeroExtend(rg_global_history[29]^(crg_bank3_csr_p[0])[4])), (crg_bank3_csr_p[0])[4:0] << 1 | zeroExtend(prediction^(crg_bank3_csr_p[0])[7])};
		crg_bank4_csr_s[0] <= {((crg_bank4_csr_s[0])[12:3] << 1 |zeroExtend(rg_global_history[69]^(crg_bank4_csr_p[0])[2])), (crg_bank4_csr_p[0])[2:0] << 1 | zeroExtend(prediction^(crg_bank4_csr_p[0])[7])};
	
		Bit#((TAdd#(`GLOBAL_ADDR,1))) lv_temp= crg_hist[0];
		Bit#(`GLOBAL_ADDR) lv_gnd=0;
		crg_hist[0]<= (crg_hist[0]<<1) | {lv_gnd,prediction};
		wr_shift_in<= (crg_hist[0])[`GLOBAL_ADDR-1];
		crg_bank1_csr_p[0] <= {((crg_bank1_csr_p[0])[13:6] << 1) | {7'b0,((crg_hist[0])[9]^(crg_bank1_csr_p[0])[5])}, ((crg_bank1_csr_p[0])[5:0] << 1) | {5'b0, prediction^(crg_bank1_csr_p[0])[7]}};
		crg_bank1_csr_s[0] <= {((crg_bank1_csr_s[0])[12:4] << 1 | zeroExtend((crg_hist[0])[9]^(crg_bank1_csr_p[0])[2])), (crg_bank1_csr_p[0])[3:0] << 1 | zeroExtend(prediction^(crg_bank1_csr_p[0])[7])};

		crg_inflight[0]<= crg_inflight[0]+1;	
		wr_fubar<= True;
	endmethod
	

	//gets training data into predictor and does the training; also updates the csrs
	method Action ma_train(Gv_train_predictor training_data) if(!rg_flush);
		Gv_global_addr lv_actual_hist=0;
		//$display("%0d",crg_inflight[1],"\n");

		Gv_bimodal_addr lv_bimodal_addr=training_data.pc[11:0];
		Gv_global_addr lv_bank1_addr=fn_hash_indx(training_data.pc[19:0],rg_real_global_history[9:0]);
		Gv_global_addr lv_bank2_addr=fn_hash_indx(training_data.pc[19:0],rg_bank2_csr_indx);
		Gv_global_addr lv_bank3_addr=fn_hash_indx(training_data.pc[19:0],rg_bank3_csr_indx);
		Gv_global_addr lv_bank4_addr=fn_hash_indx(training_data.pc[19:0],rg_bank4_csr_indx);
		
		Gv_tag lv_new_tag1=fn_hash_tag(training_data.pc[7:0],rg_bank1_csr_p,rg_bank1_csr_s);
		Gv_tag lv_new_tag2=fn_hash_tag(training_data.pc[7:0],rg_bank2_csr_p,rg_bank2_csr_s);
		Gv_tag lv_new_tag3=fn_hash_tag(training_data.pc[7:0],rg_bank3_csr_p,rg_bank3_csr_s);
		Gv_tag lv_new_tag4=fn_hash_tag(training_data.pc[7:0],rg_bank4_csr_p,rg_bank4_csr_s);

		//$fwrite(dump2,"%b:%b:%b:%b:%b:%b:%b:%b",lv_bank1_addr,lv_bank2_addr,lv_bank3_addr,lv_bank4_addr,lv_new_tag1,lv_new_tag2,lv_new_tag3,lv_new_tag4,"\n");

		//local variables
		Gv_pc lv_pc= training_data.pc;
		Bit#(1) lv_prediction= training_data.prediction;
		Gv_bank_num lv_bank_num= training_data.bank_num;
		Bool lv_truth= training_data.truth;
		Bool lv_hit=training_data.hit;
		Gv_counter lv_counter= training_data.counter;
		Bit#(TAdd#(`BANKS,0)) lv_bank_bits= training_data.bank_bits; 
		Gv_tag lv_tag= training_data.tag;
		Gv_counter lv_training_bimodal_out= training_data.bimodal;
		//branch actually taken or not
		Bool lv_actual= (lv_truth)?unpack(lv_prediction):!(unpack(lv_prediction));
		Bit#(TAdd#(`HIST_SIZE,`GLOBAL_ADDR)) lv_global_history= 0;
		//for zero appending
		Bit#(TSub#(`HIST_SIZE,1)) lv_gnd1=0;
		Bit#(`GLOBAL_ADDR) lv_gnd2=0;
		
		//get random bank number for stealing
		Gv_bank_num lv_rand_bank0_num <- random_bank0.next();
		Gv_bank_num lv_rand_bank1_num <- random_bank1.next();
		Gv_bank_num lv_rand_bank2_num <- random_bank2.next();
		
		//$fwrite(dump3,"%0d:%0d:%0d:%0d",lv_bank_num, lv_rand_bank0_num, lv_rand_bank1_num, lv_rand_bank2_num,"\n");

		case(crg_inflight[1])
		0:	
		begin
		
			Bit#(TAdd#(`GLOBAL_ADDR,`PIPELINE_DEPTH)) lv_temp2=crg_bank2_csr_indx[1];
			Bit#(TAdd#(`GLOBAL_ADDR,`PIPELINE_DEPTH)) lv_temp3=crg_bank3_csr_indx[1];
			Bit#(TAdd#(`GLOBAL_ADDR,`PIPELINE_DEPTH)) lv_temp4=crg_bank4_csr_indx[1];

			crg_bank2_csr_indx[1] <= (crg_bank2_csr_indx[1] << 1) | zeroExtend(rg_real_global_history[19]^pack(lv_actual)^rg_bank2_csr_indx[9]); 			 
			crg_bank3_csr_indx[1] <= (crg_bank3_csr_indx[1] << 1) | zeroExtend(rg_real_global_history[39]^pack(lv_actual)^rg_bank3_csr_indx[9]); 			
			crg_bank4_csr_indx[1] <= (crg_bank4_csr_indx[1] << 1) | zeroExtend(rg_real_global_history[79]^pack(lv_actual)^rg_bank4_csr_indx[9]);

			//primary
		crg_bank2_csr_p[1] <= {((crg_bank2_csr_p[1])[13:4]<<1 | zeroExtend(rg_real_global_history[19]^rg_bank2_csr_p[3])), rg_bank2_csr_p[3:0] << 1 | zeroExtend(pack(lv_actual)^rg_bank2_csr_p[7])};
		crg_bank3_csr_p[1] <= crg_bank3_csr_p[1] << 1 | zeroExtend(rg_real_global_history[39]^pack(lv_actual)^rg_bank3_csr_p[7]);
		crg_bank4_csr_p[1] <= crg_bank4_csr_p[1] << 1 | zeroExtend(rg_real_global_history[79]^pack(lv_actual)^rg_bank4_csr_p[7]);
			//secondary
			crg_bank2_csr_s[1] <= {(crg_bank2_csr_s[1])[12:7] << 1 | zeroExtend(rg_bank2_csr_s[6]),(rg_bank2_csr_s[5]^(rg_real_global_history[19])), rg_bank2_csr_p[5:0] << 1 |zeroExtend(pack(lv_actual)^rg_bank2_csr_p[6])};
		crg_bank3_csr_s[1] <= {((crg_bank3_csr_s[1])[12:5] << 1 |zeroExtend(rg_real_global_history[39]^rg_bank3_csr_p[4])), rg_bank3_csr_p[4:0]<<1 | zeroExtend(pack(lv_actual)^rg_bank3_csr_p[7])};
		crg_bank4_csr_s[1] <= {((crg_bank4_csr_s[1])[12:3] << 1 |zeroExtend(rg_real_global_history[79]^rg_bank4_csr_p[2])), rg_bank4_csr_p[2:0]<<1 | zeroExtend(pack(lv_actual)^rg_bank4_csr_p[7])};
			
		crg_bank1_csr_p[1] <= {((crg_bank1_csr_p[1])[13:6] << 1) | {7'b0,(rg_real_global_history[9]^rg_bank1_csr_p[5])}, (rg_bank1_csr_p[5:0]<<1) | {5'b0, pack(lv_actual)^rg_bank1_csr_p[7]}};
		crg_bank1_csr_s[1] <= {((crg_bank1_csr_s[1])[12:4] << 1 | zeroExtend(rg_real_global_history[9]^rg_bank1_csr_p[2])), rg_bank1_csr_p[3:0]<<1 | zeroExtend(pack(lv_actual)^rg_bank1_csr_p[7])};
			

			Bit#(TAdd#(`GLOBAL_ADDR,1)) lv_temp_hist= crg_hist[1];
			//Bit#(TAdd#(`GLOBAL_ADDR,1)) lv_temp_hist1= crg_hist1[1];

			lv_global_history= {rg_global_history,lv_temp_hist[`GLOBAL_ADDR-1:0]};

			//prediction is false so right shift and swap(but in 0 case only 1 left shift needed)
			if(!lv_truth)
			begin
				Bit#(TSub#(TAdd#(`HIST_SIZE,`GLOBAL_ADDR),1)) lv_gnd=0;
				lv_global_history= (lv_global_history<<1) | {lv_gnd,pack(lv_actual)};

				Bit#(TAdd#(`GLOBAL_ADDR,1)) lv_temp_shift= lv_global_history[`GLOBAL_ADDR:0];
				crg_hist[1]<= lv_temp_shift;

				rg_global_history<= (rg_global_history<<1) | zeroExtend(lv_global_history[`GLOBAL_ADDR]);
			end

			else
			begin
				Bit#(TSub#(TAdd#(`HIST_SIZE,`GLOBAL_ADDR),1)) lv_gnd=0;
				lv_global_history= (lv_global_history<<1) | {lv_gnd,pack(lv_actual)};
			
				Bit#(TAdd#(`GLOBAL_ADDR,1)) lv_temp_shift= lv_global_history[`GLOBAL_ADDR:0];
				crg_hist[1]<= lv_temp_shift;

				rg_global_history<= (rg_global_history<<1) | zeroExtend(lv_global_history[`GLOBAL_ADDR]);
			end
		end
			
		1:
		begin	
			if(wr_fubar)
				lv_global_history= {(rg_global_history<<1),lv_gnd2} | {lv_gnd1,crg_hist[1]};
			else
				lv_global_history={rg_global_history,(crg_hist[1])[`GLOBAL_ADDR-1:0]}; 
			//prediction is false so right shift and swap
			if(!(lv_truth && lv_hit))
			begin
				crg_inflight[1]<= 0;
				lv_global_history[0]= pack(lv_actual);
		
				Bit#(TAdd#(`GLOBAL_ADDR,1)) lv_temp_shift= lv_global_history[`GLOBAL_ADDR:0];
				
				crg_hist[1]<= lv_temp_shift;

				Bit#(TAdd#(`GLOBAL_ADDR,`PIPELINE_DEPTH)) lv_temp2=crg_bank2_csr_indx[1];
				Bit#(TAdd#(`GLOBAL_ADDR,`PIPELINE_DEPTH)) lv_temp3=crg_bank3_csr_indx[1];
				Bit#(TAdd#(`GLOBAL_ADDR,`PIPELINE_DEPTH)) lv_temp4=crg_bank4_csr_indx[1];
				(crg_bank2_csr_indx[1])[0] <= (rg_real_global_history[19]^pack(lv_actual)^rg_bank2_csr_indx[9]); 			 
				(crg_bank3_csr_indx[1])[0] <= (rg_real_global_history[39]^pack(lv_actual)^rg_bank3_csr_indx[9]); 			
				(crg_bank4_csr_indx[1])[0] <= (rg_real_global_history[79]^pack(lv_actual)^rg_bank4_csr_indx[9]);

				(crg_bank1_csr_p[1])[0] <= (pack(lv_actual)^rg_bank1_csr_p[7]);
				(crg_bank2_csr_p[1])[0] <= (pack(lv_actual)^rg_bank2_csr_p[7]);
				(crg_bank3_csr_p[1])[0] <= (rg_real_global_history[39]^pack(lv_actual)^rg_bank3_csr_p[7]);
				(crg_bank4_csr_p[1])[0] <= (rg_real_global_history[79]^pack(lv_actual)^rg_bank4_csr_p[7]);

				(crg_bank1_csr_s[1])[0] <= (pack(lv_actual)^rg_bank1_csr_p[7]);
				(crg_bank2_csr_s[1])[0] <= (pack(lv_actual)^rg_bank2_csr_p[6]);
				(crg_bank3_csr_s[1])[0] <= (pack(lv_actual)^rg_bank3_csr_p[7]);
				(crg_bank4_csr_s[1])[0] <= (pack(lv_actual)^rg_bank4_csr_p[7]);

					
			end
			//prediction is true so just do the shifting done in mn_get()
			else
			begin
				crg_inflight[1]<= crg_inflight[1]-1;
				/*Bit#(TSub#(`HIST_SIZE,1)) lv_gnd=0;
				if(rg_choice==0)
				begin
					Bit#((TAdd#(`GLOBAL_ADDR,1))) lv_temp= crg_hist0[1];
					rg_global_history<= (rg_global_history<<1) | {lv_gnd,lv_temp[`GLOBAL_ADDR]};
				end
		
				else
				begin
					Bit#((TAdd#(`GLOBAL_ADDR,1))) lv_temp= crg_hist1[1];
					rg_global_history<= (rg_global_history<<1) | {lv_gnd,lv_temp[`GLOBAL_ADDR]};
				end*/
			end
			rg_global_history<= lv_global_history[89:10];
		end
		
		2:
		begin
			if(wr_fubar)
				lv_global_history= {(rg_global_history<<1),lv_gnd2} | {lv_gnd1,crg_hist[1]};
			else
				lv_global_history= {rg_global_history,(crg_hist[1])[`GLOBAL_ADDR-1:0]};
			//prediction is false so right shift and swap
			if(!(lv_truth && lv_hit))
			begin
				crg_inflight[1]<= 0;
				lv_global_history[1]= pack(lv_actual);

				Bit#(TAdd#(`GLOBAL_ADDR,1)) lv_temp_shift= lv_global_history[`GLOBAL_ADDR+1:1];
			
				crg_hist[1]<= lv_temp_shift;
	
				rg_global_history<= zeroExtend(lv_global_history[89:11]);
				//let lv_temp2_csr_indx= crg_bank2_csr_indx[1];
				
				crg_bank2_csr_indx[1]<= {(crg_bank2_csr_indx[1])[15:10]>>1,(rg_bank2_csr_indx << 1) | {9'b0,(rg_real_global_history[19]^pack(lv_actual)^rg_bank2_csr_indx[9])}};	
				crg_bank3_csr_indx[1]<= {(crg_bank3_csr_indx[1])[15:10]>>1,(rg_bank3_csr_indx << 1) | {9'b0,(rg_real_global_history[39]^pack(lv_actual)^rg_bank3_csr_indx[9])}};
				crg_bank4_csr_indx[1]<= {(crg_bank4_csr_indx[1])[15:10]>>1,(rg_bank4_csr_indx << 1) | {9'b0,(rg_real_global_history[79]^pack(lv_actual)^rg_bank4_csr_indx[9])}};

				crg_bank1_csr_p[1]<= {(crg_bank1_csr_p[1])[13:8]>>1,{(rg_bank1_csr_p[7:6] << 1) | {1'b0,(rg_real_global_history[9]^rg_bank1_csr_p[5])}, (rg_bank1_csr_p[5:0] << 1) | {5'b0, pack(lv_actual)^rg_bank1_csr_p[7]}}};
				crg_bank2_csr_p[1]<= {(crg_bank2_csr_p[1])[13:8]>>1,{(rg_bank2_csr_p[7:4] << 1 | zeroExtend(rg_real_global_history[19]^rg_bank2_csr_p[3])), rg_bank2_csr_p[3:0] << 1 | zeroExtend(pack(lv_actual)^rg_bank2_csr_p[7])}};
				crg_bank3_csr_p[1]<= {(crg_bank3_csr_p[1])[13:8]>>1,rg_bank3_csr_p << 1 | zeroExtend(rg_real_global_history[39]^pack(lv_actual)^rg_bank3_csr_p[7])};
				crg_bank4_csr_p[1]<= {(crg_bank4_csr_p[1])[13:8]>>1,rg_bank4_csr_p << 1 | zeroExtend(rg_real_global_history[79]^pack(lv_actual)^rg_bank4_csr_p[7])};
		
				crg_bank1_csr_s[1]<= {(crg_bank1_csr_s[1])[12:7]>>1, {(rg_bank1_csr_s[6:4] << 1 | zeroExtend(rg_real_global_history[9]^rg_bank1_csr_p[2])), rg_bank1_csr_p[3:0] << 1 | zeroExtend(pack(lv_actual)^rg_bank1_csr_p[7])}};
			 	//let lv_temp_shift1= (crg_bank2_csr_s[1])[5:0] >> 1;
				//let lv_temp_shift2= (crg_bank2_csr_s[1])[12:6] >> 1;
				crg_bank2_csr_s[1]<={(crg_bank2_csr_s[1])[12:7]>>1,{(rg_bank2_csr_s[5]^(rg_real_global_history[19])),rg_bank2_csr_p[5:0]<<1 |zeroExtend(pack(lv_actual)^rg_bank2_csr_p[6])}};
				crg_bank3_csr_s[1]<= {(crg_bank3_csr_s[1])[12:7]>>1,{(rg_bank3_csr_s[6:5] << 1 | zeroExtend(rg_real_global_history[39]^rg_bank3_csr_p[4])), rg_bank3_csr_p[4:0] << 1 | zeroExtend(pack(lv_actual)^rg_bank3_csr_p[7])}};
				crg_bank4_csr_s[1]<= {(crg_bank4_csr_s[1])[12:7]>>1,{(rg_bank4_csr_s[6:3] << 1 | zeroExtend(rg_real_global_history[79]^rg_bank4_csr_p[2])), rg_bank4_csr_p[2:0] << 1 | zeroExtend(pack(lv_actual)^rg_bank4_csr_p[7])}};
			end

			//prediction is true so just do the shifting done in mn_get()
			else
			begin
				crg_inflight[1]<= crg_inflight[1]-1;
				/*Bit#(TSub#(`HIST_SIZE,1)) lv_gnd=0;
				if(rg_choice==0)
				begin
					Bit#((TAdd#(`GLOBAL_ADDR,1))) lv_temp= crg_hist0[1];
					rg_global_history<= (rg_global_history<<1) | {lv_gnd,lv_temp[`GLOBAL_ADDR]};
				end
		
				else
				begin
					Bit#((TAdd#(`GLOBAL_ADDR,1))) lv_temp= crg_hist1[1];
					rg_global_history<= (rg_global_history<<1) | {lv_gnd,lv_temp[`GLOBAL_ADDR]};
				end*/
				rg_global_history<= (lv_global_history[89:10]);
			end
		end

		3:
		begin
			if(wr_fubar)
				lv_global_history= {(rg_global_history<<1),lv_gnd2} | {lv_gnd1,crg_hist[1]};
			else
				lv_global_history= {rg_global_history,(crg_hist[1])[`GLOBAL_ADDR-1:0]};
			//prediction is false so right shift and swap
			if(!(lv_truth && lv_hit))
			begin
				crg_inflight[1]<= 0;
				lv_global_history[2]= pack(lv_actual);
			
				Bit#(TAdd#(`GLOBAL_ADDR,1)) lv_temp_shift= lv_global_history[`GLOBAL_ADDR+2:2];
				
				crg_hist[1]<= lv_temp_shift;
			
				rg_global_history<= zeroExtend(lv_global_history[89:12]);
				crg_bank2_csr_indx[1]<= {(crg_bank2_csr_indx[1])[15:10]>>2,(rg_bank2_csr_indx << 1) | {9'b0,(rg_real_global_history[19]^pack(lv_actual)^rg_bank2_csr_indx[9])}};	
				crg_bank3_csr_indx[1]<= {(crg_bank3_csr_indx[1])[15:10]>>2,(rg_bank3_csr_indx << 1) | {9'b0,(rg_real_global_history[39]^pack(lv_actual)^rg_bank3_csr_indx[9])}};
				crg_bank4_csr_indx[1]<= {(crg_bank4_csr_indx[1])[15:10]>>2,(rg_bank4_csr_indx << 1) | {9'b0,(rg_real_global_history[79]^pack(lv_actual)^rg_bank4_csr_indx[9])}};

				crg_bank1_csr_p[1]<= {(crg_bank1_csr_p[1])[13:8]>>2,{(rg_bank1_csr_p[7:6] << 1) | {1'b0,(rg_real_global_history[9]^rg_bank1_csr_p[5])}, (rg_bank1_csr_p[5:0] << 1) | {5'b0, pack(lv_actual)^rg_bank1_csr_p[7]}}};
				crg_bank2_csr_p[1]<= {(crg_bank2_csr_p[1])[13:8]>>2,{(rg_bank2_csr_p[7:4] << 1 | zeroExtend(rg_real_global_history[19]^rg_bank2_csr_p[3])), rg_bank2_csr_p[3:0] << 1 | zeroExtend(pack(lv_actual)^rg_bank2_csr_p[7])}};
				crg_bank3_csr_p[1]<= {(crg_bank3_csr_p[1])[13:8]>>2,rg_bank3_csr_p << 1 | zeroExtend(rg_real_global_history[39]^pack(lv_actual)^rg_bank3_csr_p[7])};
				crg_bank4_csr_p[1]<= {(crg_bank4_csr_p[1])[13:8]>>2,rg_bank4_csr_p << 1 | zeroExtend(rg_real_global_history[79]^pack(lv_actual)^rg_bank4_csr_p[7])};
		
				crg_bank1_csr_s[1]<= {(crg_bank1_csr_s[1])[12:7]>>2, {(rg_bank1_csr_s[6:4] << 1 | zeroExtend(rg_real_global_history[9]^rg_bank1_csr_p[2])), rg_bank1_csr_p[3:0] << 1 | zeroExtend(pack(lv_actual)^rg_bank1_csr_p[7])}};
			 	//let lv_temp_shift1= (crg_bank2_csr_s[1])[5:0] >> 1;
				//let lv_temp_shift2= (crg_bank2_csr_s[1])[12:6] >> 1;
				crg_bank2_csr_s[1]<={(crg_bank2_csr_s[1])[12:7]>>2,{(rg_bank2_csr_s[5]^(rg_real_global_history[19])),rg_bank2_csr_p[5:0]<<1 |zeroExtend(pack(lv_actual)^rg_bank2_csr_p[6])}};
				crg_bank3_csr_s[1]<= {(crg_bank3_csr_s[1])[12:7]>>2,{(rg_bank3_csr_s[6:5] << 1 | zeroExtend(rg_real_global_history[39]^rg_bank3_csr_p[4])), rg_bank3_csr_p[4:0] << 1 | zeroExtend(pack(lv_actual)^rg_bank3_csr_p[7])}};
				crg_bank4_csr_s[1]<= {(crg_bank4_csr_s[1])[12:7]>>2,{(rg_bank4_csr_s[6:3] << 1 | zeroExtend(rg_real_global_history[79]^rg_bank4_csr_p[2])), rg_bank4_csr_p[2:0] << 1 | zeroExtend(pack(lv_actual)^rg_bank4_csr_p[7])}};
			end

			//prediction is true so just do the shifting done in mn_get()
			else
			begin
				crg_inflight[1]<= crg_inflight[1]-1;
				/*Bit#(TSub#(`HIST_SIZE,1)) lv_gnd=0;
				if(rg_choice==0)
				begin
					Bit#((TAdd#(`GLOBAL_ADDR,1))) lv_temp= crg_hist0[1];
					rg_global_history<= (rg_global_history<<1) | {lv_gnd,lv_temp[`GLOBAL_ADDR]};
				end
		
				else
				begin
					Bit#((TAdd#(`GLOBAL_ADDR,1))) lv_temp= crg_hist1[1];
					rg_global_history<= (rg_global_history<<1) | {lv_gnd,lv_temp[`GLOBAL_ADDR]};
				end*/
				rg_global_history<= (lv_global_history[89:10]);
			end
		end
		
		4:
		begin
			if(wr_fubar)
				lv_global_history= {(rg_global_history<<1),lv_gnd2} | {lv_gnd1,crg_hist[1]};
			else
				lv_global_history= {rg_global_history,(crg_hist[1])[`GLOBAL_ADDR-1:0]};
			//prediction is false so right shift and swap
			if(!(lv_truth && lv_hit))
			begin
				crg_inflight[1]<= 0;
				lv_global_history[3]= pack(lv_actual);

				Bit#(TAdd#(`GLOBAL_ADDR,1)) lv_temp_shift= lv_global_history[`GLOBAL_ADDR+3:3];
				crg_hist[1]<= lv_temp_shift;
			
				rg_global_history<= zeroExtend(lv_global_history[89:13]);
				crg_bank2_csr_indx[1]<= {(crg_bank2_csr_indx[1])[15:10]>>3,(rg_bank2_csr_indx << 1) | {9'b0,(rg_real_global_history[19]^pack(lv_actual)^rg_bank2_csr_indx[9])}};	
				crg_bank3_csr_indx[1]<= {(crg_bank3_csr_indx[1])[15:10]>>3,(rg_bank3_csr_indx << 1) | {9'b0,(rg_real_global_history[39]^pack(lv_actual)^rg_bank3_csr_indx[9])}};
				crg_bank4_csr_indx[1]<= {(crg_bank4_csr_indx[1])[15:10]>>3,(rg_bank4_csr_indx << 1) | {9'b0,(rg_real_global_history[79]^pack(lv_actual)^rg_bank4_csr_indx[9])}};

				crg_bank1_csr_p[1]<= {(crg_bank1_csr_p[1])[13:8]>>3,{(rg_bank1_csr_p[7:6] << 1) | {1'b0,(rg_real_global_history[9]^rg_bank1_csr_p[5])}, (rg_bank1_csr_p[5:0] << 1) | {5'b0, pack(lv_actual)^rg_bank1_csr_p[7]}}};
				crg_bank2_csr_p[1]<= {(crg_bank2_csr_p[1])[13:8]>>3,{(rg_bank2_csr_p[7:4] << 1 | zeroExtend(rg_real_global_history[19]^rg_bank2_csr_p[3])), rg_bank2_csr_p[3:0] << 1 | zeroExtend(pack(lv_actual)^rg_bank2_csr_p[7])}};
				crg_bank3_csr_p[1]<= {(crg_bank3_csr_p[1])[13:8]>>3,rg_bank3_csr_p << 1 | zeroExtend(rg_real_global_history[39]^pack(lv_actual)^rg_bank3_csr_p[7])};
				crg_bank4_csr_p[1]<= {(crg_bank4_csr_p[1])[13:8]>>3,rg_bank4_csr_p << 1 | zeroExtend(rg_real_global_history[79]^pack(lv_actual)^rg_bank4_csr_p[7])};
		
				crg_bank1_csr_s[1]<= {(crg_bank1_csr_s[1])[12:7]>>3, {(rg_bank1_csr_s[6:4] << 1 | zeroExtend(rg_real_global_history[9]^rg_bank1_csr_p[2])), rg_bank1_csr_p[3:0] << 1 | zeroExtend(pack(lv_actual)^rg_bank1_csr_p[7])}};
			 	//let lv_temp_shift1= (crg_bank2_csr_s[1])[5:0] >> 1;
				//let lv_temp_shift2= (crg_bank2_csr_s[1])[12:6] >> 1;
				crg_bank2_csr_s[1]<={(crg_bank2_csr_s[1])[12:7]>>3,{(rg_bank2_csr_s[5]^(rg_real_global_history[19])),rg_bank2_csr_p[5:0]<<1 |zeroExtend(pack(lv_actual)^rg_bank2_csr_p[6])}};
				crg_bank3_csr_s[1]<= {(crg_bank3_csr_s[1])[12:7]>>3,{(rg_bank3_csr_s[6:5] << 1 | zeroExtend(rg_real_global_history[39]^rg_bank3_csr_p[4])), rg_bank3_csr_p[4:0] << 1 | zeroExtend(pack(lv_actual)^rg_bank3_csr_p[7])}};
				crg_bank4_csr_s[1]<= {(crg_bank4_csr_s[1])[12:7]>>3,{(rg_bank4_csr_s[6:3] << 1 | zeroExtend(rg_real_global_history[79]^rg_bank4_csr_p[2])), rg_bank4_csr_p[2:0] << 1 | zeroExtend(pack(lv_actual)^rg_bank4_csr_p[7])}};

			end

			//prediction is true so just do the shifting done in mn_get()
			else
			begin
				crg_inflight[1]<= crg_inflight[1]-1;
				/*Bit#(TSub#(`HIST_SIZE,1)) lv_gnd=0;
				if(rg_choice==0)
				begin
					Bit#((TAdd#(`GLOBAL_ADDR,1))) lv_temp= crg_hist0[1];
					rg_global_history<= (rg_global_history<<1) | {lv_gnd,lv_temp[`GLOBAL_ADDR]};
				end
		
				else
				begin
					Bit#((TAdd#(`GLOBAL_ADDR,1))) lv_temp= crg_hist1[1];
					rg_global_history<= (rg_global_history<<1) | {lv_gnd,lv_temp[`GLOBAL_ADDR]};
				end*/
				rg_global_history<= (lv_global_history[89:10]);
			end
		end

		5:
		begin
			if(wr_fubar)
				lv_global_history= {(rg_global_history<<1),lv_gnd2} | {lv_gnd1,crg_hist[1]};
			else
				lv_global_history= {rg_global_history,(crg_hist[1])[`GLOBAL_ADDR-1:0]};
			//prediction is false so right shift and swap
			if(!(lv_truth && lv_hit))
			begin
				crg_inflight[1]<= 0;
				lv_global_history[4]= pack(lv_actual);

				Bit#(TAdd#(`GLOBAL_ADDR,1)) lv_temp_shift= lv_global_history[`GLOBAL_ADDR+4:4];
					
				crg_hist[1]<= lv_temp_shift;

				rg_global_history<= zeroExtend(lv_global_history[89:14]);
				crg_bank2_csr_indx[1]<= {(crg_bank2_csr_indx[1])[15:10]>>4,(rg_bank2_csr_indx << 1) | {9'b0,(rg_real_global_history[19]^pack(lv_actual)^rg_bank2_csr_indx[9])}};	
				crg_bank3_csr_indx[1]<= {(crg_bank3_csr_indx[1])[15:10]>>4,(rg_bank3_csr_indx << 1) | {9'b0,(rg_real_global_history[39]^pack(lv_actual)^rg_bank3_csr_indx[9])}};
				crg_bank4_csr_indx[1]<= {(crg_bank4_csr_indx[1])[15:10]>>4,(rg_bank4_csr_indx << 1) | {9'b0,(rg_real_global_history[79]^pack(lv_actual)^rg_bank4_csr_indx[9])}};

				crg_bank1_csr_p[1]<= {(crg_bank1_csr_p[1])[13:8]>>4,{(rg_bank1_csr_p[7:6] << 1) | {1'b0,(rg_real_global_history[9]^rg_bank1_csr_p[5])}, (rg_bank1_csr_p[5:0] << 1) | {5'b0, pack(lv_actual)^rg_bank1_csr_p[7]}}};
				crg_bank2_csr_p[1]<= {(crg_bank2_csr_p[1])[13:8]>>4,{(rg_bank2_csr_p[7:4] << 1 | zeroExtend(rg_real_global_history[19]^rg_bank2_csr_p[3])), rg_bank2_csr_p[3:0] << 1 | zeroExtend(pack(lv_actual)^rg_bank2_csr_p[7])}};
				crg_bank3_csr_p[1]<= {(crg_bank3_csr_p[1])[13:8]>>4,rg_bank3_csr_p << 1 | zeroExtend(rg_real_global_history[39]^pack(lv_actual)^rg_bank3_csr_p[7])};
				crg_bank4_csr_p[1]<= {(crg_bank4_csr_p[1])[13:8]>>4,rg_bank4_csr_p << 1 | zeroExtend(rg_real_global_history[79]^pack(lv_actual)^rg_bank4_csr_p[7])};
		
				crg_bank1_csr_s[1]<= {(crg_bank1_csr_s[1])[12:7]>>4, {(rg_bank1_csr_s[6:4] << 1 | zeroExtend(rg_real_global_history[9]^rg_bank1_csr_p[2])), rg_bank1_csr_p[3:0] << 1 | zeroExtend(pack(lv_actual)^rg_bank1_csr_p[7])}};
			 	//let lv_temp_shift1= (crg_bank2_csr_s[1])[5:0] >> 1;
				//let lv_temp_shift2= (crg_bank2_csr_s[1])[12:6] >> 1;
				crg_bank2_csr_s[1]<={(crg_bank2_csr_s[1])[12:7]>>4,{(rg_bank2_csr_s[5]^(rg_real_global_history[19])),rg_bank2_csr_p[5:0]<<1 |zeroExtend(pack(lv_actual)^rg_bank2_csr_p[6])}};
				crg_bank3_csr_s[1]<= {(crg_bank3_csr_s[1])[12:7]>>4,{(rg_bank3_csr_s[6:5] << 1 | zeroExtend(rg_real_global_history[39]^rg_bank3_csr_p[4])), rg_bank3_csr_p[4:0] << 1 | zeroExtend(pack(lv_actual)^rg_bank3_csr_p[7])}};
				crg_bank4_csr_s[1]<= {(crg_bank4_csr_s[1])[12:7]>>4,{(rg_bank4_csr_s[6:3] << 1 | zeroExtend(rg_real_global_history[79]^rg_bank4_csr_p[2])), rg_bank4_csr_p[2:0] << 1 | zeroExtend(pack(lv_actual)^rg_bank4_csr_p[7])}};
			end

			//prediction is true so just do the shifting done in mn_get()
			else
			begin
				crg_inflight[1]<= crg_inflight[1]-1;
				/*Bit#(TSub#(`HIST_SIZE,1)) lv_gnd=0;
				if(rg_choice==0)
				begin
					Bit#((TAdd#(`GLOBAL_ADDR,1))) lv_temp= crg_hist0[1];
					rg_global_history<= (rg_global_history<<1) | {lv_gnd,lv_temp[`GLOBAL_ADDR]};
				end
		
				else
				begin
					Bit#((TAdd#(`GLOBAL_ADDR,1))) lv_temp= crg_hist1[1];
					rg_global_history<= (rg_global_history<<1) | {lv_gnd,lv_temp[`GLOBAL_ADDR]};
				end*/
				rg_global_history<= (lv_global_history[89:10]);
			end
		end

		6:
		begin
			if(wr_fubar)
				lv_global_history= {(rg_global_history<<1),lv_gnd2} | {lv_gnd1,crg_hist[1]};
			else
				lv_global_history= {rg_global_history,(crg_hist[1])[`GLOBAL_ADDR-1:0]};
			//prediction is false so right shift and swap
			if(!(lv_truth && lv_hit))
			begin
				crg_inflight[1]<= 0;
				lv_global_history[5]= pack(lv_actual);

				Bit#(TAdd#(`GLOBAL_ADDR,1)) lv_temp_shift= lv_global_history[`GLOBAL_ADDR+5:5];
					
				crg_hist[1]<= lv_temp_shift;
	
				rg_global_history<= zeroExtend(lv_global_history[89:15]);
				crg_bank2_csr_indx[1]<= {(crg_bank2_csr_indx[1])[15:10]>>5,(rg_bank2_csr_indx << 1) | {9'b0,(rg_real_global_history[19]^pack(lv_actual)^rg_bank2_csr_indx[9])}};	
				crg_bank3_csr_indx[1]<= {(crg_bank3_csr_indx[1])[15:10]>>5,(rg_bank3_csr_indx << 1) | {9'b0,(rg_real_global_history[39]^pack(lv_actual)^rg_bank3_csr_indx[9])}};
				crg_bank4_csr_indx[1]<= {(crg_bank4_csr_indx[1])[15:10]>>5,(rg_bank4_csr_indx << 1) | {9'b0,(rg_real_global_history[79]^pack(lv_actual)^rg_bank4_csr_indx[9])}};

				crg_bank1_csr_p[1]<= {(crg_bank1_csr_p[1])[13:8]>>5,{(rg_bank1_csr_p[7:6] << 1) | {1'b0,(rg_real_global_history[9]^rg_bank1_csr_p[5])}, (rg_bank1_csr_p[5:0] << 1) | {5'b0, pack(lv_actual)^rg_bank1_csr_p[7]}}};
				crg_bank2_csr_p[1]<= {(crg_bank2_csr_p[1])[13:8]>>5,{(rg_bank2_csr_p[7:4] << 1 | zeroExtend(rg_real_global_history[19]^rg_bank2_csr_p[3])), rg_bank2_csr_p[3:0] << 1 | zeroExtend(pack(lv_actual)^rg_bank2_csr_p[7])}};
				crg_bank3_csr_p[1]<= {(crg_bank3_csr_p[1])[13:8]>>5,rg_bank3_csr_p << 1 | zeroExtend(rg_real_global_history[39]^pack(lv_actual)^rg_bank3_csr_p[7])};
				crg_bank4_csr_p[1]<= {(crg_bank4_csr_p[1])[13:8]>>5,rg_bank4_csr_p << 1 | zeroExtend(rg_real_global_history[79]^pack(lv_actual)^rg_bank4_csr_p[7])};
		
				crg_bank1_csr_s[1]<= {(crg_bank1_csr_s[1])[12:7]>>5, {(rg_bank1_csr_s[6:4] << 1 | zeroExtend(rg_real_global_history[9]^rg_bank1_csr_p[2])), rg_bank1_csr_p[3:0] << 1 | zeroExtend(pack(lv_actual)^rg_bank1_csr_p[7])}};
			 	//let lv_temp_shift1= (crg_bank2_csr_s[1])[5:0] >> 1;
				//let lv_temp_shift2= (crg_bank2_csr_s[1])[12:6] >> 1;
				crg_bank2_csr_s[1]<={(crg_bank2_csr_s[1])[12:7]>>5,{(rg_bank2_csr_s[5]^(rg_real_global_history[19])),rg_bank2_csr_p[5:0]<<1 |zeroExtend(pack(lv_actual)^rg_bank2_csr_p[6])}};
				crg_bank3_csr_s[1]<= {(crg_bank3_csr_s[1])[12:7]>>5,{(rg_bank3_csr_s[6:5] << 1 | zeroExtend(rg_real_global_history[39]^rg_bank3_csr_p[4])), rg_bank3_csr_p[4:0] << 1 | zeroExtend(pack(lv_actual)^rg_bank3_csr_p[7])}};
				crg_bank4_csr_s[1]<= {(crg_bank4_csr_s[1])[12:7]>>5,{(rg_bank4_csr_s[6:3] << 1 | zeroExtend(rg_real_global_history[79]^rg_bank4_csr_p[2])), rg_bank4_csr_p[2:0] << 1 | zeroExtend(pack(lv_actual)^rg_bank4_csr_p[7])}};
			end

			//prediction is true so just do the shifting done in mn_get()
			else
			begin
				crg_inflight[1]<= crg_inflight[1]-1;
				/*Bit#(TSub#(`HIST_SIZE,1)) lv_gnd=0;
				if(rg_choice==0)
				begin
					Bit#((TAdd#(`GLOBAL_ADDR,1))) lv_temp= crg_hist0[1];
					rg_global_history<= (rg_global_history<<1) | {lv_gnd,lv_temp[`GLOBAL_ADDR]};
				end
		
				else
				begin
					Bit#((TAdd#(`GLOBAL_ADDR,1))) lv_temp= crg_hist1[1];
					rg_global_history<= (rg_global_history<<1) | {lv_gnd,lv_temp[`GLOBAL_ADDR]};
				end*/
				rg_global_history<= (lv_global_history[89:10]);
			end
		end
		endcase

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		//prediction is correct
		if(lv_truth)
		begin
			//updating bank x and bank 0
			//branch taken was the prediction => branch was actually taken
			if(unpack(lv_prediction))													//for type conversion from Bit#(1) to Bool
			begin
				//update csrs first
				rg_real_global_history<= (rg_real_global_history << 1)|1;
				rg_bank2_csr_indx <= (rg_bank2_csr_indx << 1) | {9'b0,(rg_real_global_history[19]^1^rg_bank2_csr_indx[9])}; 			//Calculating new values of cyclic
			 	rg_bank3_csr_indx <= (rg_bank3_csr_indx << 1) | {9'b0,(rg_real_global_history[39]^1^rg_bank3_csr_indx[9])}; 			// shift registers
			 	rg_bank4_csr_indx <= (rg_bank4_csr_indx << 1) | {9'b0,(rg_real_global_history[79]^1^rg_bank4_csr_indx[9])};

			 	rg_bank1_csr_p <= {(rg_bank1_csr_p[7:6] << 1) | {1'b0,(rg_real_global_history[9]^rg_bank1_csr_p[5])}, (rg_bank1_csr_p[5:0] << 1) | {5'b0, 1^rg_bank1_csr_p[7]}};
			 	rg_bank2_csr_p <= {(rg_bank2_csr_p[7:4] << 1 | zeroExtend(rg_real_global_history[19]^rg_bank2_csr_p[3])), rg_bank2_csr_p[3:0] << 1 | zeroExtend(1^rg_bank2_csr_p[7])};
			 	rg_bank3_csr_p <= rg_bank3_csr_p << 1 | zeroExtend(rg_real_global_history[39]^1^rg_bank3_csr_p[7]);
			 	rg_bank4_csr_p <= rg_bank4_csr_p << 1 | zeroExtend(rg_real_global_history[79]^1^rg_bank4_csr_p[7]);

			 	rg_bank1_csr_s <= {(rg_bank1_csr_s[6:4] << 1 | zeroExtend(rg_real_global_history[9]^rg_bank1_csr_p[2])), rg_bank1_csr_p[3:0] << 1 | zeroExtend(1^rg_bank1_csr_p[7])};
			 	rg_bank2_csr_s <= {(rg_bank2_csr_s[5]^(rg_real_global_history[19])), rg_bank2_csr_p[5:0] << 1 | zeroExtend(1^rg_bank2_csr_p[6])};
			 	rg_bank3_csr_s <= {(rg_bank3_csr_s[6:5] << 1 | zeroExtend(rg_real_global_history[39]^rg_bank3_csr_p[4])), rg_bank3_csr_p[4:0] << 1 | zeroExtend(1^rg_bank3_csr_p[7])};
			 	rg_bank4_csr_s <= {(rg_bank4_csr_s[6:3] << 1 | zeroExtend(rg_real_global_history[79]^rg_bank4_csr_p[2])), rg_bank4_csr_p[2:0] << 1 | zeroExtend(1^rg_bank4_csr_p[7])};

				//perform bank updation
				case(lv_bank_num)
				0:
				begin
					if(lv_counter != 3'b111)
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_counter+1,lv_bank_bits[4]}); //updating counter value only
				end

				1:
				begin
					if(lv_counter != 3'b111)
					begin
						bram_bank1.b.put(`WRITE,lv_bank1_addr,{lv_counter+1,lv_tag,1'b1});//updating bits u and m and counter value	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b1});
					end

					else
					begin						
						bram_bank1.b.put(`WRITE,lv_bank1_addr,{lv_counter,lv_tag,1'b1});                         //updating bits u and m only as counter is saturated	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b1});
					end
				end

				2:
				begin
					if(lv_counter != 3'b111)
					begin
						bram_bank2.b.put(`WRITE,lv_bank2_addr,{lv_counter+1,lv_tag,1'b1});//updating bits u and m and counter value	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b1});
					end
					else
					begin						
						bram_bank2.b.put(`WRITE,lv_bank2_addr,{lv_counter,lv_tag,1'b1});                        //updating bits u and m only as counter is saturated	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b1});
					end
				end

				3:
				begin
					if(lv_counter != 3'b111)
					begin
						bram_bank3.b.put(`WRITE,lv_bank3_addr,{lv_counter+1,lv_tag,1'b1});//updating bits u and m and counter value	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b1});
					end
					else
					begin						
						bram_bank3.b.put(`WRITE,lv_bank3_addr,{lv_counter,lv_tag,1'b1});                         //updating bits u and m only as counter is saturated	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b1});
					end
				end

				4:
				begin
					if(lv_counter != 3'b111)
					begin
						bram_bank4.b.put(`WRITE,lv_bank4_addr,{lv_counter+1,lv_tag,1'b1});//updating bits u and m and counter value	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b1});
					end
					else
					begin						
						bram_bank4.b.put(`WRITE,lv_bank4_addr,{lv_counter,lv_tag,1'b1});                         //updating bits u and m only as counter is saturated	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b1});
					end
				end
				endcase
			end
			//branch not taken was the prediction => branch was actually not taken
			else
			begin
				//update csrs first
				rg_real_global_history<= (rg_real_global_history << 1);
				rg_bank2_csr_indx <= (rg_bank2_csr_indx << 1) | zeroExtend(rg_real_global_history[19]^0^rg_bank2_csr_indx[9]); 			//Calculating new values of cyclic
			 	rg_bank3_csr_indx <= (rg_bank3_csr_indx << 1) | zeroExtend(rg_real_global_history[39]^0^rg_bank3_csr_indx[9]); 			// shift registers
			 	rg_bank4_csr_indx <= (rg_bank4_csr_indx << 1) | zeroExtend(rg_real_global_history[79]^0^rg_bank4_csr_indx[9]);

			 	rg_bank1_csr_p <= {(rg_bank1_csr_p[7:6] << 1) | zeroExtend(rg_real_global_history[9]^rg_bank1_csr_p[5]), (rg_bank1_csr_p[5:0] << 1) | zeroExtend(0^rg_bank1_csr_p[7])};
			 	rg_bank2_csr_p <= {(rg_bank2_csr_p[7:4] << 1 | zeroExtend(rg_real_global_history[19]^rg_bank2_csr_p[3])), rg_bank2_csr_p[3:0] << 1 | zeroExtend(0^rg_bank2_csr_p[7])};
			 	rg_bank3_csr_p <= rg_bank3_csr_p << 1 | zeroExtend(rg_real_global_history[39]^0^rg_bank3_csr_p[7]);
			 	rg_bank4_csr_p <= rg_bank4_csr_p << 1 | zeroExtend(rg_real_global_history[79]^0^rg_bank4_csr_p[7]);

			 	rg_bank1_csr_s <= {(rg_bank1_csr_s[6:4] << 1 | zeroExtend(rg_real_global_history[9]^rg_bank1_csr_p[2])), rg_bank1_csr_p[3:0] << 1 | zeroExtend(0^rg_bank1_csr_p[7])};
			 	rg_bank2_csr_s <= {(rg_bank2_csr_s[5]^(rg_real_global_history[19])), rg_bank2_csr_p[5:0] << 1 | zeroExtend(0^rg_bank2_csr_p[6])};
			 	rg_bank3_csr_s <= {(rg_bank3_csr_s[6:5] << 1 | zeroExtend(rg_real_global_history[39]^rg_bank3_csr_p[4])), rg_bank3_csr_p[4:0] << 1 | zeroExtend(0^rg_bank3_csr_p[7])};
			 	rg_bank4_csr_s <= {(rg_bank4_csr_s[6:3] << 1 | zeroExtend(rg_real_global_history[79]^rg_bank4_csr_p[2])), rg_bank4_csr_p[2:0] << 1 | zeroExtend(0^rg_bank4_csr_p[7])};
				//perform bank updation
				case(lv_bank_num)
				0:
				begin
					if(lv_counter != 3'b000)
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_counter-1,lv_bank_bits[4]}); //updating counter value only
				end

				1:
				begin
					if(lv_counter != 3'b000)
					begin
						bram_bank1.b.put(`WRITE,lv_bank1_addr,{lv_counter-1,lv_tag,1'b1});//updating bits u and m and counter value	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b1});
					end
					else
					begin						
						bram_bank1.b.put(`WRITE,lv_bank1_addr,{lv_counter,lv_tag,1'b1});                         //updating bits u and m only as counter is saturated
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b1});
					end
				end

				2:
				begin
					if(lv_counter != 3'b000)
					begin
						bram_bank2.b.put(`WRITE,lv_bank2_addr,{lv_counter-1,lv_tag,1'b1});//updating bits u and m and counter value	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b1});
					end
					else
					begin						
						bram_bank2.b.put(`WRITE,lv_bank2_addr,{lv_counter,lv_tag,1'b1});                         //updating bits u and m only as counter is saturated	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b1});
					end
				end

				3:
				begin
					if(lv_counter != 3'b000)
					begin
						bram_bank3.b.put(`WRITE,lv_bank3_addr,{lv_counter-1,lv_tag,1'b1});//updating bits u and m and counter value	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b1});
					end
					else
					begin						
						bram_bank3.b.put(`WRITE,lv_bank3_addr,{lv_counter,lv_tag,1'b1});                         //updating bits u and m only as counter is saturated
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b1});
					end
				end

				4:
				begin
					if(lv_counter != 3'b000)
					begin
						bram_bank4.b.put(`WRITE,lv_bank4_addr,{lv_counter-1,lv_tag,1'b1});//updating bits u and m and counter value	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b1});
					end
					else
					begin						
						bram_bank4.b.put(`WRITE,lv_bank4_addr,{lv_counter,lv_tag,1'b1});                         //updating bits u and m only as counter is saturated	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b1});
					end
				end
				endcase
			end
		end
		//prediction is false
		//in each case statement, the respective bank is updated along with bank0; after that banks x+1-->4 are updated
		else
		begin
			//branch not taken is prediction => branch was actually taken
			if(!unpack(lv_prediction))													//for type conversion from Bit#(1) to Bool
			begin
				//update csrs first
				rg_real_global_history<= (rg_real_global_history << 1)|1;
				rg_bank2_csr_indx <= (rg_bank2_csr_indx << 1) | {9'b0,(rg_real_global_history[19]^1^rg_bank2_csr_indx[9])}; 			//Calculating new values of cyclic
			 	rg_bank3_csr_indx <= (rg_bank3_csr_indx << 1) | {9'b0,(rg_real_global_history[39]^1^rg_bank3_csr_indx[9])}; 			// shift registers
			 	rg_bank4_csr_indx <= (rg_bank4_csr_indx << 1) | {9'b0,(rg_real_global_history[79]^1^rg_bank4_csr_indx[9])};

			 	rg_bank1_csr_p <= {(rg_bank1_csr_p[7:6] << 1) | {1'b0,(rg_real_global_history[9]^rg_bank1_csr_p[5])}, (rg_bank1_csr_p[5:0] << 1) | {5'b0, 1^rg_bank1_csr_p[7]}};
			 	rg_bank2_csr_p <= {(rg_bank2_csr_p[7:4] << 1 | zeroExtend(rg_real_global_history[19]^rg_bank2_csr_p[3])), rg_bank2_csr_p[3:0] << 1 | zeroExtend(1^rg_bank2_csr_p[7])};
			 	rg_bank3_csr_p <= rg_bank3_csr_p << 1 | zeroExtend(rg_real_global_history[39]^1^rg_bank3_csr_p[7]);
			 	rg_bank4_csr_p <= rg_bank4_csr_p << 1 | zeroExtend(rg_real_global_history[79]^1^rg_bank4_csr_p[7]);

			 	rg_bank1_csr_s <= {(rg_bank1_csr_s[6:4] << 1 | zeroExtend(rg_real_global_history[9]^rg_bank1_csr_p[2])), rg_bank1_csr_p[3:0] << 1 | zeroExtend(1^rg_bank1_csr_p[7])};
			 	rg_bank2_csr_s <= {(rg_bank2_csr_s[5]^(rg_real_global_history[19])), rg_bank2_csr_p[5:0] << 1 | zeroExtend(1^rg_bank2_csr_p[6])};
			 	rg_bank3_csr_s <= {(rg_bank3_csr_s[6:5] << 1 | zeroExtend(rg_real_global_history[39]^rg_bank3_csr_p[4])), rg_bank3_csr_p[4:0] << 1 | zeroExtend(1^rg_bank3_csr_p[7])};
			 	rg_bank4_csr_s <= {(rg_bank4_csr_s[6:3] << 1 | zeroExtend(rg_real_global_history[79]^rg_bank4_csr_p[2])), rg_bank4_csr_p[2:0] << 1 | zeroExtend(1^rg_bank4_csr_p[7])};

				//perform bank updation
				case(lv_bank_num)
				0:
				begin	
					//update bank x=0
					if(lv_counter != 3'b111)
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_counter+1,lv_bank_bits[4]}); //updating counter value only
					//updating banks 1-->4
					//if all u bits are set
					if({lv_bank_bits[3],lv_bank_bits[2],lv_bank_bits[1],lv_bank_bits[0]}==4'b1111)
					begin
						//steal entry from a random bank
						case(lv_rand_bank0_num)
						1:
						begin
							if(lv_bank_bits[4]==1'b1)                                                  //if m bit is set
								bram_bank1.b.put(`WRITE,lv_bank1_addr,{3'b100,lv_new_tag1,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)                              //check bimodal prediction
									bram_bank1.b.put(`WRITE,lv_bank1_addr,{3'b100,lv_new_tag1,1'b0});
								else
									bram_bank1.b.put(`WRITE,lv_bank1_addr,{3'b011,lv_new_tag1,1'b0});
							end
						end
						2:
						begin
							if(lv_bank_bits[4]==1'b1)                                                  //if m bit is set
								bram_bank2.b.put(`WRITE,lv_bank2_addr,{3'b100,lv_new_tag2,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)                              //check bimodal prediction
									bram_bank2.b.put(`WRITE,lv_bank2_addr,{3'b100,lv_new_tag2,1'b0});
								else
									bram_bank2.b.put(`WRITE,lv_bank2_addr,{3'b011,lv_new_tag2,1'b0});
							end
						end
						3:
						begin
							if(lv_bank_bits[4]==1'b1)                                                  //if m bit is set
								bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b100,lv_new_tag3,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)                              //check bimodal prediction
									bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b100,lv_new_tag3,1'b0});
								else
									bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b011,lv_new_tag3,1'b0});
							end
						end
						4:
						begin
							if(lv_bank_bits[4]==1'b1)                                                  //if m bit is set
								bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b100,lv_new_tag4,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)                              //check bimodal prediction
									bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b100,lv_new_tag4,1'b0});
								else
									bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b011,lv_new_tag4,1'b0});
							end
						end
						endcase
					end
					//some u bits are reset
					else
					begin
						//update whichever banks have u=0
						if(lv_bank_bits[3]==1'b0)
						begin
							if(lv_bank_bits[4]==1'b1)
								bram_bank1.b.put(`WRITE,lv_bank1_addr,{3'b100,lv_new_tag1,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)
									bram_bank1.b.put(`WRITE,lv_bank1_addr,{3'b100,lv_new_tag1,1'b0});
								else
									bram_bank1.b.put(`WRITE,lv_bank1_addr,{3'b011,lv_new_tag1,1'b0});
							end
						end
						if(lv_bank_bits[2]==1'b0)
						begin
							if(lv_bank_bits[4]==1'b1)
								bram_bank2.b.put(`WRITE,lv_bank2_addr,{3'b100,lv_new_tag2,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)
									bram_bank2.b.put(`WRITE,lv_bank2_addr,{3'b100,lv_new_tag2,1'b0});
								else
									bram_bank2.b.put(`WRITE,lv_bank2_addr,{3'b011,lv_new_tag2,1'b0});
							end
						end
						if(lv_bank_bits[1]==1'b0)
						begin
							if(lv_bank_bits[4]==1'b1)
								bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b100,lv_new_tag3,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)
									bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b100,lv_new_tag3,1'b0});
								else
									bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b011,lv_new_tag3,1'b0});
							end
						end
						if(lv_bank_bits[0]==1'b0)
						begin
							if(lv_bank_bits[4]==1'b1)
								bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b100,lv_new_tag4,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)
									bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b100,lv_new_tag4,1'b0});
								else
									bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b011,lv_new_tag4,1'b0});
							end
						end
					end

				end

				1:
				begin
					//update banks 1 and 0
					if(lv_counter != 3'b111)
					begin
						bram_bank1.b.put(`WRITE,lv_bank1_addr,{lv_counter+1,lv_tag,1'b0});	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b0});
					end
					else
					begin						
						bram_bank1.b.put(`WRITE,lv_bank1_addr,{lv_counter,lv_tag,1'b0});             //updating bits u and m only, if bank x counter is saturated 	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b0});
					end
					//update banks 2-->4
					if({lv_bank_bits[2],lv_bank_bits[1],lv_bank_bits[0]}==3'b111)
					begin
						//steal entry from random bank
						case(lv_rand_bank1_num)
						2:
						begin
							if(lv_bank_bits[4]==1'b1)                                                  //if m bit is set
								bram_bank2.b.put(`WRITE,lv_bank2_addr,{3'b100,lv_new_tag2,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)                              //check bimodal prediction
									bram_bank2.b.put(`WRITE,lv_bank2_addr,{3'b100,lv_new_tag2,1'b0});
								else
									bram_bank2.b.put(`WRITE,lv_bank2_addr,{3'b011,lv_new_tag2,1'b0});
							end
						end
						3:
						begin
							if(lv_bank_bits[4]==1'b1)                                                  //if m bit is set
								bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b100,lv_new_tag3,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)                              //check bimodal prediction
									bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b100,lv_new_tag3,1'b0});
								else
									bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b011,lv_new_tag3,1'b0});
							end
						end
						4:
						begin
							if(lv_bank_bits[4]==1'b1)                                                  //if m bit is set
								bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b100,lv_new_tag4,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)                              //check bimodal prediction
									bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b100,lv_new_tag4,1'b0});
								else
									bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b011,lv_new_tag4,1'b0});
							end
						end
						endcase
					end
					//some u bits are reset
					else
					begin
						//update whichever banks have u=0
						if(lv_bank_bits[2]==1'b0)
						begin
							if(lv_bank_bits[4]==1'b1)
								bram_bank2.b.put(`WRITE,lv_bank2_addr,{3'b100,lv_new_tag2,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)
									bram_bank2.b.put(`WRITE,lv_bank2_addr,{3'b100,lv_new_tag2,1'b0});
								else
									bram_bank2.b.put(`WRITE,lv_bank2_addr,{3'b011,lv_new_tag2,1'b0});
							end
						end
						if(lv_bank_bits[1]==1'b0)
						begin
							if(lv_bank_bits[4]==1'b1)
								bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b100,lv_new_tag3,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)
									bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b100,lv_new_tag3,1'b0});
								else
									bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b011,lv_new_tag3,1'b0});
							end
						end
						if(lv_bank_bits[0]==1'b0)
						begin
							if(lv_bank_bits[4]==1'b1)
								bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b100,lv_new_tag4,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)
									bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b100,lv_new_tag4,1'b0});
								else
									bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b011,lv_new_tag4,1'b0});
							end
						end
					end
					
				end

				2:
				begin
					//update banks 2 and 0
					if(lv_counter != 3'b111)
					begin
						bram_bank2.b.put(`WRITE,lv_bank2_addr,{lv_counter+1,lv_tag,1'b0});//updating bits u and m and counter value	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b0});
					end

					else
					begin						
						bram_bank2.b.put(`WRITE,lv_bank2_addr,{lv_counter,lv_tag,1'b0});                            //updating bits u and m only	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b0});
					end
					//update banks 3-->4
					if({lv_bank_bits[1],lv_bank_bits[0]}==2'b11)
					begin
						//steal entry from random bank
						case(lv_rand_bank2_num)
						3:
						begin
							if(lv_bank_bits[4]==1'b1)                                                  //if m bit is set
								bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b100,lv_new_tag3,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)                              //check bimodal prediction
									bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b100,lv_new_tag3,1'b0});
								else
									bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b011,lv_new_tag3,1'b0});
							end
						end
						4:
						begin
							if(lv_bank_bits[4]==1'b1)                                                  //if m bit is set
								bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b100,lv_new_tag4,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)                              //check bimodal prediction
									bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b100,lv_new_tag4,1'b0});
								else
									bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b011,lv_new_tag4,1'b0});
							end
						end
						endcase
					end
					//some u bits are reset
					else
					begin
						//update whichever banks have u=0
						if(lv_bank_bits[1]==1'b0)
						begin
							if(lv_bank_bits[4]==1'b1)
								bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b100,lv_new_tag3,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)
									bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b100,lv_new_tag3,1'b0});
								else
									bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b011,lv_new_tag3,1'b0});
							end
						end
						if(lv_bank_bits[0]==1'b0)
						begin
							if(lv_bank_bits[4]==1'b1)
								bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b100,lv_new_tag4,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)
									bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b100,lv_new_tag4,1'b0});
								else
									bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b011,lv_new_tag4,1'b0});
							end
						end
					end
				end

				3:
				begin
					//update banks 3 and 0
					if(lv_counter != 3'b111)
					begin
						bram_bank3.b.put(`WRITE,lv_bank3_addr,{lv_counter+1,lv_tag,1'b0});//updating bits u and m and counter value	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b0});
					end

					else
					begin						
						bram_bank3.b.put(`WRITE,lv_bank3_addr,{lv_counter,lv_tag,1'b0});                            //updating bits u and m only	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b0});
					end
					//update bank 4
					if(lv_bank_bits[0]==1'b1)
					begin
						if(lv_bank_bits[4]==1'b1)
							bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b100,lv_new_tag4,1'b0});
						else
						begin
							if(lv_training_bimodal_out[2]==1'b1)
								bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b100,lv_new_tag4,1'b0});
							else
								bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b011,lv_new_tag4,1'b0});
						end
					end
					//u bit of bank4 is 0
					else
					begin
						if(lv_bank_bits[4]==1'b1)
							bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b100,lv_new_tag4,1'b0});
						else
						begin
							if(lv_training_bimodal_out[2]==1'b1)
								bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b100,lv_new_tag4,1'b0});
							else
								bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b011,lv_new_tag4,1'b0});
						end
						
					end
				end

				4:
				begin
					if(lv_counter != 3'b111)
					begin
						bram_bank4.b.put(`WRITE,lv_bank4_addr,{lv_counter+1,lv_tag,1'b0});//updating bits u and m and counter value	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b0});
					end
					else
					begin						
						bram_bank4.b.put(`WRITE,lv_bank4_addr,{lv_counter,lv_tag,1'b0});                            //updating bits u and m only	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b0});
					end
				end
				endcase
			end
			//branch taken was the prediction => branch was actually not taken
			else
			begin
				//update csrs first
				rg_real_global_history<= (rg_real_global_history << 1);
				rg_bank2_csr_indx <= (rg_bank2_csr_indx << 1) | zeroExtend(rg_real_global_history[19]^0^rg_bank2_csr_indx[9]); 			//Calculating new values of cyclic
			 	rg_bank3_csr_indx <= (rg_bank3_csr_indx << 1) | zeroExtend(rg_real_global_history[39]^0^rg_bank3_csr_indx[9]); 			// shift registers
			 	rg_bank4_csr_indx <= (rg_bank4_csr_indx << 1) | zeroExtend(rg_real_global_history[79]^0^rg_bank4_csr_indx[9]);

			 	rg_bank1_csr_p <= {(rg_bank1_csr_p[7:6] << 1) | zeroExtend(rg_real_global_history[9]^rg_bank1_csr_p[5]), (rg_bank1_csr_p[5:0] << 1) | zeroExtend(0^rg_bank1_csr_p[7])};
			 	rg_bank2_csr_p <= {(rg_bank2_csr_p[7:4] << 1 | zeroExtend(rg_real_global_history[19]^rg_bank2_csr_p[3])), rg_bank2_csr_p[3:0] << 1 | zeroExtend(0^rg_bank2_csr_p[7])};
			 	rg_bank3_csr_p <= rg_bank3_csr_p << 1 | zeroExtend(rg_real_global_history[39]^0^rg_bank3_csr_p[7]);
			 	rg_bank4_csr_p <= rg_bank4_csr_p << 1 | zeroExtend(rg_real_global_history[79]^0^rg_bank4_csr_p[7]);

			 	rg_bank1_csr_s <= {(rg_bank1_csr_s[6:4] << 1 | zeroExtend(rg_real_global_history[9]^rg_bank1_csr_p[2])), rg_bank1_csr_p[3:0] << 1 | zeroExtend(0^rg_bank1_csr_p[7])};
			 	rg_bank2_csr_s <= {(rg_bank2_csr_s[5]^(rg_real_global_history[19])), rg_bank2_csr_p[5:0] << 1 | zeroExtend(0^rg_bank2_csr_p[6])};
			 	rg_bank3_csr_s <= {(rg_bank3_csr_s[6:5] << 1 | zeroExtend(rg_real_global_history[39]^rg_bank3_csr_p[4])), rg_bank3_csr_p[4:0] << 1 | zeroExtend(0^rg_bank3_csr_p[7])};
			 	rg_bank4_csr_s <= {(rg_bank4_csr_s[6:3] << 1 | zeroExtend(rg_real_global_history[79]^rg_bank4_csr_p[2])), rg_bank4_csr_p[2:0] << 1 | zeroExtend(0^rg_bank4_csr_p[7])};

				//perform bank updation
				case(lv_bank_num)
				0:
				begin
					//update bank 0
					if(lv_counter != 3'b000)
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_counter-1,lv_bank_bits[4]}); //updating counter value only
					//updating banks 1-->4
					//if all u bits are set
					if({lv_bank_bits[3],lv_bank_bits[2],lv_bank_bits[1],lv_bank_bits[0]}==4'b1111)
					begin
						//steal entry from random bank
						case(lv_rand_bank0_num)
						1:
						begin
							if(lv_bank_bits[4]==1'b1)                                                  //if m bit is set
								bram_bank1.b.put(`WRITE,lv_bank1_addr,{3'b011,lv_new_tag1,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)                              //check bimodal prediction
									bram_bank1.b.put(`WRITE,lv_bank1_addr,{3'b100,lv_new_tag1,1'b0});
								else
									bram_bank1.b.put(`WRITE,lv_bank1_addr,{3'b011,lv_new_tag1,1'b0});
							end
						end
						2:
						begin
							if(lv_bank_bits[4]==1'b1)                                                  //if m bit is set
								bram_bank2.b.put(`WRITE,lv_bank2_addr,{3'b011,lv_new_tag2,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)                              //check bimodal prediction
									bram_bank2.b.put(`WRITE,lv_bank2_addr,{3'b100,lv_new_tag2,1'b0});
								else
									bram_bank2.b.put(`WRITE,lv_bank2_addr,{3'b011,lv_new_tag2,1'b0});
							end
						end
						3:
						begin
							if(lv_bank_bits[4]==1'b1)                                                  //if m bit is set
								bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b011,lv_new_tag3,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)                              //check bimodal prediction
									bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b100,lv_new_tag3,1'b0});
								else
									bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b011,lv_new_tag3,1'b0});
							end
						end
						4:
						begin
							if(lv_bank_bits[4]==1'b1)                                                  //if m bit is set
								bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b011,lv_new_tag4,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)                              //check bimodal prediction
									bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b100,lv_new_tag4,1'b0});
								else
									bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b011,lv_new_tag4,1'b0});
							end
						end
						endcase
					end
					//some u bits are reset
					else
					begin
						//update whichever banks have u=0
						if(lv_bank_bits[3]==1'b0)
						begin
							if(lv_bank_bits[4]==1'b1)
								bram_bank1.b.put(`WRITE,lv_bank1_addr,{3'b011,lv_new_tag1,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)
									bram_bank1.b.put(`WRITE,lv_bank1_addr,{3'b100,lv_new_tag1,1'b0});
								else
									bram_bank1.b.put(`WRITE,lv_bank1_addr,{3'b011,lv_new_tag1,1'b0});
							end
						end
						if(lv_bank_bits[2]==1'b0)
						begin
							if(lv_bank_bits[4]==1'b1)
								bram_bank2.b.put(`WRITE,lv_bank2_addr,{3'b011,lv_new_tag2,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)
									bram_bank2.b.put(`WRITE,lv_bank2_addr,{3'b100,lv_new_tag2,1'b0});
								else
									bram_bank2.b.put(`WRITE,lv_bank2_addr,{3'b011,lv_new_tag2,1'b0});
							end
						end
						if(lv_bank_bits[1]==1'b0)
						begin
							if(lv_bank_bits[4]==1'b1)
								bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b011,lv_new_tag3,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)
									bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b100,lv_new_tag3,1'b0});
								else
									bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b011,lv_new_tag3,1'b0});
							end
						end
						if(lv_bank_bits[0]==1'b0)
						begin
							if(lv_bank_bits[4]==1'b1)
								bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b011,lv_new_tag4,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)
									bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b100,lv_new_tag4,1'b0});
								else
									bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b011,lv_new_tag4,1'b0});
							end
						end
					end				
				end

				1:
				begin
					//update banks 1 and 0
					if(lv_counter != 3'b000)
					begin
						bram_bank1.b.put(`WRITE,lv_bank1_addr,{lv_counter-1,lv_tag,1'b0});//updating bits u and m and counter value	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b0});
					end

					else
					begin						
						bram_bank1.b.put(`WRITE,lv_bank1_addr,{lv_counter,lv_tag,1'b0});                            //updating bits u and m only	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b0});
					end
					//update banks 2-->4
					//check if all u bits are set
					if({lv_bank_bits[2],lv_bank_bits[1],lv_bank_bits[0]}==3'b111)
					begin
						//steal entry from random bank
						case(lv_rand_bank1_num)
						2:
						begin
							if(lv_bank_bits[4]==1'b1)                                                  //if m bit is set
								bram_bank2.b.put(`WRITE,lv_bank2_addr,{3'b011,lv_new_tag2,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)                              //check bimodal prediction
									bram_bank2.b.put(`WRITE,lv_bank2_addr,{3'b100,lv_new_tag2,1'b0});
								else
									bram_bank2.b.put(`WRITE,lv_bank2_addr,{3'b011,lv_new_tag2,1'b0});
							end
						end
						3:
						begin
							if(lv_bank_bits[4]==1'b1)                                                  //if m bit is set
								bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b011,lv_new_tag3,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)                              //check bimodal prediction
									bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b100,lv_new_tag3,1'b0});
								else
									bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b011,lv_new_tag3,1'b0});
							end
						end
						4:
						begin
							if(lv_bank_bits[4]==1'b1)                                                  //if m bit is set
								bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b011,lv_new_tag4,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)                              //check bimodal prediction
									bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b100,lv_new_tag4,1'b0});
								else
									bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b011,lv_new_tag4,1'b0});
							end
						end
						endcase
					end
					//some u bits are reset
					else
					begin
						//update whichever banks have u=0
						if(lv_bank_bits[2]==1'b0)
						begin
							if(lv_bank_bits[4]==1'b1)
								bram_bank2.b.put(`WRITE,lv_bank2_addr,{3'b011,lv_new_tag2,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)
									bram_bank2.b.put(`WRITE,lv_bank2_addr,{3'b100,lv_new_tag2,1'b0});
								else
									bram_bank2.b.put(`WRITE,lv_bank2_addr,{3'b011,lv_new_tag2,1'b0});
							end
						end

						if(lv_bank_bits[1]==1'b0)
						begin
							if(lv_bank_bits[4]==1'b1)
								bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b011,lv_new_tag3,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)
									bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b100,lv_new_tag3,1'b0});
								else
									bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b011,lv_new_tag3,1'b0});
							end
						end

						if(lv_bank_bits[0]==1'b0)
						begin
							if(lv_bank_bits[4]==1'b1)
								bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b011,lv_new_tag4,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)
									bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b100,lv_new_tag4,1'b0});
								else
									bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b011,lv_new_tag4,1'b0});
							end
						end
					end
					
				end

				2:
				begin
					//update banks 2 and 0
					if(lv_counter != 3'b000)
					begin
						bram_bank2.b.put(`WRITE,lv_bank2_addr,{lv_counter-1,lv_tag,1'b0});//updating bits u and m and counter value	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b0});
					end

					else
					begin						
						bram_bank2.b.put(`WRITE,lv_bank2_addr,{lv_counter,lv_tag,1'b0});                            //updating bits u and m only	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b0});
					end
					//update banks 3-->4
					//check if all u bits are set
					if({lv_bank_bits[1],lv_bank_bits[0]}==2'b11)
					begin
						//steal entry from random bank
						case(lv_rand_bank2_num)
						3:
						begin
							if(lv_bank_bits[4]==1'b1)                                                  //if m bit is set
								bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b011,lv_new_tag3,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)                              //check bimodal prediction
									bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b100,lv_new_tag3,1'b0});
								else
									bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b011,lv_new_tag3,1'b0});
							end
						end
						4:
						begin
							if(lv_bank_bits[4]==1'b1)                                                  //if m bit is set
								bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b011,lv_new_tag4,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)                              //check bimodal prediction
									bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b100,lv_new_tag4,1'b0});
								else
									bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b011,lv_new_tag4,1'b0});
							end
						end
						endcase
					end
					//some u bits are reset
					else
					begin
						//update whichever banks have u=0
						if(lv_bank_bits[1]==1'b0)
						begin
							if(lv_bank_bits[4]==1'b1)
								bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b011,lv_new_tag3,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)
									bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b100,lv_new_tag3,1'b0});
								else
									bram_bank3.b.put(`WRITE,lv_bank3_addr,{3'b011,lv_new_tag3,1'b0});
							end
						end

						if(lv_bank_bits[0]==1'b0)
						begin
							if(lv_bank_bits[4]==1'b1)
								bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b011,lv_new_tag4,1'b0});
							else
							begin
								if(lv_training_bimodal_out[2]==1'b1)
									bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b100,lv_new_tag4,1'b0});
								else
									bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b011,lv_new_tag4,1'b0});
							end
						end
					end
				end

				3:
				begin
					//update banks 3 and 0
					if(lv_counter != 3'b000)
					begin
						bram_bank3.b.put(`WRITE,lv_bank3_addr,{lv_counter-1,lv_tag,1'b0});//updating bits u and m and counter value	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b0});
					end

					else
					begin						
						bram_bank3.b.put(`WRITE,lv_bank3_addr,{lv_counter,lv_tag,1'b0});                            //updating bits u and m only	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b0});
					end
					//update bank 4
					if(lv_bank_bits[0]==1'b1)
					begin
						if(lv_bank_bits[4]==1'b1)
							bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b011,lv_new_tag4,1'b0});
						else
						begin
							if(lv_training_bimodal_out[2]==1'b1)
								bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b100,lv_new_tag4,1'b0});
							else
								bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b011,lv_new_tag4,1'b0});
						end
					end
					//u bit of bank 4=0
					else
					begin
						if(lv_bank_bits[4]==1'b1)
							bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b011,lv_new_tag4,1'b0});
						else
						begin
							if(lv_training_bimodal_out[2]==1'b1)
								bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b100,lv_new_tag4,1'b0});
							else
								bram_bank4.b.put(`WRITE,lv_bank4_addr,{3'b011,lv_new_tag4,1'b0});
						end
						
					end
				end

				4:
				begin
					//update banks 4 and 0
					if(lv_counter != 3'b000)
					begin
						bram_bank4.b.put(`WRITE,lv_bank4_addr,{lv_counter-1,lv_tag,1'b0});//updating bits u and m and counter value	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b0});
					end

					else
					begin						
						bram_bank4.b.put(`WRITE,lv_bank4_addr,{lv_counter,lv_tag,1'b0});                            //updating bits u and m only	
						bram_bimodal.b.put(`WRITE,lv_bimodal_addr,{lv_training_bimodal_out,1'b0});
					end
				end
				endcase
			end
		end

	endmethod

endmodule	
endpackage

