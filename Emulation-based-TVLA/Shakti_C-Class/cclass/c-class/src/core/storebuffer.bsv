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
package storebuffer;
  import Vector::*;
  import FIFOF::*;
  import DReg::*;
  import SpecialFIFOs::*;
  import BRAMCore::*;
  import FIFO::*;
  import BUtils::*;
  import GetPut::*;

  `define buffsize 2

  import common_types::*;

  interface Ifc_storebuffer;
    method ActionValue#(Tuple2#(Bit#(ELEN), Bit#(ELEN))) check_address (Bit#(`vaddr) addr);
    method Action allocate(Bit#(`vaddr) addr, Bit#(ELEN) data, Bit#(2) size);
    method ActionValue#(MemoryWriteReq#(`vaddr,1,ELEN)) perform_store;
    method Bit#(`vaddr) write_address;
    method Action deque;
    method Bool storebuffer_empty;
    method Action clear_queue;
  endinterface

  (*synthesize*)
  module mkstorebuffer(Ifc_storebuffer);
    let offset = valueOf(XLEN)==64?2:1;
    Reg#(Bool) valid_data[ `buffsize ][2];
    Reg#(Bit#(`vaddr)) store_addr [ `buffsize ];
    Reg#(Bit#(ELEN))  store_data [ `buffsize ];
    Reg#(Bit#(2)) store_size [ `buffsize ];
    for(Integer i=0;i< `buffsize ;i=i+1)begin
      store_addr[i] <- mkReg(0);
      store_data[i] <- mkReg(0);
      store_size[i] <- mkReg(0);
      valid_data[i] <- mkCReg(2,False);
    end
    Reg#(Bit#(TLog#( `buffsize ))) rg_head <- mkReg(0);
    Reg#(Bit#(TLog#( `buffsize ))) rg_tail <- mkReg(0);
    FIFOF#(Bool) storequeue <- mkSizedFIFOF(2);

    method ActionValue#(Tuple2#(Bit#(ELEN), Bit#(ELEN))) check_address (Bit#(`vaddr) addr);
      Bit#(TLog#(ELEN)) shiftamt1 = {store_addr[rg_tail-1][offset:0],3'b0}; // parameterize for XLEN
      Bit#(ELEN) storemask1 = 0;
      Bit#(ELEN) storemask2 = 0;
      Bool validm1 = valid_data[rg_tail-1][1];
      Bool valid = valid_data[rg_tail][1];
      `ifdef RV64
        Bit#(TSub#(`vaddr,3)) wordaddr = truncateLSB(addr);
      `else
        Bit#(TSub#(`vaddr,2)) wordaddr = truncateLSB(addr);
      `endif
      if(truncateLSB(store_addr[rg_tail-1]) == wordaddr && validm1)begin
        Bit#(ELEN) temp = store_size[rg_tail-1]==0?'hff:
                          store_size[rg_tail-1]==1?'hffff:
                          store_size[rg_tail-1]==2?'hffffffff:'1;
        temp = temp << shiftamt1;
        storemask1 = temp;               // 'h00_00_00_FF
      end
      if(truncateLSB(store_addr[rg_tail]) == wordaddr && valid)begin
        Bit#(TLog#(ELEN)) shiftamt2 = {store_addr[rg_tail][offset:0],3'b0}; // parameterize for XLEN
        Bit#(ELEN) temp = store_size[rg_tail]==0?'hff:
                          store_size[rg_tail]==1?'hffff:
                          store_size[rg_tail]==2?'hffffffff:'1;
        temp = temp << shiftamt2;
        storemask2 = temp&(~storemask1); // 'h00_00_00_FF
      end

      let data1 = storemask1& store_data[rg_tail-1];
      let data2 = storemask2& store_data[rg_tail];
      return tuple2(storemask1|storemask2,data1|data2);
    endmethod
    method Action allocate(Bit#(`vaddr) addr, Bit#(ELEN) data, Bit#(2) size);
      if(size==0)
        data=duplicate(data[7:0]);
      else if(size==1)
        data=duplicate(data[15:0]);
      else if(size==2)
        data=duplicate(data[31:0]);
      store_addr[rg_tail]<=addr;
      store_data[rg_tail]<=data;
      store_size[rg_tail]<=size;
      rg_tail<=rg_tail+1;
      storequeue.enq(True);
      valid_data[rg_tail][1]<=True;
    endmethod
    method ActionValue#(MemoryWriteReq#(`vaddr,1,ELEN)) perform_store ;
      return tuple3(truncate(store_addr[rg_head]),store_data[rg_head],store_size[rg_head]);
    endmethod
    method Bit#(`vaddr) write_address;
      return store_addr[rg_head];
    endmethod
    method Action deque;
      rg_head<=rg_head+1;
      storequeue.deq;
    endmethod
    method Bool storebuffer_empty=!storequeue.notEmpty;
    method Action clear_queue;
      valid_data[rg_head][0]<=False;
    endmethod
  endmodule
endpackage

