/*
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% MINI PROJECT: Side-Channel Analysis on Shakti's AES Accelerator %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

Module name(s): mkcolByteMix
Source of code: https://gitlab.com/shaktiproject/cores/crypto-box/-/tree/master/aes/hw/aes_registers/src

Description: Module to perform mix column operation in AES encryption

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

package colByteMix;
	interface ColByteMix_;
		method Bit#(8) mix_col(Bit#(8) byte0, Bit#(8) byte1, Bit#(8) byte2, Bit#(8) byte3);
	endinterface

	module mkcolByteMix(ColByteMix_);
		method Bit#(8) mix_col(Bit#(8) byte0, Bit#(8) byte1, Bit#(8) byte2, Bit#(8) byte3);
			Bit#(8) byte_out;
			byte_out[7] = byte0[6] ^ byte1[6] ^ byte1[7] ^ byte2[7] ^ byte3[7];
			byte_out[6] = byte0[5] ^ byte1[5] ^ byte1[6] ^ byte2[6] ^ byte3[6];
			byte_out[5] = byte0[4] ^ byte1[4] ^ byte1[5] ^ byte2[5] ^ byte3[5];
			byte_out[4] = byte0[3] ^ byte0[7] ^ byte1[3] ^ byte1[4] ^ byte1[7] ^ byte2[4] ^ byte3[4];
			byte_out[3] = byte0[2] ^ byte0[7] ^ byte1[2] ^ byte1[3] ^ byte1[7] ^ byte2[3] ^ byte3[3];
			byte_out[2] = byte0[1] ^ byte1[1] ^ byte1[2] ^ byte2[2] ^ byte3[2];
			byte_out[1] = byte0[0] ^ byte0[7] ^ byte1[0] ^ byte1[1] ^ byte1[7] ^ byte2[1] ^ byte3[1];
			byte_out[0] = byte0[7] ^ byte1[7] ^ byte1[0] ^ byte2[0] ^ byte3[0];
			return byte_out;
		endmethod
	endmodule
endpackage
