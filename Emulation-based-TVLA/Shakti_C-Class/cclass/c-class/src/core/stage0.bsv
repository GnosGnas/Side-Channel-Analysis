/*
Copyright (c) 2019, IIT Madras All rights reserved.

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
Details: This module imlpements the pc-gen functionality. It incorporates the branch predictor as
well. Based on the outputs of the branch predictor (if enabled), pc+4 and any flushes in the same
cycle, this module decides what the next pc to the cache and stage1 should be.

--------------------------------------------------------------------------------------------------
*/
package stage0;

  // -- library imports
  import FIFO :: * ;
  import FIFOF :: * ;
  import SpecialFIFOs :: * ;
  import GetPut :: * ;
  import TxRx :: * ;

  // -- project imports
  `include "Logger.bsv"
  `include "common_params.bsv"
  import common_types :: * ;
  import globals :: * ;
`ifdef bpu
    import gshare_fa :: * ;
`endif

  interface Ifc_stage0;

    /*doc:method: this method will be enabled to indicate a flush from the execute stage*/
    method Action ma_update_eEpoch ();

    /*doc:method: this method will be enabled to indicate a flush from the write-back stage*/
    method Action ma_update_wEpoch ();

    /*doc:method: this method captures the type of flush and the redirection pc*/
    method Action ma_flush (Stage0Flush fl);

