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
fully-associative BTB. During prediction, this module will present stage1 with 2-predictions: one for pc and
another for pc+2. A global history register (ghr) is used to keep track of the conditional branches.
The same BTB is used for holding tags of conditional and unconditional branches. A
branch-history-table is maintained which indicates the prediction of the conditional branch which
was a hit in the BTB. Each entry in the BHT maintains a 2-bit saturating counter.
A return address stack (RAS) is also maintained.

Working Princicple

Prediction Phase: 

  The pc-gen stage (Stage0) presents with a 4-byte aligned pc. Prediction needs to be performed for 
  pc and pc+2. We perform 2 predictions because the cache responds with 32-bits which could hold 
  upto 2 16-bit instructions both of which could be control instructions (branch, jal, jalr, etc). 
  Since the latency of the predictor is the same as that of the cache, the predictor also needs to 
  respond with 2 predictions to the next stage (Stage1).

  To perform prediction first a fully associative look-up is performed on the BTB for pc. 
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

  Finally, the predictions of pc and pc+2 are analysed and stage0 is informed of the next possible
  pc. The predictinos of pc and pc+2 are then sent to the stage1 along with the information if the
  prediction was for a branch and if so was it a hit in the btb or not


Training/Update Phase:

  This phase occurs each time a control instruction get evaluated in the execute stage (stage3).
  When a Call instruction get evaluated the return address is pushed in to RAS and in case of Ret
  instruction the ras is poped. Only one can occur at a time and hence no conflicts are expected.

  During the training, first the btb if looked-up if the pc already holds a valid entry in the btb.
  If so, update the fields in the same entry, else allocate a new entry in a round-robin fashion.

  In case of conditional Branch instruction which was a btb hit in the prediction phase, we check if
  there was a misprediction or not. If the prediction was correct, then the inflight-counter is
  is simply decremented by 1. If the a misprediction occurred then the inflight-counter is set to
  0 and the ghr is corrected by flipping the respective speculated bit.

Disable bpu at runtime: The branch prediction can be disabled at runtime by reseting the respective
bit in the csr register

BTB implementation:
The BTB is implemented as a single fully-associative array of btbdepth size.

For running non-compressed code best-config: (dmips=1.72)
  `define bhtdepth 256
  `define histlen   8
  `define btbdepth  32

For running compressed code best-config: (dmips: 1.70)

  `define bhtdepth 128
  `define histlen   7
  `define btbdepth  32
