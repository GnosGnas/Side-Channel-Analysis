/* 
Copyright (c) 2018, IIT Madras All rights reserved.

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

This module implements a bimodal branch predictor with compressed support and a 
direct-mapped BTB. The BTB is split into 2 banks. 
During prediction, this module will present stage1 with 2-predictions: one for pc and
another for pc+2.
The same BTB is used for holding tags of conditional and unconditional branches. A
branch-history-table is maintained which indicates the prediction of the conditional branch which
was a hit in the BTB. Each entry in the BHT maintains a 2-bit saturating counter.
A return address stack (RAS) is also maintained.

Working Princicple

Prediction Phase: 

  The pc-gen stage (Stage0) presents with a 4-byte aligned pc. 
  To perform prediction, the index of the pc for both the btb banks is extracted and latched in the first
  cycle. The next cycle reads the response from both the btb banks. Bank0 contains the information
  for all control instructions present at 4-byte aligned addresses and bank1 contains the
  information for all control instructions present on a 2-byte (and not a 4-byte) aligned address.
  A hit is confirmed only when the btb entry is valid and the btb tag field matches the 
  respective pc values. Once a hit is confirmed, the ci field of the btb entry indicates whether 
  the instruction is a Branch, JAL, Call or Ret instruction. 
  If the entry is a Branch instruction then the prediction value is taken from the branch history 
  table. However, in case of Ret, Call or JAL instruction the prediction is set to 3.

  In case of a Ret instruction being a hit, the target address is taken from the top of the RAS. In
  case of the other instructions (Branch, Call and JAL) the target address is taken from the target
  field of the btb entry.
  
  The above algorithm is repeated for pc+2.

  Finally, the stage0 is informed of the next possible pc. The prediction of pc are then sent to 
  the stage1 along with the information if the prediction was for a branch and if so was it a hit 
  in the btb or not

Training/Update Phase:

  This phase occurs each time a control instruction get evaluated in the execute stage (stage3).
  When a Call instruction gets evaluated the return address is pushed in to RAS and in case of Ret
  instruction the ras is poped. Only one can occur at a time and hence no conflicts are expected.

  During the training phase, the btb entry is directly updated with the information provided by the
  execute stage. A previous valid entry in the same location will be over-written on a conflict.
  Bank0 or bank1 is selected based on the value of pc[1].

Disable bpu at runtime: The branch prediction can be disabled at runtime by reseting the respective
bit in the csr register

BTB implementation:
The BTB is implemented as 2 banked bram/sram structures. Each BRAM is a 1r+1w configuration 
(1 read and 1 write port).


--------------------------------------------------------------------------------------------------
*/
package bimodal_c;
	/*===== Pacakge imports ===== */
	import FIFO::*;
	import FIFOF::*;
	import SpecialFIFOs::*;
	import ConfigReg::*;
	import Connectable::*;
	import GetPut::*;
  import Assert::*;
  
  /*==== Project imports ======= */
  import mem_config::*; // for bram 1rw instances.
  import globals::*;
  `include "Logger.bsv"
  import stack::*;

  `define ignore 1

  // struct stored in the tag array for pc cmoparison
  typedef struct {
    Bit#(TSub#(TSub#(`vaddr, TLog#(`btbdepth)), `ignore )) tag;
    Bit#(2) state;
    Bool valid;
    Bit#(`vaddr) target;
    ControlInsn ci;
  } BTBEntry deriving (Bits, Eq, FShow);

  typedef struct {
    Bit#(TSub#(TSub#(`vaddr, TLog#(`btbdepth)), `ignore )) tag;
    Bit#(2) state;
    Bool valid;
    Bit#(`vaddr) target;
    ControlInsn ci;
    Bool    edgecase;
  } BTBEntryC deriving (Bits, Eq, FShow);

	(*synthesize*)
  (*conflict_free="train_bpu, ras_push"*)
	module mkbimodal_c(Ifc_bpu);
    String bpu="";
    // ram to hold the tag of the address being predicted. The 2 bits are deducted since we are
    // supporting only non - compressed ISA. When compressed is supported, 1 will be dedudcted.
    Ifc_mem_config1r1w#(TDiv#(`btbdepth,  2) , SizeOf#(BTBEntry), 1) mem_btb0 
                                                              <- mkmem_config1r1w(False,"double");
    Ifc_mem_config1r1w#(TDiv#(`btbdepth,  2) , SizeOf#(BTBEntryC), 1) mem_btb1 
                                                              <- mkmem_config1r1w(False,"double");

    // stack structure to hold the return addresses
    Ifc_stack#(`vaddr, `rasdepth) ras_stack <- mkstack;

    // boolean register and counter used to initialize the ram structure on reset.
    Reg#(Bool) rg_init <- mkReg(True);
    Reg#(Bit#(TLog#(TDiv#(`btbdepth, 2)))) rg_init_count <- mkReg(0);
    
    // wire indicating if the bpu is enabled/disabled
    Wire#(Bool) wr_bpu_enable <- mkWire();

    FIFOF#(PredictionRequest)  ff_pred_request      <- mkSizedFIFOF(2);
    FIFOF#(NextPC) ff_next_pc   <- mkBypassFIFOF();
    Reg#(PredictionToStage0)   rg_prediction_pc[2]  <- mkCReg(2, PredictionToStage0{prediction : 0,
                            target_pc : ?,  epochs: 0 ,edgecase: False });
    
    // RuleName : initialize
    // Explicit Conditions : rg_init == True
    // Implicit Conditions : None
    // on system reset first initialize the ram structure with valid = 0.
    rule initialize(rg_init);
      mem_btb0.write(1, truncate(rg_init_count), pack(BTBEntry{tag : ?, valid : False, state : 1,
                                                               ci: Branch, target: ?}));
      mem_btb1.write(1, truncate(rg_init_count), pack(BTBEntryC{tag : ?, valid : False, state : 1,
                            ci: Branch, target: ?, edgecase : False }));
      if(rg_init_count == fromInteger((`btbdepth / 2) -1)) begin
				rg_init <= False;
			end
      `logLevel( bpu, 0, $format("Bimodal : Init stage. Count:%d",rg_init_count))
      rg_init_count <= rg_init_count + 1;
		endrule

    // RuleName : perform_prediction
    // Explicit Conditions : None
    // Implicit Conditions : None
    // Description : This rule will the prediction response from the BTB and RAS and send the result
    // to stage1. A hit can occur either in the BTB or the RAS and never both
    rule perform_prediction;
      let request = ff_pred_request.first();
      ff_pred_request.deq();

      Bool edgecase = False;
      Bit#(2) prediction0 = 1;
      Bit#(2) prediction1 = 1;
      Bit#(2) prediction = 1;
  
      // extract tag from the request PC for comparison
      Bit#(TSub#(TSub#(`vaddr, TLog#(`btbdepth)),`ignore)) btb_tag_cmp = truncateLSB(request.pc);

      // extract the target - address, tags, counter - value and prediction state from bank0
      BTBEntry btbentry0 = unpack(mem_btb0.read_response);
      Bit#(`vaddr) target0 = btbentry0.target;

      // extract the target - address, tags, counter - value and prediction state from bank1
      BTBEntryC btbentry1 = unpack(mem_btb1.read_response);
      Bit#(`vaddr) target1 = btbentry1.target;

      Bit#(`vaddr) target_address = ?;

      // ------------------------------ bpu look-up start ----------------------------------- //
      // When compressed is disabled we need to check which bank should the prediction be taken
      // from. This is done by checking the LSB bit of the full - index (a.k.a the va[ignore]). This
      // is required because 2 PCs which have the same bank_index (but point to different banks) 
      // and have the same tags as well (i.e. they vary only in the ignore bit of the va. Eg 0x0 and
      // 0x4) can both be valid entries in the respective banks. This will lead to bank1 overwriting
      // the prediction output of bank0 which is wrong.
      if (btb_tag_cmp == btbentry0.tag && btbentry0.valid && !request.discard && wr_bpu_enable) begin

        if(btbentry0.ci == Branch)
          prediction0 = btbentry0.state;
        else 
          prediction0 = 3;

        if(btbentry0.ci == Ret)
          target0 = ras_stack.top;
        `logLevel( bpu, 1, $format("Bimodal : btb_tag_cmp:%h, tag0:%h", btb_tag_cmp, btbentry0.tag))
        `logLevel( bpu, 1, $format("Bimodal : BTB0 hit"))
      end
      if (btb_tag_cmp == btbentry1.tag && btbentry1.valid && wr_bpu_enable) begin
        if(btbentry1.ci == Branch)
          prediction1 = btbentry1.state;
        else 
          prediction1 = 3;

        if(btbentry1.ci == Ret)
          target1 = ras_stack.top;
        edgecase = btbentry1.edgecase;
        `logLevel( bpu, 1, $format("Bimodal : BTB0 hit"))
      end
      // ----------------------------------- bimod look up end --------------------------------- //

      if(prediction0 > 1) begin
        prediction = prediction0;
        target_address = target0;
      end
      else begin
        prediction = prediction1;
        target_address = target1;
      end
      let resp = NextPC{ va       : request.pc
                                     ,discard     : request.discard
                                     ,prediction0 : prediction0
                                     ,prediction1 : prediction1 };
      `logLevel( bpu, 0, $format("Bimodal : enquing Response:",fshow(resp)))
      rg_prediction_pc[0] <= PredictionToStage0{  prediction : prediction,
                                                  target_pc  : target_address,
                                                  epochs     : request.epochs
                                                  ,edgecase   :  edgecase };
      ff_next_pc.enq(resp);
    endrule

    // MethodName : prediction_req
    // Explicit Conditions : rg_init == False
    // Implicit Conditions : None
    // Description : This rule will latch the index of the PC to be predicted.
    // We first derive the full_index : the index assuming a non - banked array of `btbdepth.
    // from the full index we then derive the index for each bank (bank_index) by ignoring the 
    // LSB of the full_index. 
		method Action prediction_req(PredictionRequest req)if(!rg_init);

      // first find the full index.
      Bit#(TLog#(`btbdepth)) btb_full_index = truncate(req.pc>>`ignore);

      // find the bank_index.
      Bit#(TLog#(TDiv#(`btbdepth, 2))) btb_bank_index = truncateLSB(btb_full_index); 

      mem_btb0.read(btb_bank_index);
      mem_btb1.read(btb_bank_index);
      if(req.fence) begin
        rg_init <= True;
        `logLevel( bpu, 0, $format("Bimodal : Fence Recieved"))
      end
      else begin
        ff_pred_request.enq(req);
        `logLevel( bpu, 0, $format("Bimodal : Prediction request for PC:%h btb_bank_index:%d",
                                        req.pc, btb_bank_index ))
      end
		endmethod

    // MethodName : next_pc
    // Explicit Conditions : None
    // Implicit Conditions : None
    // Description : This rule read the response from the rams, check if the next PC is either PC + 4
    // or redirected to a new target address. The redirect address is directly taken from the ram.
    // If there is not hit in the BTB the prediction value of 0 is sent indicating that the next PC
    // is PC + 4 which needs to happen outside this module
		interface next_pc = toGet(ff_next_pc);

    // MethodName : training
    // Explicit Conditions : rg_init == False
    // Implicit Conditions : None 
    // Description : This method will update the BTB and BHT with the new training packet from the
    // execute stage. 
    // We first derive the full_index : the index assuming a non - banked array of `btbdepth.
    // from the full index we then derive the index for each bank (bank_index) by ignoring the 
    // LSB of the full_index. The LSB bit is used to identify which bank will be used for training.
		method Action train_bpu (Training_data td)if(!rg_init);
      if(wr_bpu_enable) begin
        // first find the full index.
        Bit#(TLog#(`btbdepth)) full_index = truncate(td.pc>>`ignore);

        // find the bank_index.
        Bit#(TLog#(TDiv#(`btbdepth, 2))) bank_index = truncateLSB(full_index); 
        
        // find the tag to be stored.=vaddr - Log(btbdepth) - ignorebits
        Bit#(TSub#(TSub#(`vaddr, TLog#(`btbdepth)),`ignore)) tag = truncateLSB(td.pc);
        let update = BTBEntry{ tag : tag, valid : True, state : td.state, ci: td.ci,
                               target: td.target };
        let updatec = BTBEntryC{ tag : tag, valid : True, state : td.state ,edgecase : td.edgecase,
                                  ci: td.ci, target: td.target};
        if(td.ci == Ret)
          ras_stack.pop;
        if (truncate(full_index) == 1'b0)begin
          mem_btb0.write(1, bank_index, pack(update));
          `logLevel( bpu, 0, $format("Bimodal : Training BTB0: ",fshow(td)))
          `logLevel( bpu, 0, $format("Bimodal : Training BTB0 : bank_index:%d tag:%h state:%b",
                                          bank_index, tag, td.state))
        end
        else begin
          mem_btb1.write(1, bank_index, pack(updatec));
          `logLevel( bpu, 0, $format("Bimodal : Training BTB1: ",fshow(td)))
          `logLevel( bpu, 0, $format("Bimodal : Training BTB1 : bank_index:%d tag:%h state:%b", 
                                         bank_index, tag, td.state))
        end
      end
		endmethod

    // MethodName : prediction_pc
    // Explicit Conditions : None
    // Implicit Conditions : None 
    // Description : This method sends the latest prediction to stage0 for generating next pc
    method predicted_pc = rg_prediction_pc[1];

    // MethodName : ras_push
    // Explicit Conditions : None
    // Implicit Conditions : None 
    // Description : This method will push a return address on the RAS stack
    method Action ras_push(Bit#(`vaddr) pc);
      `logLevel( bpu, 0, $format("Bimodal : Pushing to RAS:%h ",pc))
      ras_stack.push(pc);
    endmethod

    method Action bpu_enable(Bool e);
      wr_bpu_enable <= e;
    endmethod
	endmodule
endpackage
