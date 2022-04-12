/*
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% MINI PROJECT: Side-Channel Analysis on Shakti's AES Accelerator %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

Module name(s): mkAES_Wrapper1, mkAES_Wrapper2
Author name: Surya Prasad S (EE19B121)

Description: The role of the wrapper modules is to feed N_inputs to the encryption/decryption process while setting the trigger high or low. These modules were used for conducting TVLA test on AES and two modules were made for the two different approaches being used. Wrapper1 passes an input and stores the output of the cipher process in a register and feeds it as the next input. The trigger is set high before feeding the input and set low after the output has been stored in a register. Wrapper2 passes an input to the AES module and then passes the same input again to store it in a register. During the first cipher process the trigger is kept high and this will prevent the storing of the output in a register from affecting the power consumption values. From the experiments, it was found that Wrapper2 gives more expected results. More details can be found in the TVLA report.
The only difference between this module and the wrapper for Normal AES accelerators is that the subkeys need not be generated here before the input text is given (in the Idle Stage).

Usage:
1. Parameters which can be controlled are:
	- Number of inputs
	- Delay between two traces - suggested to not change this
	- Cipher process - whether encryption or decryption is to be done on the inputs
	- Fixed key - current values used are as per NIST specifications
	- Fixed input
	- Starting random input
2. For the FPGA, use clock frequency as 5 MHz to prevent data loss when the oscilloscope samples the traces
3. To generate verilog files for a module, change the TOP_MODULE in the Makefile
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

// Importing required packages
import aes :: *;
import DefaultValue :: *;
import RegFile::*;


// Parameters to control the process
typedef 4 N_inputs;
//typedef 3000000 Delay; 				// This corresponds to 600ms delay when the FPGA is run at 5MHz
typedef 3 Delay; 					// This corresponds to 600ms delay when the FPGA is run at 5MHz
Bool decrypt_bool = True; 			// True for decryption and False for encryption
Bit#(256) key_const   = 256'h0123456789abcdef123456789abcdef023456789abcdef013456789abcdef012;	// Fixed Key
Bit#(128) fixed_inp   = 128'hda39a3ee5e6b4b0d3255bfef95601890;									// Fixed input
Bit#(128) starter_inp = 128'h00000000000000000000000000000000;									// Starting input

// NOTE: Inputs for batchwise trace collection is at the bottom


// Other common variables
int n_inputs = fromInteger(valueof(N_inputs));	// type casting
int delay    = fromInteger(valueof(Delay));		// type casting

typedef enum {
	Idle, Delay_stage, Process, Output_store
} AES_State_type1 deriving(Bits, Eq, FShow);		// Defining an enum variable for Wrapper1

typedef enum {
	Idle, Delay_stage, Process1, Process2, Output_store
} AES_State_type2 deriving(Bits, Eq, FShow);		// Defining an enum variable for Wrapper2


// Common interface for both the modules
interface Wrapper_ifc;
	method Bool trigger_pin;		// This is connected to the FPGA Board's trigger pin
	method Bool done_signal;		// Can be connected to an LED to tell if the module has completed
	method Bit#(128) output_fix;		// This is just to enable proper synthesis of the AES module
endinterface

// %%%%%%%% Wrapper1 module %%%%%%%%
`ifdef mkAES_Wrapper1
	(*synthesize*)
`elsif mkAES_Wrapper2
	//(*synthesize*)
`endif
module mkAES_Wrapper1 (Wrapper_ifc);
	Reg#(Bit#(128)) input_text      <- mkReg(0);		// Register to hold input text
	
	Reg#(AES_State_type1) mod_state <- mkReg(Idle);		// For various stages of the module

	Reg#(int) counter <- mkReg(0);						// To count the number of traces
	Reg#(int) delayer <- mkReg(8);						// For delaying
	
	Reg#(Bool) switcher <- mkReg(False);				// For switching between fixed and random input
	Reg#(Bool) trigger  <- mkReg(False);				// Trigger pin is set high using this
	Reg#(Bool) done_reg <- mkReg(False);				// Set high once the run is complete
	
	Wire#(Bit#(128)) result_fix    <- mkWire;			// Connects to the output_fix
	
	AES aes_ <- mkAES;									// AES module being instantiated
	
	
	// Idle Stage
	rule idle_rule (mod_state == Idle);
		$display("Idle");
		mod_state <= Delay_stage;
		counter   <= 0;
		delayer   <= 0;
		done_reg  <= False;
		
		input_text <= starter_inp;
	endrule


	// Delay Stage
	rule delay_rule (mod_state == Delay_stage);
		if (delayer < delay)
			delayer   <= delayer+1;
		else begin
			delayer   <= 0;
			trigger   <= True;
			mod_state <= Process;
		end
	endrule


	// Feeding inputs to the AES accelerator
	rule process_start (mod_state == Process);
		if (switcher) begin
			$display($time," Random input %d: %h ", counter+1, input_text);
			aes_.encrypt(input_text, key_const, decrypt_bool, Bit128);
		end
		else begin
			$display($time," Fixed input %d: %h", counter+1, fixed_inp);
			aes_.encrypt(fixed_inp, key_const, decrypt_bool, Bit128);
		end
			
		mod_state <= Output_store;
	endrule
	
	
	// Getting output from the accelerator
	rule process_complete (mod_state == Output_store);
		let res <- aes_.ret();	
		if (decrypt_bool) $display($time, " Output of decryption: %h", res);
		else $display($time, " Output of encryption: %h", res);
		result_fix <= res;

		if (switcher) input_text <= res;
		counter    <= counter+1;
		trigger    <= False;
		switcher   <= unpack(~pack(switcher));
		delayer    <= 0;

		if (counter == (n_inputs-1)) done_reg <= True;
		else mod_state <= Delay_stage;
	endrule
	
	
	// Methods for interfacing
	method Bool trigger_pin = trigger;
	method Bool done_signal = done_reg;
	method Bit#(128) output_fix = result_fix;
endmodule


// %%%%%%%% Wrapper2 module %%%%%%%%
`ifdef mkAES_Wrapper2
	(*synthesize*)
`elsif mkAES_Wrapper1
	//(*synthesize*)
`endif
module mkAES_Wrapper2 (Wrapper_ifc);
	Reg#(Bit#(128)) input_text 		<- mkReg(0);		// Register to hold input text

	Reg#(AES_State_type2) mod_state <- mkReg(Idle);		// For various stages of the module

	Reg#(int) counter <- mkReg(0);						// To count the number of traces
	Reg#(int) delayer <- mkReg(8);						// For delaying
	
	Reg#(Bool) switcher  <- mkReg(False);				// For switching between fixed and random input
	Reg#(Bool) trigger   <- mkReg(False);					// Trigger pin is set high using this
	Reg#(Bool) done_reg  <- mkReg(False);				// Set high once the run is complete
	Reg#(Bool) block     <- mkReg(False);				// This register is used to activate/deactivate some rules during Process1

	Wire#(Bit#(128)) result_fix    <- mkWire;			// Connects to the output_fix
	
	AES aes_ <- mkAES;									// AES module being instantiated
	

	// Idle Stage
	rule idle_rule (mod_state == Idle);
		$display("Idle");
		mod_state <= Delay_stage;
		counter   <= 0;
		delayer   <= 0;
		done_reg  <= False;
		
		input_text <= starter_inp;
	endrule


	// Delay Stage
	rule delay_rule (mod_state == Delay_stage);
		if (delayer < delay)
			delayer   <= delayer+1;
		else begin
			delayer   <= 0;
			mod_state <= Process1;
		end
	endrule


	// Setting Trigger high
	rule trigger_high ((mod_state == Process1) && (!block) && (!trigger));
		trigger <= True;
	endrule

	// Feeding inputs to the accelerator
	rule process1_start ((mod_state == Process1) && (!block) && (trigger));
		if (switcher) begin
			$display($time," Random input %d: %h ", counter+1, input_text);
			aes_.encrypt(input_text, key_const, decrypt_bool, Bit128);
		end
		else begin
			$display($time," Fixed input %d: %h", counter+1, fixed_inp);
			aes_.encrypt(fixed_inp, key_const, decrypt_bool, Bit128);
		end

		block <= True;
	endrule
	
	// Getting output from the accelerator
	rule process1_complete ((mod_state == Process1) && (block) && (trigger));
		let res <- aes_.ret();	
		if (decrypt_bool) $display($time, " Output of decryption: %h", res);
		else $display($time, " Output of encryption: %h", res);
		result_fix <= res; 

		trigger    <= False;
	endrule

	// Buffer stage to move to Process2
	rule buffer ((mod_state == Process1) && (block) && (!trigger));
		block     <= False;
		mod_state <= Process2;
	endrule

	
	// Process2 is started
	rule process2_start (mod_state == Process2);
		aes_.encrypt(input_text, key_const, decrypt_bool, Bit128);
		mod_state <= Output_store;
	endrule


	// Getting output from the accelerator
	rule process2_complete (mod_state == Output_store);
		let res <- aes_.ret();
		result_fix <= res;

		if (switcher) input_text <= res;
		counter    <= counter+1;
		switcher   <= unpack(~pack(switcher));
		delayer    <= 0;

		if (counter == (n_inputs-1)) begin
			done_reg <= True;
			$finish;
		end
		else mod_state <= Delay_stage;
	endrule

	// Methods for interfacing
	method Bool trigger_pin = trigger;
	method Bool done_signal = done_reg;
	method Bit#(128) output_fix = result_fix;
endmodule


// Starting inputs used for batchwise trace collection - Both are started using 128'h0
/// Decryption
	//Bit#(128) starter_inp = 128'h9ca0299baf8e15657b50b222446427de; //rand input after 1 lakh decryptions
	//Bit#(128) starter_inp = 128'h8c8ca133bfcb6f48d562fd562856eb06; //rand input after 2 lakh decryptions
	//Bit#(128) starter_inp = 128'h264a228f9b871455eb4e98b2d18bc82e; //rand input after 3 lakh decryptions
	//Bit#(128) starter_inp = 128'h94a762ad413ec7e3e9ebf6088953fbb8; //rand input after 4 lakh decryptions
	//Bit#(128) starter_inp = 128'h5a8bfb735182ed9af88e177d073de3a2; //rand input after 5 lakh decryptions
	//Bit#(128) starter_inp = 128'hb4b36fe0a0dcb25991e02a3f2f55ae42; //rand input after 6 lakh decryptions
	//Bit#(128) starter_inp = 128'hcf1b872583c1e44eae4713ef9eb49093; //rand input after 7 lakh decryptions
	//Bit#(128) starter_inp = 128'he24617bd9bd9e54804738e8ae7c12956; //rand input after 8 lakh decryptions
	//Bit#(128) starter_inp = 128'h189532840b37369f9deb75fee50740a5; //rand input after 9 lakh decryptions
	
/// Encryption
	//Bit#(128) starter_inp = 128'h22bc6405c4b562cd9222045ce6588bf7; //rand input after 1 lakh encryptions
	//Bit#(128) starter_inp = 128'h62501701aa91d0f3a3658f7becefae26; //rand input after 2 lakh encryptions
	//Bit#(128) starter_inp = 128'h51b77e8c5ca49e8d7701f9bf1e65cae3; //rand input after 3 lakh encryptions
	//Bit#(128) starter_inp = 128'he4f185efd18effc0fc783fd6d8f62c54; //rand input after 4 lakh encryptions
	//Bit#(128) starter_inp = 128'hadf6cba958953c770950445d620056e7; //rand input after 5 lakh encryptions
	//Bit#(128) starter_inp = 128'h788367e7e1c959c1fba36624a01315bc; //rand input after 6 lakh encryptions
	//Bit#(128) starter_inp = 128'h11e463766000d1e8f726cdc947fc59cf; //rand input after 7 lakh encryptions
	//Bit#(128) starter_inp = 128'h5b50799e90ce0370c4830ccd78523c6b; //rand input after 8 lakh encryptions
	//Bit#(128) starter_inp = 128'hf91345ba1cc75cabc03fc67b54dc4896; //rand input after 9 lakh encryptions

