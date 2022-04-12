// Bluespec wrapper, created by Import BVI Wizard
// Created on: Wed Jul 01 14:20:40 IST 2020
// Created by: Sadhana
// Bluespec version: 2019.05.beta2 2019-05-24 a88bf40db


interface Ifc_sbox;
	(*always_ready , always_enabled*)
	method ActionValue #( Bit#(8) )  getbyte (Bit#(8) in, Bit#(16) r1, Bit#(24) r2, Bit#(24) r3);
endinterface

import "BVI" sbox =
module mksbox  (Ifc_sbox);

	default_clock curr_CLK;
	default_reset curr_RST;

	input_clock curr_CLK ()  <- exposeCurrentClock;
	input_reset curr_RST (/* empty */) clocked_by(curr_CLK)  <- exposeCurrentReset;


	method out /* 7:0 */ getbyte (in /*7:0*/, r1 /*15:0*/, r2 /*23:0*/, r3 /*23:0*/)
		 enable((*inhigh*)getbyte_enable) clocked_by(curr_CLK) reset_by(curr_RST);

	schedule getbyte C getbyte;
endmodule


