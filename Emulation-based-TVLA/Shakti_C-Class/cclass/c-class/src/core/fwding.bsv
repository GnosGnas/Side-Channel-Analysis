/*
Copyright (c) 2013, IIT Madras All rights reserved.

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
package fwding;
  import common_types::*;
  `include "common_params.bsv"
  import GetPut::*;
  import BUtils::*;
  `include "Logger.bsv"

  interface Ifc_fwding;
    (*always_ready, always_enabled*)
    method Action fwd_from_pipe3 (FwdType fwd);
    (*always_ready, always_enabled*)
    method Action fwd_from_pipe4_first (FwdType fwd);
    method ActionValue#(Tuple2#(Bool,Bit#(ELEN))) read_rs1(Bit#(ELEN) val, Bit#(5) addr
                                                  `ifdef spfpu , RFType rftype `endif );
    method ActionValue#(Tuple2#(Bool,Bit#(ELEN))) read_rs2(Bit#(ELEN) val, Bit#(5) addr
                                                  `ifdef spfpu , RFType rftype `endif );
  `ifdef spfpu
    method ActionValue#(Tuple2#(Bool,Bit#(ELEN))) read_rs3(Bit#(ELEN) val, Bit#(5) addr, RFType rftype);
  `endif
  endinterface

  function Tuple2#(Bool, Bit#(ELEN)) forward_data (Bit#(ELEN) rfval, Bit#(5) addr,
                                              `ifdef spfpu  RFType rftype, `endif
                                                FwdType youngest,
                                                FwdType youngestp1);
    if (youngest.valid && youngest.addr == addr `ifdef spfpu && youngest.rftype == rftype `endif )
      return tuple2(youngest.available, youngest.data);
    else if (youngestp1.valid && youngestp1.addr == addr
                                              `ifdef spfpu && youngestp1.rftype == rftype `endif )
      return tuple2(youngestp1.available, youngestp1.data);
    else
      return tuple2(True, rfval);
  endfunction

  (*synthesize*)
  module mkfwding#(parameter Bit#(XLEN) hartid) (Ifc_fwding);
    Wire#(FwdType) wr_from_pipe3        <- mkWire();
    Wire#(FwdType) wr_from_pipe4_first  <- mkWire();
    method ActionValue#(Tuple2#(Bool,Bit#(ELEN))) read_rs1(Bit#(ELEN) val, Bit#(5) addr
                                                              `ifdef spfpu , RFType rftype `endif );
      return forward_data(val, addr, `ifdef spfpu rftype, `endif  wr_from_pipe3,
                                                                  wr_from_pipe4_first);
    endmethod
    method ActionValue#(Tuple2#(Bool,Bit#(ELEN))) read_rs2(Bit#(ELEN) val, Bit#(5) addr
                                                              `ifdef spfpu , RFType rftype `endif );
      return forward_data(val, addr, `ifdef spfpu rftype, `endif  wr_from_pipe3,
                                                                  wr_from_pipe4_first);
    endmethod
  `ifdef spfpu
    method ActionValue#(Tuple2#(Bool,Bit#(ELEN))) read_rs3(Bit#(ELEN) val, Bit#(5) addr
                                                              `ifdef spfpu , RFType rftype `endif );
      return forward_data(val, addr, `ifdef spfpu rftype, `endif  wr_from_pipe3,
                                                                  wr_from_pipe4_first);
    endmethod
  `endif
    method Action fwd_from_pipe3 (FwdType fwd);
      `logLevel( fwding, 2, $format("core:%2d ",hartid,"FWDING: from PIPE3: ",fshow(fwd)))
      wr_from_pipe3 <= fwd;
    endmethod
    method Action fwd_from_pipe4_first (FwdType fwd);
      `logLevel( fwding, 2, $format("core:%2d ",hartid,"FWDING: from PIPE4-first: ",fshow(fwd)))
      wr_from_pipe4_first<= fwd;
    endmethod
  endmodule
endpackage
