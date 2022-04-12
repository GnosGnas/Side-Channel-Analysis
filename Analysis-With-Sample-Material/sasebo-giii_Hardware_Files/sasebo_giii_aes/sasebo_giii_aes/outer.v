`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:35:53 11/26/2021 
// Design Name: 
// Module Name:    outer 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

module outer (Kin, Din, Dout, Krdy, Drdy, Kvld, Dvld, EN, BSY, CLK, RSTn);

    input  [127:0] Kin;  // Key input
    input  [127:0] Din;  // Data input
    output [127:0] Dout; // Data output
    input          Krdy; // Key input ready
    input          Drdy; // Data input ready
    output    Kvld; // Data output valid ---remove reg for original aes_composite
    output         Dvld; // Data output valid

    input          EN;   // AES circuit enable
    output         BSY;  // Busy signal
    input          CLK;  // System clock
    input          RSTn; // Reset (Low active)
	 /*
	 reg [127:0] dr;
	 
	 always@(posedge CLK) begin
		if(!RSTn) begin
			dr <= 0;
			Kvld <= 0;
		end
		else begin
			dr <= dr+1;
			Kvld <= 1;
		end
	end
		
		assign Dout = dr;
		assign BSY = 0;
		assign Dvld = 1;
		*/

    AES_Composite_enc AES_Composite_enc  // AES MODULE TO BE INSTANTIATED HERE
     (.Kin(blk_kin), .Din(blk_din), .Dout(blk_dout),
      .Krdy(blk_krdy), .Drdy(blk_drdy_delay), .Kvld(blk_kvld), .Dvld(blk_dvld),
       .EN(blk_en), .BSY(blk_busy),
      .CLK(clk), .RSTn(blk_rstn));
/*

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

        if (!RSTn) Kvld <= 0; //////////////////////////////////////////////
        else if (EN) Kvld <= Krdy;      
    end

    wire temp1, temp2, temp3, temp4;

    wire aes_$RDY_encrypt, aes_$encrypt_decrypttt, aes_$EN_encrypt;
    wire aes_$EN_ret;
    wire [1:0] aes_$encrypt_keyylenn;
    wire [255:0] aes_$encrypt_keyyy;
    assign aes_$encrypt_decrypttt = 1'b0; //confirm
    assign aes_$encrypt_keyylenn = 2'd0;
    assign BSY = ~aes_$RDY_encrypt;
    assign aes_$encrypt_keyyy = {128'b0, key};
    assign aes_$EN_encrypt = en_valid & Drdy; //????
    assign aes_$EN_ret = Dvld;

    // Drdy, sel role unclear!
    // Kvld has no role?
    

    // submodule aes_
    mkAES aes_(.CLK(CLK), //CLK
	     .RST_N(RSTn), //RSTn
	     .encrypt_decrypttt(aes_$encrypt_decrypttt),
	     .encrypt_keyylenn(aes_$encrypt_keyylenn), //2'd0
	     .encrypt_keyyy(aes_$encrypt_keyyy), //128'b0, Kin
	     .encrypt_plaintexttt(Din), //Din
         .RDY_encrypt(aes_$RDY_encrypt), //!BSY
	     .ret(Dout), //Dout
	     .RDY_ret(Dvld),  //Dvld
	     .EN_ret(aes_$EN_ret), //asign it to dvld
	     .EN_encrypt(aes_$EN_encrypt), //Krdy?
	     .outp_ready(temp1),
	     .RDY_outp_ready(temp2),
	     .can_take_inp(temp3),
	     .RDY_can_take_inp(temp4));*/
		  
 endmodule