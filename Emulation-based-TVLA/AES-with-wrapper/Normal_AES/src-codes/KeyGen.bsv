/*
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% MINI PROJECT: Side-Channel Analysis on Shakti's AES Accelerator %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

Module name(s): mkKeyGen
Source of code: https://gitlab.com/shaktiproject/cores/crypto-box/-/tree/master/aes/hw/aes_registers/src

Description: Main module to generate subkeys

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

package KeyGen;
	// Importing packages
	import rcon_gen :: *;
	import Vector :: *;
	import BRAM :: *;
	import BRAMCore :: *;
	`ifdef sbox1
		import sbox1::*;
	`elsif sbox2
		import sbox2 :: *;
	`endif


	// Defined types
	typedef enum {
		Bit128, Bit192, Bit256
	} Aes_key_type deriving(Bits, Eq, FShow); 

	typedef enum {
		Key_request3, Key_request, Key_response, Idle
	} Rg_State_type deriving(Bits, Eq, FShow);

	typedef enum {
		Idle, Key_Gen_Start, SUB, Round_Keys, SUB_col_256, RoundKey0, Key_Gen_Start2
	} KEY_State_type deriving(Bits, Eq, FShow);

	function BRAMRequest#(Bit#(128), Bit#(128)) makeRequest(Bool write, Bit#(128) addr, Bit#(128) data);
		return BRAMRequest {
			write : write,
			responseOnWrite : False,
			address : addr,
			datain : data
		};
	endfunction


	// Interface for KeyGen module
	interface KeyGen_;
		method Action start(Bit#(32) key_in0, Bit#(32) key_in1, Bit#(32) key_in2, Bit#(32) key_in3, Bit#(32) key_in4, Bit#(32) key_in5, Bit#(32) key_in6, Bit#(32) key_in7, Aes_key_type keylen);
		method Action reqKey(Bit#(4) roundnumber);
		method ActionValue#(Bit#(128)) getKey(Bit#(4) roundnumber);
		method Bool isRoundKeyReady(Bit#(4) roundnum);
	endinterface


	// Module definition
	module mkKeyGen#(Sbox sb)(KeyGen_);
		Reg#(Aes_key_type) key_length <- mkReg(Bit128);
		Reg#(Bool) key_saved <- mkReg(False), rg_keyreq <- mkReg(False), round_toggle_192 <- mkReg(False);
		Reg#(Bit#(4)) counter <-mkReg(8), round_number <- mkReg(4);

		Reg#(Bit#(32)) rot_prev_key <- mkReg(32);
		Reg#(Bit#(32)) prev_key0 <- mkReg(32), prev_key1 <- mkReg(32), prev_key2 <- mkReg(32), prev_key3 <- mkReg(32);
		Reg#(Bit#(32)) prev_key4 <- mkReg(32), prev_key5 <- mkReg(32), prev_key6 <- mkReg(32), prev_key7 <- mkReg(32);
		Reg#(Bit#(8)) sbox_out <- mkReg(8);
		Reg#(Bit#(32)) rcon <- mkReg(32), last_col_sub_rot <- mkReg(32);
		Reg#(Bit#(4)) rci <- mkReg(0);
		Reg#(Bit#(32)) aes256_subcol4 <- mkReg(32);
		Reg#(Bit#(32)) temp_key0 <- mkReg(32), temp_key1 <- mkReg(32), temp_key2 <- mkReg(32), temp_key3 <- mkReg(32);

		Reg#(KEY_State_type) rg_state <- mkReg(Idle);
		Reg#(Rg_State_type) rg_state_key <- mkReg(Idle);
		Reg#(Bit#(4)) maxrounds <- mkReg(10);

		Vector#(15, Reg#(Bool)) round_key_done <- replicateM(mkReg(False));

		BRAM_Configure cfg = defaultValue;
		cfg.allowWriteResponseBypass = False;

		BRAM_PORT#(Bit#(4), Bit#(32)) save_key0 <- mkBRAMCore1(16, False), save_key1 <- mkBRAMCore1(16, False), save_key2 <- mkBRAMCore1(16, False), save_key3 <- mkBRAMCore1(16, False);

		RconRom rcongen <- mkRconRom;

		rule round_start (rg_state == Key_Gen_Start);
			counter <= 0;
			rcon <= {rcongen.read(rci), 24'b00};
			round_key_done[0] <= True;

			save_key0.put(True, 0, prev_key0);
			save_key1.put(True, 0, prev_key1);
			save_key2.put(True, 0, prev_key2);
			save_key3.put(True, 0, prev_key3);
			rg_state <= Key_Gen_Start2;
		endrule

		rule round_start2 (rg_state == Key_Gen_Start2);
			if (key_length == Bit128) begin
				let sbout <- sb.getbyte(prev_key3[23:16], False);
				sbox_out <= sbout;
				rot_prev_key <= {prev_key3[23:0],prev_key3[31:24]};
			end
			else if (key_length == Bit192) begin
				let sbout <- sb.getbyte(prev_key5[23:16], False);
				sbox_out <= sbout;
				save_key0.put(True, 1, prev_key4);
				save_key1.put(True, 1, prev_key5);
				rot_prev_key <= {prev_key5[23:0],prev_key5[31:24]};
				round_toggle_192 <= False;
			end
			else if (key_length == Bit256) begin
				let sbout <- sb.getbyte(prev_key7[23:16], False);
				sbox_out <= sbout;
				save_key0.put(True, 1, prev_key4);
				save_key1.put(True, 1, prev_key5);
				save_key2.put(True, 1, prev_key6);
				save_key3.put(True, 1, prev_key7);
				round_key_done[1] <= True;
				rot_prev_key <= {prev_key7[23:0],prev_key7[31:24]};
			end

			rg_state <= SUB;
		endrule

		rule subKey (rg_state == SUB);
			if (counter == 0) begin
				last_col_sub_rot[31:24] <= sbox_out ^ rcon[31:24];
				let sbout <- sb.getbyte(rot_prev_key[23:16], False);
				sbox_out <= sbout;
			end

			if (counter == 1) begin
				last_col_sub_rot[23:16] <= sbox_out ^ rcon[23:16];
				let sbout <- sb.getbyte(rot_prev_key[15:8], False);
				sbox_out <= sbout;
			end

			if (counter == 2) begin
				last_col_sub_rot[15:8] <= sbox_out ^ rcon[15:8];
				let sbout <- sb.getbyte(rot_prev_key[7:0], False);
				sbox_out <= sbout;
			end

			if (counter == 3) begin
				last_col_sub_rot[7:0] <= sbox_out ^ rcon[7:0];

				if (key_length == Bit256 && round_number != maxrounds) begin
					let col_sub_rot = {last_col_sub_rot[31:8], sbox_out ^ rcon[7:0]};
					let temp_col = prev_key0^prev_key1^prev_key2^prev_key3^col_sub_rot;
					let sbout <- sb.getbyte(temp_col[31:24], False);
					sbox_out <= sbout;
					aes256_subcol4 <= temp_col;
					rg_state <= SUB_col_256;
				end
				else
					rg_state <= Round_Keys;

				rci <= rci + 1;
			end

			counter <= counter + 1;
		endrule

		rule aes256subcol (rg_state == SUB_col_256);
			if (counter == 4) begin
				aes256_subcol4[31:24] <= sbox_out;
				let sbout <- sb.getbyte(aes256_subcol4[23:16], False);
				sbox_out <= sbout;
			end

			if (counter == 5) begin
				aes256_subcol4[23:16] <= sbox_out;
				let sbout <- sb.getbyte(aes256_subcol4[15:8], False);
				sbox_out <= sbout;
			end

			if (counter == 6) begin
				aes256_subcol4[15:8] <= sbox_out;
				let sbout <- sb.getbyte(aes256_subcol4[7:0], False);
				sbox_out <= sbout;
			end

			if (counter == 7) begin
				aes256_subcol4[7:0] <= sbox_out;
				rg_state <= Round_Keys;
			end

			counter <= counter+1;
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
					save_key0.put(True, round_number, key0);
					save_key1.put(True, round_number, key1);
					save_key2.put(True, round_number, key2);
					save_key3.put(True, round_number, key3);
					round_key_done[round_number] <= True;
					round_number <= round_number+1;
					rg_state <= RoundKey0;
				end
				else if(key_length == Bit192) begin
					if(round_toggle_192) begin
						save_key0.put(True, round_number, key0);
						save_key1.put(True, round_number, key1);
						save_key2.put(True, round_number, key2);
						save_key3.put(True, round_number, key3);
						rg_state <= RoundKey0;
					end
					else begin
						save_key2.put(True, round_number, key0);
						save_key3.put(True, round_number, key1);
						rg_state <= RoundKey0;
					end
				end
				else if(key_length == Bit256) begin
					save_key0.put(True, round_number, key0);
					save_key1.put(True, round_number, key1);
					save_key2.put(True, round_number, key2);
					save_key3.put(True, round_number, key3);
					rg_state <= RoundKey0;
				end
			end
			else begin
				rg_state <= Idle;
				key_saved <= True;
			end
		endrule

		rule roundKey2 (rg_state == RoundKey0);
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

			if (round_number <= maxrounds) begin
				if (key_length == Bit192) begin
					if (round_toggle_192) begin
						save_key0.put(True, round_number+1, key4);
						save_key1.put(True, round_number+1, key5);
						round_key_done[round_number] <= True;
						round_number <= round_number + 1;
						round_toggle_192 <= False;
					end
					else begin
						save_key0.put(True, round_number+1, key2);
						save_key1.put(True, round_number+1, key3);
						save_key2.put(True, round_number+1, key4);
						save_key3.put(True, round_number+1, key5);
						round_key_done[round_number] <= True;
						round_key_done[round_number+1] <= True;
						round_number <= round_number + 2;
						round_toggle_192 <= True;
					end

					let sbout <- sb.getbyte(key5[31:24], False);
					sbox_out <= sbout;
					rot_prev_key <= {key5[23:0],key5[31:24]};
					rg_state<=SUB;
				end
				else if (key_length == Bit256) begin
					round_key_done[round_number] <= True;

					if (round_number != maxrounds) begin
						let sbout <- sb.getbyte(key7[23:16], False);
						sbox_out <= sbout;
						save_key0.put(True, round_number+1, key4);
						save_key1.put(True, round_number+1, key5);
						save_key2.put(True, round_number+1, key6);
						save_key3.put(True, round_number+1, key7);
						rot_prev_key <= {key7[23:0],key7[31:24]};
						round_key_done[round_number+1] <= True;
						round_number <= round_number + 2;
						rg_state <= SUB;
					end
					else begin
						rg_state  <= Idle;
						key_saved <= True;
					end
				end
				else if (key_length == Bit128) begin
					let sbout <- sb.getbyte(key3[23:16],False);                                                 
					rg_state <= SUB;
					sbox_out <= sbout;                                                                          
					rot_prev_key <= {key3[23:0],key3[31:24]};                                                   
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
		endrule

		method Action start(Bit#(32) key_in0, Bit#(32) key_in1, Bit#(32) key_in2, Bit#(32) key_in3, Bit#(32) key_in4, Bit#(32) key_in5, Bit#(32) key_in6, Bit#(32) key_in7, Aes_key_type keylen) if (rg_state == Idle);
			for(Integer i = 0 ; i < 15 ; i = i +1)
				(round_key_done[i]) <= False;
			
			rg_state <= Key_Gen_Start;

			case(keylen)
				Bit128 : begin 
					maxrounds <= 10;
					prev_key0 <= key_in4;
					prev_key1 <= key_in5;
					prev_key2 <= key_in6;
					prev_key3 <= key_in7;
					round_number <= 4'b0001;

				end
				Bit192 : begin
					maxrounds <= 12;
					prev_key0 <= key_in2;
					prev_key1 <= key_in3;
					prev_key2 <= key_in4;
					prev_key3 <= key_in5;
					prev_key4 <= key_in6;
					prev_key5 <= key_in7;
					round_number <= 4'b0001;
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
					round_number <= 4'b0010;
				end
			endcase

			key_length <= keylen;
			rci <=0;
		endmethod
		
		method Action reqKey(Bit#(4) roundnumber);
			save_key0.put(False, roundnumber, 0);
			save_key1.put(False, roundnumber, 0);
			save_key2.put(False, roundnumber, 0);
			save_key3.put(False, roundnumber, 0);
		endmethod

		method ActionValue#(Bit#(128)) getKey(Bit#(4) roundnumber);
			return {save_key0.read(), save_key1.read(), save_key2.read(), save_key3.read()};
		endmethod

		method Bool isRoundKeyReady(Bit#(4) roundnum);
			return round_key_done[roundnum];
		endmethod
	endmodule
endpackage
