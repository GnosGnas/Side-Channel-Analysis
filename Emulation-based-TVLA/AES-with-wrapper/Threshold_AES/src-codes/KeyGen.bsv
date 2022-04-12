package KeyGen;

import rcon_gen :: *;
import sbox_threshold :: *;
import Vector :: *;

interface KeyGen_;
	method Action start(Bit#(32) key_in0, Bit#(32) key_in1, Bit#(32) key_in2, Bit#(32) key_in3, Bit#(32) key_in4, Bit#(32) key_in5, Bit#(32) key_in6, Bit#(32) key_in7, Aes_key_type keylen);
	method ActionValue#(Bit#(128)) getKey(Bit#(4) roundnumber);
	method Bool isRoundKeyReady(Bit#(4) roundnum);
endinterface

typedef enum {
	Bit128, Bit192, Bit256
} Aes_key_type deriving(Bits, Eq, FShow); 

typedef enum {
	Idle, Key_Gen_Start, SUB, Round_Keys, SUB_col_256
} KEY_State_type deriving(Bits, Eq, FShow);

module mkKeyGen(KeyGen_);
	Reg#(Aes_key_type) key_length <- mkReg(Bit128);
	Reg#(Bool) key_saved <- mkReg(False);
	
	Reg#(Bit#(4)) counter <-mkReg(8);
	Reg#(Bit#(5)) round_number <- mkReg(4);
	Reg#(Bool) round_toggle_192 <- mkReg(False);
	 
	Vector #(15, Reg#(Bool)) round_key_done <- replicateM(mkReg(False));

	Vector #(15, Reg#(Bit#(32))) save_key0 <- replicateM(mkRegU);
	Vector #(15, Reg#(Bit#(32))) save_key1 <- replicateM(mkRegU);
	Vector #(15, Reg#(Bit#(32))) save_key2 <- replicateM(mkRegU);
	Vector #(15, Reg#(Bit#(32))) save_key3 <- replicateM(mkRegU);

	Ifc_sbox_threshold sbox_threshold <- mksbox_threshold(16'haaaa,24'haaaaaa,24'haaaaaa);
	RconRom rcongen <- mkRconRom;

	Reg#(Bit#(32)) rot_prev_key <- mkReg(32);
	Reg#(Bit#(32)) prev_key0 <- mkReg(32), prev_key1 <- mkReg(32), prev_key2 <- mkReg(32), prev_key3 <- mkReg(32);
	Reg#(Bit#(32)) prev_key4 <- mkReg(32), prev_key5 <- mkReg(32), prev_key6 <- mkReg(32), prev_key7 <- mkReg(32);
	Reg#(Bit#(8)) sbox_out <- mkReg(8);
	Reg#(Bit#(32)) rcon <- mkReg(32), last_col_sub_rot <- mkReg(32);
	Reg#(Bit#(4)) rci <- mkReg(0);
	Reg#(Bit#(32)) aes256_subcol4 <- mkReg(32);

	Reg#(KEY_State_type) rg_state <- mkReg(Idle);
	Reg#(Bit#(5)) maxrounds <- mkReg(10);

	
	rule round_start (rg_state == Key_Gen_Start);
		counter <= 0;
		rcon <= {rcongen.read(rci), 24'b00};
		round_key_done[0] <= True;

		save_key0[0] <= prev_key0;
		save_key1[0] <= prev_key1;
		save_key2[0] <= prev_key2;
		save_key3[0] <= prev_key3;
		if (key_length == Bit128) begin
			let lv_sb_out <- sbox_threshold.getbyte(prev_key3[23:16]);
			sbox_out <= lv_sb_out;
			rot_prev_key <= {prev_key3[23:0],prev_key3[31:24]};
		end
		else if(key_length == Bit192) begin
			save_key0[1] <= prev_key4;
			save_key1[1] <= prev_key5;
			let lv_sb_out <- sbox_threshold.getbyte(prev_key5[23:16]);
			sbox_out <= lv_sb_out;
			rot_prev_key <= {prev_key5[23:0],prev_key5[31:24]};
			round_toggle_192 <= False;
		end
		else if(key_length == Bit256) begin
			save_key0[1] <= prev_key4;
                        save_key1[1] <= prev_key5;
			save_key2[1] <= prev_key6;
			save_key3[1] <= prev_key7;
			round_key_done[1] <= True;
						let lv_sb_out <- sbox_threshold.getbyte(prev_key7[23:16]);
						sbox_out <= lv_sb_out;
                        rot_prev_key <= {prev_key7[23:0],prev_key7[31:24]};
			//$display("%h%h%h%h,   0",prev_key0,prev_key1,prev_key2,prev_key3);
			//$display("%h%h%h%h,   1",prev_key4,prev_key5,prev_key6,prev_key7);
		end
		rg_state <= SUB;
	endrule

	rule subKey (rg_state == SUB);
		if(counter == 0) begin
			last_col_sub_rot[31:24] <= sbox_out ^ rcon[31:24];
			let lv_sb_out <- sbox_threshold.getbyte(rot_prev_key[23:16]);
			sbox_out <= lv_sb_out;
		end
		if(counter == 1) begin
			last_col_sub_rot[23:16] <= sbox_out ^ rcon[23:16];
			let lv_sb_out <- sbox_threshold.getbyte(rot_prev_key[15:8]);
			sbox_out <= lv_sb_out;
		end
		if(counter == 2) begin
			last_col_sub_rot[15:8] <= sbox_out ^ rcon[15:8];
			let lv_sb_out <- sbox_threshold.getbyte(rot_prev_key[7:0]);
			sbox_out <= lv_sb_out;
		end
		if(counter == 3) begin
			last_col_sub_rot[7:0] <= sbox_out ^ rcon[7:0];
			if(key_length == Bit256 && round_number != maxrounds) begin
				let col_sub_rot = {last_col_sub_rot[31:8], sbox_out ^ rcon[7:0]};
				let temp_col = prev_key0^prev_key1^prev_key2^prev_key3^col_sub_rot;
				let lv_sb_out <- sbox_threshold.getbyte(temp_col[31:24]);
				sbox_out <= lv_sb_out;
				aes256_subcol4 <= temp_col;
				rg_state <= SUB_col_256;
				//rg_state <= Round_Keys;
			end
			else
				rg_state <= Round_Keys;
			rci <= rci + 1;
		end

		counter <= counter + 1;
	endrule

	rule aes256subcol (rg_state == SUB_col_256);
	//$display("Iam in subbytes of column 4, %d",round_number);
		if(counter == 4) begin
			aes256_subcol4[31:24] <= sbox_out;
			let lv_sb_out <- sbox_threshold.getbyte(aes256_subcol4[23:16]);
			sbox_out <= lv_sb_out;
		end
		if(counter == 5) begin
			aes256_subcol4[23:16] <= sbox_out;
			let lv_sb_out <- sbox_threshold.getbyte(aes256_subcol4[15:8]);
			sbox_out <= lv_sb_out;
		end
		if(counter == 6) begin
			aes256_subcol4[15:8] <= sbox_out;
			let lv_sb_out <- sbox_threshold.getbyte(aes256_subcol4[7:0]);
			sbox_out <= lv_sb_out;
		end
		if(counter == 7) begin
			aes256_subcol4[7:0] <= sbox_out;
			rg_state <= Round_Keys;
		end
		counter <= counter +1;
	endrule

	rule roundKey (rg_state == Round_Keys);
		counter <= 0;
		rcon <= {rcongen.read(rci), 24'b00};

		let key0 = prev_key0^last_col_sub_rot;
		let key1 = prev_key1^key0;
		let key2 = prev_key2^key1;
		let key3 = prev_key3^key2;
		let key4 = prev_key4^key3;

		if (key_length == Bit256)
			key4 = prev_key4^aes256_subcol4;

		let key5 = prev_key5^key4;
		let key6 = prev_key6^key5;
		let key7 = prev_key7^key6;

		if(round_number <= maxrounds) begin
			if (key_length == Bit128) begin
				save_key0[round_number] <= key0;
				save_key1[round_number] <= key1;
				save_key2[round_number] <= key2;
				save_key3[round_number] <= key3;
				let lv_sb_out <- sbox_threshold.getbyte(key3[23:16]);
				sbox_out <= lv_sb_out;
				rot_prev_key <= {key3[23:0],key3[31:24]};
				round_key_done[round_number] <= True;
				round_number <= round_number+1;
				rg_state <= SUB;
			end
			else if(key_length == Bit192) begin
				if(round_toggle_192) begin
					save_key0[round_number] <= key0;
					save_key1[round_number] <= key1;
					save_key2[round_number] <= key2;
					save_key3[round_number] <= key3;
					save_key0[round_number+1] <= key4;
					save_key1[round_number+1] <= key5;
					round_key_done[round_number] <= True;
					round_number <= round_number + 1;
					round_toggle_192 <= False;
				end
				else begin
					save_key2[round_number] <= key0;
					save_key3[round_number] <= key1;
					save_key0[round_number+1] <= key2;
					save_key1[round_number+1] <= key3;
					save_key2[round_number+1] <= key4;
					save_key3[round_number+1] <= key5;
					round_key_done[round_number] <= True;
					round_key_done[round_number+1] <= True;
					round_number <= round_number + 2;
					round_toggle_192 <= True;
				end
				let lv_sb_out <- sbox_threshold.getbyte(key5[23:16]);
				sbox_out <= lv_sb_out;
				rot_prev_key <= {key5[23:0],key5[31:24]};
				rg_state<=SUB;
			end
			else if(key_length == Bit256) begin
				//$display("Iam in round %d",round_number);
				save_key0[round_number] <= key0;
				save_key1[round_number] <= key1;
				save_key2[round_number] <= key2;
				save_key3[round_number] <= key3;
				round_key_done[round_number] <= True;
				//$display("%h%h%h%h,%d",key0,key1,key2,key3,round_number);
				if(round_number != maxrounds) begin
					save_key0[round_number+1] <= key4;
					save_key1[round_number+1] <= key5;
					save_key2[round_number+1] <= key6;
					save_key3[round_number+1] <= key7;
					let lv_sb_out <- sbox_threshold.getbyte(key7[23:16]);
					sbox_out <= lv_sb_out;
					rot_prev_key <= {key7[23:0],key7[31:24]};
					round_key_done[round_number+1] <= True;
					round_number <= round_number + 2;
					//$display("%h%h%h%h,%d",key4,key5,key6,key7,round_number+1);
					rg_state <= SUB;
				end
				else begin
					rg_state <= Idle;
					key_saved <= True;
				end
			end

			prev_key0 <= key0;
			prev_key1 <= key1;
			prev_key2 <= key2;
			prev_key3 <= key3;
			prev_key4 <= key4;
			prev_key5 <= key5;
			prev_key6 <= key6;
			prev_key7 <= key7;

		end
		else begin
			rg_state <= Idle;
			key_saved <= True;
		end
		//$display("Inverse Key gen %h", round_number);
	endrule

	method Action start(Bit#(32) key_in0, Bit#(32) key_in1, Bit#(32) key_in2, Bit#(32) key_in3, Bit#(32) key_in4, Bit#(32) key_in5, Bit#(32) key_in6, Bit#(32) key_in7, Aes_key_type keylen) if(rg_state == Idle);
		//$display("%h,%h,%h,%h,%h,%h,%h,%h",key_in0,key_in1,key_in2,key_in3,key_in4,key_in5,key_in6,key_in7);

		if(key_saved) begin
			//$display("Hello");
			if((key_in4==save_key0[0])&&(key_in5==save_key1[0])&&(key_in6==save_key2[0])&&(key_in7==save_key3[0]) && keylen == Bit128)
				rg_state <= Idle;
			else if((key_in2==save_key0[0])&&(key_in3==save_key1[0])&&(key_in4==save_key2[0])&&(key_in5==save_key3[0])&&(key_in6==save_key0[1])&&(key_in7==save_key1[1]) && keylen == Bit192)
				rg_state <= Idle;
			else if((key_in0==save_key0[0])&&(key_in1==save_key1[0])&&(key_in2==save_key2[0])&&(key_in3==save_key3[0])&&(key_in4==save_key0[1])&&(key_in5==save_key1[1])&&(key_in6==save_key2[1])&&(key_in7==save_key3[1]) && keylen == Bit256)
				rg_state <= Idle;
			else begin
				Integer i;
				for(i = 0; i < 15; i =i+1)
					(round_key_done[i]) <= False;
				key_saved <= False;
				rg_state <= Key_Gen_Start;
			end
		end
		else begin
			Integer i;
			for(i = 0 ; i < 15 ; i = i +1)
				(round_key_done[i]) <= False;
			rg_state <= Key_Gen_Start;
		end

		case(keylen)
			Bit128 : begin 
				maxrounds <= 10;
				prev_key0 <= key_in4;
				prev_key1 <= key_in5;
				prev_key2 <= key_in6;
				prev_key3 <= key_in7;
				round_number <= 5'b00001;

			end
			Bit192 : begin
				maxrounds <= 12;
				prev_key0 <= key_in2;
				prev_key1 <= key_in3;
				prev_key2 <= key_in4;
				prev_key3 <= key_in5;
				prev_key4 <= key_in6;
				prev_key5 <= key_in7;
				round_number <= 5'b00001;
			end
			Bit256 : begin
				maxrounds <= 14;
				prev_key0 <= key_in0;
				prev_key1 <= key_in1;
				prev_key2 <= key_in2;
				prev_key3 <= key_in3;
				prev_key4 <= key_in4;
				prev_key5 <= key_in5;
				prev_key6 <= key_in6;
				prev_key7 <= key_in7;
				round_number <= 5'b00010;
			end
		endcase

		key_length <= keylen;
		rci <=0;
		//round_number <= 4'b0001;
	endmethod
	
	method ActionValue#(Bit#(128)) getKey(Bit#(4) roundnumber);
		//$display("KeyGen: %d - %h", roundnumber, {save_key0[roundnumber], save_key1[roundnumber], save_key2[roundnumber], save_key3[roundnumber]});
		return {save_key0[roundnumber], save_key1[roundnumber], save_key2[roundnumber], save_key3[roundnumber]};
	endmethod

	method Bool isRoundKeyReady(Bit#(4) roundnum);
		return round_key_done[roundnum];
	endmethod

endmodule

endpackage
