package tage_bpu;

import BRAMCore::*;
import FIFO::*;
import FIFOF::*;
import SpecialFIFOs::*;
import LFSR::*;
import ConfigReg::*;
import DReg::*;
import Connectable::*;
import GetPut::*;
import tage_types :: *;
/*===== project imports==== */
//import defined_types::*;
import btb :: *;
import branch2 :: *;
//`include "defined_parameters.bsv"

`define TAKEN True
`define NOT_TAKEN False
`define VADDR 39
`define SIZE_PC 32

String file_dump="final_mispred.dump";
String file_dump2="final_miss.dump";
String file_dump3="final_hit.dump";
String file_dump4="final_trace.dump";
String file_dump5="final_pred.dump";
//String file_taken="taken.dump";
//String file_imm="imm.dump";

typedef Bit#(`SIZE_PC) Gv_pc_size;

//according to the existing c-class interface
interface Ifc_bpu;
	//to pass the incoming pc to both the predictor as well as the btb
	interface Put#(Tuple2#(Bit#(3),Bit#(`VADDR))) send_prediction_request;
	//returns the final prediction as a Bool value along with the values returned by the predictor's and the btb's mn_get() methods, check their respective files; also sends the incoming pc
	interface Get#(Tuple4#(Bit#(3),Bit#(`VADDR),Bit#(`VADDR),Gv_return_bpu)) prediction_response;
	//initiates flush operations on both the btb as well as the predictor
	method Action ma_flush;
	//inputs training & update data for both the predictor as well as the btb; also inputs whether there was a 'hit' or a 'miss' on the BTB as a Bool and whether the branch was conditional or not
	method Action ma_training(Maybe#(Tuple3#(Bool,Gv_train_predictor,Gv_update_btb)) training_data);
endinterface

(*synthesize*)
module mkbpu(Ifc_bpu);
	Ifc_branch tage_predictor <- mkbranch;
	Ifc_btb btb <- mkbtb;

	let dump <- mkReg(InvalidFile);
	let dump2 <- mkReg(InvalidFile);
	let dump3 <- mkReg(InvalidFile);
	let dump4 <- mkReg(InvalidFile);
	let dump5 <- mkReg(InvalidFile);
	//let dump_taken <- mkReg(InvalidFile);
	//let dump_imm <- mkReg(InvalidFile);
	Reg#(Bool) file_open <- mkReg(True);
	Reg#(Bit#(32)) rg_count_mispred <- mkReg(0);
	Reg#(Bit#(32)) rg_count_miss <- mkReg(0);
	Reg#(Bit#(32)) rg_count_hit <-  mkReg(0);

	//Reg#(Tuple2#(Bit#(3),Bit#(`VADDR))) rg_req_copy <- mkRegU;
	FIFOF#(Tuple2#(Bit#(3),Bit#(`VADDR))) capture_prediction_request <-mkLFIFOF();

	rule rl_file(file_open);
		File lfh <- $fopen(file_dump,"w");
		File lfi <- $fopen(file_dump2,"w");
		File lfj <- $fopen(file_dump3,"w");
		File lfk <- $fopen(file_dump4,"w");
		File lfl <- $fopen(file_dump5,"w");
		dump5<= lfl;
		dump4<= lfk;
		dump3<= lfj;		
		dump2<= lfi;		
		dump<= lfh;
		file_open<= False;
	endrule
		
	
	interface send_prediction_request = interface Put 
		method Action put(Tuple2#(Bit#(3),Bit#(`VADDR)) req);
			let {epoch,vaddress} = req;
			$display($time,"\tBPU: Prediction Request for Address: %h",vaddress);
			tage_predictor.ma_put(vaddress[31:0]);
			btb.ma_put(vaddress[31:0]);
			//rg_req_copy<= req;
			capture_prediction_request.enq(req);
		endmethod
	endinterface;
	
	//the final prediction depends not only on the prediction by the predictor but also on whether there was a hit or a miss in the BTB
	//if the predictor predicts 'taken' but there is a miss in the BTB, final prediction is 'not taken'
	interface prediction_response = interface Get
		method ActionValue#(Tuple4#(Bit#(3),Bit#(`VADDR),Bit#(`VADDR),Gv_return_bpu)) get;
			let tage_return <- tage_predictor.mn_get();
			let btb_get= btb.mn_get();
			let {lv_epoch,lv_incoming_pc}= capture_prediction_request.first();
			capture_prediction_request.deq();

			$display($time,"\tBPU: Prediction response for Address: %h",lv_incoming_pc);
			Bit#(`VADDR) branch_pc=zeroExtend(btb_get.branch_pc);

			Gv_modreturn_btb btb_return;
			btb_return.hit= (btb_get.hit_bram || btb_get.hit_vrg);
			btb_return.way_num= btb_get.way_num;

			Gv_return_bpu bpu_return;
			bpu_return.btb_return= btb_return;
			bpu_return.tage_return= tage_return;
			
			if(!(btb_return.hit))
			begin
				bpu_return.final_pred= `NOT_TAKEN;
			end

			else
			begin
				if(btb_get.hit_bram)
				begin
					tage_predictor.ma_shadow(tage_return.prediction);
					bpu_return.final_pred= unpack(tage_return.prediction);
				end
				else
					bpu_return.final_pred= `TAKEN;
			end

			$fwrite(dump5,"%0d",pack(bpu_return.final_pred),"\n");
			let resp=tuple4(lv_epoch,lv_incoming_pc,branch_pc,bpu_return);
			return resp;
		endmethod
	endinterface;
		
	//during training, we must check if the final prediction of 'not taken' was due to predictor alone or because there was a miss in the BTB
	//if it was due to miss in the BTB and the predictor predicted 'taken' and the prediction by the predictor was declared to be wrong by the processor, then the predictor was actually right
	//training must be done accordingly
	method Action ma_training(Maybe#(Tuple3#(Bool,Gv_train_predictor,Gv_update_btb)) td);
		//$display("here_train");
		if(td matches tagged Valid .training_data) begin
			//$display("here_train");
			let {hit,predictor_train,btb_update} = training_data;
			let conditional = btb_update.conditional;
			predictor_train.hit= hit;
			$fwrite(dump4,"%0d:%0d:%h:%h:%0d:%0d",pack(conditional),pack(hit),btb_update.pc,btb_update.branch_imm,pack(predictor_train.prediction),pack(predictor_train.truth),"\n");
			if(conditional)
			begin
				if(!hit)
				begin
					$fwrite(dump2,"%0d",rg_count_miss,"\n");
					rg_count_miss<= rg_count_miss+1;
					btb.ma_update(btb_update);
					if(!predictor_train.truth)
					begin
						if(unpack(predictor_train.prediction))
						begin
							predictor_train.truth=True;
							tage_predictor.ma_train(predictor_train);
						end
					
						else
						begin
							tage_predictor.ma_train(predictor_train);
						end
					end
			
					else
					begin
						if(unpack(predictor_train.prediction))
						begin
							predictor_train.truth=False;
							tage_predictor.ma_train(predictor_train);
						end
					
						else
							tage_predictor.ma_train(predictor_train);
					end
				end
			
				else
				begin
					$fwrite(dump3,"%0d",rg_count_hit,"\n");
					rg_count_hit<= rg_count_hit+1;
					tage_predictor.ma_train(predictor_train);
					
				end
				if(!predictor_train.truth)
				begin
					$fwrite(dump,"%0d",rg_count_mispred,"\n");
					rg_count_mispred<= rg_count_mispred+1;
				end
			end
				
			else
			begin
				if(!hit)
				begin
					//$fwrite(dump2,"%0d",rg_count_miss,"\n");
					//rg_count_miss<= rg_count_miss+1;
					btb.ma_update(btb_update);
				end

				else
				begin
					$fwrite(dump3,"%0d",rg_count_hit,"\n");
					rg_count_hit<= rg_count_hit+1;
				end
			end

		end
	endmethod
	
	method Action ma_flush;
		tage_predictor.ma_flush();
		btb.ma_flush();
	endmethod
	
endmodule 	
endpackage

