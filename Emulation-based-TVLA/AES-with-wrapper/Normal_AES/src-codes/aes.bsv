/*
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% MINI PROJECT: Side-Channel Analysis on Shakti's AES Accelerator %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

Module name(s): mkAES
Source of code: https://gitlab.com/shaktiproject/cores/crypto-box/-/tree/master/aes/hw/aes_registers/src

Description: This is the top module of the AES accelerator. Minimum changes have been done to ease its usage.

Usage:
1. Generate the subkeys by passing the key using genKeys(). encrypt() will be disabled till all the subkeys have been generated.
2. Pass the input text and the key using encrypt() to start the cipher process. Bool decrypttt is used to choose between encryption or decryption
3. To get the output use the ActionValue method ret()

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

package aes;
	// Importing packages
	import KeyGen :: *;
	import gen_round :: *;
	import Vector :: *;
	`ifdef sbox1
		import sbox1 :: *;
	`elsif sbox2
		import sbox2 :: *;
	`endif

	export Aes_key_type (..) ;
	export aes :: *;


	// Defined types
	typedef enum {
		Idle, GenKeys
	} KEY_State deriving(Bits, Eq, FShow);

	typedef enum {
		Idle, Encode, Round_Done, Init_xor, Wait
	} AES_State_type deriving(Bits, Eq, FShow);

	// Interface for AES
	interface AES;
		method Action genKeys(Bit#(256) keyyy, Aes_key_type keyylenn);
		method Action encrypt(Bit#(128) plaintexttt, Bit#(256) keyyy, Bool decrypttt, Aes_key_type keyylenn);
		method ActionValue#(Bit#(128)) ret();
		method Bool outp_ready();
		method Bool can_take_inp();
	endinterface
	
	// Module definition
	(*synthesize*)
	(* descending_urgency = "kg.round_start, kg.subKey, kg.aes256subcol, initial_xor" *)
	module mkAES(AES);
		Reg#(Bool) new_round <- mkReg(False), _ready <- mkReg(False), decrypt <- mkReg(False);
		Reg#(Bit#(32)) col0 <- mkReg(32), col1 <- mkReg(32), col2 <- mkReg(32), col3 <- mkReg(32);
		Reg#(Bit#(32)) colout0 <- mkReg(32), colout1 <- mkReg(32), colout2 <- mkReg(32), colout3 <- mkReg(32);
		Reg#(AES_State_type) rg_state <- mkReg(Idle);
		Reg#(KEY_State) rg_state2 <- mkReg(Idle);
		Reg#(Bit#(128)) plaintext <- mkReg(128), ciphertext <- mkReg(128), key <- mkReg(128);
		Reg#(Bit#(4)) counter <- mkReg(4), maxround <- mkReg(10);

		`ifdef sbox1
			Vector#(16, Sbox) sboxes <- replicateM(mkSbox);
		`elsif sbox2
			Vector#(16, Sbox) sboxes <- replicateM(mkSbox2);
		`endif

		KeyGen_ kg <- mkKeyGen(sboxes[0]);
		GenRound#(16) dr <- mkGenRound(sboxes);


		rule initial_xor(rg_state == Init_xor);
			let key1 <- kg.getKey(maxround);

			col0 <= col0 ^ key1[127:96];
			col1 <= col1 ^ key1[95:64];
			col2 <= col2 ^ key1[63:32];
			col3 <= col3 ^ key1[31:0];

			if (decrypt) begin
				rg_state <= Wait;
				kg.reqKey(maxround-1);
			end
			else begin
				dr.roundIn(col0,col1,col2,col3, False, decrypt, key1);
				kg.reqKey(2);
				rg_state <= Encode;
			end
		endrule

		rule rl_temp(rg_state == Wait);
			let key1 <- kg.getKey(maxround-1);
			dr.roundIn(col0 ,col1,col2,col3, True, decrypt, key1);
			rg_state <= Encode;
			kg.reqKey(maxround-2);
		endrule

		rule encode(rg_state==Encode);
			let getKeynum = counter;
			if (decrypt) getKeynum = (maxround) - counter;
			let lv_key <- kg.getKey(getKeynum);
		
			if (!decrypt) begin
				if (counter == maxround) begin
					rg_state<= Round_Done;
					ciphertext <= dr.roundOut();
					_ready <= True;
				end
				else begin
					kg.reqKey(counter+2);

					if (counter == maxround-1)
						dr.roundIn(dr.roundOut[127:96],dr.roundOut[95:64], dr.roundOut[63:32], dr.roundOut[31:0], True, decrypt, lv_key);
					else
						dr.roundIn(dr.roundOut[127:96],dr.roundOut[95:64], dr.roundOut[63:32], dr.roundOut[31:0], False, decrypt, lv_key);
				end
			end
			else begin
				if (counter == maxround) begin
					rg_state<= Round_Done;
					ciphertext <= dr.roundOut();
					_ready <= True;
				end
				else begin
					let  getKeynum3 = (maxround) - counter-2;
					kg.reqKey(getKeynum3);
					dr.roundIn(dr.roundOut[127:96],dr.roundOut[95:64], dr.roundOut[63:32], dr.roundOut[31:0], False, decrypt, lv_key);
				end
			end
			counter <= counter + 1;
		endrule

		rule rl_gen_keys(rg_state2==GenKeys);
			if (kg.isRoundKeyReady(maxround)) begin
				rg_state2 <= Idle;
			end
		endrule


		method Action encrypt (Bit#(128) plaintexttt, Bit#(256) keyyy, Bool decrypttt, Aes_key_type keyylenn) if ((rg_state == Idle) && (rg_state2 == Idle));
			counter <= 1;
			decrypt <= decrypttt;
			Bit#(128) _key_ = keyyy[127:0];

			if (!decrypttt) begin
				col0 <= plaintexttt[127:96] ^ _key_[127:96]; col2 <= plaintexttt[63:32] ^ _key_[63:32];
				col1 <= plaintexttt[95:64] ^ _key_[95:64]; col3 <= plaintexttt[31:0] ^ _key_[31:0];
				rg_state <= Init_xor;
				kg.reqKey(1);
			end
			else begin
				col0 <= plaintexttt[127:96]; col2 <= plaintexttt[63:32];
				col1 <= plaintexttt[95:64]; col3 <= plaintexttt[31:0];
				rg_state <= Init_xor;
				kg.reqKey(maxround);
			end

			plaintext <= plaintexttt;
		endmethod

		method Action genKeys (Bit#(256) keyyy, Aes_key_type keyylenn) if (rg_state == Idle);
			Bit#(128) _key_ = keyyy[127:0];
			case(keyylenn)
				Bit128 : maxround <=10;
				Bit192 : begin
					maxround <=12;
					_key_ = keyyy[191:64];
				end
				Bit256 : begin
					maxround <=14;
					_key_ = keyyy[255:128];
				end
			endcase

			kg.start(keyyy[255:224], keyyy[223:192], keyyy[191:160], keyyy[159:128],keyyy[127:96], keyyy[95:64], keyyy[63:32], keyyy[31:0], keyylenn);
			rg_state2 <= GenKeys;
		endmethod

		method ActionValue#(Bit#(128)) ret() if (rg_state==Round_Done);
			rg_state <= Idle;
			_ready<= False;
			return ciphertext;
		endmethod

		method Bool outp_ready();
			return _ready;
		endmethod

		method Bool can_take_inp();
			return (rg_state==Idle);
		endmethod
	endmodule
endpackage
