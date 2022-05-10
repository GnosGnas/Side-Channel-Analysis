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

--------------------------------------------------------------------------------------------------
*/
package common_types;
  `include "common_params.bsv"

  `ifdef RV64
  	typedef 64 XLEN;
  `else
    typedef 32 XLEN;
  `endif
  `ifdef dpfpu
    typedef 64 FLEN;
  `elsif spfpu
    typedef 32 FLEN;
  `else
    typedef `vaddr FLEN;
  `endif
	typedef Bit #(3)  Funct3;
  typedef 7 PRFDEPTH;
  typedef 8 RAS_DEPTH;
  typedef 0 USERSPACE ;
  typedef TMax#(XLEN, FLEN) ELEN;

  typedef struct{
    Bit#(`vaddr) pc;
  `ifdef ifence
    Bool  fence;
  `endif
  `ifdef supervisor
    Bool  sfence;
  `endif
  } Stage0Flush deriving(Bits, Eq, FShow);

  //------ The follwing contain common tuples across the stages -------------
	typedef enum {ALU, MEMORY, BRANCH, JAL, JALR, SYSTEM_INSTR, TRAP, WFI
                `ifdef spfpu, FLOAT `endif
                `ifdef muldiv, MULDIV `endif } Instruction_type deriving(Bits, Eq, FShow);

	typedef enum {Load = 0, Store = 1, Fence = 3, FenceI = 4
                `ifdef atomic,      Atomic = 2 `endif
                `ifdef supervisor,  SFence = 5 `endif } Access_type deriving (Bits, Eq, FShow);

  typedef enum {Regular, None} Flush_type2 deriving (Bits, Eq, FShow);
	typedef enum {`ifdef spfpu FloatingRF = 2, `endif IntegerRF = 0, PC = 1} Op1type deriving(Bits, Eq, FShow);
	typedef enum {`ifdef spfpu FloatingRF = 4, `endif IntegerRF = 0, Immediate = 1, Constant4 = 2, Constant2 = 3}
                                                                  Op2type deriving(Bits, Eq, FShow);
  typedef enum {FRF = 1, IRF = 0} RFType deriving(Bits, Eq, FShow);
//  typedef enum {SYSTEM_INSTR, REGULAR, TRAP} Commit_type deriving(Eq, Bits, FShow);
//  typedef enum {MEMORY, SYSTEM_INSTR, REGULAR, TRAP} PreCommit_type deriving(Eq, Bits, FShow);
  typedef enum {Machine = 3 `ifdef supervisor , Supervisor = 1 `endif , User = 0} Privilege_mode
                                                                          deriving(Eq, Bits, FShow);
  // -------------------------------------------------------------------------------------

  // ------- The following typdefs are used to define the output from the decode stage -----
  // data structure of the fwding data structure
    typedef struct{
      Bool valid;
      Bool available;
      Bit#(5) addr;
      Bit#(ELEN) data;
    `ifdef spfpu
      RFType rftype;
    `endif
    } FwdType deriving(Bits, FShow, Eq);
