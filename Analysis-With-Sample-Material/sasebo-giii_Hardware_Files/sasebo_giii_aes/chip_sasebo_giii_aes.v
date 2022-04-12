/*-------------------------------------------------------------------------
 AES cryptographic module for FPGA on SASEBO-GIII
 
 File name   : chip_sasebo_giii_aes.v
 Version     : 1.0
 Created     : APR/02/2012
 Last update : APR/25/2013
 Desgined by : Toshihiro Katashita
 
 
 Copyright (C) 2012,2013 AIST
 
 By using this code, you agree to the following terms and conditions.
 
 This code is copyrighted by AIST ("us").
 
 Permission is hereby granted to copy, reproduce, redistribute or
 otherwise use this code as long as: there is no monetary profit gained
 specifically from the use or reproduction of this code, it is not sold,
 rented, traded or otherwise marketed, and this copyright notice is
 included prominently in any copy made.
 
 We shall not be liable for any damages, including without limitation
 direct, indirect, incidental, special or consequential damages arising
 from the use of this code.
 
 When you publish any results arising from the use of this code, we will
 appreciate it if you can cite our paper.
 (http://www.risec.aist.go.jp/project/sasebo/)
 -------------------------------------------------------------------------*/


//================================================ CHIP_SASEBO_GIII_AES
module CHIP_SASEBO_GIII_AES
  (// Local bus for GII
   lbus_di_a, lbus_do, lbus_wrn, lbus_rdn,
   lbus_clkn, lbus_rstn,

   // GPIO and LED
   gpio_startn, gpio_endn, gpio_exec, led,

   // Clock OSC
   osc_en_b);
   
   //------------------------------------------------
   // Local bus for GII
   input [15:0]  lbus_di_a;
   output [15:0] lbus_do;
   input         lbus_wrn, lbus_rdn;
   input         lbus_clkn, lbus_rstn;

   // GPIO and LED
   output        gpio_startn, gpio_endn, gpio_exec;
   output [9:0]  led;

   // Clock OSC
   output        osc_en_b;

   //------------------------------------------------
   // Internal clock
   wire         clk, rst;

   // Local bus
   reg [15:0]   lbus_a, lbus_di;
   
   // Block cipher
   wire [127:0] blk_kin, blk_din, blk_dout;
   wire         blk_krdy, blk_kvld, blk_drdy, blk_dvld;
   wire         blk_encdec, blk_en, blk_rstn, blk_busy;
   reg          blk_drdy_delay;
  
   //------------------------------------------------
   assign led[0] = rst;
   assign led[1] = lbus_rstn;
   assign led[2] = 1'b0;
   assign led[3] = blk_rstn;
   assign led[4] = blk_encdec;
   assign led[5] = blk_krdy;
   assign led[6] = blk_kvld;
   assign led[7] = 1'b0;
   assign led[8] = blk_dvld;
   assign led[9] = blk_busy;

   assign osc_en_b = 1'b0;
   //------------------------------------------------
   always @(posedge clk) if (lbus_wrn)  lbus_a  <= lbus_di_a;
   always @(posedge clk) if (~lbus_wrn) lbus_di <= lbus_di_a;

   LBUS_IF lbus_if
     (.lbus_a(lbus_a), .lbus_di(lbus_di), .lbus_do(lbus_do),
      .lbus_wr(lbus_wrn), .lbus_rd(lbus_rdn),
      .blk_kin(blk_kin), .blk_din(blk_din), .blk_dout(blk_dout),
      .blk_krdy(blk_krdy), .blk_drdy(blk_drdy), 
      .blk_kvld(blk_kvld), .blk_dvld(blk_dvld),
      .blk_encdec(blk_encdec), .blk_en(blk_en), .blk_rstn(blk_rstn),
      .clk(clk), .rst(rst));

   //------------------------------------------------
   assign gpio_startn = ~blk_drdy;
   assign gpio_endn   = 1'b0; //~blk_dvld;
   assign gpio_exec   = 1'b0; //blk_busy;

   always @(posedge clk) blk_drdy_delay <= blk_drdy;
	
	/// Modified by Surya
   outer AES_Composite_enc
     (.Kin(blk_kin), .Din(blk_din), .Dout(blk_dout),
      .Krdy(blk_krdy), .Drdy(blk_drdy_delay), .Kvld(blk_kvld), .Dvld(blk_dvld),
      .EN(blk_en), .BSY(blk_busy),
      .CLK(clk), .RSTn(blk_rstn));
	////
   //------------------------------------------------   
   MK_CLKRST mk_clkrst (.clkin(lbus_clkn), .rstnin(lbus_rstn),
                        .clk(clk), .rst(rst));
		
endmodule // CHIP_SASEBO_GIII_AES


   
//================================================ MK_CLKRST
module MK_CLKRST (clkin, rstnin, clk, rst);
   //synthesis attribute keep_hierarchy of MK_CLKRST is no;
   
   //------------------------------------------------
   input  clkin, rstnin;
   output clk, rst;
   
   //------------------------------------------------
   wire   refclk;
//   wire   clk_dcm, locked;

   //------------------------------------------------ clock
   // Commented by Arsath on 31 May 17
   //IBUFG u10 (.I(clkin), .O(refclk)); 

/*
   DCM_BASE u11 (.CLKIN(refclk), .CLKFB(clk), .RST(~rstnin),
                 .CLK0(clk_dcm),     .CLKDV(),
                 .CLK90(), .CLK180(), .CLK270(),
                 .CLK2X(), .CLK2X180(), .CLKFX(), .CLKFX180(),
                 .LOCKED(locked));
   BUFG  u12 (.I(clk_dcm),   .O(clk));
*/
	// Commented by Arsath on 31 May 17
   //BUFG  u12 (.I(refclk),   .O(clk));

   //------------------------------------------------ reset
   MK_RST u20 (.locked(rstnin), .clk(clk), .rst(rst));
endmodule // MK_CLKRST



//================================================ MK_RST
module MK_RST (locked, clk, rst);
   //synthesis attribute keep_hierarchy of MK_RST is no;
   
   //------------------------------------------------
   input  locked, clk;
   output rst;

   //------------------------------------------------
   reg [15:0] cnt;
   
   //------------------------------------------------
   always @(posedge clk or negedge locked) 
     if (~locked)    cnt <= 16'h0;
     else if (~&cnt) cnt <= cnt + 16'h1;

   assign rst = ~&cnt;
endmodule // MK_RST