`ifdef bpu
    /*doc : method : method to training the BTB and BHT tables*/
	  method Action ma_train_bpu (Training_data td);
  `ifdef gshare
    /*doc : method: This method is fired when there is a conditional misprediction */
    method Action ma_mispredict (Tuple2#(Bool, Bit#(TAdd#(`extrahist, `histlen))) g);
  `endif
    /*doc : method: This method captures if the bpu is enabled through csr or not*/
    method Action ma_bpu_enable (Bool e);
`endif

    /*doc:subifc: This interface defines the request sent out from stage0 to the cache and stage1.*/
    interface Get#(ICache_request#(`vaddr, `iesize)) to_icache;

    /*doc:subifc: interface to send info to stage 1 about the next pc*/
    interface TXe#(Stage0PC#(`vaddr)) tx_to_stage1;
  endinterface: Ifc_stage0

  (*synthesize*)
  module mkstage0#(Bit#(`vaddr) resetpc, parameter Bit#(XLEN) hartid) (Ifc_stage0);
    String stage0 = "";
  `ifdef bpu
    Ifc_bpu bpu <- mkbpu(hartid);
  `endif

    /*doc:fifo: This fifo holds the request to be sent to the I-cache/I-Mem subsystem. This is a
    * bypass fifo because we expect the i-cache to have a LFIFO/SizedFIFO at its end*/
    FIFOF#(ICache_request#(`vaddr, `iesize)) ff_to_cache <- mkBypassFIFOF;

    // holds the info to be send to the stage1
    TX#(Stage0PC#(`vaddr)) tx_tostage1 <- mkTX;

    /*doc:reg: holds the program counter*/
    Reg#(Bit#(`vaddr)) rg_pc[2] <- mkCReg(2, 'h1000);

    /*doc:reg: register to maintain the epoch in sync with execute stage*/
    Reg#(Bit#(1)) rg_eEpoch <- mkReg(0);

    /*doc:reg: register to maintain the epoch in sync with execute stage*/
    Reg#(Bit#(1)) rg_wEpoch <- mkReg(0);

    /*doc:reg: This register is used in the initializing the pc with reset-pc being driven by SoC.*/
    Reg#(Bool) rg_initialize <- mkReg(True);

  `ifdef ifence
    /*doc:reg: When true indicates that the flush occurred due to a fence*/
    Reg#(Bool) rg_fence[2] <- mkCReg(2, False);
  `endif

  `ifdef supervisor
    /*doc:reg: When true indicates that the flush occurred due to a sfence*/
    Reg#(Bool) rg_sfence[2] <- mkCReg(2, False);
  `endif

`ifdef bpu
  `ifdef compressed
    /*doc:reg: This register when Valid indicates a 32-bit control instruction on a
    2-byte boundary is predicted taken. Thus the cache is send the redirect after the upper-16 bits
    of the instruction have been fetched.*/
    Reg#(Maybe#(Bit#(`vaddr))) rg_delayed_redirect[2] <- mkCReg(2, tagged Invalid);
  `endif
`endif

    // local variable to hold the next+4 pc value. Ensure only a single adder is used.
    let curr_epoch = {rg_eEpoch, rg_wEpoch};

    /*doc:rule: */
    rule rl_initialize (rg_initialize);
      rg_initialize <= False;
      rg_pc[1] <= resetpc;
    endrule

    /*doc:rule: This rule muxes between pc+4 and the prediction provided by the bpu.
    When the rg_fence is True the request is sent only to the cache and not to stage1.
    The same is the case with rg_sfence. This is because the i-cache does not respond on a fence
    request to stage1. When either rg_fence or rg_sfence are set to True, the rg_pc is not
    updated. It re-used as a valid request in the next cycle by which the rg_fence and rg_sfence
    have been made false.

    The pc sent to the stage and the i-cache has to always be 4-byte aligned. This is because the
    i-cache only responds with 32-bits at a time

    When compressed is enabled, things get a bit more complicated. Consider the following example:

    ```
       0x100a : blt a0, a1, 0x8000000
    ```
    Now when the bpu predicts this branch to be taken it will suggest the next pc should be
    `0x80000000`. However, when this pc was requested to the bpu the pc sent to the cache was
    `0x1008`. So we send another pc of `0x100c` to the cache to get upper 16-bits of this branch and
    only then send the new target pc of `0x80000000`.

    We refer to this scenario as an edge case and the register rg_delayed_redirect ensures correct
    pc sequences are sent to the cache and stage1

    */
    rule rl_gen_next_pc (tx_tostage1.u.notFull && !rg_initialize);
      `ifdef bpu
        PredictionResponse bpu_resp = ?;
      `endif

        let nextpc = (rg_pc[0] & signExtend(3'b100)) + 4;

      `ifdef bpu
        // bpu is flushed in case of ifence and not for sfence
        if( `ifdef supervisor !rg_sfence[0] && `endif True) begin
          let bpuresp <- bpu.mav_prediction_response(PredictionRequest{pc: rg_pc[0]
                                    `ifdef ifence     ,fence: rg_fence[0] `endif
                                    `ifdef compressed , discard: (rg_pc[0][1]==1) `endif });
        `ifdef compressed
          // check for edge case
          Bool edgecase = bpuresp.btbresponse.hi && !bpuresp.instr16;
        `endif
          if (bpuresp.btbresponse.prediction[`statesize - 1] == 1
                                    `ifdef compressed && !edgecase `endif )
            nextpc = bpuresp.nextpc;
        `ifdef compressed
          // send new target from previously predicted edgecase Ci
          if(rg_delayed_redirect[0] matches tagged Valid .rpc) begin
            nextpc = rpc;
            rg_delayed_redirect[0] <= tagged Invalid;
          end
          // send pc+4 and store the target for the next round
          else if(edgecase && bpuresp.btbresponse.prediction > 1)
            rg_delayed_redirect[0] <= tagged Valid bpuresp.nextpc;
        `endif

          bpu_resp = bpuresp;
          `logLevel( stage0, 0, $format("core:%2d ",hartid,"STAGE0: BPU response:",fshow(bpu_resp)))
        end
      `endif

      // don't update the pc in case fence or sfence instruction
      if( `ifdef ifence !rg_fence[0] && `endif `ifdef supervisor !rg_sfence[0] && `endif True)
        rg_pc[0] <= nextpc ;

      `ifdef ifence
        if(rg_fence[0])
          rg_fence[0] <= False;
      `endif

      `ifdef supervisor
        if(rg_sfence[0])
          rg_sfence[0] <= False;
      `endif

        `logLevel( stage0, 0, $format("core:%2d ",hartid,"STAGE0: Sending PC:%h to I$. ", rg_pc[0] & signExtend(3'b100)))
        ff_to_cache.enq(ICache_request{address  : rg_pc[0] & signExtend(3'b100),
                                        epochs  : curr_epoch
                  `ifdef supervisor    ,sfence  : rg_sfence[0]    `endif
                  `ifdef ifence        ,fence   : rg_fence[0]     `endif });

        if( `ifdef ifence !rg_fence[0] && `endif `ifdef supervisor !rg_sfence[0] && `endif True) begin
          tx_tostage1.u.enq(Stage0PC{   address      : rg_pc[0] & signExtend(3'b100)
                    `ifdef compressed   ,discard     : rg_pc[0][1]==1        `endif
                    `ifdef bpu          ,btbresponse : bpu_resp.btbresponse `endif  });
          `logLevel( stage0, 0, $format("core:%2d ",hartid,"STAGE0: Sending PC:%h to Stage1", rg_pc[0]))
        end
    endrule

    interface to_icache = toGet(ff_to_cache);

    interface tx_to_stage1 = tx_tostage1.e;

    method Action ma_update_eEpoch ();
      rg_eEpoch <= ~rg_eEpoch;
    endmethod

    method Action ma_update_wEpoch ();
      rg_wEpoch <= ~rg_wEpoch;
    endmethod

    /*doc:method: This method is fired either from a mis-prediction from the execute stage or a trap
    from the write-back stage or due to an sfence or fence being committed. */
    method Action ma_flush (Stage0Flush fl) if(!rg_initialize);
      `logLevel( stage0, 1, $format("core:%2d ",hartid,"STAGE0: Recieved Flush:",fshow(fl)))
    `ifdef ifence
      rg_fence[1] <= fl.fence;
    `endif
    `ifdef supervisor
      rg_sfence[1] <= fl.sfence;
    `endif
      rg_pc[1] <= fl.pc;
  `ifdef bpu
    `ifdef compressed
      // reset any delayed-redirect
      rg_delayed_redirect[1] <= tagged Invalid;
    `endif
  `endif
    endmethod

`ifdef bpu
    method ma_train_bpu   = bpu.ma_train_bpu;
  `ifdef gshare
    method ma_mispredict  = bpu.ma_mispredict;
  `endif
    method ma_bpu_enable  = bpu.ma_bpu_enable;
`endif

  endmodule: mkstage0
endpackage: stage0