//  `ifdef spfpu
//    typedef Tuple5#(Bool, Bool, Bit#(5), Bit#(ELEN), RFType) FwdType;
//  `else
//    typedef Tuple4#(Bool, Bool, Bit#(5), Bit#(ELEN)) FwdType;
//  `endif
  // this struct holds the meta decoded information of an instruction
  typedef struct{
    Instruction_type inst_type; // instruction type
    Access_type memaccess;      // memory access type
    Bit#(32) immediate;         // immediate fields
    Bit#(7) funct;              // concatenation of f3 and fn fields
    Bool    rerun;              // indicates if the current instruction needs to be rerun
  } InstrMeta deriving(Bits, Eq, FShow);

  // the final structure of the response from the decoder
  typedef struct{
    OpAddr    op_addr;
    OpType    op_type;
    InstrMeta meta;
  `ifdef compressed
    Bool compressed;
  `endif
  } DecodeOut deriving(Bits, Eq, FShow);
  // ------------------------------------------------------------------------------------------

  `ifdef spfpu
    typedef Tuple6#(Bit#(ELEN), Bit#(ELEN), Bit#(3), Bit#(3),
                    Bit#(FLEN), Bit#(3)) Operands ;
  `else
    typedef Tuple4#(Bit#(XLEN), Bit#(XLEN), Bit#(3), Bit#(3)) Operands ;
  `endif

  // define all tuples here
  typedef struct{
    Bool trap;
    Bit#(ELEN) aluresult ;
    Bit#(`vaddr) redirect_pc;
    Bool redirect;
  `ifdef bpu
    Bool branch_taken;
  `endif
  } ALU_OUT deriving (Bits,  Eq,  FShow);

  typedef Tuple5#(Bit#(`paddr), Bit#(XLEN), Access_type, Bit#(2), Bit#(1)) MemoryRequest;
  typedef Tuple4#(Bit#(`paddr), Access_type, Bit#(2), Bit#(1)) CoreRequest;

  typedef Tuple3#(Bit#(5), Bool, Bit#(XLEN)) OpFwding;
  typedef struct{
    Privilege_mode prv;
    Bit#(TAdd#(17, `ifdef debug 2 `else 0 `endif )) csr_mip;
    Bit#(17) csr_mie;
  `ifdef non_m_traps
    Bit#(12) csr_mideleg;
  `endif
  `ifdef supervisor
    Bit#(12) csr_sip;
    Bit#(12) csr_sie;
  `endif
  `ifdef usertraps
    Bit#(12) csr_uip;
    Bit#(12) csr_uie;
  `ifdef supervisor
    Bit#(12) csr_sideleg;
  `endif
  `endif
    Bit#(26) csr_misa;
    Bit#(XLEN) csr_mstatus;
    Bit#(3) frm;
  `ifdef debug
    Bit#(32)  csr_dcsr;
  `endif } CSRtoDecode deriving(Bits, Eq, FShow);

  typedef struct {
      Bool debugger_available;
      Bool core_is_halted;
      Bool step_set;
      Bool step_ie;
      Bool core_debugenable;
  } DebugStatus deriving(Bits, Eq, FShow);

  typedef Tuple6#(Privilege_mode, Bit#(XLEN), Bit#(32), Bit#(5), Bit#(ELEN), RFType) DumpType;

                    // data, trap, cause, eopch size
  typedef Tuple4#(Bit#(ELEN), Bool, Bit#(6), Bit#(esize)) MemoryReadResp#(numeric type esize);

  typedef Tuple3#(
    Bit#(addr), // ADDR
    Bit#(data), // DATA
    Bit#(2))    // access_size
    MemoryWriteReq#(numeric type addr, numeric type esize, numeric type data);
                    // err, eopch size
  typedef Bit#(1) MemoryWriteResp;

  typedef struct{
    Bit#(`vaddr ) pc;
  `ifdef bpu
    Bit#(2) prediction;
  `endif
    Bit#(2) epoch;
  } PIPE0 deriving(Bits, Eq, FShow);

  // ---- structure of the zeroth pipeline stage ----------------//
  typedef struct{
    Bit#(addr)  address;
  `ifdef compressed
    Bool discard;
  `endif
  `ifdef bpu
    BTBResponse btbresponse;
  `endif
  } Stage0PC#(numeric type addr) deriving(Bits, Eq, FShow);

  // -- structure of the first pipeline stage -----------------//
  typedef struct{
  	Bit#(`vaddr) program_counter;
  	Bit#(32) instruction;
  	Bit#(`iesize) epochs;
    Bool trap ;
    Bit#(`causesize) cause;
  `ifdef compressed
    Bool upper_err;
    Bool compressed;
  `endif
  `ifdef bpu
    BTBResponse btbresponse;
  `endif
  }PIPE1 deriving (Bits, Eq, FShow);

  // ---------- Tuples for the second Pipeline Stage -----------//
  // type holding the meta information for stage3.
  // Max Width : 7+3 + 4+64 + 1+2 = 81 bits
  typedef struct{
    Bit#(`vaddr) pc;
    Bit#(7) funct;
    Access_type memaccess;
    Instruction_type inst_type;
    Bit#(2) epochs;
    Bit#(5) rd;
  `ifdef spfpu
    RFType rdtype;
  `endif
  `ifdef RV64
    Bool  word32;
  `elsif dpfpu
    Bool word32;
  `endif
  `ifdef bpu
    `ifdef compressed
      Bool compressed;
    `endif
    BTBResponse btbresponse;
  `endif
  } Stage3Meta deriving(Bits, Eq, FShow);

  typedef struct{
    Bit#(5)     addr;
    Bit#(ELEN)  data;
    Op1type     optype;
  } RFOp1 deriving(Bits, Eq, FShow);

  typedef struct{
    Bit#(5)     addr;
    Bit#(ELEN)  data;
    Op2type     optype;
  } RFOp2 deriving(Bits, Eq, FShow);

  typedef struct{
    Bit#(ELEN)  data;
  `ifdef spfpu
    Bit#(5)     addr;
    RFType      optype;
  `endif
  } RFOp3 deriving(Bits, Eq, FShow);

  // This struct captures the decoded addresses of the operands and destination registers.
  // Max width : 20 bits
  typedef struct{
    Bit#(5) rs1addr;
    Bit#(5) rs2addr;
    Bit#(5) rd;
  `ifdef spfpu
    Bit#(5) rs3addr;
  `endif
  } OpAddr deriving(Bits, Eq, FShow);

  //// this struct captures the type of the operands based on the instruction being decoded.
  //// Max width : 2+3 + 1+1 = 7 bits
  typedef struct{
    Op1type rs1type;
    Op2type rs2type; // TODO redundant to send in Stage3
  `ifdef spfpu
    RFType  rs3type;
    RFType  rdtype;
  `endif
  } OpType deriving(Bits, Eq, FShow);


  // -------------------------------------------------------------
  // ---------- Tuples for the third Pipeline Stage -----------//

  typedef struct{
    Bit#(`vaddr) pc;
    Bit#(5)      rd;
    Bit#(1)      epochs;
  `ifdef spfpu
    RFType        rdtype;
  `endif
  } Stage4Common deriving(Bits, Eq, FShow);

  typedef struct{
  `ifdef triggers
    Bit#(`vaddr)  address;
    Bit#(2)       size;
  `endif
    Access_type   memaccess;
  `ifdef dpfpu
    Bit#(1)       nanboxing;
  `endif
  } Stage4Memory deriving(Bits, Eq, FShow);

  typedef struct{
    Bit#(`causesize)    cause;
    Bit#(`vaddr)        badaddr;
  } Stage4Trap deriving(Bits, Eq, FShow);

  typedef struct{
    Bit#(ELEN)    rdvalue;
  `ifdef spfpu
    Bit#(5)       fflags;
  `endif
  } Stage4Regular deriving(Bits, Eq, FShow);

  typedef struct{
    Bit#(XLEN)    rs1_imm;
    Bit#(2)       lpc;
    Bit#(12)      csr_address;
    Bit#(3)       funct3;
  } Stage4System deriving(Bits, Eq, FShow);

  typedef union tagged{
    Stage4Memory  Memory;
    Stage4Trap    Trap;
    Stage4Regular Regular;
    Stage4System  System;
  } Stage4Type deriving (Bits, Eq, FShow);


  // ----------------------------------------------------------//
  // Common : epoch 1 - bit
  typedef struct{
    Bit#(`causesize) cause;
    Bit#(`vaddr) badaddr;
    Bit#(`vaddr) pc;
  } CommitTrap deriving(Bits, Eq, FShow);

  typedef struct{
    Bit#(`vaddr) pc;
  `ifdef atomic
    Bit#(ELEN) commitvalue;
    Bit#(5) rd;
  `endif
  } CommitStore deriving (Bits, Eq, FShow);

  typedef struct{
    Bit#(ELEN) commitvalue;
    Bit#(5) rd;
  `ifdef spfpu
    Bit#(5) fflags;
    RFType rdtype;
  `endif
  } CommitRegular deriving(Bits, Eq, FShow);

  typedef struct{
    Bit#(XLEN) rs1;
    Bit#(2) lpc;
    Bit#(12) csraddr;
    Bit#(3) func3;
    Bit#(5) rd;
  } CommitSystem deriving(Bits, Eq, FShow);

  typedef union tagged{
    CommitTrap TRAP;
    CommitStore STORE;
    CommitRegular REG;
    CommitSystem SYSTEM;} CommitType deriving(Bits, Eq, FShow);

  typedef Tuple2#(CommitType, Bit#(1)) PIPE4;

  // ----------------------------------------------------------//

  typedef struct {
  	Bit#(1)			mprv;
  	Bit#(1)			sum;
  	Bit#(1)			mxr;
  	Privilege_mode mpp;
  	Privilege_mode prv;
  } Chmod deriving(Bits, Eq);

  typedef struct{
    Bit#(5)     addr;
    Bit#(ELEN)  data;
  `ifdef spfpu
    RFType      rdtype ;
  `endif
  } CommitData deriving(Bits, FShow, Eq);

  typedef struct{
		Bit#(width) final_result;					// the final result for the operation
		Bit#(5) fflags; 					// indicates if any exception is generated.
	}Floating_output#(numeric type width) deriving(Bits, Eq);				// data structure of the output FIFO.
