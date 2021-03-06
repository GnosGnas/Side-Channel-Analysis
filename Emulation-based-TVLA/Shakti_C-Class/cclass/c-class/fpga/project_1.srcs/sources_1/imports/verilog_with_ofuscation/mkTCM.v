//
// Generated by Bluespec Compiler, version 2018.10.beta1 (build e1df8052c, 2018-10-17)
//
// On Wed Jul  3 23:07:55 IST 2019
//
//
// Ports:
// Name                         I/O  size props
// RDY_axi_slave_m_awvalid        O     1
// axi_slave_awready              O     1
// RDY_axi_slave_m_wvalid         O     1
// axi_slave_wready               O     1
// axi_slave_bvalid               O     1 reg
// axi_slave_bresp                O     2 reg
// axi_slave_buser                O    10 reg
// axi_slave_bid                  O     4 reg
// axi_slave_arready              O     1
// axi_slave_rvalid               O     1 reg
// axi_slave_rresp                O     2 reg
// axi_slave_rdata                O    64 reg
// axi_slave_rlast                O     1 reg
// axi_slave_ruser                O    10 reg
// axi_slave_rid                  O     4 reg
// CLK                            I     1 clock
// RST_N                          I     1 reset
// axi_slave_m_awvalid_awvalid    I     1
// axi_slave_m_awvalid_awaddr     I    32 reg
// axi_slave_m_awvalid_awprot     I     3 reg
// axi_slave_m_awvalid_awuser     I    10 reg
// axi_slave_m_awvalid_awlen      I     8 reg
// axi_slave_m_awvalid_awsize     I     3 reg
// axi_slave_m_awvalid_awburst    I     2 reg
// axi_slave_m_awvalid_awlock     I     1 reg
// axi_slave_m_awvalid_awcache    I     4 reg
// axi_slave_m_awvalid_awqos      I     4 reg
// axi_slave_m_awvalid_awregion   I     4 reg
// axi_slave_m_awvalid_awid       I     4 reg
// axi_slave_m_wvalid_wvalid      I     1
// axi_slave_m_wvalid_wdata       I    64 reg
// axi_slave_m_wvalid_wstrb       I     8 reg
// axi_slave_m_wvalid_wlast       I     1 reg
// axi_slave_m_wvalid_wid         I     4 reg
// axi_slave_m_bready_bready      I     1
// axi_slave_m_arvalid_arvalid    I     1
// axi_slave_m_arvalid_araddr     I    32 reg
// axi_slave_m_arvalid_arprot     I     3 reg
// axi_slave_m_arvalid_aruser     I    10 reg
// axi_slave_m_arvalid_arlen      I     8 reg
// axi_slave_m_arvalid_arsize     I     3 reg
// axi_slave_m_arvalid_arburst    I     2 reg
// axi_slave_m_arvalid_arlock     I     1 reg
// axi_slave_m_arvalid_arcache    I     4 reg
// axi_slave_m_arvalid_arqos      I     4 reg
// axi_slave_m_arvalid_arregion   I     4 reg
// axi_slave_m_arvalid_arid       I     4 reg
// axi_slave_m_rready_rready      I     1
// EN_axi_slave_m_awvalid         I     1
// EN_axi_slave_m_wvalid          I     1
//
// Combinational paths from inputs to outputs:
//   (axi_slave_m_bready_bready,
//    axi_slave_m_rready_rready) -> RDY_axi_slave_m_awvalid
//   (axi_slave_m_bready_bready, axi_slave_m_rready_rready) -> axi_slave_awready
//   (axi_slave_m_bready_bready,
//    axi_slave_m_rready_rready) -> RDY_axi_slave_m_wvalid
//   (axi_slave_m_bready_bready, axi_slave_m_rready_rready) -> axi_slave_wready
//   (axi_slave_m_bready_bready, axi_slave_m_rready_rready) -> axi_slave_arready
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

