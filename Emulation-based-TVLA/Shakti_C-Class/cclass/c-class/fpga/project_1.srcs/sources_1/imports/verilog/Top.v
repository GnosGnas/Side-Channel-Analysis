`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:22:20 02/17/2016 
// Design Name: 
// Module Name:    Top 
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
module Top( 
    input CLK_P,
    input CLK_N,
    input RST_N,
    input sin_in,
    output sout,
    output randset,
    inout gpio0,
    output observe_clock
    ); 
 /*   reg val;
    reg sin_gpio;
    reg sout_gpio;*/
   
 /*   always @(posedge clock) sin_gpio <= sin_in;
    always @(posedge clock) sout_gpio <= sout;
    always @(posedge clock) val <= sout;*/
    wire clock, CLK;
    wire gpio_out, gpio_in, gpio_en; //Vinod
    assign CLK= clock;
    assign observe_clock= clock;
     
mkSoc pc(.CLK(CLK), 
		 .RST_N(rst),
	     //.uart0_coe_modem_input_srx(sin_in),
	     //.uart0_coe_modem_input_cts(0),
	     //.uart0_coe_modem_input_dsr(0),
	     //.uart0_coe_modem_input_ri(0),
	     //.uart0_coe_modem_input_dcd(0),
	     //.uart0_coe_modem_output_stx(sout),
	     .gpio_out(gpio0),
	     // .gpio_out(gpio_out),
	     .gpio_in_inp(gpio_in),
	     .gpio_out_en(gpio_en),  //Vinod
	     .boot_sequence_bootseq(1),
	     .resetpc('h80000000)
	     //.dcache_to_core(randset)
		); 
		
		
		 
  /*IOBUF GPIO0(
              .O(gpio_in),
              .IO(gpio0),
              .I(gpio_out),
              .T(~gpio_en)
             );  //Vinod    
  */            		
// Commented by Arsath -4 Sep 2017			 
clk_wiz_0 cl 
 (   .clk_in1_p(CLK_P),
.clk_in1_n(CLK_N),
  .clk_out1(clock),
  .reset(RST_N),
  .locked(rst)); 
   
   
// Added by Arsath -4 Sep 2017
/*MK_CLKRST mk_clkrst (.clkin(CLK), .rstnin(RST_N),
                        .clk(clock), .rst(rst));*/
  
endmodule






/*
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
   IBUFG u10 (.I(clkin), .O(refclk)); 


   DCM_BASE u11 (.CLKIN(refclk), .CLKFB(clk), .RST(~rstnin),
                 .CLK0(clk_dcm),     .CLKDV(),
                 .CLK90(), .CLK180(), .CLK270(),
                 .CLK2X(), .CLK2X180(), .CLKFX(), .CLKFX180(),
                 .LOCKED(locked));
   BUFG  u12 (.I(clk_dcm),   .O(clk));

	// Commented by Arsath on 31 May 17
  // BUFG  u12 (.I(refclk),   .O(clk));

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
*/