// ------------------------------------------------------------- //

`ifdef triggers
  typedef struct{
    Bit#(1) load;
    Bit#(1) store;
    Bit#(1) execute;
  `ifdef user
    Bit#(1) user;
  `endif
  `ifdef supervisor
    Bit#(1) supervisor;
  `endif
    Bit#(1) machine;
    Bit#(4) matched;
    Bit#(1) chain;
    Bit#(4) action_;
  `ifdef RV64
    Bit#(4) size;
  `else
    Bit#(2) size;
  `endif
    Bit#(1) select;
    Bit#(1) dmode;
  } MControl deriving(Bits, Eq, FShow);

  typedef struct {
    Bit#(6) action_;
  `ifdef user
    Bit#(1) user;
  `endif
  `ifdef supervisor
    Bit#(1) supervisor;
  `endif
    Bit#(1) machine;
    Bit#(14) count;
    Bit#(1) dmode;
  } ICount deriving(Bits, Eq, FShow);

  typedef struct{
    Bit#(6) action_;
  `ifdef user
    Bit#(1) user;
  `endif
  `ifdef supervisor
    Bit#(1) supervisor;
  `endif
    Bit#(1) machine;
    Bit#(1) dmode;
  } ITrigger deriving(Bits, Eq, FShow);

  typedef struct{
    Bit#(6) action_;
  `ifdef user
    Bit#(1) user;
  `endif
  `ifdef supervisor
    Bit#(1) supervisor;
  `endif
    Bit#(1) machine;
    Bit#(1) dmode;
  } ETrigger deriving(Bits, Eq, FShow);

  typedef union tagged {
    MControl MCONTROL;
    ICount   ICOUNT;
    ITrigger ITRIGGER;
    ETrigger ETRIGGER;
    void NONE;
  } TriggerData deriving(Bits, Eq, FShow);

  typedef struct{
      Bool trap;
      Bit#(`causesize) cause;
    } TriggerStatus deriving(Bits, Eq, FShow);

