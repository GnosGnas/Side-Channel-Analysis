/*-------------------------------------------------------------------------
 FTDI USB controller for FT245RL, FT2232D and FT2232H.
 
 File name   : ctrl_ftdi_usb.v
 Version     : 1.3
 Created     : APR/02/2012
 Last update : APR/11/2012
 Desgined by : Toshihiro Katashita
 
 
 Copyright (C) 2012 AIST
 
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


//================================================ CTRL_FTDI_USB
module CTRL_FTDI_USB
  (// FTDI USB
   usb_d, usb_rdn, usb_wr, usb_rxfn, usb_txen,

   // FIFO control
   wd, we, ful, aful, // FTDI -> FIFO
   rd, re, emp, aemp, // FIFO -> FTDI

   // Clock and reset 
   clk, rst);

   //------------------------------------------------
   // FTDI USB
   inout [7:0]  usb_d;
   output       usb_rdn, usb_wr;
   input        usb_rxfn, usb_txen;

   // FIFO control
   input [7:0]  rd;
   output       re;
   input        emp, aemp;
   output [7:0] wd;
   output       we;
   input        ful, aful;

   // Clock and reset
   input        clk, rst;
   
   //------------------------------------------------
   reg [3:0]    state;
   reg          txen_reg, rxfn_reg;
   reg [7:0]    usb_wd;
   reg          usb_wdt;
   wire [7:0]   usb_rd;
   reg          usb_wr, usb_rdn;
   reg [7:0]    wd;
   reg          we, re;
   wire         rd_busy, wr_busy;
   
   //------------------------------------------------
   parameter [3:0] WAIT0 = 4'h0,
                   IDLE0 = 4'h1,
                   WR0   = 4'h2,
                   WR1   = 4'h3,
                   WR2   = 4'h4,
                   WR3   = 4'h5,
                   WR4   = 4'h6,
                   WR5   = 4'h7,
                   IDLE1 = 4'h8,
                   RD0   = 4'h9,
                   RD1   = 4'hA,
                   RD2   = 4'hB,
                   RD3   = 4'hC,
                   RD4   = 4'hD,
                   RD5   = 4'hE,
                   RD6   = 4'hF;
   
   //------------------------------------------------
   assign rd_busy = emp | (aemp & re);
   assign wr_busy = ful | (aful & we);

   always @(posedge clk or posedge rst) 
     if (rst) txen_reg <= 1;
     else     txen_reg <= usb_txen;
   always @(posedge clk or posedge rst)
     if (rst) rxfn_reg <= 1;
     else     rxfn_reg <= usb_rxfn;

   assign usb_d  = (usb_wdt)? 8'hzz : usb_wd;
   assign usb_rd = usb_d;
   
   //------------------------------------------------
   always @(posedge clk or posedge rst) begin
      if (rst) begin
         state <= WAIT0;
         usb_wd <= 8'h00; usb_wdt <= 1; usb_wr <= 0; usb_rdn <= 1;
         wd <= 8'h00; we <= 0; re <= 0;
      end else 
        case (state)
          //--------
          WAIT0: begin
             if (~rxfn_reg) state <= WAIT0;
             else           state <= IDLE0;
          end

          //-------- write
          IDLE0: begin // IDLE_WR
             if (rd_busy|txen_reg) begin state <= IDLE1; re <= 0; end
             else                  begin state <= WR0;   re <= 1; end
          end
          
          WR0: begin state <= WR1; usb_wr <= 1;  re <= 0;      end
          WR1: begin state <= WR2; usb_wd <= rd; usb_wdt <= 0; end
          WR2: begin state <= WR3; usb_wr <= 0;  end
          WR3: begin state <= WR4; usb_wdt <= 1; end
          WR4: begin state <= WR5;   end
          WR5: begin state <= IDLE0; end
          
          //-------- read
          IDLE1: begin // IDLE_RD
             if (wr_busy|rxfn_reg) begin state <= IDLE0; usb_rdn <= 1; end
             else                  begin state <= RD0;   usb_rdn <= 0; end
          end
          
          RD0: begin state <= RD1; end
          RD1: begin state <= RD2; end
          RD2: begin state <= RD3; wd <= usb_rd; usb_rdn <= 1; end
          RD3: begin state <= RD4; end
          RD4: begin state <= RD5; end
          RD5: begin state <= RD6;   we <= 1; end
          RD6: begin state <= IDLE1; we <= 0; end
        endcase 
   end // always @ (posedge clk or posedge rst)
      
endmodule // CTRL_FTDI_USB
