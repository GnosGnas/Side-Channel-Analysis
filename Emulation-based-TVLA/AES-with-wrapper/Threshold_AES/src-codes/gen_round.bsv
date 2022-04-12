package gen_round;

import col_shift :: *;
import sbox_threshold :: *;
import inv_sbox_threshold :: *;
import invMixCols :: *;
import ConfigReg :: *;

interface GenRound;
	method Action roundIn(Bit#(32) col_in0,Bit#(32) col_in1,Bit#(32) col_in2,Bit#(32) col_in3, Bool lastRound, Bool decrypt_);
	method Bit#(128) roundOut();
	method Bool roundDone();
endinterface

typedef enum {
	Idle, Ready, Sub_cols, RC_SHIFT, ADD_KEY, NR_Decrypt, INV_SUB_COLS, DEC_ADDKEY, INV_MIX_COLS
} Round_State_type deriving(Bits, Eq, FShow);

module mkGenRound#(Bit#(128) key)(GenRound);
	
	let key0= key[127:96], key1= key[95:64], key2= key[63:32], key3= key[31:0];
	//let decrypt = decrypt_;
	Reg#(Bit#(8)) counter <- mkReg(8); 
	Reg#(Bool) start_sub <- mkReg(False), decrypt <- mkReg(False), start_row_col <- mkReg(False), start_add <- mkReg(False);
	Reg#(Bool) round_done <- mkConfigReg(False), new_round <- mkReg(False);

	Reg#(Bool) last_round <- mkReg(False);

	Reg#(Round_State_type) rg_state <- mkConfigReg(Idle);

	Ifc_sbox_threshold sb <- mksbox_threshold(16'haaaa,24'haaaaaa,24'haaaaaa);
	Ifc_inv_sbox_threshold isb <- mkinv_sbox_threshold(16'haaaa,24'haaaaaa,24'haaaaaa);

	Reg#(Bit#(8)) sbox_out <- mkReg(8);
	Reg#(Bit#(8)) i_sbox_out <- mkReg(8);

	Reg#(Bit#(32)) col0 <- mkReg(32), col1<- mkReg(32), col2<- mkReg(32), col3<- mkReg(32);
	Reg#(Bit#(32)) col0mix <- mkReg(32), col1mix<- mkReg(32), col2mix<- mkReg(32), col3mix<- mkReg(32);
	Reg#(Bit#(32)) col_0 <- mkReg(32), col_1<- mkReg(32), col_2<- mkReg(32), col_3<- mkReg(32);
	Reg#(Bit#(32)) colout0<- mkReg(32), colout1<- mkReg(32), colout2<- mkReg(32), colout3<- mkReg(32);

	Col_shift c0 <- mkColShift;
	Col_shift c1 <- mkColShift;
	Col_shift c2 <- mkColShift;
	Col_shift c3 <- mkColShift;

	//ENCRYPT !!!!!!!!!!!!!!!!!!!!!!!!!!
	rule sub (rg_state == Sub_cols && (!decrypt));
		case(counter)
		8'h00: begin 
			col0[7:0] <= sbox_out; let lv_sb_out <- sb.getbyte(col_0[15:8]);sbox_out <= lv_sb_out;end
		8'h01: begin 
			col0[15:8] <= sbox_out; let lv_sb_out <- sb.getbyte(col_0[23:16]);sbox_out <= lv_sb_out;end
		8'h02: begin 
			col0[23:16] <= sbox_out; let lv_sb_out <- sb.getbyte(col_0[31:24]);sbox_out <= lv_sb_out;end
		8'h03: begin 
			col0[31:24] <= sbox_out; let lv_sb_out <- sb.getbyte(col_1[7:0]);sbox_out <= lv_sb_out;end
		8'h04: begin 
			col1[7:0] <= sbox_out; let lv_sb_out <- sb.getbyte(col_1[15:8]);sbox_out <= lv_sb_out;end
		8'h05: begin 
			col1[15:8] <= sbox_out; let lv_sb_out <- sb.getbyte(col_1[23:16]);sbox_out <= lv_sb_out;end
		8'h06: begin 
			col1[23:16] <= sbox_out; let lv_sb_out <- sb.getbyte(col_1[31:24]);sbox_out <= lv_sb_out;end
		8'h07: begin 
			col1[31:24] <= sbox_out; let lv_sb_out <- sb.getbyte(col_2[7:0]);sbox_out <= lv_sb_out;end
		8'h08: begin 
			col2[7:0] <= sbox_out; let lv_sb_out <- sb.getbyte(col_2[15:8]);sbox_out <= lv_sb_out;end
		8'h09: begin 
			col2[15:8] <= sbox_out; let lv_sb_out <- sb.getbyte(col_2[23:16]);sbox_out <= lv_sb_out;end
		8'h0a: begin 
			col2[23:16] <= sbox_out; let lv_sb_out <- sb.getbyte(col_2[31:24]);sbox_out <= lv_sb_out;end
		8'h0b: begin 
			col2[31:24] <= sbox_out; let lv_sb_out <- sb.getbyte(col_3[7:0]);sbox_out <= lv_sb_out;end
		8'h0c: begin 
			col3[7:0] <= sbox_out; let lv_sb_out <- sb.getbyte(col_3[15:8]);sbox_out <= lv_sb_out;end
		8'h0d: begin 
			col3[15:8] <= sbox_out; let lv_sb_out <- sb.getbyte(col_3[23:16]);sbox_out <= lv_sb_out;end
		8'h0e: begin 
			col3[23:16] <= sbox_out; let lv_sb_out <- sb.getbyte(col_3[31:24]);sbox_out <= lv_sb_out;end
		8'h0f: begin 
			col3[31:24] <= sbox_out; 
			rg_state <= RC_SHIFT;
			//$display("gen_round: cols %h", {col0, col1, col2, col3});
			end
		endcase
		counter <= counter+1;
	endrule
	
	rule rowColShift ((rg_state == RC_SHIFT) && (!decrypt));

		if(!last_round) begin
			colout0 <= c0.shifted({col0[31:24],col1[23:16],col2[15:8],col3[7:0]}, key0);
			colout1 <= c1.shifted({col1[31:24],col2[23:16],col3[15:8],col0[7:0]}, key1);
			colout2 <= c2.shifted({col2[31:24],col3[23:16],col0[15:8],col1[7:0]}, key2);
			colout3 <= c3.shifted({col3[31:24],col0[23:16],col1[15:8],col2[7:0]}, key3);
			//$display("gen_round: prelast %h", {colout0, colout1, colout2, colout3});
		end
		else begin
			colout0 <={col0[31:24],col1[23:16],col2[15:8],col3[7:0]} ^key0; 
			colout1 <={col1[31:24],col2[23:16],col3[15:8],col0[7:0]} ^key1; 
			colout2 <={col2[31:24],col3[23:16],col0[15:8],col1[7:0]} ^key2; 
			colout3 <={col3[31:24],col0[23:16],col1[15:8],col2[7:0]} ^key3; 
		end
		rg_state <= Idle;
		round_done <= True;
	endrule

	//DECRYPT !!!!!!!!!!!!!!!!!!!!!!!!!!

	rule subDecrypt(rg_state == INV_SUB_COLS);
		//$display("DECRYPT SUB");
		case(counter)
		8'h00: begin 
			col0[7:0] <= i_sbox_out; let lv_isb_out <- isb.getbyte(col0mix[15:8]); i_sbox_out <= lv_isb_out; 
			//let lv_isb_out <- isb.getbyte(col0mix[7:0]); col0[7:0] <= lv_isb_out; 
			//$display("gen_round: hi %h %h %h", i_sbox_out, lv_isb_out, col0mix[15:8]);
			end
		8'h01: begin 
			col0[15:8] <= i_sbox_out; let lv_isb_out <- isb.getbyte(col0mix[23:16]); i_sbox_out <= lv_isb_out; 
			//let lv_isb_out <- isb.getbyte(col0mix[15:8]); col0[15:8] <= lv_isb_out; 
			//$display("gen_round: hi %h %h %h", i_sbox_out, lv_isb_out, col0mix[23:16]);
			end
		8'h02: begin 
			col0[23:16] <= i_sbox_out; let lv_isb_out <- isb.getbyte(col0mix[31:24]); i_sbox_out <= lv_isb_out; 
			//let lv_isb_out <- isb.getbyte(col0mix[23:16]); col0[23:16] <= lv_isb_out; 
			//$display("gen_round: hi %h %h %h", i_sbox_out, lv_isb_out, col0mix[31:24]);
			end
		8'h03: begin 
			col0[31:24] <= i_sbox_out; let lv_isb_out <- isb.getbyte(col1mix[7:0]); i_sbox_out <= lv_isb_out; 
			//let lv_isb_out <- isb.getbyte(col0mix[31:24]); col0[31:24] <= lv_isb_out;
			//$display("gen_round: hi %h %h %h", i_sbox_out, lv_isb_out, col1mix[7:0]);
			end
		8'h04: begin 
			col1[7:0] <= i_sbox_out; let lv_isb_out <- isb.getbyte(col1mix[15:8]); i_sbox_out <= lv_isb_out; 
			//let lv_isb_out <- isb.getbyte(col1mix[7:0]); col1[7:0] <= lv_isb_out;
			//$display("gen_round: hi %h %h %h", i_sbox_out, lv_isb_out, col1mix[15:8]);
			end
		8'h05: begin 
			col1[15:8] <= i_sbox_out; let lv_isb_out <- isb.getbyte(col1mix[23:16]); i_sbox_out <= lv_isb_out; 
			//let lv_isb_out <- isb.getbyte(col1mix[15:8]); col1[15:8] <= lv_isb_out;
			//$display("gen_round: hi %h %h %h", i_sbox_out, lv_isb_out, col1mix[23:16]);
			end
		8'h06: begin 
			col1[23:16] <= i_sbox_out; let lv_isb_out <- isb.getbyte(col1mix[31:24]); i_sbox_out <= lv_isb_out; 
			//let lv_isb_out <- isb.getbyte(col1mix[23:16]); col1[23:16] <= lv_isb_out;
			//$display("gen_round: hi %h %h %h", i_sbox_out, lv_isb_out,col1mix[31:24]);
			end
		8'h07: begin 
			col1[31:24] <= i_sbox_out; let lv_isb_out <- isb.getbyte(col2mix[7:0]); i_sbox_out <= lv_isb_out; 
			//let lv_isb_out <- isb.getbyte(col1mix[31:24]); col1[31:24] <= lv_isb_out;
			//$display("gen_round: hi %h %h %h", i_sbox_out, lv_isb_out,col2mix[7:0]);
			end
		8'h08: begin 
			col2[7:0] <= i_sbox_out; let lv_isb_out <- isb.getbyte(col2mix[15:8]); i_sbox_out <= lv_isb_out; 
			//let lv_isb_out <- isb.getbyte(col2mix[7:0]); col2[7:0] <= lv_isb_out;
			//$display("gen_round: hi %h %h %h", i_sbox_out, lv_isb_out,col2mix[15:8]);
			end
		8'h09: begin 
			col2[15:8] <= i_sbox_out; let lv_isb_out <- isb.getbyte(col2mix[23:16]); i_sbox_out <= lv_isb_out; 
			//let lv_isb_out <- isb.getbyte(col2mix[15:8]); col2[15:8] <= lv_isb_out;
			//$display("gen_round: hi %h %h %h", i_sbox_out, lv_isb_out,col2mix[23:16]);
			end
		8'h0a: begin 
			col2[23:16] <= i_sbox_out; let lv_isb_out <- isb.getbyte(col2mix[31:24]); i_sbox_out <= lv_isb_out; 
			//let lv_isb_out <- isb.getbyte(col0mix[23:16]); col0[23:16] <= lv_isb_out;
			//$display("gen_round: hi %h %h %h", i_sbox_out, lv_isb_out,col2mix[31:24]);
			end
		8'h0b: begin 
			col2[31:24] <= i_sbox_out; let lv_isb_out <- isb.getbyte(col3mix[7:0]); i_sbox_out <= lv_isb_out; 
			//let lv_isb_out <- isb.getbyte(col0mix[23:16]); col0[23:16] <= lv_isb_out;
			//$display("gen_round: hi %h %h %h", i_sbox_out, lv_isb_out,col3mix[7:0]);
			end
		8'h0c: begin 
			col3[7:0] <= i_sbox_out; let lv_isb_out <- isb.getbyte(col3mix[15:8]); i_sbox_out <= lv_isb_out; 
			//let lv_isb_out <- isb.getbyte(col0mix[23:16]); col0[23:16] <= lv_isb_out;
			//$display("gen_round: hi %h %h %h", i_sbox_out, lv_isb_out,col3mix[15:8]);
			end
		8'h0d: begin 
			col3[15:8] <= i_sbox_out; let lv_isb_out <- isb.getbyte(col3mix[23:16]); i_sbox_out <= lv_isb_out; 
			//let lv_isb_out <- isb.getbyte(col0mix[23:16]); col0[23:16] <= lv_isb_out;
			//$display("gen_round: hi %h %h %h", i_sbox_out, lv_isb_out,col3mix[23:16]);
			end
		8'h0e: begin 
			col3[23:16] <= i_sbox_out; let lv_isb_out <- isb.getbyte(col3mix[31:24]); i_sbox_out <= lv_isb_out; 
			//let lv_isb_out <- isb.getbyte(col0mix[23:16]); col0[23:16] <= lv_isb_out;
			//$display("gen_round: hi %h %h %h", i_sbox_out, lv_isb_out,col3mix[31:24]);
			end
		8'h0f: begin //let lv_isb_out <- isb.getbyte(col0[15:8]);
			col3[31:24] <= i_sbox_out; 
			rg_state <= DEC_ADDKEY;
			//$display("gen_round: hi %h", i_sbox_out);
			//$display("gen_round: cols %h", {col0, col1, col2, i_sbox_out, col3[23:0]});
			//$display("gen_round: sboxinp %h", {col0mix, col1mix, col2mix, col3mix});
			end
		endcase
		counter <= counter + 1;
	endrule

	rule addKeyDecrypt(rg_state == DEC_ADDKEY && decrypt);
		colout0 <= {col0[31:24],col3[23:16],col2[15:8],col1[7:0]} ^ key0; 
		colout1 <= {col1[31:24],col0[23:16],col3[15:8],col2[7:0]} ^ key1; 
		colout2 <= {col2[31:24],col1[23:16],col0[15:8],col3[7:0]} ^ key2; 
		colout3 <= {col3[31:24],col2[23:16],col1[15:8],col0[7:0]} ^ key3; 
		rg_state <= Idle;
		round_done <= True;
	endrule

	rule mixColsDecrypt(rg_state == INV_MIX_COLS);
		if(!last_round) begin
			col0mix <= funcInvMixCols(col_0);
			col1mix <= funcInvMixCols(col_1);
			col2mix <= funcInvMixCols(col_2);
			col3mix <= funcInvMixCols(col_3);
			let lv_isb_out <- isb.getbyte(funcInvMixCols(col_0)[7:0]);
			i_sbox_out <= lv_isb_out;
		end
		else begin
			col0mix <= col_0;
			col1mix <= col_1;
			col2mix <= col_2;
			col3mix <= col_3;
			let lv_isb_out <- isb.getbyte(col_0[7:0]);
			//$display("gen_round: %h", {col0mix, col1mix, col2mix, col3mix});
			i_sbox_out <= lv_isb_out;
		end
		rg_state <= INV_SUB_COLS;
	endrule
	method Action roundIn(Bit#(32) col_in0,Bit#(32) col_in1,Bit#(32) col_in2,Bit#(32) col_in3, Bool lastRound, Bool decrypt_) if(rg_state == Idle);
		//$display("gen_round: roundin inps %h", {col_in0, col_in1, col_in2, col_in3});
		decrypt <= decrypt_;
		last_round <= lastRound;
		if (!decrypt_) begin 
			let lv_sb_out <- sb.getbyte(col_in0[7:0]);
			sbox_out <= lv_sb_out;
			rg_state <= Sub_cols;
		end
		else begin
			rg_state <= INV_MIX_COLS;
		end
		counter <= 0;
		round_done <= False;
		col_0 <= col_in0;
		col_1 <= col_in1;
		col_2 <= col_in2;
		col_3 <= col_in3;
	endmethod

	method Bit#(128) roundOut();
		return {colout0, colout1, colout2, colout3};
	endmethod

	method Bool roundDone();
		return round_done;
	endmethod
endmodule

endpackage
