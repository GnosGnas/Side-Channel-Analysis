/*-------------------------------------------------------------------------
 SASEBO-GIII controller (for FPGA cryptographic module)
 
 File name   : chip_sasebo_giii_ctrl.v
 Version     : 1.0
 Created     : APR/02/2012
 Last update : APR/25/2013
 Desgined by : Toshihiro Katashita
 
 
 Copyright (C) 2012, 2013 AIST
 
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
 appreciate it if you can cite our webpage.
 (http://www.risec.aist.go.jp/project/sasebo/)
 -------------------------------------------------------------------------*/ 

// Cryptographic FPGA clock = 24 MHz / 8 = 3 MHz
`define CLOCK_DIVIDE 8

//================================================ CHIP_SASEBO_GIII_CTRL
module CHIP_SASEBO_GIII_CTRL
  (// USB FT2232H
   usb_d, usb_rxfn, usb_txen, usb_rdn, usb_wr, 
   usb_siwua, usb_rstn,

   // FT2232H ROM
   usb_rom_cs, usb_rom_di, usb_rom_do, usb_rom_sk,
   eeprom_cs,  eeprom_di,  eeprom_do,  eeprom_sk,

   // Local bus for GIII
   lbus_di_a, lbus_do, lbus_wrn, lbus_rdn,
   lbus_clkn, lbus_rstn,

   // SelectMap configuration
   cfg_din, cfg_mosi, cfg_cclk,
   cfg_progn, cfg_initn, cfg_rdwrn, cfg_done,

   // LED, dip switch, clock and reset
   led, /* dipsw, */ clkin, rstnin, osc_en_b);

   //------------------------------------------------
   // USB FT2232D
   inout [7:0]   usb_d;
   input         usb_rxfn, usb_txen;
   output        usb_rdn, usb_wr;
   output        usb_siwua, usb_rstn;

   // FT2232H ROM
   input         usb_rom_cs, usb_rom_di, usb_rom_sk;
   output        usb_rom_do;
   output        eeprom_cs, eeprom_di, eeprom_sk;
   input         eeprom_do;
   
   // Local bus for GIII
   output [15:0] lbus_di_a; // Address and input data
                            //   (Controller -> Cryptographic module)
   input [15:0]  lbus_do;   // Output data 
                            //   (Cryptographic module -> Controller)
   output        lbus_wrn;  // Assert input data
   output        lbus_rdn;  // Assert output data
   output 	 lbus_clkn, lbus_rstn; // Clock and reset

   // SelectMap configuration
   input         cfg_din, cfg_mosi, cfg_cclk;
   input         cfg_progn, cfg_initn, cfg_rdwrn, cfg_done;
   
   // LED, dip switch, clock and reset
   output [9:0]  led;
   //input [3:0]   dipsw;
   input         clkin, rstnin;
   output        osc_en_b;
   
   //------------------------------------------------
   // Internal clock
   wire          clk, rst;

   // Local bus for GII
   wire [15:0]   lbus_a, lbus_di;
   wire          lbus_wrn0, lbus_rdn0;
   reg [15:0]    lbus_di_a;
   reg           lbus_wrn, lbus_rdn;
   
   // FT2232D
   wire [7:0]    usb_wd,                     usb_rd;
   wire          usb_we, usb_ful, usb_aful,  usb_re, usb_emp, usb_aemp;
   
   wire [7:0]    sf_wd,                  sf_rd;
   wire          sf_we, sf_ful, sf_aful, sf_re, sf_emp, sf_aemp;
      
   // etc
   reg [19:0]    cnt;
  
   //------------------------------------------------   
   assign osc_en_b  = 1'b1;

   assign usb_siwua = 1'b0;
   assign usb_rstn  = rstnin;

   assign eeprom_cs  = usb_rom_cs;
   assign eeprom_di  = usb_rom_di;
   assign usb_rom_do = eeprom_do;
   assign eeprom_sk  = usb_rom_sk;

   //------------------------------------------------
   assign led[0] = cnt[19];
   assign led[1] = rst;
   assign led[2] = cfg_done;
   assign led[3] = cfg_initn;
   assign led[4] = cfg_din;
   assign led[5] = cfg_progn;
   assign led[6] = cfg_rdwrn;
   assign led[7] = cfg_mosi;
   assign led[8] = cfg_cclk;
   assign led[9] = rstnin;

   always @(posedge clk or posedge rst) 
     if (rst) cnt <= 20'h0;
     else     cnt <= cnt + 20'h1;

   //------------------------------------------------   
   CTRL_FTDI_USB ctr_ftdi_usb
     (.usb_d(usb_d), .usb_rdn(usb_rdn), .usb_wr(usb_wr),
      .usb_rxfn(usb_rxfn), .usb_txen(usb_txen),
      .wd(usb_wd), .we(usb_we), .ful(usb_ful), .aful(usb_aful),
      .rd(usb_rd), .re(usb_re), .emp(usb_emp), .aemp(usb_aemp),
      .clk(clk), .rst(rst));

   SYNCFIFO_8x31 fifo_rd // PC -> DEVICE 
     (.wd(usb_wd), .we(usb_we), .ful(usb_ful), .aful(usb_aful),
      .rd(sf_rd),  .re(sf_re),  .emp(sf_emp),  .aemp(sf_aemp),
      .cnt(), .clk(clk), .rst(rst));

   SYNCFIFO_8x31 fifo_wr // DEVICE -> PC
     (.wd(sf_wd),  .we(sf_we),  .ful(sf_ful),  .aful(sf_aful),
      .rd(usb_rd), .re(usb_re), .emp(usb_emp), .aemp(usb_aemp),
      .cnt(), .clk(clk), .rst(rst));

   CTRL_LBUS ctrl_lbus
     (.wd(sf_wd), .we(sf_we), .ful(sf_ful), .aful(sf_aful),
      .rd(sf_rd), .re(sf_re), .emp(sf_emp), .aemp(sf_aemp),
      .lbus_a(lbus_a), .lbus_di(lbus_di), .lbus_do(lbus_do),
      .lbus_wrn(lbus_wrn0), .lbus_rdn(lbus_rdn0),
      .clk(clk), .rst(rst));

   always @(posedge clk or posedge rst)
     if (rst)  lbus_wrn <= 1;
     else      lbus_wrn <= lbus_wrn0;

   always @(posedge clk or posedge rst)
     if (rst)  lbus_rdn <= 1;
     else      lbus_rdn <= lbus_rdn0;

   always @(posedge clk)
     if (lbus_wrn0) lbus_di_a <= lbus_a;
     else           lbus_di_a <= lbus_di;
   
   //------------------------------------------------
   MK_CLKRST mk_clkrst  (.clkin(clkin), .rstnin(rstnin), .cfg_done(cfg_done),
                         .clk(clk), .rst(rst));
   
   ODDR2 u0 (.D0(1'b0), .D1(1'b1), .C0(clk), .C1(~clk),
             .Q(lbus_clkn),    .CE(1'b1), .R(1'b0), .S(1'b0));
   assign lbus_rstn = ~rst;

endmodule // CHIP_SASEBO_GIII_CTRL



//================================================ MK_CLKRST
module MK_CLKRST (clkin, rstnin, cfg_done, clk, rst);
   //synthesis attribute keep_hierarchy of MK_CLKRST is no;
   
   //------------------------------------------------
   input  clkin, rstnin, cfg_done;
   output clk, rst;
   
   //------------------------------------------------
   wire   rst_dll;
   wire   refclk;
   wire   clk1x, clk1x_dcm, clkdv_dcm, locked;

   //------------------------------------------------ dll reset
   assign rst_dll = ~rstnin;

   //------------------------------------------------ clock
   IBUFG u10 (.I(clkin), .O(refclk)); 

   DCM_SP #(.CLKIN_PERIOD(41.666),  // Source clock: 24 MHz
            .CLKDV_DIVIDE(`CLOCK_DIVIDE), // 24 / 8 = 3 MHz
            .CLK_FEEDBACK("1X"))
   u11 (.CLKIN(refclk), .CLKFB(clk1x), .RST(rst_dll),
        .PSEN(1'b0), .PSINCDEC (1'b0), .PSCLK(1'b0), .DSSEN(1'b0),
        .CLK0(clk1x_dcm),     .CLKDV(clkdv_dcm),
        .CLK90(), .CLK180(), .CLK270(),
        .CLK2X(), .CLK2X180(), .CLKFX(), .CLKFX180(),
        .STATUS(), .LOCKED(locked), .PSDONE());
   
   BUFG  u12 (.I(clk1x_dcm), .O(clk1x));
   BUFG  u13 (.I(clkdv_dcm), .O(clk));

   //------------------------------------------------ reset
   MK_RST u20 (.locked(locked&rstnin&cfg_done), .clk(clk),  .rst(rst));
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
