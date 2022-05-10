/*
Copyright (c) 2013, IIT Madras All rights reserved.

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
Details:
This module implements the integer and floating point register files. They are currently implemented
as RegFile. The integer register file requires 2 read and 1 write ports.
The floating point registerfile however will require 3 read ports and 1 write ports

On system reset,  the register files are initialized to 0. This phase will take 32 cycles total.
Only after the initialization phase can the

the debug interface allows the debugger to read / write from / to either of the registerfiles.
This interface should be made mutually exclusive with respect to the other rules accessing the
register files,  otherwise they will require dedicated extra ports. This scheduling is done
implicitly by bluespec owing to the sequence in which the methods have been written,  The debugger
however cannot read the values in the initialization phase.

--------------------------------------------------------------------------------------------------
*/
package registerfile;
	/*==== Project Imports === */
	import common_types::*;
	`include "common_params.bsv"
	/*======================== */
	/*===== Package Imports ==== */
	import RegFile::*;
	import ConfigReg::*;
  import GetPut::*;
  `include "Logger.bsv"
`ifdef debug
  import debug_types :: *; // for importing the debug abstract interface
`endif
	/*===========================*/

	interface Ifc_registerfile;
    method ActionValue#(Bit#(ELEN)) read_rs1(Bit#(5) addr `ifdef spfpu, RFType rs1type `endif );
    method ActionValue#(Bit#(ELEN)) read_rs2(Bit#(5) addr `ifdef spfpu, RFType rs2type `endif );
  `ifdef spfpu
    method ActionValue#(Bit#(FLEN)) read_rs3(Bit#(5) addr);
  `endif
		method Action commit_rd (CommitData c);
  `ifdef debug
    // interface to interact with debugger
    method ActionValue#(Bit#(XLEN)) debug_access_gprs(AbstractRegOp cmd);
  `endif
	endinterface

	(*synthesize*)
`ifdef debug
  (*conflict_free="debug_access_gprs,commit_rd"*)
`endif
	module mkregisterfile#(parameter Bit#(XLEN) hartid) (Ifc_registerfile);
    String rf ="";
		RegFile#(Bit#(5), Bit#(XLEN)) integer_rf <- mkRegFileWCF(0, 31);
	`ifdef spfpu
		RegFile#(Bit#(5), Bit#(FLEN)) floating_rf <- mkRegFileWCF(0, 31);
	`endif
		Reg#(Bool) initialize <- mkReg(True);
		Reg#(Bit#(5)) rg_index <- mkReg(0);

    // The following rule is fired on system reset and writes all the register values to "0". This
    // rule will never fire otherwise
		rule initialize_regfile(initialize);
		`ifdef spfpu
		  floating_rf.upd(rg_index, 0);
		`endif
			integer_rf.upd(rg_index, 0);
			rg_index <= rg_index + 1;
			if(rg_index == 'd31)
				initialize <= False;
        `logLevel( rf, 1, $format("core:%2d ",hartid,"RF : Initialization phase. Count: %d",rg_index))
		endrule


    // This method will read operand1 using rs1addr from the decode stage. If there a commit in the
    // same cycle to rs1addr, then that value if bypassed else the value is read from the
    // corresponding register file.
    // Explicit Conditions : fire only when initialize is False;
    // Implicit Conditions : None
    method ActionValue#(Bit#(ELEN)) read_rs1(Bit#(5) addr `ifdef spfpu, RFType rs1type `endif )
                                                                                    if(!initialize);
    `ifdef spfpu
      if(rs1type == FRF)
        return zeroExtend(floating_rf.sub(addr));
      else
    `endif
        return zeroExtend(integer_rf.sub(addr)); // zero extend is required when XLEN<ELEN
    endmethod
    // This method will read operand2 using rs2addr from the decode stage. If there a commit in the
    // same cycle to rs2addr, then that value if bypassed else the value is read from the
    // corresponding register file.
    // Explicit Conditions : fire only when initialize is False;
    // Implicit Conditions : None
    method ActionValue#(Bit#(ELEN)) read_rs2(Bit#(5) addr `ifdef spfpu, RFType rs2type `endif )
                                                                                    if(!initialize);
    `ifdef spfpu
      if(rs2type == FRF)
        return zeroExtend(floating_rf.sub(addr));
      else
    `endif
        return zeroExtend(integer_rf.sub(addr));// zero extend is required when XLEN<ELEN
    endmethod
  `ifdef spfpu
    // This method will read operand3 using rs3addr from the decode stage. If there a commit in the
    // same cycle to rs2addr, then that value if bypassed else the value is read from the
    // Floating register file. Integer RF is not looked - up for rs3 at all.
    // Explicit Conditions : fire only when initialize is False;
    // Implicit Conditions : None
    method ActionValue#(Bit#(FLEN)) read_rs3(Bit#(5) addr) if(!initialize);
      return floating_rf.sub(addr);
    endmethod
  `endif

    // This method is fired when the write - back stage performs a commit and needs to update the RF.
    // The value being commited is updated in the respective register file and also bypassed to the
    // above methods for operand forwarding.
    // Explicit Conditions : fire only when initialize is False;
    // Implicit Conditions : None
		method Action commit_rd (CommitData c) if(!initialize);
      `logLevel( rf, 1, $format("core:%2d ",hartid,"RF : Writing Rd: %d(%h) ",c.addr, c.data
                                                  `ifdef spfpu, fshow(c.rdtype) `endif ))

      `ifdef spfpu
        if(c.rdtype == FRF)begin
			  	floating_rf.upd(c.addr, truncate(c.data));
        end else
      `endif
			  if(c.addr != 0)begin
			  	integer_rf.upd(c.addr, truncate(c.data)); // truncate is required when XLEN<ELEN
			  end
		endmethod
  `ifdef debug
    // MethodName: debug_access_gprs
    // Explicit Conditions: initialize = False;
    // Implicit Conditions: None;
    // Description: This method is used by te debugger to access the register files.
    method ActionValue#(Bit#(XLEN)) debug_access_gprs(AbstractRegOp cmd) if(!initialize);
      Bit#(XLEN) resultop = 0;
      if(cmd.read_write) begin // write_operation
        `ifdef spfpu
          if(cmd.rftype)
            floating_rf.upd(truncate(cmd.address), cmd.writedata);
          else
        `endif
            integer_rf.upd(truncate(cmd.address), cmd.writedata);
      end
      else begin // read operation
        `ifdef spfpu
          if(cmd.rftype)
            resultop = floating_rf.sub(truncate(cmd.address));
          else
        `endif
            resultop = integer_rf.sub(truncate(cmd.address));
      end
      return resultop;
    endmethod
  `endif
	endmodule
endpackage