`endif
	//-------structure defined here is common across all the CSR grps in the daisy chain-------

  typedef struct{
    Bit#(ELEN)  data;
    Bool        valid;
  `ifdef arith_trap
    Bool             trap;
    Bit#(`causesize) cause;
  `endif
  `ifdef spfpu
    Bit#(5) fflags;
  `endif
  } XBoxOutput deriving(Bits, Eq, FShow);

  // ------------------------------ types for predictor ------------------------------------------//
  typedef enum {Branch = 0, JAL = 1, Call = 2, Ret = 3} ControlInsn deriving(Bits, Eq, FShow);

  typedef struct{
    Bit#(`statesize) prediction;
    Bool btbhit ;
  `ifdef compressed
    Bool hi;
  `endif
  `ifdef gshare
    Bit#(TAdd#(`extrahist, `histlen)) history;
  `endif
  } BTBResponse deriving(Bits, Eq, FShow);

  typedef struct {
    Bit#(`vaddr) nextpc;
    BTBResponse btbresponse;
  `ifdef compressed
    Bool instr16;
  `endif
  }PredictionResponse deriving (Bits, Eq, FShow);

  typedef struct {
      Bit#(`vaddr)  pc;
      Bit#(`vaddr)  target;
      Bit#(2)       state;
      ControlInsn   ci;
      Bool          btbhit;
    `ifdef compressed
      Bool          instr16;
    `endif
    `ifdef gshare
      Bit#(TAdd#(`extrahist, `histlen)) history;
    `endif
  } Training_data deriving (Bits, Eq, FShow);

  typedef struct{
    Bit#(`vaddr) pc;
  `ifdef ifence
    Bool         fence;
  `endif
  `ifdef compressed
    Bool         discard;
  `endif
  } PredictionRequest deriving(Bits, Eq, FShow);
  // --------------------------------------------------------------------------------------------//
	typedef struct {
  	Bit#(12) csr_address;
  	Bit#(XLEN) writedata;
    Bit#(2) funct3;
    `ifdef compressed Bit#(2) lpc; `endif
	} CSRReq deriving(Bits, FShow, Eq);
  typedef struct{
    Bool hit;
    Bit#(XLEN)  data;
  } CSRResponse deriving(Bits, Eq, FShow);
	//-----------------------------------------------------------------------------------------