--------------------------------------------------------------------------------------------------
*/
package gshare_fa_c;
  // -- package imports -- // 
  import FIFOF::*;
  import SpecialFIFOs::*;
  import FIFO::*;
  import RegFile::*;
  import GetPut::*;
  import Assert :: *;
  import Cntrs :: *;

  // -- project related imports -- //
  import globals :: *;
  import stack :: *;
  `include "Logger.bsv"

  `define countlen    2   // the size of the 2-bit counter
  `define ignore      1   // number of bits of the pc to be ignored

  typedef struct{
    Bit#(`vaddr)  target;
    Bit#(`vaddr) tag;
    Bool valid;
    ControlInsn   ci;
    Bool edgecase ;
  } BTBEntry deriving(Bits, Eq, FShow);

  // function to calculate the hash address to access the branch-history-table.
  function Bit#(TLog#(`bhtdepth)) hash (Bit#(TAdd#(`extrahist, `histlen)) history, Bit#(`vaddr) pc);
    return truncate(pc >> `ignore) ^ truncate(pc >> (`ignore + valueOf(TLog#(`bhtdepth)))) 
                                   ^ truncate(history);
  endfunction

  (*conflict_free="train_bpu, ras_push"*)
  module mkgshare_fa_c(Ifc_bpu);

    String bpu="";     // for Logger

    Reg#(BTBEntry) btb [`btbdepth];
    for(Integer i = 0; i < `btbdepth ; i = i+1)
      btb[i] <- mkReg(BTBEntry{valid: False, target: ?, tag: ?, ci: Branch, edgecase: False});

    Reg#(Bit#(TLog#(`btbdepth))) rg_allocate <- mkReg(0);

    // holds the 2-bit state counter bits
    RegFile#(Bit#(TLog#(`bhtdepth)), Bit#(`countlen)) bht     <- mkRegFileFull();

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
    
    // fifo to hold the incoming request from stage0
    FIFOF#(PredictionRequest)  ff_pred_request      <- mkSizedFIFOF(2);

    // fifo holding the response to be sent to stage1
    FIFOF#(NextPC) ff_next_pc   <- mkBypassFIFOF();

    // register indicating the next pc to the stage0
    Reg#(PredictionToStage0)   rg_prediction_pc[2]  <- mkCReg(2, PredictionToStage0{prediction : 0,
                            target_pc : ?,  epochs: 0 ,edgecase: False });

    // RuleName: initialize
    // Implicit Conditions: None
    // Explicit Conditions: rg_init == True;
    // Descriptions: This rule will fire on reset and whenever a fence.i instruction is execute by
    // the core. This rule simply invalidates all the entries in the btb, bht and empties the
    // ras-stack.
    rule initialize(rg_init);
      for(Integer i = 0; i < `btbdepth ; i = i+1)
        btb[i] <= BTBEntry{valid: False, target: ?, tag: ?, ci: Branch, edgecase: False} ;
      ras_stack.clear;
      rg_init <= False;
      rg_ghr[1] <= 0;
      rg_allocate <= 0;
      `logLevel( bpu, 0, $format("GSHARE : Init stage"))
    endrule

    // RuleName: perform_prediction
    // Implicit Conditions: ff_pred_request.notEmpty && ff_next_pc.notFull
    // Explicit Conditions: rg_init == false;
    // Description: This rule looks up the BTB for the pc that has been presented by
    // stage0. A fully associative look-up on the pc is performed. A hit in the btb
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
    // The above is performed for pc and pc+2 since compressed is supported in this module
    rule perform_prediction(!rg_init);
      let request = ff_pred_request.first();
      ff_pred_request.deq;

      Bit#(2) prediction = 1;
      Bit#(2) prediction0 = 1;
      Bit#(2) prediction1 = 1;
      Bit#(`vaddr) target0 = ?;
      Bit#(`vaddr) target1 = ?;
      Bool hit0 = False;
      Bool hit1 = False;
      Bool edgecase = False;

      Bit#(`vaddr) pc0 = request.pc;
      Bit#(`vaddr) pc1 = request.pc | zeroExtend(2'b10);
      
      let bht_index0 = hash(rg_ghr[0], pc0);
      Bit#(`countlen) bht_state0 = bht.sub(bht_index0);
      Bit#(TAdd#(`extrahist, `histlen)) pred0_ghr = rg_ghr[0];

      Bit#(`btbdepth) match0 = 0;
      Bit#(`btbdepth) match1 = 0;

      for(Integer i=0; i<`btbdepth; i=i+1)begin
        if(btb[i].tag == pc0 && btb[i].valid && wr_bpu_enable && !request.discard)
          match0[i] = 1;
        if(btb[i].tag == pc1 && btb[i].valid && wr_bpu_enable)
          match1[i] = 1;
      end
      dynamicAssert(countOnes(match0) < 2, "Multiple Matches in Prediction0");
      dynamicAssert(countOnes(match1) < 2, "Multiple Matches in Prediction1");

      Bit#(TLog#(`btbdepth)) hitindex0 = truncate(pack(countZerosLSB(match0)));
      Bit#(TLog#(`btbdepth)) hitindex1 = truncate(pack(countZerosLSB(match1)));

      // check if pc0 is a match and update prediction and other variables accordingly.
      if(|match0 == 1) begin
        if(btb[hitindex0].ci == Ret)
          target0 = ras_stack.top;
        else
          target0 = btb[hitindex0].target;
  
        if(btb[hitindex0].ci == Ret || btb[hitindex0].ci == Call || btb[hitindex0].ci == JAL)
          prediction0 = 3;
        if(btb[hitindex0].ci == Branch) begin
          hit0 = True;
          prediction0 = bht_state0;
          pred0_ghr = {truncate(rg_ghr[0]), bht_state0[`countlen-1]};
        end
      end

      let bht_index1 = hash(pred0_ghr, pc1);
      Bit#(`countlen) bht_state1 = bht.sub(bht_index1);
      Bit#(TAdd#(`extrahist, `histlen)) pred1_ghr = pred0_ghr;
      // check if pc1 is a match and update prediction and other variables accordingly.
      if(|match1 == 1) begin
        edgecase = btb[hitindex1].edgecase;
        if(btb[hitindex1].ci == Ret)
          target1 = ras_stack.top;
        else 
          target1 = btb[hitindex1].target;
  
        if(btb[hitindex1].ci == Ret || btb[hitindex1].ci == Call || btb[hitindex1].ci == JAL)
          prediction1 = 3;
        if(btb[hitindex1].ci == Branch) begin
          hit1 = True;
          pred1_ghr = {truncate(pred0_ghr), bht_state1[`countlen - 1]};
          prediction1 = bht_state1;
        end
      end

      // update the history register on a btb branch hit.
      if(hit0 || hit1) begin
        rg_ghr[0] <= pred1_ghr;
        rg_inflight[0] <= rg_inflight[0] + ((hit0 && hit1)?2:1);
      end

      // mux between the targets and predictions
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
    // Description: This method captures the request from stage0 
		method Action prediction_req(PredictionRequest req)if(!rg_init);
      `logLevel( bpu, 1, $format("GSHARE: Prediction request:", fshow(req)))
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
    // Incase of Ret, JAL, Call, only the btb is updated.
    // -- If a branch-misprediction occurred, the history in the ghr is corrected by flipping the
    // respective bits and rg_inflight is reset to 0. 
    // -- If the branch prediction was correct then the rg_inflight counter is simply decremented
    // by 1
    // -- If a miprediction occurred because of a non-branch instruction then the ghr is not touched
    // but the rg_inflight counter is reset to 0.
    method Action train_bpu(Training_data td)if(!rg_init);
      if(wr_bpu_enable) begin
        `logLevel( bpu, 0, $format("GSHARE: Training:",fshow(td), "rg_allocate:%d",rg_allocate))
        Bit#(`btbdepth) hit =0;
        for(Integer i=0; i < `btbdepth ; i=i+1) begin
          `logLevel( bpu, 0, $format("GSHARE: btb[%d]: ",i,fshow(btb[i])))
          hit[i] = pack(btb[i].tag == td.pc && btb[i].valid);
        end

        dynamicAssert(countOnes(hit) < 2, "Multiple hits in the BTB");

        if(|hit == 0) begin // no hit in the btb allocate a new entry
          btb[rg_allocate] <= BTBEntry{valid: True, tag: td.pc, target: td.target, ci: td.ci, 
                                       edgecase: td.edgecase};
          if(rg_allocate == fromInteger(`btbdepth -1))
            rg_allocate <= 0;
          else
            rg_allocate <= rg_allocate + 1;
          if(btb[rg_allocate].valid)
            `logLevel( bpu, 0, $format("GSHARE: Overwriting Entry:",fshow(btb[rg_allocate])))
        end
        else begin // update the existing entry
          for(Integer i=0; i < `btbdepth ; i=i+1) begin
            if(hit[i] == 1)
              btb[i] <= BTBEntry{valid: True, tag: td.pc, target: td.target, ci: td.ci, 
                                       edgecase: td.edgecase};
          end
        end

        if(td.ci == Ret)
          ras_stack.pop;
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

