`timescale 1ns / 1ps
/*
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% MINI PROJECT: Side-Channel Analysis on Shakti's AES Accelerator %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

Module name(s): Top
Author name: Surya Prasad S (EE19B121)

Description: Top module to connect to the FPGA. Also contains clk_wizard.


Usage:
1. Only change which maybe required is the module type for instantiation of module M.
2. For the FPGA, use input clock frequency as 200MHz and output as 5 MHz
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

`define WrapperModule mkAES_Wrapper1

module Top( 
    input CLK_P,
    input CLK_N,
    input RST_N,
    output gpio0,
    output gpio1,
    output gpio2,
    output led1
    ); 


    `WrapperModule M (.CLK(CLK),
        .RST_N(rst),
        .trigger_pin(gpio0),
        .output_fix(gpio2),         //Using only 1-bit is sufficient here
        .done_signal(led1));

    clk_wiz_0 cl (.clk_in1_p(CLK_P),
        .clk_in1_n(CLK_N),
        .clk_out1(CLK),
        .reset(RST_N),
        .locked(rst)); 
  
endmodule

