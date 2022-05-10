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
Details:

--------------------------------------------------------------------------------------------------
*/
package mbox;

  import common_types :: *;
  `include "common_params.bsv"
  `include "Logger.bsv"

  import combo :: * ;
  import restoring_div :: * ;

  interface Ifc_mbox;
    (*always_ready*)
		method Action ma_inputs(Bit#(XLEN) in1, Bit#(XLEN) in2, Bit#(3) funct3
                                                                `ifdef RV64 ,Bool word32 `endif );
		method XBoxOutput mv_output;//returning the result
 `ifdef arith_trap
    method  Action ma_arith_trap_en(Bit#(1) en);
 `endif
	endinterface

  typedef enum {Idle, WaitMul, WaitDiv} MBoxState deriving (Bits, Eq, FShow);

  (*synthesize*)
  module mkmbox#(parameter Bit#(XLEN) hartid) (Ifc_mbox);
    String mbox = "";

    Ifc_combo_mul mul_ <- mkcombo_mul;
    Ifc_restoring_div div_ <- mkrestoring_div(hartid);

		method Action ma_inputs(Bit#(XLEN) in1, Bit#(XLEN) in2, Bit#(3) funct3
                                          `ifdef RV64 ,Bool word32 `endif ) ;

      if( funct3[2] == 0 ) begin // Multiplication ops
        `logLevel( mbox, 0, $format("core:%2d ",hartid,"MBOX: To MUL. Op1:%h Op2:%h ", in1, in2 ))
        mul_.ma_inputs(in1, in2, funct3 `ifdef RV64 , word32 `endif );
      end
      else begin
        `logLevel( mbox, 0, $format("core:%2d ",hartid,"MBOX: To Div. Op1:%h Op2:%h sign:%b", in1, in2,
                                                                            in1[valueOf(XLEN)-1] ))
        div_.ma_inputs(in1, in2, funct3 `ifdef RV64 ,word32 `endif ) ;
      end
    endmethod

		method XBoxOutput mv_output;//returning the result
      if(div_.mv_output.valid)
        return div_.mv_output;
      else
        return mul_.mv_output;
    endmethod
 `ifdef arith_trap
    method  Action ma_arith_trap_en(Bit#(1) en);
      div_.ma_arith_trap_en(en);
    endmethod
 `endif

  endmodule
endpackage

