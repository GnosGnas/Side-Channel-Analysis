/*
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% MINI PROJECT: Side-Channel Analysis on Shakti's AES Accelerator %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

Module name(s): mkGenRound
Source of code: https://gitlab.com/shaktiproject/cores/crypto-box/-/tree/master/aes/hw/aes_registers/src

Description: Module to perform column shift operation in AES encryption

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

package gen_round;
	// Importing packages
	import col_shift :: *;
	import Vector :: *;
	import invMixCols :: *;
	import ConfigReg :: *;
	`ifdef sbox1
		import sbox1::*;
	`elsif sbox2
		import sbox2 :: *;
	`endif


	// Defined types
	typedef enum {
		Idle, Ready, Sub_cols, RC_SHIFT, ADD_KEY, NR_Decrypt, INV_SUB_COLS, DEC_ADDKEY, INV_MIX_COLS
	} Round_State_type deriving(Bits, Eq, FShow);


	// Interface for AES
	interface GenRound#(numeric type n_sbox);
		method Action roundIn(Bit#(32) col_in0, Bit#(32) col_in1, Bit#(32) col_in2, Bit#(32) col_in3, Bool lastRound, Bool decrypt_, Bit#(128) key);
		method Bit#(128) roundOut();
		method Bool roundDone();
	endinterface


	// Module definition
	module mkGenRound#(Vector#(n_sbox, Sbox) sboxes)(GenRound#(n_sbox));
		let nsb = valueOf(n_sbox);
		Reg#(Bit#(8)) counter <- mkReg(8); 
		Reg#(Bool) decrypt <- mkReg(False), round_done <- mkConfigReg(True), new_round <- mkReg(False);

		Reg#(Bool) last_round <- mkReg(False);

		Reg#(Round_State_type) rg_state <- mkConfigReg(Idle);

		Reg#(Bit#(32)) colout0<- mkReg(0), colout1<- mkReg(0), colout2<- mkReg(0), colout3<- mkReg(0);

		Vector#(16, Reg#(Bit#(8))) col_ <- replicateM(mkReg(32)), sub_col <- replicateM(mkReg(32));
		Vector#(n_sbox, Reg#(Bit#(8))) sboxes_out <- replicateM(mkReg(32));

		Col_shift c0 <- mkColShift;
		Col_shift c1 <- mkColShift;
		Col_shift c2 <- mkColShift;
		Col_shift c3 <- mkColShift;

		method Action roundIn(Bit#(32) col_in0,Bit#(32) col_in1,Bit#(32) col_in2,Bit#(32) col_in3, Bool lastRound, Bool decrypt_, Bit#(128) key) if(rg_state == Idle);
			Vector#(16, Bit#(8)) col = toChunks({col_in0,col_in1,col_in2,col_in3});
			Vector#(16, Bit#(8)) sub_col = replicate(0);
						
			let key0 = key[127:96], key1 = key[95:64], key2 = key[63:32], key3 = key[31:0];

			last_round <= lastRound;
			decrypt <= decrypt_;
						
			if (!decrypt_) begin 
				for(Integer i = 0; i < nsb; i = i + 1) begin
					let sbout <- sboxes[i].getbyte(col[i],decrypt_);
					sub_col[i] = sbout;
				end

				if(!lastRound) begin
					colout0 <= c0.shifted({sub_col[15],sub_col[10],sub_col[ 5],sub_col[ 0]}, key0);
					colout1 <= c1.shifted({sub_col[11],sub_col[ 6],sub_col[ 1],sub_col[12]}, key1);
					colout2 <= c2.shifted({sub_col[ 7],sub_col[ 2],sub_col[13],sub_col[ 8]}, key2);
					colout3 <= c3.shifted({sub_col[ 3],sub_col[14],sub_col[ 9],sub_col[ 4]}, key3);
				end
				else begin
					colout0 <= {sub_col[15],sub_col[10],sub_col[ 5],sub_col[ 0]} ^key0; 
					colout1 <= {sub_col[11],sub_col[ 6],sub_col[ 1],sub_col[12]} ^key1; 
					colout2 <= {sub_col[ 7],sub_col[ 2],sub_col[13],sub_col[ 8]} ^key2; 
					colout3 <= {sub_col[ 3],sub_col[14],sub_col[ 9],sub_col[ 4]} ^key3;
				end
			end
			else begin
				Vector#(16, Bit#(8)) col2;

				if(!lastRound) begin
					let col0mix = funcInvMixCols({col[15],col[14],col[13],col[12]});
					let col1mix = funcInvMixCols({col[11],col[10],col[ 9],col[ 8]});
					let col2mix = funcInvMixCols({col[ 7],col[ 6],col[ 5],col[ 4]});
					let col3mix = funcInvMixCols({col[ 3],col[ 2],col[ 1],col[ 0]});
					col2 = toChunks({col0mix,col1mix,col2mix,col3mix});
				end
				else begin
					for(Integer i = 0; i < 16; i = i + 1)
						col2[i] = col[i];
				end

				for(Integer i = 0; i < nsb; i = i + 1) begin
					let sbout <- sboxes[i].getbyte(col2[i],decrypt_);
					sub_col[i] = sbout;
				end

				colout0 <= {sub_col[15],sub_col[ 2],sub_col[ 5],sub_col[ 8]} ^ key0; 
				colout1 <= {sub_col[11],sub_col[14],sub_col[ 1],sub_col[ 4]} ^ key1; 
				colout2 <= {sub_col[ 7],sub_col[10],sub_col[13],sub_col[ 0]} ^ key2; 
				colout3 <= {sub_col[ 3],sub_col[ 6],sub_col[ 9],sub_col[12]} ^ key3;
			end
		endmethod

		method Bit#(128) roundOut();
			return {colout0, colout1, colout2, colout3};
		endmethod

		method Bool roundDone();
			return round_done;
		endmethod
	endmodule
endpackage
