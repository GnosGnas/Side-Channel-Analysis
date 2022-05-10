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

Author : Neel Gala, Vipul, Deepa
Email id : neelgala@gmail.com
Details:
This module will interact with the memory subsystem to fetch relevant instructions from memory. The
module will also receive flushes from the write - back stage which could be because of a fence or trap
handling.
--------------------------------------------------------------------------------------------------
*/
package stage1;
  // -- package imports --//
  import FIFOF::*;
  import SpecialFIFOs::*;
  import FIFO::*;
  import GetPut::*;
  import Assert::*;
  import Vector :: *;

  // -- project imports --//
	import TxRx	::*;            // for interstage buffer connection
  import common_types::*;     // for pipe - line types
  `include "common_params.bsv"// for core parameters
  `include "Logger.bsv"       // for logging display statements.
  import globals::*;          // for global interface definitions
`ifdef compressed
  import decompress :: * ;
`endif


  // Enum to define the action to be taken when an instruction arrives.
  typedef enum {CheckPrev, None} ActionType deriving(Bits, Eq, FShow);

  typedef struct{
    Bit#(`vaddr) pc;
    Bit#(16) instruction;
    Bit#(2) epochs;
  `ifdef bpu
    BTBResponse btbresponse;
  `endif
  } PrevMeta deriving(Eq, Bits, FShow);

	interface Ifc_stage1;

    // instruction response from the memory subsytem or the memory bus
    interface Put#(FetchResponse#(32, `iesize)) inst_response;

   // this interface receives the prediction response from the branch prediction unit
    interface RXe#(Stage0PC#(`vaddr)) rx_from_stage0;

    // instruction along with other results to be sent to the next stage
    interface TXe#(PIPE1) tx_to_stage2;
  `ifdef rtldump
    interface TXe#(Bit#(32)) tx_to_stage2_inst;
  `endif

    // method to update epochs on redirection from execute stage
		method Action update_eEpoch;

      // method to update epochs on redirection from writeback stage
		method Action update_wEpoch;

    // csrs from the csrfile.
    method Action csr_misa_c (Bit#(1) c);

  `ifdef triggers
    method Action trigger_data1(Vector#(`trigger_num, TriggerData) t);
    method Action trigger_data2(Vector#(`trigger_num, Bit#(XLEN)) t);
    method Action trigger_enable(Vector#(`trigger_num, Bool) t);
  `endif

	endinterface

  (*synthesize*)
  module mkstage1#(parameter Bit#(XLEN) hartid) (Ifc_stage1);

    String stage1=""; // defined for logger

    // --------------------- Start instantiations ------------------------//

    // this wire carries the current values of certain csrs.
    Wire#(Bit#(1)) wr_csr_misa_c <- mkWire();

    // The following registers are use to the maintain epochs from various pipeline stages:
    // writeback and execute stage.
    Reg#(Bit#(1)) rg_wEpoch <- mkReg(0);
    Reg#(Bit#(1)) rg_eEpoch <- mkReg(0);

    // This register implements a simple state - machine which indicates how the instruction should
    // be extracted from the cache response.
    Reg#(ActionType) rg_action <- mkReg(None);

    // This register indicates that the lower 16 - bits of the response from the cache need to be
    // ignored. This happens because, when there is jump to non - 4-byte aligned address the cache
    // still receives a previous 4 - byte - ailgned address from the fetch stage.
    Reg#(Bool) rg_receiving_upper <- mkReg(False);

    // This register holds the 16 - bits of instruction from the previous cache response if required.
    Reg#(PrevMeta) rg_prev <- mkReg(?);

    // This FIFO receives the response from the memory subsytem (a.k.a cache)
    FIFOF#(FetchResponse#(32, `iesize)) ff_memory_response <- mkSizedBypassFIFOF(2);

    // This FIFO receives the response from the branch prediction unit (bpu or ras)
    RX#(Stage0PC#(`vaddr)) rx_fromstage0 <- mkRX;

    // FIFO to interface with the next pipeline stage
		TX#(PIPE1) tx <- mkTX;

  `ifdef rtldump
		TX#(Bit#(32)) tx_inst <- mkTX;
  `endif

    // This variable holds the current epoch values of the pipe
    let curr_epoch = {rg_eEpoch, rg_wEpoch};

  `ifdef triggers
    Vector#(`trigger_num, Wire#(TriggerData)) v_trigger_data1 <- replicateM(mkWire());
    Vector#(`trigger_num, Wire#(Bit#(XLEN))) v_trigger_data2 <- replicateM(mkWire());
    Vector#(`trigger_num, Wire#(Bool)) v_trigger_enable <- replicateM(mkWire());
  `endif

    // ---------------------- End Instatiations --------------------------//


    // ---------------------- Start local function definitions ----------------//

    // this function will deque the response from i - mem fifo and the branch prediction fifo
    function Action deq_response = action
      ff_memory_response.deq;
      rx_fromstage0.u.deq;
    endaction;

  `ifdef triggers

    function ActionValue#(Tuple2#(Bool, Bit#(`causesize))) check_trigger (Bit#(`vaddr) pc,
                           Bit#(32) instr `ifdef compressed , Bool compressed `endif ) = actionvalue
      Bool trap = False;
      Bit#(`causesize) cause = `Breakpoint;
      Bit#(XLEN) compare_value ;
      Bool chain = False;
      for(Integer i=0; i < `trigger_num; i=i+1)begin
        `logLevel( stage1, 3, $format("core:%2d ",hartid,"STAGE1: Trigger[%2d] Data1: ", i, 
                                                                        fshow(v_trigger_data1[i])))
        `logLevel( stage1, 3, $format("core:%2d ",hartid,"STAGE1: Trigger[%2d] Data2: ", i, 
                                                                        fshow(v_trigger_data2[i])))
        `logLevel( stage1, 3, $format("core:%2d ",hartid,"STAGE1: Trigger[%2d] Enable: ", i, 
                                                                        fshow(v_trigger_enable[i])))
        if(v_trigger_enable[i] &&& v_trigger_data1[i] matches tagged MCONTROL .mc &&&
                              ((!trap && !chain) || (chain && trap)) &&& mc.execute == 1)begin
          Bit#(XLEN) trigger_compare = `ifdef compressed
                     (compressed && mc.size == 2)? zeroExtend(v_trigger_data2[i][15:0]): `endif
                                                   v_trigger_data2[i];
          if(mc.select == 0)
            compare_value = pc;
          else
            compare_value = zeroExtend(instr);

          if(mc.matched == 0)begin
            if(trigger_compare == compare_value)
              trap = True;
            else if(chain)
              trap = False;
          end
          if(mc.matched == 2)begin
            if(compare_value >= trigger_compare)
              trap = True;
            else if(chain)
              trap = False;
          end
          if(mc.matched == 3)begin
            if(compare_value < trigger_compare)
              trap = True;
            else if(chain)
              trap = False;
          end

        `ifdef debug
          if(trap && mc.action_ == 1)begin
            cause = `HaltTrigger;
            cause[`causesize - 1] = 1;
          end
        `endif
          chain = unpack(mc.chain);
        end
      end
      return tuple2(trap, cause);
    endactionvalue;
  `endif
    // ---------------------- End local function definitions ------------------//

    // RuleName : process_instruction
    // Explicit Conditions : None
    // Implicit Conditions:
    //    1. ff_memory_response.notEmpty
    //    2. wr_csr is written in the same cycle
    //    3. tostage FIFO notFull
    // Schedule Conflicts : This rule will not fire if there is flush from the write - back stage. A
    // flush from the write - back stage will cause a change in the rg_pc and rg_discard,
    // both of which are being updated in this method as well. This schedule is acceptable since
    // anyways the response from the memory currently to be handled in this rule will match epochs
    // and will be dropped.
    //
    // Details : This rule will receive the instruction from the memory subsystem and decide if the
    // instruction is compressed or not. The final instruction is then sent to the next stage.
    // To extract the instruction from the memory response a state machine is implemented.
    //
    // 1. First the epochs are compared and if a mis - match is observed then the response is dropped
    // without any other changes to the state of the module.
    // 2. if rg_discard is set and compressed is enabled then the lower 16 - bits of the
    // resposne are discarded and the upper 16 - bits are probed to check if it is a compressed
    // instruction. If so, then the instruction is sent to the next stage. However is it is not a
    // compressed instruction it means the upper 16 - bits of the response refer to the lower 16 - bits
    // of a 32 - bit instruction and thus we will have to wait for the next response from the cache to
    // form the instruction is send to the next stage. To ensure the concatenation happens in the
    // next response we set rg_action to ChecPrev and set enque_instruction to False.
    // 3. if rg_action is set to None, then we simply probe the lower 2 - bits to the response to
    // check if it is compressed. If so then the lower 16 bits form an instruction which is sent to
    // the next stage, the upper 16 - bits are stored to rg_instruction and rg_action is set to
    // CheckPrev to ensure that in the next resposne we first probe rg_instruction.
    // 4. if rg_Action if set to CheckPrev then we first probe the lower 2 - bits of the
    // rg_instruction which leads to two possibilities. Either rg_instruction could hold a
    // compressed instruction from the previous response, in which case the current memory response
    // is not dequed and rg_instruction is sent to the next stage. This can happen due to state - 3
    // mentioned above. The other possibility is that rg_instruction holds the lower 16 - bits of a
    // 32 - bit isntruction, in which case we have concatenate the lower 16 - bits of the response with
    // rg_instruction and send to the next, and also store the upper 16 - bits of the response into
    // rg_instruction. rg_Action in this case will remain CheckPrev so that the upper bits of this
    // repsonse are probed in the next cycle.
    rule process_instruction(rx_fromstage0.u.notEmpty);
      let stage0pc = rx_fromstage0.u.first;
      `logLevel( stage1, 1, $format("core:%2d ",hartid,"STAGE1 : Prediction: ", fshow(stage0pc)))
    `ifdef bpu
      let btbresponse = stage0pc.btbresponse;
    `endif

      // capture the response from the cache
      let imem_resp = ff_memory_response.first;
      Bool trap = False;

      // local variable to hold the instruction to be enqueued
      Bit#(32) final_instruction=?;

      // local variable to indicate if the instruction being analysed is compressed or not
      Bool compressed = False;

      // local variable indicating if the current instruction under analysis should be enqueued to
      // the next stage or dropped.
      Bool enque_instruction = True;
      PrevMeta lv_prev = rg_prev;
      // if epochs do not match then drop the instruction
      if(curr_epoch != imem_resp.epochs)begin
        deq_response;
        rg_action <= None;
        enque_instruction = False;
        `logLevel( stage1, 1,$format("core:%2d ",hartid,"STAGE1 : Dropping Instruction"))
        rg_receiving_upper <= False;
      end
    `ifdef compressed
      else if(rg_action == CheckPrev && rg_prev.epochs == curr_epoch)begin
      `ifdef bpu
        btbresponse = rg_prev.btbresponse;
        if(!btbresponse.hi)begin
          btbresponse.btbhit= False;
          btbresponse.prediction = 1;
        end
      `endif
        if(rg_prev.instruction[1 : 0] == 2'b11)begin
          final_instruction={imem_resp.instr[15 : 0], rg_prev.instruction};
          trap = imem_resp.trap;
          deq_response;

          lv_prev.instruction = truncateLSB(imem_resp.instr);
          lv_prev.pc = stage0pc.address;
          stage0pc.address = rg_prev.pc | zeroExtend(2'b10);

        `ifdef bpu
          lv_prev.btbresponse = stage0pc.btbresponse;
          if(btbresponse.prediction > 1) begin
            rg_action <= None;
            rg_receiving_upper <= False;
          end
          else
        `endif
          rg_receiving_upper <= True;
        end
        else begin
          compressed = True;
          final_instruction = zeroExtend(rg_prev.instruction);
          rg_action <= None;
          rg_receiving_upper <= False;
          stage0pc.address = rg_prev.pc;
          stage0pc.address[1] = 1;
        end
      end
      // discard the lower - 16bits of the imem - response.
      else if(stage0pc.discard && wr_csr_misa_c == 1)begin
        deq_response;
      `ifdef bpu
        if(!btbresponse.hi)begin
          btbresponse.btbhit= False;
          btbresponse.prediction = 1;
        end
      `endif
        if(imem_resp.instr[17 : 16] == 2'b11)begin
          trap = imem_resp.trap;
          rg_action <= CheckPrev;
          enque_instruction = False;
          rg_receiving_upper <= True;

          lv_prev.instruction = imem_resp.instr[31 : 16];
          lv_prev.pc = stage0pc.address;
        `ifdef bpu
          lv_prev.btbresponse = stage0pc.btbresponse;
        `endif
        end
        else begin
          rg_action <= None;
          compressed = True;
          final_instruction = zeroExtend(imem_resp.instr[31 : 16]);
          trap = imem_resp.trap;
          stage0pc.address[1] = 1;
        end
      end
    `endif
      else begin
        trap = imem_resp.trap;
        deq_response;
        // if instruction is 32-bit simply pass it on
        if(imem_resp.instr[1 : 0] == 'b11)begin
          final_instruction = imem_resp.instr;
          rg_action <= None;
        end
      `ifdef compressed
        // if instruction from cache is compressed
        else if(wr_csr_misa_c == 1) begin
          compressed = True;
          final_instruction = zeroExtend(imem_resp.instr[15 : 0]);
          lv_prev.instruction = truncateLSB(imem_resp.instr);
          lv_prev.pc = stage0pc.address;
        `ifdef bpu
          // check if prediction was for lower-16 else reset btbresponse before forwarding.
          rg_action <= (!btbresponse.hi && btbresponse.prediction > 1) ? None: CheckPrev;
          rg_receiving_upper <= !(!btbresponse.hi && btbresponse.prediction > 1);
          if(btbresponse.hi)begin
            btbresponse.btbhit= False;
            btbresponse.prediction = 1;
          end
          // store the btbrepsonse for next cycle
          lv_prev.btbresponse = stage0pc.btbresponse;
        `else
          rg_action <= CheckPrev;
          rg_receiving_upper <= True;
        `endif
        end
      `endif
      end
      lv_prev.epochs = curr_epoch;
      rg_prev <= lv_prev;
      Bit#(`vaddr) incr_value = (compressed  && wr_csr_misa_c == 1) ? 2:4;
      Bit#(`causesize) cause = imem_resp.cause;
    `ifdef triggers
      let {trig_trap, trig_cause} <- check_trigger(stage0pc.address, final_instruction
                                        `ifdef compressed ,compressed `endif );
      if(trig_trap)begin
        trap = True;
        cause = trig_cause;
      end
    `endif
      Bit#(32) inst = final_instruction;
    `ifdef compressed
      if(compressed)
        final_instruction = fn_decompress(truncate(final_instruction));
    `endif
			let pipedata = PIPE1{program_counter : stage0pc.address,
                    instruction : final_instruction,
                    epochs:{rg_eEpoch, rg_wEpoch},
                    trap : trap
                  `ifdef bpu
                    ,btbresponse: btbresponse
                  `endif
                  `ifdef compressed
                    ,upper_err : rg_receiving_upper && imem_resp.trap
                    ,compressed: compressed
                  `endif
                    ,cause : cause };
      `logLevel( stage1, 0,$format("core:%2d ",hartid,"STAGE1 : PC:%h: ",stage0pc.address,
                                    fshow(ff_memory_response.first)))
    `ifdef compressed
      `logLevel( stage1, 1,$format("core:%2d ",hartid,"STAGE1 : rg_action: ",fshow(rg_action),
            " misa[c]:%b discard:%b rg_receiving_upper:%b", wr_csr_misa_c, stage0pc.discard,
        rg_receiving_upper))
    `endif
      if(enque_instruction) begin
      `ifdef rtldump
        tx_inst.u.enq(inst);
      `endif
        tx.u.enq(pipedata);
        `logLevel( stage1, 0,$format("core:%2d ",hartid,"STAGE1 : Enquing: ",fshow(pipedata)))
      end
    endrule

    // MethodName : inst_response_put
    // Explicit Conditions : None
    // Implicit Conditions : ff_memory_response.notFull
    // Description : This method will capture the response from the memory subsytem and enque it in
    // a FIFO. One could of think of performing all the function in the process_instruction
    // rule in this method itself. This would only work if you are not supporting compressed
    // instructions. When you support compressed, the cache can send a single response which
    // contains 2 16 - bit instruction. In such a case the process_instruction rule will fire twice
    // and deque the fifo only on the second run. Thus we need to have a fifo which will store the
    // response from the cache for an extra cycle.
    // The former approach could work with compressed as well if : we process both the instructions
    // and enqueue them simultaneously into the next stage. Not sure what other dependencies would
    // be there?
		interface inst_response = interface Put
			method Action put (FetchResponse#(32, `iesize) resp);
        `logLevel( stage1, 3, $format("core:%2d ",hartid,"STAGE1: ",fshow(resp)))
        ff_memory_response.enq(resp);
			endmethod
    endinterface;

    // Description : This interface will capture the prediction response from the BTB module. If
    // compressed is supported the, BTB will provide 2 predictions for each of the 2byte addresses
    // that have been fetched from the I - mem. If compressed is not supported then a single
    // prediction is only provided for the entire 32 - bit instruction has been received from the
    // I - cache.
    interface rx_from_stage0 = rx_fromstage0.e;

    // MethodName : tx_to_stage2
    // Explicit Conditions : None
    // Implicit Conditions : tx is not empty.
    // Description : This method will transmit the instruction to the next stage.
		interface tx_to_stage2 = tx.e;
  `ifdef rtldump
		interface tx_to_stage2_inst = tx_inst.e;
  `endif
    // MethodName : update_eEpoch
    // Explicit Conditions : None
    // Implicit Conditions : None
    method Action update_eEpoch;
      rg_eEpoch<=~rg_eEpoch;
    endmethod

    // MethodName : update_wEpoch
    // Explicit Conditions : None
    // Implicit Conditions : None
    method Action update_wEpoch;
      rg_wEpoch<=~rg_wEpoch;
    endmethod

    // This method captures the "c" of misa csr
    method Action csr_misa_c (Bit#(1) c);
      wr_csr_misa_c <= c;
    endmethod
  `ifdef triggers
    method Action trigger_data1(Vector#(`trigger_num, TriggerData) t);
      for(Integer i=0; i<`trigger_num; i=i+1)
        v_trigger_data1[i] <= t[i];
    endmethod
    method Action trigger_data2(Vector#(`trigger_num, Bit#(XLEN)) t);
      for(Integer i=0; i<`trigger_num; i=i+1)
        v_trigger_data2[i] <= t[i];
    endmethod
    method Action trigger_enable(Vector#(`trigger_num, Bool) t);
      for(Integer i=0; i<`trigger_num; i=i+1)
        v_trigger_enable[i] <= t[i];
    endmethod
  `endif
  endmodule
endpackage

