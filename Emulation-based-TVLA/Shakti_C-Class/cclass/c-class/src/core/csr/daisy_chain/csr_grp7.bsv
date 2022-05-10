/* 
Copyright (c) 2013, IIT Madras All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted
provided that the following conditions are met:

 * Redistributions of source code must retain the above copyright notice, this list of conditions
  and the following disclaimer.  
 * Redistributions in binary form must reproduce the above copyright notice, this list of 
  conditions and the following disclaimer in the documentation and / or other materials provided 
  with the distribution.  
 * Neither the name of IIT Madras  nor the names of its contributors may be used to endorse or 
  promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS
OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT 
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
--------------------------------------------------------------------------------------------------

Author : Neel Gala
Email id : neelgala@gmail.com
Details:

--------------------------------------------------------------------------------------------------
 */

package csr_grp7;
//standard library imports
	import Vector :: *;
	import FIFOF :: * ;
	import DReg :: *;
  import UniqueWrappers :: * ;
 	import ConcatReg :: *;
  import Assert :: *;
  
  //project imports
  `include "csrgrp.defines"
  `include "common_params.bsv"
	import common_types :: * ;
	
	//typedef struct{
  	//Bit#(12) csr_address;
  	//Bit#(XLEN) writedata;
    //Bit#(3) funct3;
	//} CSRReq deriving(Bits, FShow, Eq);
	
	interface Ifc_csr_grp7;

		// (*doc = "method : to receive the request from the core or previous node" *)
    method Action ma_core_req(CSRReq req);

    // (*doc = "method : to send response to core on a hit in this node" *)
    method CSRResponse mv_core_resp;

    // (*doc = "method : to forward the request to the next node on a miss in current node" *)
   	//method ActionValue#(CSRReq) mav_fwd_req;
		
		//intergroup sideband connections
  `ifdef debug
   	(*always_ready, always_enabled*)
    //(*doc = "method: sideband connection from grp3 to recieve rg_dcsr_stopcount value"*)
    method Action ma_dcsr_stopcount(Bit#(1) dcsr_stopcount_val);
  `endif
   	
    (*always_ready, always_enabled*)
    //(*doc = "method: sideband connection from grp3 to recieve rg_mcountinhibit value"*)
    method Action ma_mcountinhibit(Bit#(8) mcountinhibit_val);

    (*always_ready, always_enabled*)
    //(*doc = "method: sideband connection from grp3 to recieve rg_mhpminterrupten value"*)
    method Action ma_mhpminterrupten(Bit#(8) v);

    /*doc: method: to send the counter interrupt values to mip */
    method Bit#(8) mv_counter_interrupt;
    
   	//sideband connections
   	//(*doc = "method : whenever event corresponding to this group occur, the method is to be \
   	//          called, so that corresponding counters are incremented"*)
  	method Action ma_events(Bit#(SizeOf#(Events_grp7)) e);
  `ifdef simulate
 		//(*doc = "method returns a tuple-2 of vector of the values stored in the event-registers \
  	//           and the counters"*)
    method Tuple2#(Vector#(`counters_grp7, Bit#(XLEN)), Vector#(`counters_grp7, Bit#(64))) mv_counter_values;
  `endif
	
	endinterface
	
	(*noinline*)
	//(*doc = "func : returns the value to be written onto the registers involved the CSR-operations"*)
	function Bit#(XLEN) fn_csr_op (Bit#(XLEN) writedata, Bit#(XLEN) readdata, Bit#(2) op);
		if(op == 'd1)
    	return writedata; 
    else if(op == 'd2)
      return (writedata|readdata);
    else
      return (~writedata & readdata);
  endfunction
  
  (*synthesize*)
  (*doc = "module : implementing read and write methods for group - 5 csrs and related side band \
           access"*)
  (*preempts="ma_core_req, increment_perfmonitors"*)
  module mk_csr_grp7 (Ifc_csr_grp7);
  	//static asserts
  	staticAssert(`counters_grp7 < 9,"Group7 can have only 8 counters max");
  	// common registers
   	
  `ifdef csr_low_latency
  	(* doc = "wire : holds the response of this group for a csr operation request, \
  					  for one cycle, wire is used for low latency"*)
    Wire#(CSRResponse) rg_resp_to_core <- mkDWire(CSRResponse{hit:False, data:0});
	`else
		(* doc = "reg : register to hold the response of this group for a csr operation request"*)
		Reg#(CSRResponse) rg_resp_to_core <- mkDReg(CSRResponse{hit:False, data:0});
	`endif

    /*doc : fifo : fifo to forward the core - req to the next group on a miss in the current group*/
    //FIFOF#(CSRReq) ff_fwd_request <- mkLFIFOF();
    //(*doc = note: mkUniqueWrapper is used to avoid multiple instantiation of same function"*)	
    let csr_op <- mkUniqueWrapper3(fn_csr_op);

	`ifdef debug
    (*doc = "wire: to hold the current derived value of dcsr_stopcount"*)
    Wire#(Bit#(1)) wr_dcsr_stopcount <- mkWire();
  `endif
  
  	(*doc = "wire : to hold the current derived value of mcountinhibit"*)
  	Wire#(Bit#(8)) wr_mcountinhibit <- mkWire();

  	/*doc:wire: bits indicate if the counter should generate an interrupt when counter reaches 0*/
  	Wire#(Bit#(8)) wr_mhpminterrupten <- mkWire();

   	//////////////////////////////////////machine type registers////////////////////////////////////
		
		//MHPMCOUNTER24-31, MHPMCOUNTER24H-31H, MHPMEVENT24-31
		//(*doc = "reg : vector of registers for containing the performance monitoring counters"*)
    Vector#(`counters_grp7, Reg#(Bit#(64))) mhpmcounter <- replicateM(mkReg(0));
    //(*doc = "reg : vector of registers for containing the performance monitoring event values"*)
    Vector#(`counters_grp7, Reg#(Bit#(XLEN))) mhpmevent;
    for(Integer i=0; i< `counters_grp7; i=i+1) begin
      mhpmevent[i] <- mkReg(`ifdef simulate fromInteger(i+1) `else 0 `endif );
    end
    (*doc = "wire : whenever an event described in the Events_grp4 occurs, the corresponding bit in\
             this wire is set for the corresponding counter assigned to be incremented"*)
    Wire#(Bit#(TAdd#(SizeOf#(Events_grp7),1))) wr_events <- mkWire();

    Bit#(8) lv_counter_interrupt = 0;
    for (Integer i = 0; i< `counters_grp7 ; i = i + 1) begin
      lv_counter_interrupt[i] = pack(mhpmevent[i]!=0 && mhpmcounter[i] == 0
                                                    && wr_mcountinhibit[i] == 0
                                                    && wr_mhpminterrupten[i] ==1);
    end
   	////////////////////////////////////////////////////////////////////////////////////////////////
   	(*doc = "rule : the rule increments the performance monitoring counters"*)
    rule increment_perfmonitors `ifdef debug (wr_dcsr_stopcount == 0) `endif ;
      for(Integer i=0; i< `counters_grp7; i=i+1)begin
      	if(lv_counter_interrupt[i] == 0)
        	mhpmcounter[i] <= mhpmcounter[i] + zeroExtend(wr_events[mhpmevent[i]]) ;
      end
    endrule
    

    method Action ma_core_req(CSRReq req);

			Bit#(2) op = req.funct3;

 			case (req.csr_address)
				//MACHINE TYPE REGS
				`MHPMCOUNTER24 : begin
					if (`counters_grp7 > 0) begin
						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncate(mhpmcounter[0])};
 						Bit#(XLEN) readdata = (truncate(mhpmcounter[0])); 
 					
 						//form the new value to be written and write 
 						let word <- csr_op.func(req.writedata,readdata,op);
 					
 					`ifdef RV64
 						mhpmcounter[0] <= word;
 					`else
 						mhpmcounter[0][31:0] <= word;
 					`endif
					end
					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};    
				end
				
				`MHPMCOUNTER25 : begin
					if (`counters_grp7 > 1) begin
						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncate(mhpmcounter[1])};
 						Bit#(XLEN) readdata = (truncate(mhpmcounter[1])); 
 					
 						//form the new value to be written and write 
 						let word <- csr_op.func(req.writedata,readdata,op);
 					
 					`ifdef RV64
 						mhpmcounter[1] <= word;
 					`else
 						mhpmcounter[1][31:0] <= word;
 					`endif
					end
					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};    
				end
				
				`MHPMCOUNTER26 : begin
					if (`counters_grp7 > 2) begin
						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncate(mhpmcounter[2])};
 						Bit#(XLEN) readdata = (truncate(mhpmcounter[2])); 
 					
 						//form the new value to be written and write 
 						let word <- csr_op.func(req.writedata,readdata,op);

 					`ifdef RV64
 						mhpmcounter[2] <= word;
 					`else
 						mhpmcounter[2][31:0] <= word;
 					`endif 					 
					end
					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};    
				end
				
				`MHPMCOUNTER27 : begin
					if (`counters_grp7 > 3) begin
						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncate(mhpmcounter[3])};
 						Bit#(XLEN) readdata = (truncate(mhpmcounter[3])); 
 					
 						//form the new value to be written and write 
 						let word <- csr_op.func(req.writedata,readdata,op);

 					`ifdef RV64
 						mhpmcounter[3] <= word;
 					`else
 						mhpmcounter[3][31:0] <= word;
 					`endif 					 
					end
					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};    
				end
				
				`MHPMCOUNTER28 : begin
					if (`counters_grp7 > 4) begin
						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncate(mhpmcounter[4])};
 						Bit#(XLEN) readdata = (truncate(mhpmcounter[4])); 
 					
 						//form the new value to be written and write 
 						let word <- csr_op.func(req.writedata,readdata,op);

 					`ifdef RV64
 						mhpmcounter[4] <= word;
 					`else
 						mhpmcounter[4][31:0] <= word;
 					`endif 					 
					end
					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};    
				end
				
				`MHPMCOUNTER29 : begin
					if (`counters_grp7 > 5) begin
						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncate(mhpmcounter[5])};
 						Bit#(XLEN) readdata = (truncate(mhpmcounter[5])); 
 					
 						//form the new value to be written and write 
 						let word <- csr_op.func(req.writedata,readdata,op);

 					`ifdef RV64
 						mhpmcounter[5] <= word;
 					`else
 						mhpmcounter[5][31:0] <= word;
 					`endif 					 
					end
					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};    
				end
				
				`MHPMCOUNTER30 : begin
					if (`counters_grp7 > 6) begin
						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncate(mhpmcounter[6])};
 						Bit#(XLEN) readdata = (truncate(mhpmcounter[6])); 
 					
 						//form the new value to be written and write 
 						let word <- csr_op.func(req.writedata,readdata,op);

 					`ifdef RV64
 						mhpmcounter[6] <= word;
 					`else
 						mhpmcounter[6][31:0] <= word;
 					`endif 					 
					end
					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};    
				end
				
				`MHPMCOUNTER31 : begin
					if (`counters_grp7 > 7) begin
						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncate(mhpmcounter[7])};
 						Bit#(XLEN) readdata = (truncate(mhpmcounter[7])); 
 					
 						//form the new value to be written and write 
 						let word <- csr_op.func(req.writedata,readdata,op);

 					`ifdef RV64
 						mhpmcounter[7] <= word;
 					`else
 						mhpmcounter[7][31:0] <= word;
 					`endif 					 
					end
					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};    
				end
				
			`ifdef RV32
				`MHPMCOUNTER24H : begin
					if (`counters_grp7 > 0) begin
						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncateLSB(mhpmcounter[0])};
 						Bit#(XLEN) readdata = (truncateLSB(mhpmcounter[0])); 
 					
 						//form the new value to be written and write 
 						let word <- csr_op.func(req.writedata,readdata,op);
 						mhpmcounter[0][63:32] <= word;
					end
					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};    
				end
				
				`MHPMCOUNTER25H : begin
					if (`counters_grp7 > 1) begin
						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncateLSB(mhpmcounter[1])};
 						Bit#(XLEN) readdata = (truncateLSB(mhpmcounter[1])); 
 					
 						//form the new value to be written and write 
 						let word <- csr_op.func(req.writedata,readdata,op);
						mhpmcounter[1][63:32] <= word;
					end
					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};    
				end
				
				`MHPMCOUNTER26H : begin
					if (`counters_grp7 > 2) begin
						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncateLSB(mhpmcounter[2])};
 						Bit#(XLEN) readdata = (truncateLSB(mhpmcounter[2])); 
 					
 						//form the new value to be written and write 
 						let word <- csr_op.func(req.writedata,readdata,op);
 					  mhpmcounter[2][63:32] <= word;
					end
					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};    
				end
				
				`MHPMCOUNTER27H : begin
					if (`counters_grp7 > 3) begin
						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncateLSB(mhpmcounter[3])};
 						Bit#(XLEN) readdata = (truncateLSB(mhpmcounter[3])); 
 					
 						//form the new value to be written and write 
 						let word <- csr_op.func(req.writedata,readdata,op);
 					 mhpmcounter[3][63:32] <= word;
					end
					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};    
				end
				
				`MHPMCOUNTER28H : begin
					if (`counters_grp7 > 4) begin
						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncateLSB(mhpmcounter[4])};
 						Bit#(XLEN) readdata = (truncateLSB(mhpmcounter[4])); 
 					
 						//form the new value to be written and write 
 						let word <- csr_op.func(req.writedata,readdata,op);
 					  mhpmcounter[4][63:32] <= word;
					end
					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};    
				end
				
				`MHPMCOUNTER29H : begin
					if (`counters_grp7 > 5) begin
						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncateLSB(mhpmcounter[5])};
 						Bit#(XLEN) readdata = (truncateLSB(mhpmcounter[5])); 
 					
 						//form the new value to be written and write 
 						let word <- csr_op.func(req.writedata,readdata,op);
 					 	mhpmcounter[5][63:32] <= word;
					end
					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};    
				end
				
				`MHPMCOUNTER30H : begin
					if (`counters_grp7 > 6) begin
						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncateLSB(mhpmcounter[6])};
 						Bit#(XLEN) readdata = (truncateLSB(mhpmcounter[6])); 
 					
 						//form the new value to be written and write 
 						let word <- csr_op.func(req.writedata,readdata,op);
 					 	mhpmcounter[6][63:32] <= word;
					end
					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};    
				end
				
				`MHPMCOUNTER31H : begin
					if (`counters_grp7 > 7) begin
						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncateLSB(mhpmcounter[7])};
 						Bit#(XLEN) readdata = (truncateLSB(mhpmcounter[7])); 
 					
 						//form the new value to be written and write 
 						let word <- csr_op.func(req.writedata,readdata,op);
 					 	mhpmcounter[7][63:32] <= word;
					end
					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};    
				end
			`endif

				`MHPMEVENT24 : begin
					if (`counters_grp7 > 0) begin
						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncate(mhpmevent[0])};
 						Bit#(XLEN) readdata = (truncate(mhpmevent[0])); 
 					
 						//form the new value to be written and write 
 						let word <- csr_op.func(req.writedata,readdata,op);
 						mhpmevent[0] <= truncate(word);
					end
					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};   
				end
				
				`MHPMEVENT25 : begin
					if (`counters_grp7 > 1) begin
						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncate(mhpmevent[1])};
 						Bit#(XLEN) readdata = (truncate(mhpmevent[1])); 
 					
 						//form the new value to be written and write 
 						let word <- csr_op.func(req.writedata,readdata,op);
 						mhpmevent[1] <= truncate(word);
					end
					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};   
				end
				
				`MHPMEVENT26 : begin
					if (`counters_grp7 > 2) begin
						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncate(mhpmevent[2])};
 						Bit#(XLEN) readdata = (truncate(mhpmevent[2])); 
 					
 						//form the new value to be written and write 
 						let word <- csr_op.func(req.writedata,readdata,op);
 						mhpmevent[2] <= truncate(word);
					end
					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};   				
				end
				
				`MHPMEVENT27 : begin
					if (`counters_grp7 > 3) begin
						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncate(mhpmevent[3])};
 						Bit#(XLEN) readdata = (truncate(mhpmevent[3])); 
 					
 						//form the new value to be written and write 
 						let word <- csr_op.func(req.writedata,readdata,op);
 						mhpmevent[3] <= truncate(word);
					end
					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};   				
				end
				
				`MHPMEVENT28 : begin
					if (`counters_grp7 > 4) begin
						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncate(mhpmevent[4])};
 						Bit#(XLEN) readdata = (truncate(mhpmevent[4])); 
 					
 						//form the new value to be written and write 
 						let word <- csr_op.func(req.writedata,readdata,op);
 						mhpmevent[4] <= truncate(word);
					end
					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};   				
				end
				
				`MHPMEVENT29 : begin
					if (`counters_grp7 > 5) begin
						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncate(mhpmevent[5])};
 						Bit#(XLEN) readdata = (truncate(mhpmevent[5])); 
 					
 						//form the new value to be written and write 
 						let word <- csr_op.func(req.writedata,readdata,op);
 						mhpmevent[5] <= truncate(word);
					end
					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};   				
				end
				
				`MHPMEVENT30 : begin
					if (`counters_grp7 > 6) begin
						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncate(mhpmevent[6])};
 						Bit#(XLEN) readdata = (truncate(mhpmevent[6])); 
 					
 						//form the new value to be written and write 
 						let word <- csr_op.func(req.writedata,readdata,op);
 						mhpmevent[6] <= truncate(word);
					end
					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};   
				end
				
				`MHPMEVENT31 : begin
					if (`counters_grp7 > 7) begin
						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncate(mhpmevent[7])};
 						Bit#(XLEN) readdata = (truncate(mhpmevent[7])); 
 					
 						//form the new value to be written and write 
 						let word <- csr_op.func(req.writedata,readdata,op);
 						mhpmevent[7] <= truncate(word);
					end
					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};   
				end
				
				//USER TYPE REGS
			`ifdef user				
 				`HPMCOUNTER24 : begin 
 					if(`counters_grp7 > 0) begin
 						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncate(mhpmcounter[0])};
 					end
 					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};
 				end
 				
				`HPMCOUNTER25 : begin 
 					if(`counters_grp7 > 1) begin
 						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncate(mhpmcounter[1])};
 					end
 					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};
 				end
 				
				`HPMCOUNTER26 : begin 
 					if(`counters_grp7 > 2) begin
 						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncate(mhpmcounter[2])};
 					end
 					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};
 				end
 				
				`HPMCOUNTER27 : begin 
 					if(`counters_grp7 > 3) begin
 						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncate(mhpmcounter[3])};
 					end
 					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};
 				end
 				
				`HPMCOUNTER28 : begin 
 					if(`counters_grp7 > 4) begin
 						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncate(mhpmcounter[4])};
 					end
 					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};
 				end
 				
				`HPMCOUNTER29 : begin 
 					if(`counters_grp7 > 5) begin
 						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncate(mhpmcounter[5])};
 					end
 					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};
 				end
 				
				`HPMCOUNTER30 : begin 
 					if(`counters_grp7 > 6) begin
 						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncate(mhpmcounter[6])};
 					end
 					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};
 				end
				
				`HPMCOUNTER31 : begin 
 					if(`counters_grp7 > 7) begin
 						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncate(mhpmcounter[7])};
 					end
 					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};
 				end
 				
 			`ifdef RV32
				`HPMCOUNTER24H : begin 
 					if(`counters_grp7 > 0) begin
 						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncateLSB(mhpmcounter[0])};
 					end
 					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};
 				end
 				
				`HPMCOUNTER25H : begin 
 					if(`counters_grp7 > 1) begin
 						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncateLSB(mhpmcounter[1])};
 					end
 					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};
 				end
 				
				`HPMCOUNTER26H : begin 
 					if(`counters_grp7 > 2) begin
 						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncateLSB(mhpmcounter[2])};
 					end
 					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};
 				end
 				
				`HPMCOUNTER27H : begin 
 					if(`counters_grp7 > 3) begin
 						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncateLSB(mhpmcounter[3])};
 					end
 					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};
 				end
 				
				`HPMCOUNTER28H : begin 
 					if(`counters_grp7 > 4) begin
 						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncateLSB(mhpmcounter[4])};
 					end
 					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};
 				end
 				
				`HPMCOUNTER29H : begin 
 					if(`counters_grp7 > 5) begin
 						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncateLSB(mhpmcounter[5])};
 					end
 					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};
 				end
 				
				`HPMCOUNTER30H : begin 
 					if(`counters_grp7 > 6) begin
 						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncateLSB(mhpmcounter[6])};
 					end
 					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};
 				end
 				
 				`HPMCOUNTER31H : begin 
 					if(`counters_grp7 > 7) begin
 						//read previous value
 						rg_resp_to_core <= CSRResponse{ hit : True, data : truncateLSB(mhpmcounter[7])};
 					end
 					else rg_resp_to_core <= CSRResponse{ hit : True, data : 0};
 				end
			`endif
			`endif
 				default : begin
 					//ff_fwd_request.enq(req);
          rg_resp_to_core <= CSRResponse{ hit : True, data : 0};
        end
 			endcase
 		endmethod
 		
 		method CSRResponse mv_core_resp = rg_resp_to_core;
    
   	//method ActionValue#(CSRReq) mav_fwd_req;
      //ff_fwd_request.deq;
      //return ff_fwd_request.first();
    //endmethod
		
		////////////////////////////////////////////////////////////////////////////////////////////////
    //intergroup connections
	`ifdef debug
    method Action ma_dcsr_stopcount(Bit#(1) dcsr_stopcount_val);
    	wr_dcsr_stopcount <= dcsr_stopcount_val;
    endmethod
  `endif    
    method Action ma_mcountinhibit(Bit#(8) mcountinhibit_val);
    	wr_mcountinhibit <= mcountinhibit_val;
    endmethod
    method Action ma_mhpminterrupten(Bit#(8) v);
      wr_mhpminterrupten <= v;
    endmethod
    method mv_counter_interrupt = lv_counter_interrupt;
    ////////////////////////////////////////////////////////////////////////////////////////////////
  	//sideband connections to core  
  
	  method Action ma_events(Bit#(SizeOf#(Events_grp7)) e);
      wr_events <= {e,1'b0};
    endmethod
 	`ifdef simulate
    method mv_counter_values = tuple2(readVReg(mhpmevent), readVReg(mhpmcounter));
  `endif
        
	endmodule : mk_csr_grp7
endpackage : csr_grp7
