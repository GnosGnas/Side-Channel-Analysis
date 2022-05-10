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

--------------------------------------------------------------------------------------------------
*/
package stage4;
  import Vector::*;
  import FIFOF::*;
  import DReg::*;
  import SpecialFIFOs::*;
  import CustomFIFOs::*;
  import BRAMCore::*;
  import FIFO::*;
  import TxRx::*;
  import GetPut::*;
  import BUtils::*;

  import common_types::*;
  import globals::*;
  `include "common_params.bsv"
  `include "Logger.bsv"

  interface Ifc_stage4;
    //--- interfaces to recevie the executed result of the instruction
    interface RXe#(Stage4Common) rx_common_from_stage3;
    interface RXe#(Stage4Type)   rx_type_from_stage3;

    // interface to send the instruction for retirement in the next stage
    interface TXe#(PIPE4) tx_min;

  `ifdef rtldump
    interface RXe#(Tuple2#(Bit#(`vaddr),Bit#(32))) rx_inst;
    interface TXe#(Tuple2#(Bit#(`vaddr),Bit#(32))) tx_inst;
  `endif

    // interface to receive the response from dmem memory sub system
    interface Put#(DMem_core_response#(ELEN,1)) memory_response;

  `ifdef triggers
    method Action trigger_data1(Vector#(`trigger_num, TriggerData) t);
    method Action trigger_data2(Vector#(`trigger_num, Bit#(XLEN)) t);
    method Action trigger_enable(Vector#(`trigger_num, Bool) t);
  `endif
  endinterface

`ifdef triggers
  function Tuple2#(Bool, Bit#(`causesize)) check_for_triggers(
                                                        Vector#(`trigger_num, TriggerData) tdata1,
                                                        Vector#(`trigger_num, Bit#(XLEN)) tdata2,
                                                        Vector#(`trigger_num, Bool) tenable,
                                                        Bit#(`vaddr) address, Bit#(XLEN) data,
                                                        Access_type  memaccess, Bit#(2) size );

    Bool trap = False;
    Bool chain = False;
    Bit#(`causesize) cause = `Breakpoint;
    Bit#(XLEN) compare_value ;
    for(Integer i=0; i<`trigger_num; i=i+1)begin
      if(tenable[i] &&& ((!trap && !chain) || (chain && trap))
                    &&& tdata1[i] matches tagged MCONTROL .mc
                    &&& (mc.load == 1 && memaccess == Load)
                    &&& ( mc.size ==0 || (mc.size == 1 && size == 0)
                        ||(mc.size == 2 && size == 1)
                        ||(mc.size == 3 && size == 2)
                      `ifdef RV64 || (mc.size == 5 && size == 3) `endif )
                    ) begin
        Bit#(XLEN) trigger_compare = tdata2[i];
        if(mc.select == 0)
          compare_value = address;
        else
          compare_value = data;
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
  endfunction
`endif

  (*synthesize*)
  module mkstage4#(parameter Bit#(XLEN) hartid) (Ifc_stage4);
    String stage4 = "";  // for logging purposes.

    // rx fifos to receive the execute result from the previous stage.
    RX#(Stage4Common) rx_common <- mkRX;
    RX#(Stage4Type)   rx_type   <- mkRX;

    // tx fifo to send the instruction to the next stage.
    TX#(PIPE4) txmin <- mkTX;

  `ifdef rtldump
    RX#(Tuple2#(Bit#(`vaddr),Bit#(32))) rxinst <-mkRX;
    TX#(Tuple2#(Bit#(`vaddr),Bit#(32))) txinst <-mkTX;
  `endif

    // fifo to capture the response from the dmem subsystem
    FIFOF#(DMem_core_response#(ELEN,1)) ff_memory_response <- mkUGBypassFIFOF();

  `ifdef triggers
    Vector#(`trigger_num, Wire#(TriggerData)) v_trigger_data1 <- replicateM(mkWire());
    Vector#(`trigger_num, Wire#(Bit#(XLEN))) v_trigger_data2 <- replicateM(mkWire());
    Vector#(`trigger_num, Wire#(Bool)) v_trigger_enable <- replicateM(mkWire());
  `endif

    // RuleName: check_instruction
    // Implicit Conditions: all rx fifos are not empty and tx fifos are not full.
    // Explicit Conditions: None
    // Description:
    // General Working: For bypass instruction types simply convert the types and proceed. In case
    // of memory operations wait for cache to response. SFence is made a regular instruction in the
    // previous stage itself and will be bypassed here. This is because the the TLB is onl flushed
    // on the SFence and the cache is not receive any request and thus no response is provided to
    // the core for SFence.
    //
    // Note on Epochs: we do not check for epochs here since there could be a memory
    // operation that was initiated in the previous stage (eg. Load). Now the Load
    // instruction if waiting in this stage to receive a response from the Cache.
    // Assume now the write-back stage causes a trap and thus in the next cycle the Load
    // instruction is removed from the memory stage since the
    // epochs do not match. However, the cache has not yet responded. If post trap taking, a
    // load instruction is observed then the return value of the previous load will be used
    // leading to wrong behavior. Thus for bypass instructions we depend on the write-back stage to
    // drop the instructions
    rule check_instruction;
      let s4common = rx_common.u.first;
      let s4type = rx_type.u.first;
      CommitType pipe4data=?;
      `logLevel( stage4, 0, $format("core:%2d ",hartid,"STAGE4: ",fshow(s4common)))
      `logLevel( stage4, 0, $format("core:%2d ",hartid,"STAGE4: ",fshow(s4type)))
      Bool operation_done = True;
      if(s4type matches tagged Trap .t)
        pipe4data = tagged TRAP CommitTrap{cause    : t.cause,
                                           pc       : s4common.pc,
                                           badaddr  : t.badaddr} ;
      else if(s4type matches tagged Regular .r)
        pipe4data = tagged REG CommitRegular{ commitvalue : r.rdvalue,
                                                  rd          : s4common.rd
                                                `ifdef spfpu
                                                  ,fflags     : r.fflags
                                                  ,rdtype     : s4common.rdtype
                                                `endif };
      else if(s4type matches tagged System .s)
        pipe4data = tagged SYSTEM CommitSystem { rs1      : s.rs1_imm,
                                                 lpc      : s.lpc,
                                                 csraddr  : s.csr_address,
                                                 func3    : s.funct3,
                                                 rd       : s4common.rd} ;
      else if(s4type matches tagged Memory .s) begin
        if( ff_memory_response.notEmpty ) begin
          let response = ff_memory_response.first;
          ff_memory_response.deq;

          `logLevel( stage4, 0, $format("core:%2d ",hartid,"STAGE4: Received: ",fshow(response)))
          Bool trap = response.trap;
          Bit#(`causesize) cause = response.cause;
        `ifdef triggers
          let {trig_trap, trig_cause} = check_for_triggers(readVReg(v_trigger_data1),
                                        readVReg(v_trigger_data2), readVReg(v_trigger_enable),
                                        s.address, response.word, s.memaccess, s.size);
          if(!trap && trig_trap)begin
            trap = True;
            cause = trig_cause;
          end

        `endif


          // Here we need to check if the response from the cache matches the epoch of the
          // instruction in this stage. If not, then we wait for another response from the cache
          if(s4common.epochs == response.epochs) begin
            if(trap)
              pipe4data = tagged TRAP CommitTrap{cause    : cause,
                                                 pc       : s4common.pc,
                                                 badaddr  : truncate(response.word) };
            else begin
            `ifdef dpfpu
              if( s.nanboxing == 1 )
                response.word[63 : 32] = '1;
            `endif
              if(s.memaccess == Store `ifdef atomic || s.memaccess == Atomic `endif )
                pipe4data = tagged STORE CommitStore{ pc          : s4common.pc
                                                    `ifdef atomic
                                                      ,commitvalue :
                                                                    s.memaccess == Atomic?
                                                                    response.word : 0
                                                    `endif
                                                    `ifdef atomic
                                                      ,rd         : s4common.rd
                                                    `endif };
              else
                pipe4data = tagged REG CommitRegular{ commitvalue : response.word,
                                                      rd          : s4common.rd
                                                    `ifdef spfpu
                                                      ,fflags     : 0 // since rd could be FRF
                                                      ,rdtype     : s4common.rdtype
                                                    `endif };
            end
          end
          else begin
            `logLevel( stage4, 0, $format("core:%2d ",hartid,"STAGE4: Instruction and Response Epochs do not match"))
            operation_done = False;
          end
        end
        else begin
          operation_done = False;
          `logLevel( stage4, 0, $format("core:%2d ",hartid,"STAGE4: Waiting for Memory Response"))
        end
      end
      if( operation_done ) begin
        `logLevel( stage4, 0, $format("core:%2d ",hartid,"STAGE4: Enquing: ", fshow(pipe4data)))
        txmin.u.enq(tuple2(pipe4data,s4common.epochs));
        rx_common.u.deq;
        rx_type.u.deq;
      `ifdef rtldump
        txinst.u.enq(rxinst.u.first);
        rxinst.u.deq;
      `endif
      end
    endrule

    interface rx_common_from_stage3 = rx_common.e;
    interface rx_type_from_stage3 = rx_type.e;
    interface tx_min = txmin.e;
  `ifdef rtldump
    interface rx_inst = rxinst.e;
    interface tx_inst = txinst.e;
  `endif
    interface  memory_response= interface Put
      method Action put (DMem_core_response#(ELEN,1) response)if(ff_memory_response.notFull);
        ff_memory_response.enq(response);
      endmethod
    endinterface;
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