module mkTCM(CLK,
	     RST_N,

	     axi_slave_m_awvalid_awvalid,
	     axi_slave_m_awvalid_awaddr,
	     axi_slave_m_awvalid_awprot,
	     axi_slave_m_awvalid_awuser,
	     axi_slave_m_awvalid_awlen,
	     axi_slave_m_awvalid_awsize,
	     axi_slave_m_awvalid_awburst,
	     axi_slave_m_awvalid_awlock,
	     axi_slave_m_awvalid_awcache,
	     axi_slave_m_awvalid_awqos,
	     axi_slave_m_awvalid_awregion,
	     axi_slave_m_awvalid_awid,
	     EN_axi_slave_m_awvalid,
	     RDY_axi_slave_m_awvalid,

	     axi_slave_awready,

	     axi_slave_m_wvalid_wvalid,
	     axi_slave_m_wvalid_wdata,
	     axi_slave_m_wvalid_wstrb,
	     axi_slave_m_wvalid_wlast,
	     axi_slave_m_wvalid_wid,
	     EN_axi_slave_m_wvalid,
	     RDY_axi_slave_m_wvalid,

	     axi_slave_wready,

	     axi_slave_bvalid,

	     axi_slave_bresp,

	     axi_slave_buser,

	     axi_slave_bid,

	     axi_slave_m_bready_bready,

	     axi_slave_m_arvalid_arvalid,
	     axi_slave_m_arvalid_araddr,
	     axi_slave_m_arvalid_arprot,
	     axi_slave_m_arvalid_aruser,
	     axi_slave_m_arvalid_arlen,
	     axi_slave_m_arvalid_arsize,
	     axi_slave_m_arvalid_arburst,
	     axi_slave_m_arvalid_arlock,
	     axi_slave_m_arvalid_arcache,
	     axi_slave_m_arvalid_arqos,
	     axi_slave_m_arvalid_arregion,
	     axi_slave_m_arvalid_arid,

	     axi_slave_arready,

	     axi_slave_rvalid,

	     axi_slave_rresp,

	     axi_slave_rdata,

	     axi_slave_rlast,

	     axi_slave_ruser,

	     axi_slave_rid,

	     axi_slave_m_rready_rready);
  input  CLK;
  input  RST_N;

  // action method axi_slave_m_awvalid
  input  axi_slave_m_awvalid_awvalid;
  input  [31 : 0] axi_slave_m_awvalid_awaddr;
  input  [2 : 0] axi_slave_m_awvalid_awprot;
  input  [9 : 0] axi_slave_m_awvalid_awuser;
  input  [7 : 0] axi_slave_m_awvalid_awlen;
  input  [2 : 0] axi_slave_m_awvalid_awsize;
  input  [1 : 0] axi_slave_m_awvalid_awburst;
  input  axi_slave_m_awvalid_awlock;
  input  [3 : 0] axi_slave_m_awvalid_awcache;
  input  [3 : 0] axi_slave_m_awvalid_awqos;
  input  [3 : 0] axi_slave_m_awvalid_awregion;
  input  [3 : 0] axi_slave_m_awvalid_awid;
  input  EN_axi_slave_m_awvalid;
  output RDY_axi_slave_m_awvalid;

  // value method axi_slave_m_awready
  output axi_slave_awready;

  // action method axi_slave_m_wvalid
  input  axi_slave_m_wvalid_wvalid;
  input  [63 : 0] axi_slave_m_wvalid_wdata;
  input  [7 : 0] axi_slave_m_wvalid_wstrb;
  input  axi_slave_m_wvalid_wlast;
  input  [3 : 0] axi_slave_m_wvalid_wid;
  input  EN_axi_slave_m_wvalid;
  output RDY_axi_slave_m_wvalid;

  // value method axi_slave_m_wready
  output axi_slave_wready;

  // value method axi_slave_m_bvalid
  output axi_slave_bvalid;

  // value method axi_slave_m_bresp
  output [1 : 0] axi_slave_bresp;

  // value method axi_slave_m_buser
  output [9 : 0] axi_slave_buser;

  // value method axi_slave_m_bid
  output [3 : 0] axi_slave_bid;

  // action method axi_slave_m_bready
  input  axi_slave_m_bready_bready;

  // action method axi_slave_m_arvalid
  input  axi_slave_m_arvalid_arvalid;
  input  [31 : 0] axi_slave_m_arvalid_araddr;
  input  [2 : 0] axi_slave_m_arvalid_arprot;
  input  [9 : 0] axi_slave_m_arvalid_aruser;
  input  [7 : 0] axi_slave_m_arvalid_arlen;
  input  [2 : 0] axi_slave_m_arvalid_arsize;
  input  [1 : 0] axi_slave_m_arvalid_arburst;
  input  axi_slave_m_arvalid_arlock;
  input  [3 : 0] axi_slave_m_arvalid_arcache;
  input  [3 : 0] axi_slave_m_arvalid_arqos;
  input  [3 : 0] axi_slave_m_arvalid_arregion;
  input  [3 : 0] axi_slave_m_arvalid_arid;

  // value method axi_slave_m_arready
  output axi_slave_arready;

  // value method axi_slave_m_rvalid
  output axi_slave_rvalid;

  // value method axi_slave_m_rresp
  output [1 : 0] axi_slave_rresp;

  // value method axi_slave_m_rdata
  output [63 : 0] axi_slave_rdata;

  // value method axi_slave_m_rlast
  output axi_slave_rlast;

  // value method axi_slave_m_ruser
  output [9 : 0] axi_slave_ruser;

  // value method axi_slave_m_rid
  output [3 : 0] axi_slave_rid;

  // action method axi_slave_m_rready
  input  axi_slave_m_rready_rready;

  // signals for module outputs
  wire [63 : 0] axi_slave_rdata;
  wire [9 : 0] axi_slave_buser, axi_slave_ruser;
  wire [3 : 0] axi_slave_bid, axi_slave_rid;
  wire [1 : 0] axi_slave_bresp, axi_slave_rresp;
  wire RDY_axi_slave_m_awvalid,
       RDY_axi_slave_m_wvalid,
       axi_slave_arready,
       axi_slave_awready,
       axi_slave_bvalid,
       axi_slave_rlast,
       axi_slave_rvalid,
       axi_slave_wready;

  // inlined wires
  wire [2 : 0] rg_state$port0__write_1,
	       rg_state$port1__read,
	       rg_state$port1__write_1,
	       rg_state$port2__read;
  wire read_last_address_1$whas,
       rg_state$EN_port0__write,
       rg_state$EN_port1__write;

  // register read_last_address
  reg read_last_address;
  wire read_last_address$D_IN, read_last_address$EN;

  // register rg_address
  reg [31 : 0] rg_address;
  wire [31 : 0] rg_address$D_IN;
  wire rg_address$EN;

  // register rg_buser
  reg [9 : 0] rg_buser;
  wire [9 : 0] rg_buser$D_IN;
  wire rg_buser$EN;

  // register rg_data
  reg [63 : 0] rg_data;
  wire [63 : 0] rg_data$D_IN;
  wire rg_data$EN;

  // register rg_id
  reg [3 : 0] rg_id;
  wire [3 : 0] rg_id$D_IN;
  wire rg_id$EN;

  // register rg_last_read
  reg [63 : 0] rg_last_read;
  wire [63 : 0] rg_last_read$D_IN;
  wire rg_last_read$EN;

  // register rg_readburst_counter
  reg [7 : 0] rg_readburst_counter;
  wire [7 : 0] rg_readburst_counter$D_IN;
  wire rg_readburst_counter$EN;

  // register rg_readburst_value
  reg [7 : 0] rg_readburst_value;
  wire [7 : 0] rg_readburst_value$D_IN;
  wire rg_readburst_value$EN;

  // register rg_state
  reg [2 : 0] rg_state;
  wire [2 : 0] rg_state$D_IN;
  wire rg_state$EN;

  // register rg_transfer_size
  reg [2 : 0] rg_transfer_size;
  wire [2 : 0] rg_transfer_size$D_IN;
  wire rg_transfer_size$EN;

  // register rg_wlast
  reg rg_wlast;
  wire rg_wlast$D_IN, rg_wlast$EN;

  // register rg_writeburst_counter
  reg [7 : 0] rg_writeburst_counter;
  wire [7 : 0] rg_writeburst_counter$D_IN;
  wire rg_writeburst_counter$EN;

  // register rg_wrstrb
  reg [7 : 0] rg_wrstrb;
  wire [7 : 0] rg_wrstrb$D_IN;
  wire rg_wrstrb$EN;

  // ports of submodule dataLSB
  wire [31 : 0] dataLSB$DIA, dataLSB$DIB, dataLSB$DOA;
  wire [13 : 0] dataLSB$ADDRA, dataLSB$ADDRB;
  wire dataLSB$ENA, dataLSB$ENB, dataLSB$WEA, dataLSB$WEB;

  // ports of submodule dataMSB
  wire [31 : 0] dataMSB$DIA, dataMSB$DIB, dataMSB$DOA;
  wire [13 : 0] dataMSB$ADDRA, dataMSB$ADDRB;
  wire dataMSB$ENA, dataMSB$ENB, dataMSB$WEA, dataMSB$WEB;

  // ports of submodule ff_input_fifo
  wire [63 : 0] ff_input_fifo$D_IN, ff_input_fifo$D_OUT;
  wire ff_input_fifo$CLR,
       ff_input_fifo$DEQ,
       ff_input_fifo$EMPTY_N,
       ff_input_fifo$ENQ,
       ff_input_fifo$FULL_N;

  // ports of submodule s_xactor_f_rd_addr
  wire [74 : 0] s_xactor_f_rd_addr$D_IN, s_xactor_f_rd_addr$D_OUT;
  wire s_xactor_f_rd_addr$CLR,
       s_xactor_f_rd_addr$DEQ,
       s_xactor_f_rd_addr$EMPTY_N,
       s_xactor_f_rd_addr$ENQ,
       s_xactor_f_rd_addr$FULL_N;

  // ports of submodule s_xactor_f_rd_data
  wire [80 : 0] s_xactor_f_rd_data$D_IN, s_xactor_f_rd_data$D_OUT;
  wire s_xactor_f_rd_data$CLR,
       s_xactor_f_rd_data$DEQ,
       s_xactor_f_rd_data$EMPTY_N,
       s_xactor_f_rd_data$ENQ,
       s_xactor_f_rd_data$FULL_N;

  // ports of submodule s_xactor_f_wr_addr
  wire [74 : 0] s_xactor_f_wr_addr$D_IN, s_xactor_f_wr_addr$D_OUT;
  wire s_xactor_f_wr_addr$CLR,
       s_xactor_f_wr_addr$DEQ,
       s_xactor_f_wr_addr$EMPTY_N,
       s_xactor_f_wr_addr$ENQ,
       s_xactor_f_wr_addr$FULL_N;

  // ports of submodule s_xactor_f_wr_data
  wire [76 : 0] s_xactor_f_wr_data$D_IN, s_xactor_f_wr_data$D_OUT;
  wire s_xactor_f_wr_data$CLR,
       s_xactor_f_wr_data$DEQ,
       s_xactor_f_wr_data$EMPTY_N,
       s_xactor_f_wr_data$ENQ,
       s_xactor_f_wr_data$FULL_N;

  // ports of submodule s_xactor_f_wr_resp
  wire [15 : 0] s_xactor_f_wr_resp$D_IN, s_xactor_f_wr_resp$D_OUT;
  wire s_xactor_f_wr_resp$CLR,
       s_xactor_f_wr_resp$DEQ,
       s_xactor_f_wr_resp$EMPTY_N,
       s_xactor_f_wr_resp$ENQ,
       s_xactor_f_wr_resp$FULL_N;

  // rule scheduling signals
  wire CAN_FIRE_RL_read_last_address__dreg_update,
       CAN_FIRE_RL_rl_rd_request,
       CAN_FIRE_RL_rl_rd_response,
       CAN_FIRE_RL_rl_wr_request,
       CAN_FIRE_RL_rl_wr_response,
       CAN_FIRE_axi_slave_m_arvalid,
       CAN_FIRE_axi_slave_m_awvalid,
       CAN_FIRE_axi_slave_m_bready,
       CAN_FIRE_axi_slave_m_rready,
       CAN_FIRE_axi_slave_m_wvalid,
       WILL_FIRE_RL_read_last_address__dreg_update,
       WILL_FIRE_RL_rl_rd_request,
       WILL_FIRE_RL_rl_rd_response,
       WILL_FIRE_RL_rl_wr_request,
       WILL_FIRE_RL_rl_wr_response,
       WILL_FIRE_axi_slave_m_arvalid,
       WILL_FIRE_axi_slave_m_awvalid,
       WILL_FIRE_axi_slave_m_bready,
       WILL_FIRE_axi_slave_m_rready,
       WILL_FIRE_axi_slave_m_wvalid;

  // inputs to muxes for submodule ports
  wire [2 : 0] MUX_rg_state$port0__write_1__VAL_2;
  wire MUX_rg_state$port0__write_1__SEL_1;

  // declarations used by system tasks
  // synopsys translate_off
  reg [63 : 0] v__h3401;
  reg [63 : 0] v__h15314;
  reg [63 : 0] v__h2185;
  reg [63 : 0] v__h3750;
  // synopsys translate_on

  // remaining internal signals
  reg [63 : 0] IF_rg_address_5_BITS_2_TO_0_42_EQ_0b0_43_THEN__ETC___d196,
	       IF_rg_address_5_BITS_2_TO_1_23_EQ_0b0_24_THEN__ETC___d141,
	       _theResult____h3786;
  wire [63 : 0] _theResult_____1__h2263,
		_theResult_____2__h2262,
		_theResult_____3__h2261,
		_theResult_____4__h2260,
		_theResult_____5__h2259,
		_theResult_____6__h2258,
		_theResult_____7__h2257,
		_theResult_____8__h2256,
		_theResult____h2255,
		word___1__h10955,
		word___1__h12003,
		word___1__h13051,
		word___1__h3848,
		word___1__h4494,
		word___1__h5066,
		word___1__h5638,
		word___1__h6763,
		word___1__h7811,
		word___1__h8859,
		word___1__h9907,
		word___2__h4159,
		word___2__h6188,
		word__h14077,
		word__h2227;
  wire [7 : 0] x__h15228, x__h3332;
  wire rg_readburst_counter_00_EQ_rg_readburst_value_01___d202;

  // action method axi_slave_m_awvalid
  assign RDY_axi_slave_m_awvalid = s_xactor_f_wr_addr$FULL_N ;
  assign CAN_FIRE_axi_slave_m_awvalid = s_xactor_f_wr_addr$FULL_N ;
  assign WILL_FIRE_axi_slave_m_awvalid = EN_axi_slave_m_awvalid ;

  // value method axi_slave_m_awready
  assign axi_slave_awready = s_xactor_f_wr_addr$FULL_N ;

  // action method axi_slave_m_wvalid
  assign RDY_axi_slave_m_wvalid = s_xactor_f_wr_data$FULL_N ;
  assign CAN_FIRE_axi_slave_m_wvalid = s_xactor_f_wr_data$FULL_N ;
  assign WILL_FIRE_axi_slave_m_wvalid = EN_axi_slave_m_wvalid ;

  // value method axi_slave_m_wready
  assign axi_slave_wready = s_xactor_f_wr_data$FULL_N ;

  // value method axi_slave_m_bvalid
  assign axi_slave_bvalid = s_xactor_f_wr_resp$EMPTY_N ;

  // value method axi_slave_m_bresp
  assign axi_slave_bresp = s_xactor_f_wr_resp$D_OUT[15:14] ;

  // value method axi_slave_m_buser
  assign axi_slave_buser = s_xactor_f_wr_resp$D_OUT[13:4] ;

  // value method axi_slave_m_bid
  assign axi_slave_bid = s_xactor_f_wr_resp$D_OUT[3:0] ;

  // action method axi_slave_m_bready
  assign CAN_FIRE_axi_slave_m_bready = 1'd1 ;
  assign WILL_FIRE_axi_slave_m_bready = 1'd1 ;

  // action method axi_slave_m_arvalid
  assign CAN_FIRE_axi_slave_m_arvalid = 1'd1 ;
  assign WILL_FIRE_axi_slave_m_arvalid = 1'd1 ;

  // value method axi_slave_m_arready
  assign axi_slave_arready = s_xactor_f_rd_addr$FULL_N ;

  // value method axi_slave_m_rvalid
  assign axi_slave_rvalid = s_xactor_f_rd_data$EMPTY_N ;

  // value method axi_slave_m_rresp
  assign axi_slave_rresp = s_xactor_f_rd_data$D_OUT[80:79] ;

  // value method axi_slave_m_rdata
  assign axi_slave_rdata = s_xactor_f_rd_data$D_OUT[78:15] ;

  // value method axi_slave_m_rlast
  assign axi_slave_rlast = s_xactor_f_rd_data$D_OUT[14] ;

  // value method axi_slave_m_ruser
  assign axi_slave_ruser = s_xactor_f_rd_data$D_OUT[13:4] ;

  // value method axi_slave_m_rid
  assign axi_slave_rid = s_xactor_f_rd_data$D_OUT[3:0] ;

  // action method axi_slave_m_rready
  assign CAN_FIRE_axi_slave_m_rready = 1'd1 ;
  assign WILL_FIRE_axi_slave_m_rready = 1'd1 ;

  // submodule dataLSB
  BRAM2 #(.PIPELINED(1'd0),
	  .ADDR_WIDTH(32'd14),
	  .DATA_WIDTH(32'd32),
	  .MEMSIZE(15'd16384)) dataLSB(.CLKA(CLK),
				       .CLKB(CLK),
				       .ADDRA(dataLSB$ADDRA),
				       .ADDRB(dataLSB$ADDRB),
				       .DIA(dataLSB$DIA),
				       .DIB(dataLSB$DIB),
				       .WEA(dataLSB$WEA),
				       .WEB(dataLSB$WEB),
				       .ENA(dataLSB$ENA),
				       .ENB(dataLSB$ENB),
				       .DOA(dataLSB$DOA),
				       .DOB());

  // submodule dataMSB
  BRAM2 #(.PIPELINED(1'd0),
	  .ADDR_WIDTH(32'd14),
	  .DATA_WIDTH(32'd32),
	  .MEMSIZE(15'd16384)) dataMSB(.CLKA(CLK),
				       .CLKB(CLK),
				       .ADDRA(dataMSB$ADDRA),
				       .ADDRB(dataMSB$ADDRB),
				       .DIA(dataMSB$DIA),
				       .DIB(dataMSB$DIB),
				       .WEA(dataMSB$WEA),
				       .WEB(dataMSB$WEB),
				       .ENA(dataMSB$ENA),
				       .ENB(dataMSB$ENB),
				       .DOA(dataMSB$DOA),
				       .DOB());

  // submodule ff_input_fifo
  SizedFIFO #(.p1width(32'd64),
	      .p2depth(32'd3),
	      .p3cntr_width(32'd1),
	      .guarded(32'd1)) ff_input_fifo(.RST(RST_N),
					     .CLK(CLK),
					     .D_IN(ff_input_fifo$D_IN),
					     .ENQ(ff_input_fifo$ENQ),
					     .DEQ(ff_input_fifo$DEQ),
					     .CLR(ff_input_fifo$CLR),
					     .D_OUT(ff_input_fifo$D_OUT),
					     .FULL_N(ff_input_fifo$FULL_N),
					     .EMPTY_N(ff_input_fifo$EMPTY_N));

  // submodule s_xactor_f_rd_addr
  FIFOL1 #(.width(32'd75)) s_xactor_f_rd_addr(.RST(RST_N),
					      .CLK(CLK),
					      .D_IN(s_xactor_f_rd_addr$D_IN),
					      .ENQ(s_xactor_f_rd_addr$ENQ),
					      .DEQ(s_xactor_f_rd_addr$DEQ),
					      .CLR(s_xactor_f_rd_addr$CLR),
					      .D_OUT(s_xactor_f_rd_addr$D_OUT),
					      .FULL_N(s_xactor_f_rd_addr$FULL_N),
					      .EMPTY_N(s_xactor_f_rd_addr$EMPTY_N));

  // submodule s_xactor_f_rd_data
  FIFOL1 #(.width(32'd81)) s_xactor_f_rd_data(.RST(RST_N),
					      .CLK(CLK),
					      .D_IN(s_xactor_f_rd_data$D_IN),
					      .ENQ(s_xactor_f_rd_data$ENQ),
					      .DEQ(s_xactor_f_rd_data$DEQ),
					      .CLR(s_xactor_f_rd_data$CLR),
					      .D_OUT(s_xactor_f_rd_data$D_OUT),
					      .FULL_N(s_xactor_f_rd_data$FULL_N),
					      .EMPTY_N(s_xactor_f_rd_data$EMPTY_N));

  // submodule s_xactor_f_wr_addr
  FIFOL1 #(.width(32'd75)) s_xactor_f_wr_addr(.RST(RST_N),
					      .CLK(CLK),
					      .D_IN(s_xactor_f_wr_addr$D_IN),
					      .ENQ(s_xactor_f_wr_addr$ENQ),
					      .DEQ(s_xactor_f_wr_addr$DEQ),
					      .CLR(s_xactor_f_wr_addr$CLR),
					      .D_OUT(s_xactor_f_wr_addr$D_OUT),
					      .FULL_N(s_xactor_f_wr_addr$FULL_N),
					      .EMPTY_N(s_xactor_f_wr_addr$EMPTY_N));

  // submodule s_xactor_f_wr_data
  FIFOL1 #(.width(32'd77)) s_xactor_f_wr_data(.RST(RST_N),
					      .CLK(CLK),
					      .D_IN(s_xactor_f_wr_data$D_IN),
					      .ENQ(s_xactor_f_wr_data$ENQ),
					      .DEQ(s_xactor_f_wr_data$DEQ),
					      .CLR(s_xactor_f_wr_data$CLR),
					      .D_OUT(s_xactor_f_wr_data$D_OUT),
					      .FULL_N(s_xactor_f_wr_data$FULL_N),
					      .EMPTY_N(s_xactor_f_wr_data$EMPTY_N));

  // submodule s_xactor_f_wr_resp
  FIFOL1 #(.width(32'd16)) s_xactor_f_wr_resp(.RST(RST_N),
					      .CLK(CLK),
					      .D_IN(s_xactor_f_wr_resp$D_IN),
					      .ENQ(s_xactor_f_wr_resp$ENQ),
					      .DEQ(s_xactor_f_wr_resp$DEQ),
					      .CLR(s_xactor_f_wr_resp$CLR),
					      .D_OUT(s_xactor_f_wr_resp$D_OUT),
					      .FULL_N(s_xactor_f_wr_resp$FULL_N),
					      .EMPTY_N(s_xactor_f_wr_resp$EMPTY_N));

  // rule RL_rl_wr_response
  assign CAN_FIRE_RL_rl_wr_response =
	     ff_input_fifo$EMPTY_N && s_xactor_f_wr_resp$FULL_N &&
	     rg_state == 3'd2 ;
  assign WILL_FIRE_RL_rl_wr_response = CAN_FIRE_RL_rl_wr_response ;

  // rule RL_rl_rd_response
  assign CAN_FIRE_RL_rl_rd_response =
	     s_xactor_f_rd_data$FULL_N && rg_state == 3'd1 ;
  assign WILL_FIRE_RL_rl_rd_response = CAN_FIRE_RL_rl_rd_response ;

  // rule RL_rl_wr_request
  assign CAN_FIRE_RL_rl_wr_request =
	     s_xactor_f_wr_addr$EMPTY_N && s_xactor_f_wr_data$EMPTY_N &&
	     ff_input_fifo$FULL_N &&
	     (rg_state$port1__read == 3'd2 || rg_state$port1__read == 3'd4) ;
  assign WILL_FIRE_RL_rl_wr_request = CAN_FIRE_RL_rl_wr_request ;

  // rule RL_rl_rd_request
  assign CAN_FIRE_RL_rl_rd_request =
	     s_xactor_f_rd_addr$EMPTY_N &&
	     (rg_state$port1__read == 3'd0 || rg_state$port1__read == 3'd4) ;
  assign WILL_FIRE_RL_rl_rd_request =
	     CAN_FIRE_RL_rl_rd_request && !WILL_FIRE_RL_rl_wr_request ;

  // rule RL_read_last_address__dreg_update
  assign CAN_FIRE_RL_read_last_address__dreg_update = 1'd1 ;
  assign WILL_FIRE_RL_read_last_address__dreg_update = 1'd1 ;

  // inputs to muxes for submodule ports
  assign MUX_rg_state$port0__write_1__SEL_1 =
	     WILL_FIRE_RL_rl_wr_response && rg_wlast ;
  assign MUX_rg_state$port0__write_1__VAL_2 =
	     rg_readburst_counter_00_EQ_rg_readburst_value_01___d202 ?
	       3'd4 :
	       3'd0 ;

  // inlined wires
  assign read_last_address_1$whas =
	     WILL_FIRE_RL_rl_wr_request &&
	     rg_address[31:3] == s_xactor_f_wr_addr$D_OUT[74:46] ;
  assign rg_state$EN_port0__write =
	     WILL_FIRE_RL_rl_wr_response && rg_wlast ||
	     WILL_FIRE_RL_rl_rd_response ;
  assign rg_state$port0__write_1 =
	     MUX_rg_state$port0__write_1__SEL_1 ?
	       3'd4 :
	       MUX_rg_state$port0__write_1__VAL_2 ;
  assign rg_state$port1__read =
	     rg_state$EN_port0__write ? rg_state$port0__write_1 : rg_state ;
  assign rg_state$EN_port1__write =
	     WILL_FIRE_RL_rl_rd_request || WILL_FIRE_RL_rl_wr_request ;
  assign rg_state$port1__write_1 = WILL_FIRE_RL_rl_rd_request ? 3'd1 : 3'd2 ;
  assign rg_state$port2__read =
	     rg_state$EN_port1__write ?
	       rg_state$port1__write_1 :
	       rg_state$port1__read ;

  // register read_last_address
  assign read_last_address$D_IN = read_last_address_1$whas ;
  assign read_last_address$EN = 1'd1 ;

  // register rg_address
  assign rg_address$D_IN =
	     WILL_FIRE_RL_rl_wr_request ?
	       s_xactor_f_wr_addr$D_OUT[74:43] :
	       s_xactor_f_rd_addr$D_OUT[74:43] ;
  assign rg_address$EN =
	     WILL_FIRE_RL_rl_wr_request || WILL_FIRE_RL_rl_rd_request ;

  // register rg_buser
  assign rg_buser$D_IN = s_xactor_f_wr_addr$D_OUT[39:30] ;
  assign rg_buser$EN = CAN_FIRE_RL_rl_wr_request ;

  // register rg_data
  assign rg_data$D_IN = s_xactor_f_wr_data$D_OUT[76:13] ;
  assign rg_data$EN = CAN_FIRE_RL_rl_wr_request ;

  // register rg_id
  assign rg_id$D_IN =
	     WILL_FIRE_RL_rl_wr_request ?
	       s_xactor_f_wr_addr$D_OUT[3:0] :
	       s_xactor_f_rd_addr$D_OUT[3:0] ;
  assign rg_id$EN = WILL_FIRE_RL_rl_wr_request || WILL_FIRE_RL_rl_rd_request ;

  // register rg_last_read
  assign rg_last_read$D_IN = _theResult_____1__h2263 ;
  assign rg_last_read$EN = CAN_FIRE_RL_rl_wr_response ;

  // register rg_readburst_counter
  assign rg_readburst_counter$D_IN =
	     rg_readburst_counter_00_EQ_rg_readburst_value_01___d202 ?
	       8'd0 :
	       x__h15228 ;
  assign rg_readburst_counter$EN = CAN_FIRE_RL_rl_rd_response ;

  // register rg_readburst_value
  assign rg_readburst_value$D_IN =
	     WILL_FIRE_RL_rl_wr_request ?
	       s_xactor_f_wr_addr$D_OUT[29:22] :
	       s_xactor_f_rd_addr$D_OUT[29:22] ;
  assign rg_readburst_value$EN =
	     WILL_FIRE_RL_rl_wr_request || WILL_FIRE_RL_rl_rd_request ;

  // register rg_state
  assign rg_state$D_IN = rg_state$port2__read ;
  assign rg_state$EN = 1'b1 ;

  // register rg_transfer_size
  assign rg_transfer_size$D_IN =
	     WILL_FIRE_RL_rl_wr_request ?
	       s_xactor_f_wr_addr$D_OUT[21:19] :
	       s_xactor_f_rd_addr$D_OUT[21:19] ;
  assign rg_transfer_size$EN =
	     WILL_FIRE_RL_rl_wr_request || WILL_FIRE_RL_rl_rd_request ;

  // register rg_wlast
  assign rg_wlast$D_IN = s_xactor_f_wr_data$D_OUT[0] ;
  assign rg_wlast$EN = CAN_FIRE_RL_rl_wr_request ;

  // register rg_writeburst_counter
  assign rg_writeburst_counter$D_IN = rg_wlast ? 8'd0 : x__h3332 ;
  assign rg_writeburst_counter$EN =
	     ff_input_fifo$EMPTY_N && s_xactor_f_wr_resp$FULL_N &&
	     rg_state == 3'd2 ;

  // register rg_wrstrb
  assign rg_wrstrb$D_IN = s_xactor_f_wr_data$D_OUT[12:5] ;
  assign rg_wrstrb$EN = CAN_FIRE_RL_rl_wr_request ;

  // submodule dataLSB
  assign dataLSB$ADDRA =
	     WILL_FIRE_RL_rl_wr_request ?
	       s_xactor_f_wr_addr$D_OUT[59:46] :
	       s_xactor_f_rd_addr$D_OUT[59:46] ;
  assign dataLSB$ADDRB = rg_address[16:3] ;
  assign dataLSB$DIA =
	     WILL_FIRE_RL_rl_wr_request ?
	       32'hAAAAAAAA /* unspecified value */  :
	       32'hAAAAAAAA /* unspecified value */  ;
  assign dataLSB$DIB = _theResult_____1__h2263[31:0] ;
  assign dataLSB$WEA = 1'd0 ;
  assign dataLSB$WEB = 1'd1 ;
  assign dataLSB$ENA =
	     WILL_FIRE_RL_rl_wr_request || WILL_FIRE_RL_rl_rd_request ;
  assign dataLSB$ENB = CAN_FIRE_RL_rl_wr_response ;

  // submodule dataMSB
  assign dataMSB$ADDRA =
	     WILL_FIRE_RL_rl_wr_request ?
	       s_xactor_f_wr_addr$D_OUT[59:46] :
	       s_xactor_f_rd_addr$D_OUT[59:46] ;
  assign dataMSB$ADDRB = rg_address[16:3] ;
  assign dataMSB$DIA =
	     WILL_FIRE_RL_rl_wr_request ?
	       32'hAAAAAAAA /* unspecified value */  :
	       32'hAAAAAAAA /* unspecified value */  ;
  assign dataMSB$DIB = _theResult_____1__h2263[63:32] ;
  assign dataMSB$WEA = 1'd0 ;
  assign dataMSB$WEB = 1'd1 ;
  assign dataMSB$ENA =
	     WILL_FIRE_RL_rl_wr_request || WILL_FIRE_RL_rl_rd_request ;
  assign dataMSB$ENB = CAN_FIRE_RL_rl_wr_response ;

  // submodule ff_input_fifo
  assign ff_input_fifo$D_IN = s_xactor_f_wr_data$D_OUT[76:13] ;
  assign ff_input_fifo$ENQ = CAN_FIRE_RL_rl_wr_request ;
  assign ff_input_fifo$DEQ = CAN_FIRE_RL_rl_wr_response ;
  assign ff_input_fifo$CLR = 1'b0 ;

  // submodule s_xactor_f_rd_addr
  assign s_xactor_f_rd_addr$D_IN =
	     { axi_slave_m_arvalid_araddr,
	       axi_slave_m_arvalid_arprot,
	       axi_slave_m_arvalid_aruser,
	       axi_slave_m_arvalid_arlen,
	       axi_slave_m_arvalid_arsize,
	       axi_slave_m_arvalid_arburst,
	       axi_slave_m_arvalid_arlock,
	       axi_slave_m_arvalid_arcache,
	       axi_slave_m_arvalid_arqos,
	       axi_slave_m_arvalid_arregion,
	       axi_slave_m_arvalid_arid } ;
  assign s_xactor_f_rd_addr$ENQ =
	     axi_slave_m_arvalid_arvalid && s_xactor_f_rd_addr$FULL_N ;
  assign s_xactor_f_rd_addr$DEQ =
	     CAN_FIRE_RL_rl_rd_request && !WILL_FIRE_RL_rl_wr_request ;
  assign s_xactor_f_rd_addr$CLR = 1'b0 ;

  // submodule s_xactor_f_rd_data
  assign s_xactor_f_rd_data$D_IN =
	     { 2'd0,
	       _theResult____h3786,
	       rg_readburst_counter_00_EQ_rg_readburst_value_01___d202,
	       10'd0,
	       rg_id } ;
  assign s_xactor_f_rd_data$ENQ =
	     s_xactor_f_rd_data$FULL_N && rg_state == 3'd1 ;
  assign s_xactor_f_rd_data$DEQ =
	     axi_slave_m_rready_rready && s_xactor_f_rd_data$EMPTY_N ;
  assign s_xactor_f_rd_data$CLR = 1'b0 ;

  // submodule s_xactor_f_wr_addr
  assign s_xactor_f_wr_addr$D_IN =
	     { axi_slave_m_awvalid_awaddr,
	       axi_slave_m_awvalid_awprot,
	       axi_slave_m_awvalid_awuser,
	       axi_slave_m_awvalid_awlen,
	       axi_slave_m_awvalid_awsize,
	       axi_slave_m_awvalid_awburst,
	       axi_slave_m_awvalid_awlock,
	       axi_slave_m_awvalid_awcache,
	       axi_slave_m_awvalid_awqos,
	       axi_slave_m_awvalid_awregion,
	       axi_slave_m_awvalid_awid } ;
  assign s_xactor_f_wr_addr$ENQ =
	     EN_axi_slave_m_awvalid && axi_slave_m_awvalid_awvalid ;
  assign s_xactor_f_wr_addr$DEQ =
	     s_xactor_f_wr_addr$EMPTY_N && s_xactor_f_wr_data$EMPTY_N &&
	     ff_input_fifo$FULL_N &&
	     (rg_state$port1__read == 3'd2 || rg_state$port1__read == 3'd4) ;
  assign s_xactor_f_wr_addr$CLR = 1'b0 ;

  // submodule s_xactor_f_wr_data
  assign s_xactor_f_wr_data$D_IN =
	     { axi_slave_m_wvalid_wdata,
	       axi_slave_m_wvalid_wstrb,
	       axi_slave_m_wvalid_wid,
	       axi_slave_m_wvalid_wlast } ;
  assign s_xactor_f_wr_data$ENQ =
	     EN_axi_slave_m_wvalid && axi_slave_m_wvalid_wvalid ;
  assign s_xactor_f_wr_data$DEQ =
	     s_xactor_f_wr_addr$EMPTY_N && s_xactor_f_wr_data$EMPTY_N &&
	     ff_input_fifo$FULL_N &&
	     (rg_state$port1__read == 3'd2 || rg_state$port1__read == 3'd4) ;
  assign s_xactor_f_wr_data$CLR = 1'b0 ;

  // submodule s_xactor_f_wr_resp
  assign s_xactor_f_wr_resp$D_IN = { 2'd0, rg_buser, rg_id } ;
  assign s_xactor_f_wr_resp$ENQ = WILL_FIRE_RL_rl_wr_response && rg_wlast ;
  assign s_xactor_f_wr_resp$DEQ =
	     axi_slave_m_bready_bready && s_xactor_f_wr_resp$EMPTY_N ;
  assign s_xactor_f_wr_resp$CLR = 1'b0 ;

  // remaining internal signals
  assign _theResult_____1__h2263 =
	     rg_wrstrb[7] ?
	       { ff_input_fifo$D_OUT[63:56], _theResult_____2__h2262[55:0] } :
	       _theResult_____2__h2262 ;
  assign _theResult_____2__h2262 =
	     rg_wrstrb[6] ?
	       { _theResult_____3__h2261[63:56],
		 ff_input_fifo$D_OUT[55:48],
		 _theResult_____3__h2261[47:0] } :
	       _theResult_____3__h2261 ;
  assign _theResult_____3__h2261 =
	     rg_wrstrb[5] ?
	       { _theResult_____4__h2260[63:48],
		 ff_input_fifo$D_OUT[47:40],
		 _theResult_____4__h2260[39:0] } :
	       _theResult_____4__h2260 ;
  assign _theResult_____4__h2260 =
	     rg_wrstrb[4] ?
	       { _theResult_____5__h2259[63:40],
		 ff_input_fifo$D_OUT[39:32],
		 _theResult_____5__h2259[31:0] } :
	       _theResult_____5__h2259 ;
  assign _theResult_____5__h2259 =
	     rg_wrstrb[3] ?
	       { _theResult_____6__h2258[63:32],
		 ff_input_fifo$D_OUT[31:24],
		 _theResult_____6__h2258[23:0] } :
	       _theResult_____6__h2258 ;
  assign _theResult_____6__h2258 =
	     rg_wrstrb[2] ?
	       { _theResult_____7__h2257[63:24],
		 ff_input_fifo$D_OUT[23:16],
		 _theResult_____7__h2257[15:0] } :
	       _theResult_____7__h2257 ;
  assign _theResult_____7__h2257 =
	     rg_wrstrb[1] ?
	       { _theResult_____8__h2256[63:16],
		 ff_input_fifo$D_OUT[15:7],
		 _theResult_____8__h2256[6:0] } :
	       _theResult_____8__h2256 ;
  assign _theResult_____8__h2256 =
	     rg_wrstrb[0] ?
	       { _theResult____h2255[63:8], ff_input_fifo$D_OUT[7:0] } :
	       _theResult____h2255 ;
  assign _theResult____h2255 =
	     read_last_address ? rg_last_read : word__h2227 ;
  assign rg_readburst_counter_00_EQ_rg_readburst_value_01___d202 =
	     rg_readburst_counter == rg_readburst_value ;
  assign word___1__h10955 = {8{dataMSB$DOA[7:0]}} ;
  assign word___1__h12003 = {8{dataMSB$DOA[15:8]}} ;
  assign word___1__h13051 = {8{dataMSB$DOA[23:16]}} ;
  assign word___1__h3848 = {2{dataLSB$DOA}} ;
  assign word___1__h4494 = {4{dataLSB$DOA[15:0]}} ;
  assign word___1__h5066 = {4{dataLSB$DOA[31:16]}} ;
  assign word___1__h5638 = {4{dataMSB$DOA[15:0]}} ;
  assign word___1__h6763 = {8{dataLSB$DOA[7:0]}} ;
  assign word___1__h7811 = {8{dataLSB$DOA[15:8]}} ;
  assign word___1__h8859 = {8{dataLSB$DOA[23:16]}} ;
  assign word___1__h9907 = {8{dataLSB$DOA[31:24]}} ;
  assign word___2__h4159 = {2{dataMSB$DOA}} ;
  assign word___2__h6188 = {4{dataMSB$DOA[31:16]}} ;
  assign word__h14077 = {8{dataMSB$DOA[31:24]}} ;
  assign word__h2227 = { dataMSB$DOA, dataLSB$DOA } ;
  assign x__h15228 = rg_readburst_counter + 8'd1 ;
  assign x__h3332 = rg_writeburst_counter + 8'd1 ;
  always@(rg_address or
	  word___2__h6188 or
	  word___1__h4494 or word___1__h5066 or word___1__h5638)
  begin
    case (rg_address[2:1])
      2'b0:
	  IF_rg_address_5_BITS_2_TO_1_23_EQ_0b0_24_THEN__ETC___d141 =
	      word___1__h4494;
      2'b01:
	  IF_rg_address_5_BITS_2_TO_1_23_EQ_0b0_24_THEN__ETC___d141 =
	      word___1__h5066;
      2'b10:
	  IF_rg_address_5_BITS_2_TO_1_23_EQ_0b0_24_THEN__ETC___d141 =
	      word___1__h5638;
      2'd3:
	  IF_rg_address_5_BITS_2_TO_1_23_EQ_0b0_24_THEN__ETC___d141 =
	      word___2__h6188;
    endcase
  end
  always@(rg_address or
	  word__h14077 or
	  word___1__h6763 or
	  word___1__h7811 or
	  word___1__h8859 or
	  word___1__h9907 or
	  word___1__h10955 or word___1__h12003 or word___1__h13051)
  begin
    case (rg_address[2:0])
      3'b0:
	  IF_rg_address_5_BITS_2_TO_0_42_EQ_0b0_43_THEN__ETC___d196 =
	      word___1__h6763;
      3'b001:
	  IF_rg_address_5_BITS_2_TO_0_42_EQ_0b0_43_THEN__ETC___d196 =
	      word___1__h7811;
      3'b010:
	  IF_rg_address_5_BITS_2_TO_0_42_EQ_0b0_43_THEN__ETC___d196 =
	      word___1__h8859;
      3'b011:
	  IF_rg_address_5_BITS_2_TO_0_42_EQ_0b0_43_THEN__ETC___d196 =
	      word___1__h9907;
      3'b100:
	  IF_rg_address_5_BITS_2_TO_0_42_EQ_0b0_43_THEN__ETC___d196 =
	      word___1__h10955;
      3'b101:
	  IF_rg_address_5_BITS_2_TO_0_42_EQ_0b0_43_THEN__ETC___d196 =
	      word___1__h12003;
      3'b110:
	  IF_rg_address_5_BITS_2_TO_0_42_EQ_0b0_43_THEN__ETC___d196 =
	      word___1__h13051;
      3'd7:
	  IF_rg_address_5_BITS_2_TO_0_42_EQ_0b0_43_THEN__ETC___d196 =
	      word__h14077;
    endcase
  end
  always@(rg_transfer_size or
	  IF_rg_address_5_BITS_2_TO_0_42_EQ_0b0_43_THEN__ETC___d196 or
	  IF_rg_address_5_BITS_2_TO_1_23_EQ_0b0_24_THEN__ETC___d141 or
	  rg_address or word___2__h4159 or word___1__h3848 or word__h2227)
  begin
    case (rg_transfer_size)
      3'd1:
	  _theResult____h3786 =
	      IF_rg_address_5_BITS_2_TO_1_23_EQ_0b0_24_THEN__ETC___d141;
      3'd2:
	  _theResult____h3786 =
	      rg_address[2] ? word___2__h4159 : word___1__h3848;
      3'd3: _theResult____h3786 = word__h2227;
      default: _theResult____h3786 =
		   IF_rg_address_5_BITS_2_TO_0_42_EQ_0b0_43_THEN__ETC___d196;
    endcase
  end

  // handling of inlined registers

  always@(posedge CLK)
  begin
    if (RST_N == `BSV_RESET_VALUE)
      begin
        read_last_address <= `BSV_ASSIGNMENT_DELAY 1'd0;
	rg_address <= `BSV_ASSIGNMENT_DELAY 32'd0;
	rg_buser <= `BSV_ASSIGNMENT_DELAY 10'd0;
	rg_data <= `BSV_ASSIGNMENT_DELAY 64'd0;
	rg_id <= `BSV_ASSIGNMENT_DELAY 4'd0;
	rg_last_read <= `BSV_ASSIGNMENT_DELAY 64'd0;
	rg_readburst_counter <= `BSV_ASSIGNMENT_DELAY 8'd0;
	rg_readburst_value <= `BSV_ASSIGNMENT_DELAY 8'd0;
	rg_state <= `BSV_ASSIGNMENT_DELAY 3'd4;
	rg_transfer_size <= `BSV_ASSIGNMENT_DELAY 3'd0;
	rg_wlast <= `BSV_ASSIGNMENT_DELAY 1'd0;
	rg_writeburst_counter <= `BSV_ASSIGNMENT_DELAY 8'd0;
	rg_wrstrb <= `BSV_ASSIGNMENT_DELAY 8'd0;
      end
    else
      begin
        if (read_last_address$EN)
	  read_last_address <= `BSV_ASSIGNMENT_DELAY read_last_address$D_IN;
	if (rg_address$EN)
	  rg_address <= `BSV_ASSIGNMENT_DELAY rg_address$D_IN;
	if (rg_buser$EN) rg_buser <= `BSV_ASSIGNMENT_DELAY rg_buser$D_IN;
	if (rg_data$EN) rg_data <= `BSV_ASSIGNMENT_DELAY rg_data$D_IN;
	if (rg_id$EN) rg_id <= `BSV_ASSIGNMENT_DELAY rg_id$D_IN;
	if (rg_last_read$EN)
	  rg_last_read <= `BSV_ASSIGNMENT_DELAY rg_last_read$D_IN;
	if (rg_readburst_counter$EN)
	  rg_readburst_counter <= `BSV_ASSIGNMENT_DELAY
	      rg_readburst_counter$D_IN;
	if (rg_readburst_value$EN)
	  rg_readburst_value <= `BSV_ASSIGNMENT_DELAY rg_readburst_value$D_IN;
	if (rg_state$EN) rg_state <= `BSV_ASSIGNMENT_DELAY rg_state$D_IN;
	if (rg_transfer_size$EN)
	  rg_transfer_size <= `BSV_ASSIGNMENT_DELAY rg_transfer_size$D_IN;
	if (rg_wlast$EN) rg_wlast <= `BSV_ASSIGNMENT_DELAY rg_wlast$D_IN;
	if (rg_writeburst_counter$EN)
	  rg_writeburst_counter <= `BSV_ASSIGNMENT_DELAY
	      rg_writeburst_counter$D_IN;
	if (rg_wrstrb$EN) rg_wrstrb <= `BSV_ASSIGNMENT_DELAY rg_wrstrb$D_IN;
      end
  end

  // synopsys translate_off
  `ifdef BSV_NO_INITIAL_BLOCKS
  `else // not BSV_NO_INITIAL_BLOCKS
  initial
  begin
    read_last_address = 1'h0;
    rg_address = 32'hAAAAAAAA;
    rg_buser = 10'h2AA;
    rg_data = 64'hAAAAAAAAAAAAAAAA;
    rg_id = 4'hA;
    rg_last_read = 64'hAAAAAAAAAAAAAAAA;
    rg_readburst_counter = 8'hAA;
    rg_readburst_value = 8'hAA;
    rg_state = 3'h2;
    rg_transfer_size = 3'h2;
    rg_wlast = 1'h0;
    rg_writeburst_counter = 8'hAA;
    rg_wrstrb = 8'hAA;
  end
  `endif // BSV_NO_INITIAL_BLOCKS
  // synopsys translate_on

  // handling of system tasks

  // synopsys translate_off
  always@(negedge CLK)
  begin
    #0;
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_wr_response)
	begin
	  v__h3401 = $time;
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_wr_response)
	$display(v__h3401,
		 "\tTCM:\t Writing into Address: %h data: %h strb: %b if wlast %d rg_writeburst_counter: %d",
		 rg_address,
		 _theResult_____1__h2263,
		 rg_wrstrb,
		 rg_wlast,
		 rg_writeburst_counter);
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_rd_response)
	begin
	  v__h15314 = $time;
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_rd_response)
	$display(v__h15314,
		 "\tTCM responding data %h, transfer size %d, burst number %d",
		 _theResult____h3786,
		 rg_transfer_size,
		 rg_readburst_counter);
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_wr_request)
	begin
	  v__h2185 = $time;
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_wr_request)
	$display(v__h2185,
		 "\tTCM:\t Recieved Write Request for Address: %h data: %h strb: %b awlen: %d ",
		 s_xactor_f_wr_addr$D_OUT[74:43],
		 s_xactor_f_wr_data$D_OUT[76:13],
		 s_xactor_f_wr_data$D_OUT[12:5],
		 s_xactor_f_wr_addr$D_OUT[29:22]);
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_rd_request)
	begin
	  v__h3750 = $time;
	  #0;
	end
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_rl_rd_request)
	$display(v__h3750,
		 "\tTCM received read request for address %h, transfer size %d burst length %d",
		 s_xactor_f_rd_addr$D_OUT[74:43],
		 s_xactor_f_rd_addr$D_OUT[21:19],
		 s_xactor_f_rd_addr$D_OUT[29:22]);
  end
  // synopsys translate_on
endmodule  // mkTCM