`ifdef perfmonitors
		typedef struct{
      Bit#(1) misprediction            ;
      Bit#(1) exceptions               ;
      Bit#(1) interrupts               ;
      Bit#(1) csrops                   ;
      Bit#(1) jumps                    ;
      Bit#(1) branches                 ;
      Bit#(1) floats                   ;
      Bit#(1) muldiv                   ;
      Bit#(1) rawstalls                ;
      Bit#(1) exetalls                 ;
      Bit#(1) icache_access            ;
      Bit#(1) icache_hits              ;
      Bit#(1) icache_fbhit             ;
      Bit#(1) icache_ncaccess          ;
      Bit#(1) icache_fbrelease         ;
      Bit#(1) dcache_read_access		    ;
      Bit#(1) dcache_write_access		  ;
      Bit#(1) dcache_atomic_access		  ;
      Bit#(1) dcache_nc_read_access		;
      Bit#(1) dcache_nc_write_access   ;
      Bit#(1) dcache_read_hits		      ;
      Bit#(1) dcache_write_hits		    ;
      Bit#(1) dcache_atomic_hits		    ;
      Bit#(1) dcache_read_fb_hits		  ;
      Bit#(1) dcache_write_fb_hits		  ;
      Bit#(1) dcache_atomic_fb_hits		;
      Bit#(1) dcache_fb_releases		    ;
      Bit#(1) dcache_line_evictions		;
      Bit#(1) itlb_misses              ;
      Bit#(1) dtlb_misses              ;
  	} Events deriving(Bits, Eq, FShow);
	// types for events
	`ifdef csr_grp4
  	typedef Events Events_grp4;
  `endif
  `ifdef csr_grp5
  	typedef Events Events_grp5;
	`endif
	`ifdef csr_grp6
  	typedef Events Events_grp6;
  `endif
  `ifdef csr_grp7
  	typedef Events Events_grp7;
  `endif
  function String event_to_string(Bit#(XLEN) event_count);
    case (event_count)
      'd1:  return "Exceptions";
      'd2:  return "Interrupts";
      'd3:  return "Branches Taken";
      'd4:  return "Branches Not Taken";
      'd5:  return "MulDiv Inst";
      'd6:  return "CSR Inst";
      'd7:  return "Jumps";
      'd8:  return "Loads";
      'd9:  return "Stores";
      'd10: return "Control Redirections";
      'd11: return "RAW Stalls";
      default: return "Unknown Event";
    endcase
  endfunction
`endif
endpackage
