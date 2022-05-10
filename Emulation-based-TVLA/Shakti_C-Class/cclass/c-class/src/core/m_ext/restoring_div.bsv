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
package restoring_div;

  import common_types :: *;
  `include "common_params.bsv"
  `include "Logger.bsv"
  import Assert::*;
  import DReg :: * ;

  (*noinline*)
  function Tuple2#(Bit#(TAdd#(1,XLEN)), Bit#(XLEN)) fn_single_div (Bit#(TAdd#(1,XLEN)) remainder,
                                                      Bit#(XLEN) quotient, Bit#(XLEN) divisor);
    for(Integer i=0; i<(valueOf(XLEN)/`DIVSTAGES); i=i+ 1)begin
      let x={remainder, quotient}<<1;
      remainder=truncateLSB(x);
      quotient=truncate(x);
      Bit#(TAdd#(1, XLEN)) sub=remainder+signExtend(~divisor+1);
      if(truncate(remainder)>=divisor)begin // if subtraction is positive
				quotient[0]=1;
				remainder=sub;
      end
    end
    return tuple2(remainder,quotient);
  endfunction

  function Tuple4#(Bit#(XLEN), Bit#(XLEN), Bool, Bit#(1)) fn_fix_inputs (  Bit#(XLEN) in1, Bit#(XLEN) in2,
                                                Bit#(3) funct3 `ifdef RV64 , Bool word32 `endif );

    Bool mul_div = unpack(funct3[2]);
  `ifdef RV64
    if(word32)begin
      in1=funct3[0]==0? signExtend(in1[31:0]):zeroExtend(in1[31:0]);
      in2=funct3[0]==0? signExtend(in2[31:0]):zeroExtend(in2[31:0]);
    end
  `endif

    Bool lv_upperbits = unpack(funct3[1]);

    Bool invert_op1=False;
    Bool invert_op2=False;

    if(funct3[2]==1 && funct3[0]==0 && in1[valueOf(XLEN)-1]==1) // in case of division operations.
      invert_op1=True;

    if(funct3[2]==1 && funct3[0]==0 && in2[valueOf(XLEN)-1]==1)// in case of division operations.
      invert_op2=True;

    Bit#(XLEN) t1=signExtend(pack(invert_op1));
    Bit#(XLEN) t2=signExtend(pack(invert_op2));
    Bit#(XLEN) op1= (t1^in1)+ zeroExtend(pack(invert_op1));
    Bit#(XLEN) op2= (t2^in2)+ zeroExtend(pack(invert_op2));

    Bool lv_take_complement = False;
    if(funct3==4) // in case of DIV
		  lv_take_complement=unpack(in1[valueOf(XLEN)-1]^in2[valueOf(XLEN)-1]);
    else if(funct3==6)
      lv_take_complement=True;

    return tuple4(op1, op2, lv_take_complement, in1[valueOf(XLEN)-1]);
  endfunction


  interface Ifc_restoring_div;
    (*always_ready*)
    method Action ma_inputs(Bit#(XLEN) in1, Bit#(XLEN) in2,  Bit#(3) funct3
                                                `ifdef RV64 ,Bool word32 `endif ) ;
    method XBoxOutput mv_output;
 `ifdef arith_trap
    method  Action ma_arith_trap_en(Bit#(1) en);
 `endif
  endinterface

  (*synthesize*)
  (*conflict_free="single_step_div, ma_inputs"*)
  module mkrestoring_div#(parameter Bit#(XLEN) hartid) (Ifc_restoring_div);

    String divider = "";
    staticAssert(valueOf(TMul#(TDiv#(64, `DIVSTAGES), `DIVSTAGES))==64, "DIVSTAGES is not power of\
 2");
    staticAssert(`DIVSTAGES<= valueOf(XLEN), "DIVSTAGES cannot be larger than XLEN");

    Reg#(Bit#(TLog#(TAdd#(`DIVSTAGES, 1)))) rg_count <-mkReg(0);

    Reg#(Bit#(TAdd#(1, TMul#(2, XLEN)))) partial<-mkReg(0);
    Reg#(Bit#(XLEN)) rg_op2 <-mkReg(0);
    Reg#(Bit#(XLEN)) rg_in1 <-mkReg(0);
    Reg#(Bool) quotient_remainder <- mkReg(False);
    Reg#(Bool) rg_upperbits <- mkReg(False);
    Reg#(Bool) rg_complement <- mkReg(False);
    Reg#(Bit#(1)) rg_sign_op1 <- mkReg(0);

    Reg#(Bool)  rg_valid <- mkDReg(False);
    Reg#(Bit#(XLEN))  rg_result <- mkReg(0);
  `ifdef RV64
    Reg#(Bool)        rg_word <- mkReg(False);
  `endif
  `ifdef arith_trap
    Wire#(Bit#(1)) wr_arith_trap <- mkWire();
    Reg#(Bool)  rg_trap <- mkDReg(False);
  `endif

    rule single_step_div(rg_count != 0);

      let {upper, lower}=fn_single_div(truncateLSB(partial),truncate(partial), rg_op2);
      partial<= {upper, lower};
      `logLevel( divider, 0, $format("core:%2d ",hartid,"DIV: RgCount:%d partial:%h QR:%b",rg_count, partial,
                                                                  quotient_remainder))
      if(rg_op2 == 0)begin
        `logLevel( divider, 0, $format("core:%2d ",hartid,"DIV: Divide by zero detected. RgCount:%d",rg_count))
        rg_count <= 0;
        rg_valid <= True;
      `ifdef arith_trap
        if(wr_arith_trap==1)
          rg_trap <= True;
      `endif
        Bit#(XLEN) reslt=quotient_remainder? truncate(rg_in1):'1;
        Bit#(XLEN) product=`ifdef RV64 rg_word?signExtend(reslt[31:0]): `endif truncate(reslt);
        rg_result <= product;
      end
      else if(rg_count == fromInteger(`DIVSTAGES)+ 1 ) begin
        rg_count <= 0;
        rg_valid <= True;
        Bit#(XLEN) reslt=quotient_remainder?partial[valueOf(TMul#(2, XLEN))-1:valueOf(XLEN)]:
                                            truncate(partial);
        if( (rg_upperbits && rg_complement && reslt[valueOf(XLEN)-1] != rg_sign_op1) ||
            (rg_complement && !rg_upperbits) )
        reslt = ~reslt+ 1;
        Bit#(XLEN) product=`ifdef RV64 rg_word?signExtend(reslt[31:0]): `endif truncate(reslt);
        rg_result <= product;
      end
      else
        rg_count <= rg_count +1;
    endrule

    method Action ma_inputs(Bit#(XLEN) in1, Bit#(XLEN) in2,  Bit#(3) funct3
                                                `ifdef RV64 ,Bool word32 `endif ) ;

      `logLevel( divider, 0, $format("core:%2d ",hartid,"DIV: Got inputs rg_count: %d",rg_count))
      let {op1, op2, complement, sign_op1} = fn_fix_inputs(in1, in2, funct3 `ifdef RV64 ,word32 `endif );
      partial<= zeroExtend(op1);
      rg_op2<= op2;
      rg_in1<= in1;
      rg_count <= rg_count + 1;
      rg_complement <= complement;
      rg_sign_op1<= sign_op1;
      quotient_remainder<= unpack(funct3[1]);
    `ifdef RV64
      rg_word <= word32;
    `endif
      rg_upperbits <= unpack(funct3[1]);
    endmethod

    method mv_output = XBoxOutput{valid: rg_valid, data: rg_result
                               `ifdef arith_trap ,trap:rg_trap, cause:`Int_divide_by_zero `endif
                               `ifdef spfpu ,fflags:0 `endif };
 `ifdef arith_trap
    method  Action ma_arith_trap_en(Bit#(1) en);
      wr_arith_trap <= en;
    endmethod
 `endif
  endmodule
endpackage
