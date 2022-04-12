/*
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% MINI PROJECT: Side-Channel Analysis on Shakti's AES Accelerator %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

Module name(s): mkSbox
Source of code: https://gitlab.com/shaktiproject/cores/crypto-box/-/tree/master/aes/hw/aes_registers/src

Description: Module for normal S-box and inverse S-box. It uses a lookup-table and does not rely on composite theory.

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

package sbox1;
	interface Sbox;
		method ActionValue#(Bit#(8)) getbyte(Bit #(8) byte_in, Bool decrypt_);
	endinterface

	module mkSbox(Sbox);
		InvSbox isb <- mkInvSbox;

		method ActionValue#(Bit#(8)) getbyte(Bit #(8) byte_in, Bool decrypt_);
			Bit #(8) byte_out = 0;
			case(byte_in)
				8'b00000000: byte_out = 8'h63;
				8'b00000001: byte_out = 8'h7c;
				8'b00000010: byte_out = 8'h77;
				8'b00000011: byte_out = 8'h7b;
				8'b00000100: byte_out = 8'hf2;
				8'b00000101: byte_out = 8'h6b;
				8'b00000110: byte_out = 8'h6f;
				8'b00000111: byte_out = 8'hc5;
				8'b00001000: byte_out = 8'h30;
				8'b00001001: byte_out = 8'h01;
				8'b00001010: byte_out = 8'h67;
				8'b00001011: byte_out = 8'h2b;
				8'b00001100: byte_out = 8'hfe;
				8'b00001101: byte_out = 8'hd7;
				8'b00001110: byte_out = 8'hab;
				8'b00001111: byte_out = 8'h76;
				8'b00010000: byte_out = 8'hca;
				8'b00010001: byte_out = 8'h82;
				8'b00010010: byte_out = 8'hc9;
				8'b00010011: byte_out = 8'h7d;
				8'b00010100: byte_out = 8'hfa;
				8'b00010101: byte_out = 8'h59;
				8'b00010110: byte_out = 8'h47;
				8'b00010111: byte_out = 8'hf0;
				8'b00011000: byte_out = 8'had;
				8'b00011001: byte_out = 8'hd4;
				8'b00011010: byte_out = 8'ha2;
				8'b00011011: byte_out = 8'haf;
				8'b00011100: byte_out = 8'h9c;
				8'b00011101: byte_out = 8'ha4;
				8'b00011110: byte_out = 8'h72;
				8'b00011111: byte_out = 8'hc0;
				8'b00100000: byte_out = 8'hb7;
				8'b00100001: byte_out = 8'hfd;
				8'b00100010: byte_out = 8'h93;
				8'b00100011: byte_out = 8'h26;
				8'b00100100: byte_out = 8'h36;
				8'b00100101: byte_out = 8'h3f;
				8'b00100110: byte_out = 8'hf7;
				8'b00100111: byte_out = 8'hcc;
				8'b00101000: byte_out = 8'h34;
				8'b00101001: byte_out = 8'ha5;
				8'b00101010: byte_out = 8'he5;
				8'b00101011: byte_out = 8'hf1;
				8'b00101100: byte_out = 8'h71;
				8'b00101101: byte_out = 8'hd8;
				8'b00101110: byte_out = 8'h31;
				8'b00101111: byte_out = 8'h15;
				8'b00110000: byte_out = 8'h04;
				8'b00110001: byte_out = 8'hc7;
				8'b00110010: byte_out = 8'h23;
				8'b00110011: byte_out = 8'hc3;
				8'b00110100: byte_out = 8'h18;
				8'b00110101: byte_out = 8'h96;				
				8'b00110110: byte_out = 8'h05;
				8'b00110111: byte_out = 8'h9a;
				8'b00111000: byte_out = 8'h07;
				8'b00111001: byte_out = 8'h12;
				8'b00111010: byte_out = 8'h80;
				8'b00111011: byte_out = 8'he2;
				8'b00111100: byte_out = 8'heb;
				8'b00111101: byte_out = 8'h27;
				8'b00111110: byte_out = 8'hb2;
				8'b00111111: byte_out = 8'h75;
				8'b01000000: byte_out = 8'h09;
				8'b01000001: byte_out = 8'h83;
				8'b01000010: byte_out = 8'h2c;
				8'b01000011: byte_out = 8'h1a;
				8'b01000100: byte_out = 8'h1b;
				8'b01000101: byte_out = 8'h6e;
				8'b01000110: byte_out = 8'h5a;
				8'b01000111: byte_out = 8'ha0;
				8'b01001000: byte_out = 8'h52;
				8'b01001001: byte_out = 8'h3b;
				8'b01001010: byte_out = 8'hd6;
				8'b01001011: byte_out = 8'hb3;
				8'b01001100: byte_out = 8'h29;
				8'b01001101: byte_out = 8'he3;
				8'b01001110: byte_out = 8'h2f;
				8'b01001111: byte_out = 8'h84;
				8'b01010000: byte_out = 8'h53;
				8'b01010001: byte_out = 8'hd1;
				8'b01010010: byte_out = 8'h00;
				8'b01010011: byte_out = 8'hed;
				8'b01010100: byte_out = 8'h20;
				8'b01010101: byte_out = 8'hfc;
				8'b01010110: byte_out = 8'hb1;
				8'b01010111: byte_out = 8'h5b;
				8'b01011000: byte_out = 8'h6a;
				8'b01011001: byte_out = 8'hcb;
				8'b01011010: byte_out = 8'hbe;
				8'b01011011: byte_out = 8'h39;
				8'b01011100: byte_out = 8'h4a;
				8'b01011101: byte_out = 8'h4c;
				8'b01011110: byte_out = 8'h58;
				8'b01011111: byte_out = 8'hcf;
				8'b01100000: byte_out = 8'hd0;
				8'b01100001: byte_out = 8'hef;
				8'b01100010: byte_out = 8'haa;
				8'b01100011: byte_out = 8'hfb;
				8'b01100100: byte_out = 8'h43;
				8'b01100101: byte_out = 8'h4d;
				8'b01100110: byte_out = 8'h33;
				8'b01100111: byte_out = 8'h85;
				8'b01101000: byte_out = 8'h45;
				8'b01101001: byte_out = 8'hf9;
				8'b01101010: byte_out = 8'h02;
				8'b01101011: byte_out = 8'h7f;
				8'b01101100: byte_out = 8'h50;
				8'b01101101: byte_out = 8'h3c;
				8'b01101110: byte_out = 8'h9f;
				8'b01101111: byte_out = 8'ha8;
				8'b01110000: byte_out = 8'h51;
				8'b01110001: byte_out = 8'ha3;
				8'b01110010: byte_out = 8'h40;
				8'b01110011: byte_out = 8'h8f;
				8'b01110100: byte_out = 8'h92;
				8'b01110101: byte_out = 8'h9d;
				8'b01110110: byte_out = 8'h38;
				8'b01110111: byte_out = 8'hf5;
				8'b01111000: byte_out = 8'hbc;
				8'b01111001: byte_out = 8'hb6;
				8'b01111010: byte_out = 8'hda;
				8'b01111011: byte_out = 8'h21;
				8'b01111100: byte_out = 8'h10;
				8'b01111101: byte_out = 8'hff;
				8'b01111110: byte_out = 8'hf3;
				8'b01111111: byte_out = 8'hd2;
				8'b10000000: byte_out = 8'hcd;
				8'b10000001: byte_out = 8'h0c;
				8'b10000010: byte_out = 8'h13;
				8'b10000011: byte_out = 8'hec;
				8'b10000100: byte_out = 8'h5f;
				8'b10000101: byte_out = 8'h97;
				8'b10000110: byte_out = 8'h44;
				8'b10000111: byte_out = 8'h17;
				8'b10001000: byte_out = 8'hc4;
				8'b10001001: byte_out = 8'ha7;
				8'b10001010: byte_out = 8'h7e;
				8'b10001011: byte_out = 8'h3d;
				8'b10001100: byte_out = 8'h64;
				8'b10001101: byte_out = 8'h5d;
				8'b10001110: byte_out = 8'h19;
				8'b10001111: byte_out = 8'h73;
				8'b10010000: byte_out = 8'h60;
				8'b10010001: byte_out = 8'h81;
				8'b10010010: byte_out = 8'h4f;
				8'b10010011: byte_out = 8'hdc;
				8'b10010100: byte_out = 8'h22;
				8'b10010101: byte_out = 8'h2a;
				8'b10010110: byte_out = 8'h90;
				8'b10010111: byte_out = 8'h88;
				8'b10011000: byte_out = 8'h46;
				8'b10011001: byte_out = 8'hee;
				8'b10011010: byte_out = 8'hb8;
				8'b10011011: byte_out = 8'h14;
				8'b10011100: byte_out = 8'hde;
				8'b10011101: byte_out = 8'h5e;
				8'b10011110: byte_out = 8'h0b;
				8'b10011111: byte_out = 8'hdb;
				8'b10100000: byte_out = 8'he0;
				8'b10100001: byte_out = 8'h32;
				8'b10100010: byte_out = 8'h3a;
				8'b10100011: byte_out = 8'h0a;
				8'b10100100: byte_out = 8'h49;
				8'b10100101: byte_out = 8'h06;
				8'b10100110: byte_out = 8'h24;
				8'b10100111: byte_out = 8'h5c;
				8'b10101000: byte_out = 8'hc2;
				8'b10101001: byte_out = 8'hd3;
				8'b10101010: byte_out = 8'hac;
				8'b10101011: byte_out = 8'h62;
				8'b10101100: byte_out = 8'h91;
				8'b10101101: byte_out = 8'h95;
				8'b10101110: byte_out = 8'he4;
				8'b10101111: byte_out = 8'h79;
				8'b10110000: byte_out = 8'he7;
				8'b10110001: byte_out = 8'hc8;
				8'b10110010: byte_out = 8'h37;
				8'b10110011: byte_out = 8'h6d;
				8'b10110100: byte_out = 8'h8d;
				8'b10110101: byte_out = 8'hd5;
				8'b10110110: byte_out = 8'h4e;
				8'b10110111: byte_out = 8'ha9;
				8'b10111000: byte_out = 8'h6c;
				8'b10111001: byte_out = 8'h56;
				8'b10111010: byte_out = 8'hf4;
				8'b10111011: byte_out = 8'hea;
				8'b10111100: byte_out = 8'h65;
				8'b10111101: byte_out = 8'h7a;
				8'b10111110: byte_out = 8'hae;
				8'b10111111: byte_out = 8'h08;
				8'b11000000: byte_out = 8'hba;
				8'b11000001: byte_out = 8'h78;
				8'b11000010: byte_out = 8'h25;
				8'b11000011: byte_out = 8'h2e;
				8'b11000100: byte_out = 8'h1c;
				8'b11000101: byte_out = 8'ha6;
				8'b11000110: byte_out = 8'hb4;
				8'b11000111: byte_out = 8'hc6;
				8'b11001000: byte_out = 8'he8;
				8'b11001001: byte_out = 8'hdd;
				8'b11001010: byte_out = 8'h74;
				8'b11001011: byte_out = 8'h1f;
				8'b11001100: byte_out = 8'h4b;
				8'b11001101: byte_out = 8'hbd;
				8'b11001110: byte_out = 8'h8b;
				8'b11001111: byte_out = 8'h8a;
				8'b11010000: byte_out = 8'h70;
				8'b11010001: byte_out = 8'h3e;
				8'b11010010: byte_out = 8'hb5;
				8'b11010011: byte_out = 8'h66;
				8'b11010100: byte_out = 8'h48;
				8'b11010101: byte_out = 8'h03;
				8'b11010110: byte_out = 8'hf6;
				8'b11010111: byte_out = 8'h0e;
				8'b11011000: byte_out = 8'h61;
				8'b11011001: byte_out = 8'h35;
				8'b11011010: byte_out = 8'h57;
				8'b11011011: byte_out = 8'hb9;
				8'b11011100: byte_out = 8'h86;
				8'b11011101: byte_out = 8'hc1;
				8'b11011110: byte_out = 8'h1d;
				8'b11011111: byte_out = 8'h9e;
				8'b11100000: byte_out = 8'he1;
				8'b11100001: byte_out = 8'hf8;
				8'b11100010: byte_out = 8'h98;
				8'b11100011: byte_out = 8'h11;
				8'b11100100: byte_out = 8'h69;
				8'b11100101: byte_out = 8'hd9;
				8'b11100110: byte_out = 8'h8e;
				8'b11100111: byte_out = 8'h94;
				8'b11101000: byte_out = 8'h9b;
				8'b11101001: byte_out = 8'h1e;
				8'b11101010: byte_out = 8'h87;
				8'b11101011: byte_out = 8'he9;
				8'b11101100: byte_out = 8'hce;
				8'b11101101: byte_out = 8'h55;
				8'b11101110: byte_out = 8'h28;
				8'b11101111: byte_out = 8'hdf;
				8'b11110000: byte_out = 8'h8c;
				8'b11110001: byte_out = 8'ha1;
				8'b11110010: byte_out = 8'h89;
				8'b11110011: byte_out = 8'h0d;
				8'b11110100: byte_out = 8'hbf;
				8'b11110101: byte_out = 8'he6;
				8'b11110110: byte_out = 8'h42;
				8'b11110111: byte_out = 8'h68;
				8'b11111000: byte_out = 8'h41;
				8'b11111001: byte_out = 8'h99;
				8'b11111010: byte_out = 8'h2d;
				8'b11111011: byte_out = 8'h0f;
				8'b11111100: byte_out = 8'hb0;
				8'b11111101: byte_out = 8'h54;
				8'b11111110: byte_out = 8'hbb;
				8'b11111111: byte_out = 8'h16;
			endcase
			if (decrypt_) return isb.getbyte(byte_in);
			else return byte_out;
		endmethod
	endmodule
	
	interface InvSbox;
		method Bit#(8) getbyte(Bit#(8) addr);
	endinterface

	module mkInvSbox(InvSbox);
		method Bit#(8) getbyte(Bit#(8) addr);
			Bit#(8) byte_out = 0;
			case (addr)
			0: byte_out = 8'h52;
			1: byte_out = 8'h09;
			2: byte_out = 8'h6a;
			3: byte_out = 8'hd5;
			4: byte_out = 8'h30;
			5: byte_out = 8'h36;
			6: byte_out = 8'ha5;
			7: byte_out = 8'h38;
			8: byte_out = 8'hbf;
			9: byte_out = 8'h40;
			10: byte_out = 8'ha3;
			11: byte_out = 8'h9e;
			12: byte_out = 8'h81;
			13: byte_out = 8'hf3;
			14: byte_out = 8'hd7;
			15: byte_out = 8'hfb;
			16: byte_out = 8'h7c;
			17: byte_out = 8'he3;
			18: byte_out = 8'h39;
			19: byte_out = 8'h82;
			20: byte_out = 8'h9b;
			21: byte_out = 8'h2f;
			22: byte_out = 8'hff;
			23: byte_out = 8'h87;
			24: byte_out = 8'h34;
			25: byte_out = 8'h8e;
			26: byte_out = 8'h43;
			27: byte_out = 8'h44;
			28: byte_out = 8'hc4;
			29: byte_out = 8'hde;
			30: byte_out = 8'he9;
			31: byte_out = 8'hcb;
			32: byte_out = 8'h54;
			33: byte_out = 8'h7b;
			34: byte_out = 8'h94;
			35: byte_out = 8'h32;
			36: byte_out = 8'ha6;
			37: byte_out = 8'hc2;
			38: byte_out = 8'h23;
			39: byte_out = 8'h3d;
			40: byte_out = 8'hee;
			41: byte_out = 8'h4c;
			42: byte_out = 8'h95;
			43: byte_out = 8'h0b;
			44: byte_out = 8'h42;
			45: byte_out = 8'hfa;
			46: byte_out = 8'hc3;
			47: byte_out = 8'h4e;
			48: byte_out = 8'h08;
			49: byte_out = 8'h2e;
			50: byte_out = 8'ha1;
			51: byte_out = 8'h66;
			52: byte_out = 8'h28;
			53: byte_out = 8'hd9;
			54: byte_out = 8'h24;
			55: byte_out = 8'hb2;
			56: byte_out = 8'h76;
			57: byte_out = 8'h5b;
			58: byte_out = 8'ha2;
			59: byte_out = 8'h49;
			60: byte_out = 8'h6d;
			61: byte_out = 8'h8b;
			62: byte_out = 8'hd1;
			63: byte_out = 8'h25;
			64: byte_out = 8'h72;
			65: byte_out = 8'hf8;
			66: byte_out = 8'hf6;
			67: byte_out = 8'h64;
			68: byte_out = 8'h86;
			69: byte_out = 8'h68;
			70: byte_out = 8'h98;
			71: byte_out = 8'h16;
			72: byte_out = 8'hd4;
			73: byte_out = 8'ha4;
			74: byte_out = 8'h5c;
			75: byte_out = 8'hcc;
			76: byte_out = 8'h5d;
			77: byte_out = 8'h65;
			78: byte_out = 8'hb6;
			79: byte_out = 8'h92;
			80: byte_out = 8'h6c;
			81: byte_out = 8'h70;
			82: byte_out = 8'h48;
			83: byte_out = 8'h50;
			84: byte_out = 8'hfd;
			85: byte_out = 8'hed;
			86: byte_out = 8'hb9;
			87: byte_out = 8'hda;
			88: byte_out = 8'h5e;
			89: byte_out = 8'h15;
			90: byte_out = 8'h46;
			91: byte_out = 8'h57;
			92: byte_out = 8'ha7;
			93: byte_out = 8'h8d;
			94: byte_out = 8'h9d;
			95: byte_out = 8'h84;
			96: byte_out = 8'h90;
			97: byte_out = 8'hd8;
			98: byte_out = 8'hab;
			99: byte_out = 8'h00;
			100: byte_out = 8'h8c;
			101: byte_out = 8'hbc;
			102: byte_out = 8'hd3;
			103: byte_out = 8'h0a;
			104: byte_out = 8'hf7;
			105: byte_out = 8'he4;
			106: byte_out = 8'h58;
			107: byte_out = 8'h05;
			108: byte_out = 8'hb8;
			109: byte_out = 8'hb3;
			110: byte_out = 8'h45;
			111: byte_out = 8'h06;
			112: byte_out = 8'hd0;
			113: byte_out = 8'h2c;
			114: byte_out = 8'h1e;
			115: byte_out = 8'h8f;
			116: byte_out = 8'hca;
			117: byte_out = 8'h3f;
			118: byte_out = 8'h0f;
			119: byte_out = 8'h02;
			120: byte_out = 8'hc1;
			121: byte_out = 8'haf;
			122: byte_out = 8'hbd;
			123: byte_out = 8'h03;
			124: byte_out = 8'h01;
			125: byte_out = 8'h13;
			126: byte_out = 8'h8a;
			127: byte_out = 8'h6b;
			128: byte_out = 8'h3a;
			129: byte_out = 8'h91;
			130: byte_out = 8'h11;
			131: byte_out = 8'h41;
			132: byte_out = 8'h4f;
			133: byte_out = 8'h67;
			134: byte_out = 8'hdc;
			135: byte_out = 8'hea;
			136: byte_out = 8'h97;
			137: byte_out = 8'hf2;
			138: byte_out = 8'hcf;
			139: byte_out = 8'hce;
			140: byte_out = 8'hf0;
			141: byte_out = 8'hb4;
			142: byte_out = 8'he6;
			143: byte_out = 8'h73;
			144: byte_out = 8'h96;
			145: byte_out = 8'hac;
			146: byte_out = 8'h74;
			147: byte_out = 8'h22;
			148: byte_out = 8'he7;
			149: byte_out = 8'had;
			150: byte_out = 8'h35;
			151: byte_out = 8'h85;
			152: byte_out = 8'he2;
			153: byte_out = 8'hf9;
			154: byte_out = 8'h37;
			155: byte_out = 8'he8;
			156: byte_out = 8'h1c;
			157: byte_out = 8'h75;
			158: byte_out = 8'hdf;
			159: byte_out = 8'h6e;
			160: byte_out = 8'h47;
			161: byte_out = 8'hf1;
			162: byte_out = 8'h1a;
			163: byte_out = 8'h71;
			164: byte_out = 8'h1d;
			165: byte_out = 8'h29;
			166: byte_out = 8'hc5;
			167: byte_out = 8'h89;
			168: byte_out = 8'h6f;
			169: byte_out = 8'hb7;
			170: byte_out = 8'h62;
			171: byte_out = 8'h0e;
			172: byte_out = 8'haa;
			173: byte_out = 8'h18;
			174: byte_out = 8'hbe;
			175: byte_out = 8'h1b;
			176: byte_out = 8'hfc;
			177: byte_out = 8'h56;
			178: byte_out = 8'h3e;
			179: byte_out = 8'h4b;
			180: byte_out = 8'hc6;
			181: byte_out = 8'hd2;
			182: byte_out = 8'h79;
			183: byte_out = 8'h20;
			184: byte_out = 8'h9a;
			185: byte_out = 8'hdb;
			186: byte_out = 8'hc0;
			187: byte_out = 8'hfe;
			188: byte_out = 8'h78;
			189: byte_out = 8'hcd;
			190: byte_out = 8'h5a;
			191: byte_out = 8'hf4;
			192: byte_out = 8'h1f;
			193: byte_out = 8'hdd;
			194: byte_out = 8'ha8;
			195: byte_out = 8'h33;
			196: byte_out = 8'h88;
			197: byte_out = 8'h07;
			198: byte_out = 8'hc7;
			199: byte_out = 8'h31;
			200: byte_out = 8'hb1;
			201: byte_out = 8'h12;
			202: byte_out = 8'h10;
			203: byte_out = 8'h59;
			204: byte_out = 8'h27;
			205: byte_out = 8'h80;
			206: byte_out = 8'hec;
			207: byte_out = 8'h5f;
			208: byte_out = 8'h60;
			209: byte_out = 8'h51;
			210: byte_out = 8'h7f;
			211: byte_out = 8'ha9;
			212: byte_out = 8'h19;
			213: byte_out = 8'hb5;
			214: byte_out = 8'h4a;
			215: byte_out = 8'h0d;
			216: byte_out = 8'h2d;
			217: byte_out = 8'he5;
			218: byte_out = 8'h7a;
			219: byte_out = 8'h9f;
			220: byte_out = 8'h93;
			221: byte_out = 8'hc9;
			222: byte_out = 8'h9c;
			223: byte_out = 8'hef;
			224: byte_out = 8'ha0;
			225: byte_out = 8'he0;
			226: byte_out = 8'h3b;
			227: byte_out = 8'h4d;
			228: byte_out = 8'hae;
			229: byte_out = 8'h2a;
			230: byte_out = 8'hf5;
			231: byte_out = 8'hb0;
			232: byte_out = 8'hc8;
			233: byte_out = 8'heb;
			234: byte_out = 8'hbb;
			235: byte_out = 8'h3c;
			236: byte_out = 8'h83;
			237: byte_out = 8'h53;
			238: byte_out = 8'h99;
			239: byte_out = 8'h61;
			240: byte_out = 8'h17;
			241: byte_out = 8'h2b;
			242: byte_out = 8'h04;
			243: byte_out = 8'h7e;
			244: byte_out = 8'hba;
			245: byte_out = 8'h77;
			246: byte_out = 8'hd6;
			247: byte_out = 8'h26;
			248: byte_out = 8'he1;
			249: byte_out = 8'h69;
			250: byte_out = 8'h14;
			251: byte_out = 8'h63;
			252: byte_out = 8'h55;
			253: byte_out = 8'h21;
			254: byte_out = 8'h0c;
			255: byte_out = 8'h7d;
			endcase
			return byte_out;
		endmethod
	endmodule
endpackage
