/*
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% MINI PROJECT: Side-Channel Analysis on Shakti's AES Accelerator %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

Module name(s): mkAES

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

	export Aes_key_type (..) ;
	export aes :: *;

	// Defined types
	typedef enum {
		Idle, Encode, Round_Done, Init_xor, Wait
	} AES_State_type deriving(Bits, Eq, FShow);

	// Interface for AES
	interface AES;
		method Action encrypt(Bit#(128) plaintexttt, Bit#(256) keyyy, Bool decrypttt, Aes_key_type keyylenn);
		method ActionValue#(Bit#(128)) ret();
		method Bool outp_ready();
		method Bool can_take_inp();
	endinterface

	// Module definition
	module mkAES(AES);
		Reg#(Bool) new_round <- mkReg(False), _ready <- mkReg(False), decrypt <- mkReg(False);
		Reg#(Bit#(32)) col0 <- mkReg(32);
		Reg#(Bit#(32)) col1 <- mkReg(32);
		Reg#(Bit#(32)) col2 <- mkReg(32);
		Reg#(Bit#(32)) col3 <- mkReg(32);

		Reg#(Bit#(32)) colout0 <- mkReg(32);
		Reg#(Bit#(32)) colout1 <- mkReg(32);
		Reg#(Bit#(32)) colout2 <- mkReg(32);
		Reg#(Bit#(32)) colout3 <- mkReg(32);
		Reg#(AES_State_type) rg_state <- mkReg(Idle);
		Reg#(Bit#(128)) plaintext <- mkReg(128);
		Reg#(Bit#(128)) ciphertext <- mkReg(128);
		Reg#(Bit#(128)) key <- mkReg(128);

		KeyGen_ kg <- mkKeyGen;
		GenRound dr <- mkGenRound(key);

		Reg#(Bit#(4)) counter <- mkReg(4);
		Reg#(Bit#(4)) maxround <- mkReg(10);
		

		rule decrypt_key((rg_state == Wait) && kg.isRoundKeyReady(maxround) );
			rg_state <= Init_xor;
			let lv_key <- kg.getKey(maxround);
			key <= lv_key;
		endrule

		rule decrypt_initial_xor(rg_state == Init_xor);
			col0 <= col0 ^ key[127:96];
			col1 <= col1 ^ key[95:64];
			col2 <= col2 ^ key[63:32];
			col3 <= col3 ^ key[31:0];
			
			dr.roundIn(col0 ^ key[127:96],col1^key[95:64],col2^key[63:32],col3^key[31:0], True,decrypt);
			
			rg_state <= Encode;
		endrule

		rule encode(rg_state==Encode && !dr.roundDone() && kg.isRoundKeyReady(counter));
			let getKeynum = counter;
			$display($time, "keygened");
			if(decrypt)
				getKeynum = (maxround) - counter;
			let lv_key <- kg.getKey(getKeynum);
			key <= lv_key;
		endrule

		rule done_encoding(rg_state==Encode && dr.roundDone() && !decrypt);
			if(counter == maxround) begin
				rg_state<= Round_Done;
				ciphertext <= dr.roundOut();
				_ready <= True;
			end
			else begin
				if(counter == maxround-1)
					dr.roundIn(dr.roundOut[127:96],dr.roundOut[95:64], dr.roundOut[63:32], dr.roundOut[31:0], True,decrypt);
				else
					dr.roundIn(dr.roundOut[127:96],dr.roundOut[95:64], dr.roundOut[63:32], dr.roundOut[31:0], False,decrypt);

				counter <= counter + 1;
			end
		endrule

		rule done_encoding_decrypt(rg_state==Encode && dr.roundDone() && decrypt);
			if(counter == maxround) begin
				rg_state<= Round_Done;
				ciphertext <= dr.roundOut();
				_ready <= True;
			end
			else begin
				dr.roundIn(dr.roundOut[127:96],dr.roundOut[95:64], dr.roundOut[63:32], dr.roundOut[31:0], False,decrypt);
				counter <= counter + 1;
			end
		endrule


		method Action encrypt(Bit#(128) plaintexttt, Bit#(256) keyyy, Bool decrypttt, Aes_key_type keyylenn) if(rg_state==Idle);
			counter <= 1;
			decrypt <= decrypttt;
			Bit#(128) _key_ = keyyy[127:0];
			$display($time, "encrp");
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
			key <= _key_;

			kg.start(keyyy[255:224], keyyy[223:192], keyyy[191:160], keyyy[159:128],keyyy[127:96], keyyy[95:64], keyyy[63:32], keyyy[31:0], keyylenn);
			if(!decrypttt) begin
				col0 <= plaintexttt[127:96] ^ _key_[127:96]; col2 <= plaintexttt[63:32] ^ _key_[63:32];
				col1 <= plaintexttt[95:64] ^ _key_[95:64]; col3 <= plaintexttt[31:0] ^ _key_[31:0];
				dr.roundIn(plaintexttt[127:96]^_key_[127:96],plaintexttt[95:64]^_key_[95:64],plaintexttt[63:32]^_key_[63:32],plaintexttt[31:0]^_key_[31:0], False,decrypttt);
				rg_state <= Encode;
			end
			else begin
				col0 <= plaintexttt[127:96]; col2 <= plaintexttt[63:32];
				col1 <= plaintexttt[95:64]; col3 <= plaintexttt[31:0];
				rg_state <= Wait;
			end
			plaintext <= plaintexttt;
		endmethod

		method ActionValue#(Bit#(128)) ret() if(rg_state==Round_Done);
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
