/* 
Copyright (c) 2018, IIT Madras All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted
provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this list of conditions
  and the following disclaimer.  
* Redistributions in binary form must reproduce the above copyright notice, this list of 
  conditions and the following disclaimer in the documentation and/or other materials provided 
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

Author: Neel Gala
Email id: neelgala@gmail.com
Details:

This module implements a gshare branch predictor with compressed support and a 
direct-mapped BTB. The BTB is split into 2 banks. During prediction, this module will present stage1 with 2-predictions: one for pc and
another for pc+2. A global history register (ghr) is used to keep track of the conditional branches.
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
  Simultaneously, the bht is accessed for pc using a hash between the ghr and the lower order bits
  of the pc. A hit is confirmed only when the btb entry is valid and the btb tag field matches the 
  respective pc values. Once a hit is confirmed, the ci field of the btb entry indicates whether 
  the instruction is a Branch, JAL, Call or Ret instruction. If the entry is a Branch instruction
  then the prediction value is taken from the branch history table and the ghr is speculatively
  updated with the prediction as well. Also, in case of branch instruction the in-flight counter is
  incremented by 1. However, in case of Ret, Call or JAL instruction the prediction is set to 3.

  In case of a Ret instruction being a hit, the target address is taken from the top of the RAS. In
  case of the other instructions (Branch, Call and JAL) the target address is taken from the target
  field of the btb entry.
  
  The above algorithm is repeated for pc+2. Here, the updated ghr is the output of the previous
  step. 

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

  In case of conditional Branch instruction which was a btb hit in the prediction phase, we check if
  there was a misprediction or not. If the prediction was correct, then the inflight-counter is
  is simply decremented by 1. If the a misprediction occurred then the inflight-counter is set to
  0 and the ghr is corrected by flipping the respective speculated bit.

Disable bpu at runtime: The branch prediction can be disabled at runtime by reseting the respective
bit in the csr register

BTB implementation:
The BTB is implemented as 2 banked bram/sram structures. Each BRAM is a 1r+1w configuration 
(1 read and 1 write port).

ideal configs for max performance (dmips: 1.70)
  `define btbdepth 512
  `define histlen 7
  `define rasdepth 8
  `define rastagdepth 128
  `define bhtdepth 128
when running non-compressed dhrystone (dmips: 1.70)
  `define btbdepth 512
  `define histlen 8
  `define rasdepth 8
  `define rastagdepth 128
  `define bhtdepth 64
--------------------------------------------------------------------------------------------------
*/
package gshare_c;
  import Vector::*;
  import FIFOF::*;
  import DReg::*;
  import SpecialFIFOs::*;
  import BRAMCore::*;
  import FIFO::*;
  import RegFile::*;
  import GetPut::*;


  import globals :: *;
  import stack :: *;
  `include "Logger.bsv"
  import mem_config::*; // for bram 1rw instances.

  `define countlen    2   // the size of the 2-bit counter
  `define ignore      1   // number of bits of the pc to be ignored
  typedef struct{
    Bit#(`vaddr)  target;
    Bit#(TSub#(TSub#(`vaddr, TLog#(`btbdepth)), `ignore)) tag;
    Bool valid;
    ControlInsn   ci;
  } BTBEntry deriving(Bits, Eq, FShow);

  typedef struct{
    Bit#(`vaddr)  target;
    Bit#(TSub#(TSub#(`vaddr, TLog#(`btbdepth)), `ignore)) tag;
    Bool valid;
    ControlInsn   ci;
    Bool edgecase ;
  } BTBEntryC deriving(Bits, Eq, FShow);

  typedef struct {
    Bit#(TSub#(TSub#(`vaddr, TLog#(`rastagdepth)), `ignore)) tag;
    Bool valid;
  } RASEntry deriving(Bits, Eq, FShow);
  
  typedef struct {
    Bit#(TSub#(TSub#(`vaddr, TLog#(`rastagdepth)), `ignore)) tag;
    Bool valid;
    Bool edgecase;
  } RASEntryC deriving(Bits, Eq, FShow);

  // function to calculate the hash address to access the branch-history-table.
  function Bit#(TLog#(`bhtdepth)) hash (Bit#(TAdd#(`extrahist, `histlen)) history, Bit#(`vaddr) pc);
    return truncate(pc >> `ignore) ^ truncate(pc >> (`ignore + valueOf(TLog#(`bhtdepth)))) 
                                   ^ truncate(history);
  endfunction

  (*conflict_free="train_bpu, ras_push"*)
  module mkgshare_c(Ifc_bpu);

    String bpu="";     // for Logger

    // holds the pc-tag, target, valid bit and instruction type
    Ifc_mem_config1r1w#(TDiv#(`btbdepth, 2), SizeOf#(BTBEntry), 1)  btb0 <- 
                                                                  mkmem_config1r1w(False,"double");
    Ifc_mem_config1r1w#(TDiv#(`btbdepth, 2), SizeOf#(BTBEntryC), 1) btb1 <- 
                                                                  mkmem_config1r1w(False,"double");

    // holds the 2-bit state counter bits
    RegFile#(Bit#(TLog#(`bhtdepth)), Bit#(`countlen)) bht     <- mkRegFileFull();

    // holds the tags and valid bits of the pc of the ret instructions
    Ifc_mem_config1r1w#(TDiv#(`rastagdepth, 2) , SizeOf#(RASEntry), 1) ras0 <- 
                                                                  mkmem_config1r1w(False,"double");
    Ifc_mem_config1r1w#(TDiv#(`rastagdepth, 2) , SizeOf#(RASEntryC), 1) ras1 <- 
                                                                  mkmem_config1r1w(False,"double");

    // the stack to hold the return addresses
    Ifc_stack#(`vaddr, `rasdepth) ras_stack <- mkstack;

    // the branch history register
    Reg#(Bit#(TAdd#(`extrahist, `histlen))) rg_ghr[2] <- mkCReg(2, 0);

    // indicates the total number of speculated branch predictions in the pipe
    Reg#(Bit#(TLog#(`extrahist))) rg_inflight[2] <- mkCReg(2, 0);

    // wire indicating if the bpu is enabled/disabled
    Wire#(Bool) wr_bpu_enable <- mkWire();

    // register to indicate if the bpu needs to be flushed/initialized to reset state.
    Reg#(Bool) rg_init <- mkReg(True);
    Reg#(Bit#(TLog#(TMax#(`bhtdepth,TMax#(TDiv#(`btbdepth, 2), 
                    TDiv#(`rastagdepth, 2)))))) rg_init_count <- mkReg(0);
    
    // fifo to hold the incoming request from stage0
    FIFOF#(PredictionRequest)  ff_pred_request      <- mkSizedFIFOF(2);

    // fifo holding the response to be sent to stage1
    FIFOF#(NextPC) ff_next_pc   <- mkBypassFIFOF();

    // register indicating the next pc to the stage0
    Reg#(PredictionToStage0)   rg_prediction_pc[2]  <- mkCReg(2, PredictionToStage0{prediction : 0,
                            target_pc : ?,  epochs: 0 ,edgecase: False });


    rule display_stuff;
      `logLevel( bpu, 0, $format("GSHARE: rg_inflight:%d",rg_inflight[1]))
    endrule

    // RuleName: initialize
    // Implicit Conditions: None
    // Explicit Conditions: rg_init == True;
    // Descriptions: This rule will fire on reset and whenever a fence.i instruction is execute by
    // the core. This rule simply invalidates all the entries in the btb, bht and empties the
    // ras-stack.
    rule initialize(rg_init);
      btb0.write(1, truncate(rg_init_count), pack(BTBEntry{valid: False, ci: Branch, 
                                                          target: ?, tag: ?}));
      btb1.write(1, truncate(rg_init_count), pack(BTBEntryC{valid: False, ci: Branch, 
                                                          target: ?, tag: ?, edgecase: False}));
      ras0.write(1, truncate(rg_init_count), pack(RASEntry{valid: False, tag: ?}));
      ras1.write(1, truncate(rg_init_count), pack(RASEntryC{valid: False, tag: ?, edgecase: False}));
      bht.upd(truncate(rg_init_count), 1);
      if(rg_init_count == fromInteger(max(`bhtdepth, max((`btbdepth/2), (`rastagdepth/2)))-1)) begin
        ras_stack.clear;
        rg_init <= False;
        rg_ghr[1] <= 0;
      end
      rg_init_count <= rg_init_count + 1;
      `logLevel( bpu, 0, $format("GSHARE : Init stage. Count:%d",rg_init_count))
    endrule

    // RuleName: perform_prediction
    // Implicit Conditions: ff_pred_request.notEmpty && ff_next_pc.notFull
    // Explicit Conditions: rg_init == false;
    // Description: This rule looks up the BTB for the pc that has been presented by
    // stage0. The BTB is simply accessed using the lower-order bits of the pc. A hit in the btb
    // only occurs if the btb entry is valid and the tags match with that of the requested pc. RAS
    // table is also looked up in the similar fashion to identify if a requested PC is a RET
    // instruction. Both the BTB and RAS cannot be a hit, since they are trained
    // mutually-exclusively. If the BTB is a hit and the CI type == Branch then the bht is accessed
    // to fetch the 2-bit state of the counter. The bht is accessed by hashing the lower order bits
    // of the pc with the global history register. The 2-bit counter indicates if the branch is
    // predicted taken or not-taken.
    // If the BTB is a hit and CI == JAL or CI == Call, then the prediction is forced taken.
    // If prediction result from BTB or RAS is taken then the target address is either available
    // from the respective BTB entry of the RAS stack.
    // The GHR is updated speculatively with the prediction and is left-shifted. The ghr holds a few
    // extra history bits which hold the history of the speculated branch-instructions inserted 
    // into the pipe.
    rule perform_prediction(!rg_init);
      let request = ff_pred_request.first();
      ff_pred_request.deq;

      Bit#(TLog#(`btbdepth)) btb_index = truncate(request.pc >> `ignore) ;
      Bit#(TLog#(`rastagdepth)) ras_index = truncate(request.pc >> `ignore);

      Bool edgecase = False;
      BTBEntry btb_info0 = unpack(btb0.read_response);
      BTBEntryC btb_info1 = unpack(btb1.read_response);
      RASEntry ras_info0 = unpack(ras0.read_response);
      RASEntryC ras_info1 = unpack(ras1.read_response);
      let bht_index0 = hash(rg_ghr[0], request.pc);
      Bit#(`countlen) bht_state0 = bht.sub(bht_index0);
      Bit#(TSub#(TSub#(`vaddr, TLog#(`btbdepth)), `ignore)) btb_tag = truncateLSB(request.pc);
      Bit#(TSub#(TSub#(`vaddr, TLog#(`rastagdepth)), `ignore)) ras_tag = truncateLSB(request.pc);

      Bit#(`countlen) prediction = 1;
      Bit#(`countlen) prediction0 = 1;
      Bit#(`countlen) prediction1 = 1;
      Bool  hit0 = False;
      Bool  hit1 = False;
      Bit#(`vaddr) target0 = btb_info0.target;
      Bit#(`vaddr) target1 = btb_info1.target;
      Bool update_ghr0 = False ;
      Bool update_ghr1 = False ;
      Bit#(TAdd#(`extrahist, `histlen)) pred0_ghr = rg_ghr[0];

      `logLevel( bpu, 2, $format("GSHARE: btb_info0:", fshow(btb_info0))) 
      `logLevel( bpu, 2, $format("GSHARE: btb_info1:", fshow(btb_info1))) 
      `logLevel( bpu, 3, $format("GSHARE: GHR:%b Inflt:%d", rg_ghr[0], rg_inflight[0]))

      if(btb_info0.valid && btb_info0.tag == btb_tag && wr_bpu_enable && !request.discard )begin
        `logLevel( bpu, 0, $format("GSHARE: Hit in BTB0. Tag:%h Index:%d State:%d Target:%h CI:", 
                                        btb_tag, btb_index, bht_state0, target0, fshow(btb_info0.ci)))
        if(btb_info0.ci == Call || btb_info0.ci == JAL)
          prediction0 = 3;
        if(btb_info0.ci == Branch) begin
          hit0 = True;
          update_ghr0 = True;
          prediction0 = bht_state0;
          pred0_ghr = {truncate(rg_ghr[0]), bht_state0[`countlen-1]};
        end
      end
      if(ras_info0.valid && ras_info0.tag == ras_tag && wr_bpu_enable && !request.discard ) begin
        target0 = ras_stack.top;
        prediction0 = 3;
        `logLevel( bpu, 0, $format("GSHARE: Tag hit in RAS0. Tag:%h, Index:%d. Target:%h", 
                                                        ras_tag, ras_index, target0))
      end


      Bit#(TAdd#(`extrahist, `histlen)) pred1_ghr = pred0_ghr;
      let dummy_pc = request.pc;
      dummy_pc[`ignore] = 1;
      let bht_index1 = hash(pred0_ghr, dummy_pc);
      Bit#(`countlen) bht_state1 = bht.sub(bht_index1);
      if(btb_info1.valid && btb_info1.tag == btb_tag && wr_bpu_enable )begin
        `logLevel( bpu, 0, $format("GSHARE: Hit in BTB1. Tag:%h Index:%d State:%d Target:%h CI:", 
                                        btb_tag, btb_index, bht_state1, target1, fshow(btb_info0.ci)))
        if(btb_info1.ci == Call || btb_info1.ci == JAL) begin
          prediction1 = 3;
          edgecase = btb_info1.edgecase;
        end
        if(btb_info1.ci == Branch) begin
          hit1 = True;
          update_ghr1 = True;
          prediction1 = bht_state1;
          pred1_ghr = {truncate(pred0_ghr), bht_state1[`countlen - 1]};
          edgecase = btb_info1.edgecase;
        end
      end
      if(ras_info1.valid && ras_info1.tag == ras_tag && wr_bpu_enable && !request.discard ) begin
        target1 = ras_stack.top;
        prediction1 = 3;
        edgecase = ras_info1.edgecase;
        `logLevel( bpu, 0, $format("GSHARE: Tag hit in RAS1. Tag:%h, Index:%d. Target:%h", 
                                                        ras_tag, ras_index, target1))
      end
      `logLevel( bpu, 2, $format("GSHARE: pred0:%b pred1:%b btb_index:%d bht_state0:%d bht_index0:%d bht_index1:%d", 
                                    pred0_ghr, pred1_ghr, btb_index, bht_state0, bht_index0, bht_index1))

      if(update_ghr0 || update_ghr1) begin
        rg_ghr[0] <= pred1_ghr;
        rg_inflight[0] <= rg_inflight[0] + ((update_ghr0 && update_ghr1)?2:1);
      end
      Bit#(`vaddr) target; 
      if(prediction0 > 1) begin
        prediction = prediction0;
        target = target0;
      end
      else begin
        prediction = prediction1;
        target = target1;
      end
      

      rg_prediction_pc[0] <= PredictionToStage0{  prediction : prediction,
                                                  target_pc  : target,
                                                  epochs     : request.epochs
                                                  ,edgecase   :  edgecase
                                               };
      
      let resp = NextPC{ va       : request.pc
                                     ,prediction0 : prediction0
                                     ,hit0        : hit0
                                     ,prediction1 : prediction1
                                     ,hit1        : hit1
                                     ,discard     : request.discard
                                   } ;
      `logLevel( bpu, 1, $format("GSHARE: Response to Stage1:",fshow(resp)))
      ff_next_pc.enq(resp);
    endrule

    // MethodName: prediction_req
    // Implicit Conditions: ff_pred_request.notFull
    // Explicit Conditions: rg_init == False;
    // Description: This method captures the request from stage0 and latches the address into the
    // BTB and ras table.
		method Action prediction_req(PredictionRequest req)if(!rg_init);
      Bit#(TLog#(`btbdepth)) btb_index = truncate(req.pc >> `ignore) ;
      `logLevel( bpu, 1, $format("GSHARE: Prediction request:", fshow(req), "index:%d",btb_index>>1))
      Bit#(TLog#(`rastagdepth)) ras_index = truncate(req.pc >> `ignore);
      btb0.read(truncateLSB(btb_index));
      btb1.read(truncateLSB(btb_index));
      ras0.read(truncateLSB(ras_index));
      ras1.read(truncateLSB(ras_index));
      if(req.fence && wr_bpu_enable)
        rg_init <= True;
      else
        ff_pred_request.enq(req);
    endmethod

    // MethodName: train_bpu
    // Implicit Conditions: None.
    // Explicit Conditions: rg_init == False
    // Description: This method is fired when a control instruction is resolved in the execute
    // stage. This method will updated the ghr in case of a branch instruction being resolved.
    // Incase of JAL, Call, only the btb is updated.
    // Incase of Ret instructions, the ras-table is updated and the ras-stack is poped.
    // -- If a branch-misprediction occurred, the history in the ghr is corrected by flipping the
    // respective bits and rg_inflight is reset to 0. 
    // -- If the branch prediction was correct then the rg_inflight counter is simply decremented
    // by 1
    // -- If a miprediction occurred because of a non-branch instruction then the ghr is not touched
    // but the rg_inflight counter is reset to 0.
    method Action train_bpu(Training_data td)if(!rg_init);
      Bit#(TLog#(`btbdepth)) btb_index = truncate(td.pc >> `ignore) ;
      Bit#(TLog#(`rastagdepth)) ras_index = truncate(td.pc >> `ignore);
      Bit#(TSub#(TSub#(`vaddr, TLog#(`btbdepth)), `ignore)) btb_tag = truncateLSB(td.pc);
      Bit#(TSub#(TSub#(`vaddr, TLog#(`rastagdepth)), `ignore)) ras_tag = truncateLSB(td.pc);
      if(wr_bpu_enable) begin
        `logLevel( bpu, 0, $format("GSHARE: Training:",fshow(td)))
        if(td.ci == Ret) begin
          if(ras_index[0] == 0) begin
            ras0.write(1, truncateLSB(ras_index), pack(RASEntry{valid: True, tag: ras_tag}));
            `logLevel( bpu, 0, $format("GSHARE: Training RAS0. Index:%d Tag:%h", ras_index>>1, ras_tag))
          end
          else begin
            ras1.write(1, truncateLSB(ras_index), pack(RASEntryC{valid: True, tag: ras_tag,
                                                                  edgecase: td.edgecase}));
            `logLevel( bpu, 0, $format("GSHARE: Training RAS1. Index:%d Tag:%h", ras_index>>1, ras_tag))
          end
          ras_stack.pop;
        end
        else begin
          if(btb_index[0] == 0) begin
            `logLevel( bpu, 2, $format("GSHARE: Training BTB0. Index:%d Tag:%h", btb_index>>1, btb_tag))
            btb0.write(1, truncateLSB(btb_index), pack(BTBEntry{valid: True, tag: btb_tag, 
                                                target: td.target, ci: td.ci}));
          end
          else begin
            `logLevel( bpu, 2, $format("GSHARE: Training BTB1. Index:%d Tag:%h", btb_index>>1, btb_tag))
            btb1.write(1, truncateLSB(btb_index), pack(BTBEntryC{valid: True, tag: btb_tag, target: td.target, 
                                                    ci: td.ci, edgecase: td.edgecase}));
          end
          let bht_index = hash(rg_ghr[1] >> rg_inflight[1], td.pc);
          if(td.ci == Branch && td.btbhit)begin 
            `logLevel( bpu, 3, $format("GSHARE: Updating GHR:%b Inflt:%d Hash:%d", rg_ghr[1],
                                        rg_inflight[1], bht_index))
            bht.upd(bht_index, td.state);
            if(!td.mispredict)
              rg_inflight[1] <= rg_inflight[1] - 1;
            else begin
              rg_inflight[1] <= 0;
              let x = rg_ghr[1] >> (rg_inflight[1]-1);
              x[0] = ~x[0];
              rg_ghr[1] <= x;
            end
          end
          else if(td.mispredict) begin
            rg_inflight[1] <= 0;
            rg_ghr[1] <= rg_ghr[1] >> rg_inflight[1];
          end
        end
      end
    endmethod

		interface next_pc = toGet(ff_next_pc);

    method predicted_pc = rg_prediction_pc[1];

    method Action ras_push(Bit#(`vaddr) pc)if(!rg_init);
      `logLevel( bpu, 2, $format("GSHARE : Pushing to RAS:%h ",pc))
      ras_stack.push(pc);
    endmethod

    method Action bpu_enable(Bool e);
      wr_bpu_enable <= e;
    endmethod
  endmodule
endpackage

