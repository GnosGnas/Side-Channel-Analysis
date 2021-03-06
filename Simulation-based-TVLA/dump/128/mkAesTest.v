//
// Generated by Bluespec Compiler, version 2021.07-1-gaf77efcd (build af77efcd)
//
// On Mon Oct 18 13:12:42 IST 2021
//
//
// Ports:
// Name                         I/O  size props
// CLK                            I     1 clock
// RST_N                          I     1 reset
//
// No combinational paths from inputs to outputs
//
//

`ifdef BSV_ASSIGNMENT_DELAY
`else
  `define BSV_ASSIGNMENT_DELAY
`endif

`ifdef BSV_POSITIVE_RESET
  `define BSV_RESET_VALUE 1'b1
  `define BSV_RESET_EDGE posedge
`else
  `define BSV_RESET_VALUE 1'b0
  `define BSV_RESET_EDGE negedge
`endif
`define BSV_NO_INITIAL_BLOCKS
module mkAesTest(CLK,
		 RST_N);
  input  CLK;
  input  RST_N;

  // register _unnamed_
  reg _unnamed_;
  wire _unnamed_$D_IN, _unnamed_$EN;

  // register _unnamed__1
  reg _unnamed__1;
  wire _unnamed__1$D_IN, _unnamed__1$EN;

  // register ciphertext
  reg [127 : 0] ciphertext;
  wire [127 : 0] ciphertext$D_IN;
  wire ciphertext$EN;

  // register counter
  reg [127 : 0] counter;
  wire [127 : 0] counter$D_IN;
  wire counter$EN;

  // register key
  reg [127 : 0] key;
  wire [127 : 0] key$D_IN;
  wire key$EN;

  // register plaintext
  reg [127 : 0] plaintext;
  wire [127 : 0] plaintext$D_IN;
  wire plaintext$EN;

  // register rg_state
  reg [2 : 0] rg_state;
  wire [2 : 0] rg_state$D_IN;
  wire rg_state$EN;

  // ports of submodule aes_
  wire [255 : 0] aes_$encrypt_keyyy;
  wire [127 : 0] aes_$encrypt_plaintexttt, aes_$ret;
  wire [1 : 0] aes_$encrypt_keyylenn;
  wire aes_$EN_encrypt,
       aes_$EN_ret,
       aes_$RDY_encrypt,
       aes_$RDY_ret,
       aes_$encrypt_decrypttt;

  // rule scheduling signals
  wire WILL_FIRE_RL_run;

  // inputs to muxes for submodule ports
  wire [127 : 0] MUX_counter$write_1__VAL_1;
  wire MUX_counter$write_1__PSEL_1, MUX_counter$write_1__SEL_1;

  // remaining internal signals
  wire counter_ULT_50000___d52;

  // submodule aes_
  mkAES aes_(.CLK(CLK),
	     .RST_N(RST_N),
	     .encrypt_decrypttt(aes_$encrypt_decrypttt),
	     .encrypt_keyylenn(aes_$encrypt_keyylenn),
	     .encrypt_keyyy(aes_$encrypt_keyyy),
	     .encrypt_plaintexttt(aes_$encrypt_plaintexttt),
	     .EN_encrypt(aes_$EN_encrypt),
	     .EN_ret(aes_$EN_ret),
	     .RDY_encrypt(aes_$RDY_encrypt),
	     .ret(aes_$ret),
	     .RDY_ret(aes_$RDY_ret));

  // rule RL_run
  assign WILL_FIRE_RL_run = aes_$RDY_encrypt && rg_state == 3'd0 ;

  // inputs to muxes for submodule ports
  assign MUX_counter$write_1__PSEL_1 = aes_$RDY_ret && rg_state == 3'd2 ;
  assign MUX_counter$write_1__SEL_1 =
	     MUX_counter$write_1__PSEL_1 && counter_ULT_50000___d52 ;
  assign MUX_counter$write_1__VAL_1 = counter + 128'd1 ;

  // register _unnamed_
  assign _unnamed_$D_IN = 1'd0 ;
  assign _unnamed_$EN = WILL_FIRE_RL_run ;

  // register _unnamed__1
  assign _unnamed__1$D_IN = 1'b0 ;
  assign _unnamed__1$EN = 1'b0 ;

  // register ciphertext
  assign ciphertext$D_IN = 128'h0 ;
  assign ciphertext$EN = 1'b0 ;

  // register counter
  assign counter$D_IN =
	     MUX_counter$write_1__SEL_1 ?
	       MUX_counter$write_1__VAL_1 :
	       128'd0 ;
  assign counter$EN =
	     MUX_counter$write_1__PSEL_1 && counter_ULT_50000___d52 ||
	     rg_state == 3'd3 ;

  // register key
  assign key$D_IN = 128'h0 ;
  assign key$EN = 1'b0 ;

  // register plaintext
  assign plaintext$D_IN = 128'h0 ;
  assign plaintext$EN = 1'b0 ;

  // register rg_state
  assign rg_state$D_IN =
	     (MUX_counter$write_1__SEL_1 || rg_state == 3'd3) ? 3'd0 : 3'd2 ;
  assign rg_state$EN =
	     MUX_counter$write_1__PSEL_1 && counter_ULT_50000___d52 ||
	     rg_state == 3'd3 ||
	     WILL_FIRE_RL_run ;

  // submodule aes_
  assign aes_$encrypt_decrypttt =
	     !_unnamed_ && counter == 128'd2 ||
	     !_unnamed_ && counter == 128'd3 ||
	     !_unnamed_ && counter == 128'd4 ||
	     !_unnamed_ && counter == 128'd6 ||
	     !_unnamed_ && counter == 128'd9 ||
	     !_unnamed_ && counter == 128'd11 ||
	     !_unnamed_ && counter == 128'd12 ||
	     !_unnamed_ && counter == 128'd13 ||
	     !_unnamed_ && counter == 128'd14 ||
	     !_unnamed_ && counter == 128'd15 ;
  assign aes_$encrypt_keyylenn = 2'd0 ;
  assign aes_$encrypt_keyyy =
	     (!_unnamed_ && counter == 128'd0) ?
	       256'h000000000000000000000000000000000000000000000000000000000000000A :
	       ((!_unnamed_ && counter == 128'd1) ?
		  256'h0000000000000000000000000000000000000000000000000000000000000001 :
		  ((!_unnamed_ && counter == 128'd2) ?
		     256'h0000000000000000000000000000000000000000000000000000000000000001 :
		     ((!_unnamed_ && counter == 128'd3) ?
			256'h000000000000000000000000000000000000000000000000000000000000000A :
			((!_unnamed_ && counter == 128'd4) ?
			   256'h0000000000000000000000000000000000000000000000000000000000004846 :
			   ((!_unnamed_ && counter == 128'd5) ?
			      256'h0000000000000000000000000000000000000000000000000000000000000086 :
			      ((!_unnamed_ && counter == 128'd6) ?
				 256'h0000000000000000000000000000000000000000000000000000000000001544 :
				 ((!_unnamed_ && counter == 128'd7) ?
				    256'h000000000000000000000000000000000000000000000000000000000000A565 :
				    ((!_unnamed_ && counter == 128'd8) ?
				       256'h0000000000000000000000000000000000000000000000000000000000004846 :
				       ((!_unnamed_ && counter == 128'd9) ?
					  256'h0000000000000000000000000000000000000000000000000000000000000086 :
					  ((!_unnamed_ &&
					    counter == 128'd10) ?
					     256'h0000000000000000000000000000000000000000000000000000000000001544 :
					     ((!_unnamed_ &&
					       counter == 128'd11) ?
						256'h000000000000000000000000000000000000000000000000000000000000A565 :
						((!_unnamed_ &&
						  counter == 128'd12) ?
						   256'h0000000000000000000000000000000000000000000000000000000000000222 :
						   ((!_unnamed_ &&
						     counter == 128'd13) ?
						      256'h0000000000000000000000000000000000000000000000000015665146161561 :
						      ((!_unnamed_ &&
							counter == 128'd14) ?
							 256'h0000000000000000000000000000000000000000000000000000000000281658 :
							 ((!_unnamed_ &&
							   counter ==
							   128'd15) ?
							    256'h0000000000000000000000000000000000000000000000000000000007898453 :
							    ((!_unnamed_ &&
							      counter ==
							      128'd16) ?
							       256'h0000000000000000000000000000000000000000000000000000000000000222 :
							       ((!_unnamed_ &&
								 counter ==
								 128'd17) ?
								  256'h0000000000000000000000000000000000000000000000000015665146161561 :
								  ((!_unnamed_ &&
								    counter ==
								    128'd18) ?
								     256'h0000000000000000000000000000000000000000000000000000000000281658 :
								     256'h0000000000000000000000000000000000000000000000000000000007898453)))))))))))))))))) ;
  assign aes_$encrypt_plaintexttt =
	     (!_unnamed_ && counter == 128'd0) ?
	       128'h5AF3DA146F8BD15B82E84A68F7FDEC2D :
	       ((!_unnamed_ && counter == 128'd1) ?
		  128'h8F02AA16B501D2726D812D6DC9B17C1C :
		  ((!_unnamed_ && counter == 128'd2) ?
		     128'hF72F318C2881EB281BCC7134D8DDD557 :
		     ((!_unnamed_ && counter == 128'd3) ?
			128'hE3D4896C7EF2E55746193887E0F77C5B :
			((!_unnamed_ && counter == 128'd4) ?
			   128'h651AAD45DDE54F54B549751556232561 :
			   ((!_unnamed_ && counter == 128'd5) ?
			      128'h132123148846A46D6556DDD566F1C102 :
			      ((!_unnamed_ && counter == 128'd6) ?
				 128'hF72F318C2881EB281BCC7134D8DDD557 :
				 ((!_unnamed_ && counter == 128'd7) ?
				    128'hFC09DB063C8386E112E3CAD4C33CEF1B :
				    ((!_unnamed_ && counter == 128'd8) ?
				       128'h9F09319EF6F3832E9A7B543018763D01 :
				       ((!_unnamed_ && counter == 128'd9) ?
					  128'hB67C2DE138954328F385A85CBA740D69 :
					  ((!_unnamed_ &&
					    counter == 128'd10) ?
					     128'hCCB3AEB8D1BDC9758F3ACE9EC30E4593 :
					     ((!_unnamed_ &&
					       counter == 128'd11) ?
						128'h6E8A86D729BE47000D6DA4E92C2BC6DA :
						((!_unnamed_ &&
						  counter == 128'd12) ?
						   128'hAD973DD62DC1C6C21B1DEF0E4EADCE1A :
						   ((!_unnamed_ &&
						     counter == 128'd13) ?
						      128'h467B9B7552F076F2483C332C1DE55BEB :
						      ((!_unnamed_ &&
							counter == 128'd14) ?
							 128'hE09123E039262237EB988E1F31870EA1 :
							 ((!_unnamed_ &&
							   counter ==
							   128'd15) ?
							    128'h6C847BA296D140183BF8E3867F872634 :
							    ((!_unnamed_ &&
							      counter ==
							      128'd16) ?
							       128'h9878D5844A9576699CEDDFB889DA25BD :
							       ((!_unnamed_ &&
								 counter ==
								 128'd17) ?
								  128'hE98E0A7D374DB8D0D53F3823504697E0 :
								  ((!_unnamed_ &&
								    counter ==
								    128'd18) ?
								     128'hB14497578E4A8CB7C9914F29F4DE0AC3 :
								     128'h944247558E0E393331F7B372704DBB7C)))))))))))))))))) ;
  assign aes_$EN_encrypt =
	     WILL_FIRE_RL_run &&
	     (!_unnamed_ && counter == 128'd0 ||
	      !_unnamed_ && counter == 128'd1 ||
	      !_unnamed_ && counter == 128'd2 ||
	      !_unnamed_ && counter == 128'd3 ||
	      !_unnamed_ && counter == 128'd4 ||
	      !_unnamed_ && counter == 128'd5 ||
	      !_unnamed_ && counter == 128'd6 ||
	      !_unnamed_ && counter == 128'd7 ||
	      !_unnamed_ && counter == 128'd8 ||
	      !_unnamed_ && counter == 128'd9 ||
	      !_unnamed_ && counter == 128'd10 ||
	      !_unnamed_ && counter == 128'd11 ||
	      !_unnamed_ && counter == 128'd12 ||
	      !_unnamed_ && counter == 128'd13 ||
	      !_unnamed_ && counter == 128'd14 ||
	      !_unnamed_ && counter == 128'd15 ||
	      !_unnamed_ && counter == 128'd16 ||
	      !_unnamed_ && counter == 128'd17 ||
	      !_unnamed_ && (counter == 128'd18 || counter == 128'd19)) ;
  assign aes_$EN_ret = MUX_counter$write_1__PSEL_1 ;

  // remaining internal signals
  assign counter_ULT_50000___d52 = counter < 128'd50000 ;

  // handling of inlined registers

  always@(posedge CLK)
  begin
$display("hi from posedge");
    if (RST_N == `BSV_RESET_VALUE)
      begin
        _unnamed_ <= `BSV_ASSIGNMENT_DELAY 1'd0;
	_unnamed__1 <= `BSV_ASSIGNMENT_DELAY 1'd0;
	ciphertext <= `BSV_ASSIGNMENT_DELAY 128'd128;
	counter <= `BSV_ASSIGNMENT_DELAY 128'd8;
	key <= `BSV_ASSIGNMENT_DELAY 128'd128;
	plaintext <= `BSV_ASSIGNMENT_DELAY 128'd128;
	rg_state <= `BSV_ASSIGNMENT_DELAY 3'd3;
      end
    else
      begin
        if (_unnamed_$EN) _unnamed_ <= `BSV_ASSIGNMENT_DELAY _unnamed_$D_IN;
	if (_unnamed__1$EN)
	  _unnamed__1 <= `BSV_ASSIGNMENT_DELAY _unnamed__1$D_IN;
	if (ciphertext$EN)
	  ciphertext <= `BSV_ASSIGNMENT_DELAY ciphertext$D_IN;
	if (counter$EN) counter <= `BSV_ASSIGNMENT_DELAY counter$D_IN;
	if (key$EN) key <= `BSV_ASSIGNMENT_DELAY key$D_IN;
	if (plaintext$EN) plaintext <= `BSV_ASSIGNMENT_DELAY plaintext$D_IN;
	if (rg_state$EN) rg_state <= `BSV_ASSIGNMENT_DELAY rg_state$D_IN;
      end
  end

  // synopsys translate_off
  `ifdef BSV_NO_INITIAL_BLOCKS
  `else // not BSV_NO_INITIAL_BLOCKS
  initial
  begin
    _unnamed_ = 1'h0;
    _unnamed__1 = 1'h0;
    ciphertext = 128'hAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA;
    counter = 128'hAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA;
    key = 128'hAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA;
    plaintext = 128'hAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA;
    rg_state = 3'h2;
  end
  `endif // BSV_NO_INITIAL_BLOCKS
  // synopsys translate_on

  // handling of system tasks

  // synopsys translate_off
  always@(negedge CLK)
  begin
	$display($time, "hi from negedge");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_run && !_unnamed_) $display("START");
    if (RST_N != `BSV_RESET_VALUE)
      if (MUX_counter$write_1__PSEL_1 && counter_ULT_50000___d52)
	$display("%h", aes_$ret);
    if (RST_N != `BSV_RESET_VALUE)
      if (MUX_counter$write_1__PSEL_1 && counter_ULT_50000___d52 &&
	  counter == 128'd19)
	$finish(32'd0);
    if (RST_N != `BSV_RESET_VALUE)
      if (MUX_counter$write_1__PSEL_1 && !counter_ULT_50000___d52)
	$finish(32'd0);
  end
  // synopsys translate_on
endmodule  // mkAesTest


