/* 
Copyright (c) 2019, IIT Madras All rights reserved.

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
Details: This module implements a fullt-associative GSHARE branch predictor with
Return-Address-Stack support. It basically has the prediction and training phase. The comments on
the respective methods describe their operations.

--------------------------------------------------------------------------------------------------
*/
package gshare_fa;

  // -- library imports
  import Assert :: *;
  import ConfigReg :: * ;
  import Vector :: * ;
  import OInt :: * ;

  // -- project imports
  `include "Logger.bsv"
  `include "common_params.bsv"
  import common_types :: *;
`ifdef bpu_ras
  import stack :: * ;
`endif

  `define ignore 2

  /*doc:struct: This struct defines the fields of each entry in the Branch-Target-Buffer*/
  typedef struct{
    Bit#(TSub#(`vaddr, `ignore))  target;               // full target virtual address
    Bit#(TSub#(`vaddr, `ignore)) tag;                   // full virtual address
    Bool valid;                         // indicate if the field is valid or not.
    ControlInsn   ci;                   // indicate the type of entry. Branch, JAL, Call, Ret.
  } BTBEntry deriving(Bits, Eq, FShow);
 

  /*doc : func : function to calculate the hash address to access the branch-history-table.
  1. Here the lower 2 bits of the pc are ignored since they are always going to be 0 for a
  non-compressed supported system.
  2. We take lower (extrahist+histlen) bit of pc and XOR with the next set of (extrahist+histlen) 
  bits of pc and with the GHR register
  This has proven to be a better hash function, not so costly. It is completely empirical and better
  hash functions could exist and can replace this function with that to evaluate what works best.
  */
  function Bit#(TLog#(`bhtdepth)) fn_hash (Bit#(TAdd#(`extrahist, `histlen)) history, 
                                                                                  Bit#(`vaddr) pc);
    return truncate(pc >> `ignore) ^ truncate(pc >> (`ignore + valueOf(TLog#(`bhtdepth)))) 
                                   ^ truncate(history);
  endfunction

  interface Ifc_bpu;
    /*doc : method : receive the request of new pc and return the next pc in case of hit. */
    method ActionValue#(PredictorResponse) mav_prediction_response (PredictionRequest r);

    /*doc : method : method to train the BTB and BHT tables based on the evaluation from execute
    stage*/
	  method Action ma_train_bpu (Training_data td);

    /*doc : method : This method is fired when there is a misprediction. 
    It received 2 fields. A boolean indicating if the instructin was a conditional branch or not.
    The second field contains the GHR value after predicting the same instruction. In case
    of a conditional branch the LSB bit of this GHR is negated and this value is restored in the
    rg_ghr register. Otherwise, the GHR directly written to the rg_ghr register. */ 
    method Action ma_mispredict (Tuple2#(Bool, Bit#(TAdd#(`extrahist, `histlen))) g);

    /*doc : method : This method captures if the bpu is enabled through csr or not*/ 
    method Action ma_bpu_enable (Bool e);
  endinterface

  (*synthesize*)
  module mkbpu (Ifc_bpu);
    
    String bpu = "";

  `ifdef bpu_ras
    Ifc_stack#(`vaddr, `rasdepth) ras_stack <- mkstack;
  `endif

    /*doc : vec : This vector of register holds the BTB. We use vector instead of array to leverage
    the select function provided by bluespec*/
    Vector#(`btbdepth, Reg#(BTBEntry)) v_reg_btb <- replicateM(mkReg(BTBEntry{valid : False, 
                                                                target: ?, tag: ?, ci : Branch}));

    /*doc : reg : This array holds the branch history table. Each entry is `statesize-bits wide and
    represents a up/down saturated counter. The reset value is set to 2 since we update bht only
    on the second atttempt of the same branch */ 
    Reg#(Bit#(`statesize)) rg_bht_arr[`bhtdepth];
    for(Integer i = 0; i < `bhtdepth ; i =  i + 1)
      rg_bht_arr[i] <- mkReg(2);

    /*doc : reg : This register points to the next entry in the Fully associative BTB that should 
    be allocated for a new entry */ 
    Reg#(Bit#(TLog#(`btbdepth))) rg_allocate <- mkReg(0);

    /*doc : reg : This register holds the global history buffer. There are two methods which can
    update this register: mav_prediction_response and ma_mispredict. The former is called every
    time a new pc is generted and updates the regiser speculatively for conditional branches
    which are a hit in the BTB. The later method called when a mis-prediction occurs and restores
    the register with the non-speculative version. 
    Both of these method are in conflict with each other. One way to resolve this would be create a
    preempts attribute given ma_mispredict a higher priority since it doesn't make sense to provide
    a prediction knowing the pipe has flushed. However, this solution would create a path from the
    ma_mispredict enable method to the mav_prediction_response output ready signal making it the
    critical path.
    Alternate to that is to implement this register as a CReg where the ma_mispredict value shadows
    the value updated by the mav_prediction_response method. This remove the above critical path.
    */ 
    Reg#(Bit#(TAdd#(`extrahist, `histlen))) rg_ghr[2] <- mkCReg(2, 0);

    /*doc : wire : This wire indicates if the predictor is enabled or disabled by the csr config*/ 
    Wire#(Bool) wr_bpu_enable <- mkWire();

  `ifdef ifence
    /*doc : reg : When true this register flushes all the entries and cleans up the btb*/ 
    ConfigReg#(Bool) rg_initialize <- mkConfigReg(False);
    
    /*doc : rule : This rule flushes the btb and puts it back to the initial reset state.
    This rule would be called each time a fence.i is being performed. This rule will also reset the
    ghr and rg_allocate register*/ 
    rule rl_initialize (rg_initialize);
      for(Integer i = 0; i < `btbdepth; i = i + 1)
        v_reg_btb[i] <= BTBEntry{valid : False, target: ?, tag: ?, ci : Branch};
      rg_initialize <= False;
      rg_ghr[1] <= 0;
      rg_allocate <= 0;
    `ifdef bpu_ras
      ras_stack.clear;
    `endif
    endrule
  `endif

    /*doc:method: This method provides prediction for a requested PC. 
    If a fence.i is requested, then the rg_initialize register is set to true.

    The index of the bht is obtained using the hash function above on the pc and the current value
    of GHR. This index is then used to find the entry in the BHT.

    We then perform a fully-associative look-up on the BTB. We compare the tags with the pc and
    check for the valid bit to be set. This applied to each entry and a corresponding bit is set in
    match_ variable. By nature of how training and prediction is performed, we expect match_
    variable to be a one-hot vector i.e. only one entry is a hit in the entire BTB. Multiple entries
    can't be a hit since update comes from only one source.

    Then using the match_ variable and the special select function from BSV we pick out the entry
    that is a hit. A hit is detected only is OR(match) != 0. 

    Depending on the ci type the prediction variable is set either to 3 or the value in the BHT
    entry that we indexed earlier. 

    In case of a BTB hit and the ci being a Branch, the ghr is left-shifted and the lsb is set to 1
    if predicted taken else 0. This ghr is also sent back out along with the prediction and target
    address.

    We also send out a boolean value indicating if the pc caused a hit in the BTB or not.

    Fence: This feature is required for self-modifying codes. Software is required to conduct an
    fence.i each time the text-section is modified by the software. When this happens we need to
    flush the branch predictor as well else non-branch instructions could be treated as predicted
    taken leading to wrong behavior

    Working of RAS: Earlier versions of the predictor included a separate method which would push
    the return address onto the RAS. This address came from the execute stage which when a Call
    instruction was detected. If the BTB was a hit for a pc and it detected a Ret type ci then the
    RAS popped. However with this architecture you could have a push happening from an execute stage
    and a ret being detected in the predictor, this return would never see this latest push and thus
    would pick the wrong address from the RAS. So essentially the RAS would work only if the
    call-ret are a few number of instructions apart, for smaller functions the RAS would fail
    consistently.

    To fix this problem, we push and pop with the predictor itself. If a pc is a btb hit and is a
    Call type ci, the pc+4 value if pushed on the Stack. If the subsequent pc was a btb hit and a
    Ret type ci, it would immediately pick up the RAS top which would be correct. Thus, an empty
    function would also benefit from this mechanism.
    */
    method ActionValue#(PredictorResponse) mav_prediction_response (PredictionRequest r)
                                                         `ifdef ifence if(!rg_initialize) `endif ;
      `logLevel( bpu, 0, $format("BPU : Received Request: ", fshow(r), " ghr:%h",rg_ghr[0]))
    `ifdef ifence
      if( r.fence && wr_bpu_enable)
        rg_initialize <= True;
    `endif
      let bht_index_ = fn_hash(rg_ghr[0], r.pc);
      let branch_state_ = rg_bht_arr[bht_index_];

      Bit#(`statesize) prediction_ = 1;
      Bit#(`vaddr) target_ = r.pc;
      Bit#(TLog#(`btbdepth)) hit_index_ = 0;
      Bool hit = False;
      Bit#(TAdd#(`extrahist, `histlen)) lv_ghr = rg_ghr[0];

      if(wr_bpu_enable) begin
        // a one - hot vector to store the hits of the btb
        Bit#(`btbdepth) match_;
        for(Integer i = 0; i < `btbdepth; i =  i + 1)
          match_[i] = pack(v_reg_btb[i].tag == truncateLSB(r.pc) && v_reg_btb[i].valid);

        `logLevel( bpu, 1, $format("BPU : Match:%h", match_)) 

        hit = unpack(|match_);
        hit_index_ = truncate(pack(countZerosLSB(match_)));
        let hit_entry = select(readVReg(v_reg_btb), unpack(match_));
//        let hit_entry = v_reg_btb[hit_index_];

        if(|match_ == 1) begin
          `logLevel( bpu, 1, $format("BPU : BTB Hit: ",fshow(hit_entry)))
        end
    
        if(|match_ == 1) begin
        `ifdef bpu_ras
          if(hit_entry.ci == Call)begin // push to ras in case of Call instructions
            `logLevel( bpu, 1, $format("BPU: Pushing1 to RAS:%h",(r.pc+4)))
            ras_stack.push((r.pc+4));
          end

          if(hit_entry.ci == Ret) begin // pop from ras in case of Ret instructions
            target_ = ras_stack.top;
            ras_stack.pop;
            `logLevel( bpu, 1, $format("BPU: Choosing from top RAS:%h",(target_)))
          end
          else
        `endif
          target_ = {hit_entry.target, 'd0};

          if(hit_entry.ci == Ret ||  hit_entry.ci == Call || hit_entry.ci == JAL )
             prediction_ = 3;

          if(hit_entry.ci == Branch) begin
            prediction_ = branch_state_;
            lv_ghr = {truncate(rg_ghr[0]), branch_state_[`statesize - 1]};
          end
        end
      `ifdef ifence if(!r.fence) `endif
          rg_ghr[0] <= lv_ghr;
       
        `logLevel( bpu, 0, $format("BPU : BHT entry:%d Branch_state:%d Target:%h Pred:%d", 
                                                  bht_index_, branch_state_, target_, prediction_))

        `ifdef ASSERT
          dynamicAssert(countOnes(match_) < 2, "Multiple Matches in BTB");
        `endif
      end
      return PredictorResponse{ nextpc : target_, state : prediction_, ghr : lv_ghr, 
                                btbindex : hit_index_, hit : hit};
    endmethod

    /*doc:method: This method is called for all unconditional and conditional jumps. 
    Using the pc of the instruction we first check if the entry already exists in the btb or not. If
    it does then entry is updated with a new/same target from the execute stage. 

    If the entry does not exists then a new entry is allotted in the btb depending on rg_allocate
    value. 

    Additionally in case of conditional branches, the bht is again indexed using the pc and the ghr.
    This entry is updated only if the BTB was a hit during prediction i.e. only on the second
    instance of the branch the bht gets updated.
    */
    method Action ma_train_bpu (Training_data d) if(wr_bpu_enable 
                                                          `ifdef ifence && !rg_initialize `endif );
      `logLevel( bpu, 0, $format("BPU : Received Training: ",fshow(d)))

      // even if btbhit is a hit we need to compare the tags since a previous training could have
      // overwritten an entry which was a hit during the current's prediction phase
      if(v_reg_btb[d.btbindex].valid && v_reg_btb[d.btbindex].tag == truncateLSB(d.pc))begin
        v_reg_btb[d.btbindex] <= BTBEntry{valid : True, tag : truncateLSB(d.pc), 
                                          target : truncateLSB(d.target), ci : d.ci};
        `logLevel( bpu, 1, $format("BPU : Training existing Entry index: %d",d.btbindex))
      end
      else begin
        `logLevel( bpu, 1, $format("BPU : Allocating new index: %d",rg_allocate))
        v_reg_btb[rg_allocate] <= BTBEntry{valid : True, tag : truncateLSB(d.pc), 
                                          target : truncateLSB(d.target), ci : d.ci};
        rg_allocate <= rg_allocate + 1;
        if(v_reg_btb[rg_allocate].valid)
          `logLevel( bpu, 2, $format("BPU : Conflict Detected"))
      end

      // we use the ghr version before the prediction to train the BHT
      let bht_index_ = fn_hash(d.ghr>>1, d.pc);
      if(d.ci == Branch && d.btbhit) begin
        rg_bht_arr[bht_index_] <= d.state;
        `logLevel( bpu, 1, $format("BPU : Upd BHT entry: %d with state: %d",bht_index_, d.state))
      end
    endmethod

    /*doc:method: This method is called each time the evaluation stage detects a mis-prediction. If
    the misprediction was due to a conditional branch then the ghr is fixed by flipping the lsb
    and then writing it to the rg_ghr.
    */
    method Action ma_mispredict (Tuple2#(Bool, Bit#(TAdd#(`extrahist, `histlen))) g) 
                                                         `ifdef ifence if(!rg_initialize) `endif ;
      let {btbhit, ghr} = g;
      if(btbhit)
        ghr[0] = ~ghr[0];
      `logLevel( bpu, 0, $format("BPU : Misprediction fired. Restoring ghr:%h",ghr))
      rg_ghr[1] <= ghr;
    endmethod

    method Action ma_bpu_enable (Bool e);
      wr_bpu_enable <= e;
    endmethod

  endmodule
endpackage

