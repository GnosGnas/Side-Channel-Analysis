`timescale 1ns / 1ps
/*
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% MINI PROJECT: Side-Channel Analysis on Shakti's AES Accelerator %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

Module name(s): outer
Author name: Surya Prasad S (EE19B121)

Description: Please note that this was not tested with the rest of the project. It was made by analysing and comparing both SASEBO's core AES module and Shakti's AES accelerator. In the Top module (chip_sasebo_giii_aes.v) outer was used instead of the AES core (aes_composite_enc.v) with the same ports and they were mapped to Shakti's Normal AES accelerator with composite S-box.

Usage: All modifications required to switch between the two have been mentioned in comments. SASEBO's core module is AES_Composite_enc and the other one is Shakti's core module
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/


module outer (Kin, Din, Dout, Krdy, Drdy, Kvld, Dvld, EN, BSY, CLK, RSTn);

    input  [127:0] Kin;  // Key input
    input  [127:0] Din;  // Data input
    output [127:0] Dout; // Data output
    input          Krdy; // Key input ready
    input          Drdy; // Data input ready
    output reg     Kvld; // Data output valid --- remove reg for AES_Composite_enc module
    output         Dvld; // Data output valid

    input          EN;   // AES circuit enable
    output         BSY;  // Busy signal
    input          CLK;  // System clock
    input          RSTn; // Reset (Low active)
    
	// Uncomment this for SASEBO's core module
    // AES_Composite_enc AES_Composite_enc(Kin, Din, Dout, Krdy, Drdy, Kvld, Dvld, EN, BSY, CLK, RSTn);



	// Uncomment this for Shakti's AES module
    reg [127:0] key;
    reg en_valid;

    always@(posedge CLK) begin
        if (!RSTn) begin
            key <= 128'h0;
            en_valid <= 1'b0;
        end

        else if (EN)
            if (Krdy) begin
                key <= Kin;
                en_valid <= 1'b1;
            end

        if (!RSTn) Kvld <= 0; 						///TO BE VERIFIED
        else if (EN) Kvld <= Krdy;      
    end

    wire temp1, temp2, temp3, temp4;

    wire aes_$RDY_encrypt, aes_$encrypt_decrypttt, aes_$EN_encrypt;
    wire aes_$EN_ret;
    wire [1:0] aes_$encrypt_keyylenn;
    wire [255:0] aes_$encrypt_keyyy;
    assign aes_$encrypt_decrypttt = 1'b0;
    assign aes_$encrypt_keyylenn = 2'd0;
    assign BSY = ~aes_$RDY_encrypt;
    assign aes_$encrypt_keyyy = {128'b0, key}; 		///TO BE VERIFIED
    assign aes_$EN_encrypt = en_valid & Drdy; 		///TO BE VERIFIED
    assign aes_$EN_ret = Dvld;


    // submodule aes_
    mkAES aes_(.CLK(CLK), 							//CLK
	     .RST_N(RSTn),								//RSTn
	     .encrypt_decrypttt(aes_$encrypt_decrypttt),
	     .encrypt_keyylenn(aes_$encrypt_keyylenn),	//2'd0
	     .encrypt_keyyy(aes_$encrypt_keyyy),		//128'b0, Kin
	     .encrypt_plaintexttt(Din),					//Din
         .RDY_encrypt(aes_$RDY_encrypt),			//!BSY
	     .ret(Dout), 								//Dout
	     .RDY_ret(Dvld),							//Dvld
	     .EN_ret(aes_$EN_ret),						//asign it to dvld
	     .EN_encrypt(aes_$EN_encrypt),  			///TO BE VERIFIED - Krdy?
	     .outp_ready(temp1),
	     .RDY_outp_ready(temp2),
	     .can_take_inp(temp3),
	     .RDY_can_take_inp(temp4));
		  
 endmodule
