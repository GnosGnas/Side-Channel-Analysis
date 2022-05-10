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
package tb_csr_grp_4_5_6_7_daisy;

//library and project related imports
  import common_types::*;
  `include "common_params.bsv"
  `include "csrgrp.defines"
  `include "Logger.bsv"
  import ConcatReg::*;
  import BUtils::*;
  import Vector::*;
  import ConfigReg::*;
  import Connectable::*;
  import Assert::*;
  import StmtFSM::*;
  
  import csr_daisy::*;

  //defines
   `define bit_64_max 64'hffffffffffffffff
 
  //functions
  //(*doc = "func : the function returns a string containing the name of the register \
  //         corresponding to its address, and the address of the next register to be tested\
  //         within the group"*)
  function Tuple2#(String, Bit#(12)) fn_addr_to_str_next_addr(Bit#(12) address);
  	case (address)
  		//grp4
			`MHPMCOUNTER3 : return tuple2("MHPMCOUNTER3", `MHPMCOUNTER4);
			`MHPMCOUNTER4 : return tuple2("MHPMCOUNTER4", `MHPMCOUNTER5);
			`MHPMCOUNTER5 : return tuple2("MHPMCOUNTER5", `MHPMCOUNTER6);
			`MHPMCOUNTER6 : return tuple2("MHPMCOUNTER6", `MHPMCOUNTER7);
			`MHPMCOUNTER7 : return tuple2("MHPMCOUNTER7", `MHPMCOUNTER8);
			`MHPMCOUNTER8 : return tuple2("MHPMCOUNTER8", `MHPMCOUNTER9);
			`MHPMCOUNTER9 : return tuple2("MHPMCOUNTER9", `MHPMCOUNTER3H);
			`MHPMCOUNTER3H : return tuple2("MHPMCOUNTER3H", `MHPMCOUNTER4H);
			`MHPMCOUNTER4H : return tuple2("MHPMCOUNTER4H", `MHPMCOUNTER5H);
			`MHPMCOUNTER5H : return tuple2("MHPMCOUNTER5H", `MHPMCOUNTER6H);
			`MHPMCOUNTER6H : return tuple2("MHPMCOUNTER6H", `MHPMCOUNTER7H);
			`MHPMCOUNTER7H : return tuple2("MHPMCOUNTER7H", `MHPMCOUNTER8H);
			`MHPMCOUNTER8H : return tuple2("MHPMCOUNTER8H", `MHPMCOUNTER9H);
			`MHPMCOUNTER9H : return tuple2("MHPMCOUNTER9H", `MHPMEVENT3);
			`MHPMEVENT3 : return tuple2("MHPMEVENT3", `MHPMEVENT4);
			`MHPMEVENT4 : return tuple2("MHPMEVENT4", `MHPMEVENT5);
			`MHPMEVENT5 : return tuple2("MHPMEVENT5", `MHPMEVENT6);
			`MHPMEVENT6 : return tuple2("MHPMEVENT6", `MHPMEVENT7);
			`MHPMEVENT7 : return tuple2("MHPMEVENT7", `MHPMEVENT8);
			`MHPMEVENT8 : return tuple2("MHPMEVENT8", `MHPMEVENT9);
			`MHPMEVENT9 : return tuple2("MHPMEVENT9", `HPMCOUNTER3);
			`HPMCOUNTER3 : return tuple2("HPMCOUNTER3", `HPMCOUNTER4);
			`HPMCOUNTER4 : return tuple2("HPMCOUNTER4", `HPMCOUNTER5);
			`HPMCOUNTER5 : return tuple2("HPMCOUNTER5", `HPMCOUNTER6);
			`HPMCOUNTER6 : return tuple2("HPMCOUNTER6", `HPMCOUNTER7);
			`HPMCOUNTER7 : return tuple2("HPMCOUNTER7", `HPMCOUNTER8);
			`HPMCOUNTER8 : return tuple2("HPMCOUNTER8", `HPMCOUNTER9);
			`HPMCOUNTER9 : return tuple2("HPMCOUNTER9", `HPMCOUNTER3H);
			`HPMCOUNTER3H : return tuple2("HPMCOUNTER3H", `HPMCOUNTER4H);
			`HPMCOUNTER4H : return tuple2("HPMCOUNTER4H", `HPMCOUNTER5H);
			`HPMCOUNTER5H : return tuple2("HPMCOUNTER5H", `HPMCOUNTER6H);
			`HPMCOUNTER6H : return tuple2("HPMCOUNTER6H", `HPMCOUNTER7H);
			`HPMCOUNTER7H : return tuple2("HPMCOUNTER7H", `HPMCOUNTER8H);
		  `HPMCOUNTER8H : return tuple2("HPMCOUNTER8H", `HPMCOUNTER9H);
			`HPMCOUNTER9H : return tuple2("HPMCOUNTER9H", 0);
			//=========================================
			//grp5
			`MHPMCOUNTER10 : return tuple2("MHPMCOUNTER10", `MHPMCOUNTER11);
			`MHPMCOUNTER11 : return tuple2("MHPMCOUNTER11", `MHPMCOUNTER12);
			`MHPMCOUNTER12 : return tuple2("MHPMCOUNTER12", `MHPMCOUNTER13);
			`MHPMCOUNTER13 : return tuple2("MHPMCOUNTER13", `MHPMCOUNTER14);
			`MHPMCOUNTER14 : return tuple2("MHPMCOUNTER14", `MHPMCOUNTER15);
			`MHPMCOUNTER15 : return tuple2("MHPMCOUNTER15", `MHPMCOUNTER16);
			`MHPMCOUNTER16 : return tuple2("MHPMCOUNTER16", `MHPMCOUNTER10H);
			`MHPMCOUNTER10H : return tuple2("MHPMCOUNTER10H", `MHPMCOUNTER11H);
			`MHPMCOUNTER11H : return tuple2("MHPMCOUNTER11H", `MHPMCOUNTER12H);
			`MHPMCOUNTER12H : return tuple2("MHPMCOUNTER12H", `MHPMCOUNTER13H);
			`MHPMCOUNTER13H : return tuple2("MHPMCOUNTER13H", `MHPMCOUNTER14H);
			`MHPMCOUNTER14H : return tuple2("MHPMCOUNTER14H", `MHPMCOUNTER15H);
			`MHPMCOUNTER15H : return tuple2("MHPMCOUNTER15H", `MHPMCOUNTER16H);
			`MHPMCOUNTER16H : return tuple2("MHPMCOUNTER16H", `MHPMEVENT10);
			`MHPMEVENT10 : return tuple2("MHPMEVENT10", `MHPMEVENT11);
			`MHPMEVENT11 : return tuple2("MHPMEVENT11", `MHPMEVENT12);
			`MHPMEVENT12 : return tuple2("MHPMEVENT12", `MHPMEVENT13);
			`MHPMEVENT13 : return tuple2("MHPMEVENT13", `MHPMEVENT14);
			`MHPMEVENT14 : return tuple2("MHPMEVENT14", `MHPMEVENT15);
			`MHPMEVENT15 : return tuple2("MHPMEVENT15", `MHPMEVENT16);
			`MHPMEVENT16 : return tuple2("MHPMEVENT16", `HPMCOUNTER10);
			`HPMCOUNTER10 : return tuple2("HPMCOUNTER10", `HPMCOUNTER11);
			`HPMCOUNTER11 : return tuple2("HPMCOUNTER11", `HPMCOUNTER12);
			`HPMCOUNTER12 : return tuple2("HPMCOUNTER12", `HPMCOUNTER13);
			`HPMCOUNTER13 : return tuple2("HPMCOUNTER13", `HPMCOUNTER14);
			`HPMCOUNTER14 : return tuple2("HPMCOUNTER14", `HPMCOUNTER15);
			`HPMCOUNTER15 : return tuple2("HPMCOUNTER15", `HPMCOUNTER16);
			`HPMCOUNTER16 : return tuple2("HPMCOUNTER16", `HPMCOUNTER10H);
			`HPMCOUNTER10H : return tuple2("HPMCOUNTER10H", `HPMCOUNTER11H);
			`HPMCOUNTER11H : return tuple2("HPMCOUNTER11H", `HPMCOUNTER12H);
			`HPMCOUNTER12H : return tuple2("HPMCOUNTER12H", `HPMCOUNTER13H);
			`HPMCOUNTER13H : return tuple2("HPMCOUNTER13H", `HPMCOUNTER14H);
			`HPMCOUNTER14H : return tuple2("HPMCOUNTER14H", `HPMCOUNTER15H);
		  `HPMCOUNTER15H : return tuple2("HPMCOUNTER15H", `HPMCOUNTER16H);
			`HPMCOUNTER16H : return tuple2("HPMCOUNTER16H", 0);
			//=========================================
			//grp6
			`MHPMCOUNTER17 : return tuple2("MHPMCOUNTER17", `MHPMCOUNTER18);
			`MHPMCOUNTER18 : return tuple2("MHPMCOUNTER18", `MHPMCOUNTER19);
			`MHPMCOUNTER19 : return tuple2("MHPMCOUNTER19", `MHPMCOUNTER20);
			`MHPMCOUNTER20 : return tuple2("MHPMCOUNTER20", `MHPMCOUNTER21);
			`MHPMCOUNTER21 : return tuple2("MHPMCOUNTER21", `MHPMCOUNTER22);
			`MHPMCOUNTER22 : return tuple2("MHPMCOUNTER22", `MHPMCOUNTER23);
			`MHPMCOUNTER23 : return tuple2("MHPMCOUNTER23", `MHPMCOUNTER17H);
			`MHPMCOUNTER17H : return tuple2("MHPMCOUNTER17H", `MHPMCOUNTER18H);
			`MHPMCOUNTER18H : return tuple2("MHPMCOUNTER18H", `MHPMCOUNTER19H);
			`MHPMCOUNTER19H : return tuple2("MHPMCOUNTER19H", `MHPMCOUNTER20H);
			`MHPMCOUNTER20H : return tuple2("MHPMCOUNTER20H", `MHPMCOUNTER21H);
			`MHPMCOUNTER21H : return tuple2("MHPMCOUNTER21H", `MHPMCOUNTER22H);
			`MHPMCOUNTER22H : return tuple2("MHPMCOUNTER22H", `MHPMCOUNTER23H);
			`MHPMCOUNTER23H : return tuple2("MHPMCOUNTER23H", `MHPMEVENT17);
			`MHPMEVENT17 : return tuple2("MHPMEVENT17", `MHPMEVENT18);
			`MHPMEVENT18 : return tuple2("MHPMEVENT18", `MHPMEVENT19);
			`MHPMEVENT19 : return tuple2("MHPMEVENT19", `MHPMEVENT20);
			`MHPMEVENT20 : return tuple2("MHPMEVENT20", `MHPMEVENT21);
			`MHPMEVENT21 : return tuple2("MHPMEVENT21", `MHPMEVENT22);
			`MHPMEVENT22 : return tuple2("MHPMEVENT22", `MHPMEVENT23);
			`MHPMEVENT23 : return tuple2("MHPMEVENT23", `HPMCOUNTER17);
			`HPMCOUNTER17 : return tuple2("HPMCOUNTER17", `HPMCOUNTER18);
			`HPMCOUNTER18 : return tuple2("HPMCOUNTER18", `HPMCOUNTER19);
			`HPMCOUNTER19 : return tuple2("HPMCOUNTER19", `HPMCOUNTER20);
			`HPMCOUNTER20 : return tuple2("HPMCOUNTER20", `HPMCOUNTER21);
			`HPMCOUNTER21 : return tuple2("HPMCOUNTER21", `HPMCOUNTER22);
			`HPMCOUNTER22 : return tuple2("HPMCOUNTER22", `HPMCOUNTER23);
			`HPMCOUNTER23 : return tuple2("HPMCOUNTER23", `HPMCOUNTER17H);
			`HPMCOUNTER17H : return tuple2("HPMCOUNTER17H", `HPMCOUNTER18H);
			`HPMCOUNTER18H : return tuple2("HPMCOUNTER18H", `HPMCOUNTER19H);
			`HPMCOUNTER19H : return tuple2("HPMCOUNTER19H", `HPMCOUNTER20H);
			`HPMCOUNTER20H : return tuple2("HPMCOUNTER20H", `HPMCOUNTER21H);
			`HPMCOUNTER21H : return tuple2("HPMCOUNTER21H", `HPMCOUNTER22H);
		  `HPMCOUNTER22H : return tuple2("HPMCOUNTER22H", `HPMCOUNTER23H);
			`HPMCOUNTER23H : return tuple2("HPMCOUNTER23H", 0);
			//=========================================
			//grp7
			`MHPMCOUNTER24 : return tuple2("MHPMCOUNTER24", `MHPMCOUNTER25);
			`MHPMCOUNTER25 : return tuple2("MHPMCOUNTER25", `MHPMCOUNTER26);
			`MHPMCOUNTER26 : return tuple2("MHPMCOUNTER26", `MHPMCOUNTER27);
			`MHPMCOUNTER27 : return tuple2("MHPMCOUNTER27", `MHPMCOUNTER28);
			`MHPMCOUNTER28 : return tuple2("MHPMCOUNTER28", `MHPMCOUNTER29);
			`MHPMCOUNTER29 : return tuple2("MHPMCOUNTER29", `MHPMCOUNTER30);
			`MHPMCOUNTER30 : return tuple2("MHPMCOUNTER30", `MHPMCOUNTER31);
			`MHPMCOUNTER31 : return tuple2("MHPMCOUNTER31", `MHPMCOUNTER24H);
			`MHPMCOUNTER24H : return tuple2("MHPMCOUNTER24H", `MHPMCOUNTER25H);
			`MHPMCOUNTER25H : return tuple2("MHPMCOUNTER25H", `MHPMCOUNTER26H);
			`MHPMCOUNTER26H : return tuple2("MHPMCOUNTER26H", `MHPMCOUNTER27H);
			`MHPMCOUNTER27H : return tuple2("MHPMCOUNTER27H", `MHPMCOUNTER28H);
			`MHPMCOUNTER28H : return tuple2("MHPMCOUNTER28H", `MHPMCOUNTER29H);
			`MHPMCOUNTER29H : return tuple2("MHPMCOUNTER29H", `MHPMCOUNTER30H);
			`MHPMCOUNTER30H : return tuple2("MHPMCOUNTER30H", `MHPMCOUNTER31H);
			`MHPMCOUNTER31H : return tuple2("MHPMCOUNTER31H", `MHPMEVENT24);
			`MHPMEVENT24 : return tuple2("MHPMEVENT24", `MHPMEVENT25);
			`MHPMEVENT25 : return tuple2("MHPMEVENT25", `MHPMEVENT26);
			`MHPMEVENT26 : return tuple2("MHPMEVENT26", `MHPMEVENT27);
			`MHPMEVENT27 : return tuple2("MHPMEVENT27", `MHPMEVENT28);
			`MHPMEVENT28 : return tuple2("MHPMEVENT28", `MHPMEVENT29);
			`MHPMEVENT29 : return tuple2("MHPMEVENT29", `MHPMEVENT30);
			`MHPMEVENT30 : return tuple2("MHPMEVENT30", `MHPMEVENT31);
			`MHPMEVENT31 : return tuple2("MHPMEVENT31", `HPMCOUNTER24);
			`HPMCOUNTER24 : return tuple2("HPMCOUNTER24", `HPMCOUNTER25);
			`HPMCOUNTER25 : return tuple2("HPMCOUNTER25", `HPMCOUNTER26);
			`HPMCOUNTER26 : return tuple2("HPMCOUNTER26", `HPMCOUNTER27);
			`HPMCOUNTER27 : return tuple2("HPMCOUNTER27", `HPMCOUNTER28);
			`HPMCOUNTER28 : return tuple2("HPMCOUNTER28", `HPMCOUNTER29);
			`HPMCOUNTER29 : return tuple2("HPMCOUNTER29", `HPMCOUNTER30);
			`HPMCOUNTER30 : return tuple2("HPMCOUNTER30", `HPMCOUNTER31);
			`HPMCOUNTER31 : return tuple2("HPMCOUNTER31", `HPMCOUNTER24H);
			`HPMCOUNTER24H : return tuple2("HPMCOUNTER24H", `HPMCOUNTER25H);
			`HPMCOUNTER25H : return tuple2("HPMCOUNTER25H", `HPMCOUNTER26H);
			`HPMCOUNTER26H : return tuple2("HPMCOUNTER26H", `HPMCOUNTER27H);
			`HPMCOUNTER27H : return tuple2("HPMCOUNTER27H", `HPMCOUNTER28H);
			`HPMCOUNTER28H : return tuple2("HPMCOUNTER28H", `HPMCOUNTER29H);
		  `HPMCOUNTER29H : return tuple2("HPMCOUNTER29H", `HPMCOUNTER30H);
			`HPMCOUNTER30H : return tuple2("HPMCOUNTER30H", `HPMCOUNTER31H);
			`HPMCOUNTER31H : return tuple2("HPMCOUNTER31H", 0);
			//=========================================
  		default : return tuple2("none", 000);
  	endcase
  endfunction
  
  //(*doc = "func : the function returns request structure containing the testdata to be written \
  //         onto the CSR and the expected data while reading the CSR, based on the address of the \
  //         CSR given"*)
	function Tuple2#(CSRReq, Bit#(XLEN)) fn_req_resp_f3_1 (Bit#(12) address);
		let vaddr = valueOf(`vaddr);
  	Bit#(XLEN) testdata = 0;
  	Bit#(XLEN) exp_data = 0;
  	case(address) //testdata formation

 			`MHPMCOUNTER3, `MHPMCOUNTER4,`MHPMCOUNTER5, `MHPMCOUNTER6, `MHPMCOUNTER7, `MHPMCOUNTER8,
 			`MHPMCOUNTER9, `MHPMCOUNTER10, `MHPMCOUNTER11, `MHPMCOUNTER12, `MHPMCOUNTER13, `MHPMCOUNTER14,
 			`MHPMCOUNTER15, `MHPMCOUNTER16, `MHPMCOUNTER17, `MHPMCOUNTER18, `MHPMCOUNTER19,
 			`MHPMCOUNTER20, `MHPMCOUNTER21, `MHPMCOUNTER22, `MHPMCOUNTER23, `MHPMCOUNTER24, 
 			`MHPMCOUNTER25, `MHPMCOUNTER26, `MHPMCOUNTER27, `MHPMCOUNTER28, `MHPMCOUNTER29,
 			`MHPMCOUNTER30, `MHPMCOUNTER31,
 			
 			`MHPMCOUNTER3H, `MHPMCOUNTER4H,`MHPMCOUNTER5H, `MHPMCOUNTER6H, `MHPMCOUNTER7H, `MHPMCOUNTER8H,
 			`MHPMCOUNTER9H, `MHPMCOUNTER10H, `MHPMCOUNTER11H, `MHPMCOUNTER12H, `MHPMCOUNTER13H,
 			`MHPMCOUNTER14H, `MHPMCOUNTER15H, `MHPMCOUNTER16H, `MHPMCOUNTER17H, `MHPMCOUNTER18H, 
 			`MHPMCOUNTER19H, `MHPMCOUNTER20H, `MHPMCOUNTER21H, `MHPMCOUNTER22H, `MHPMCOUNTER23H,
 			`MHPMCOUNTER24H, `MHPMCOUNTER25H, `MHPMCOUNTER26H, `MHPMCOUNTER27H, `MHPMCOUNTER28H, 
 			`MHPMCOUNTER29H, `MHPMCOUNTER30H, `MHPMCOUNTER31H,
 			
 			`MHPMEVENT3, `MHPMEVENT4, `MHPMEVENT5, `MHPMEVENT6, `MHPMEVENT7, `MHPMEVENT8, `MHPMEVENT9,
 			`MHPMEVENT10, `MHPMEVENT11, `MHPMEVENT12, `MHPMEVENT13, `MHPMEVENT14, `MHPMEVENT15,
 			`MHPMEVENT16, `MHPMEVENT17, `MHPMEVENT18, `MHPMEVENT19, `MHPMEVENT20, `MHPMEVENT21,
 			`MHPMEVENT22, `MHPMEVENT23, `MHPMEVENT24, `MHPMEVENT25, `MHPMEVENT26, `MHPMEVENT27,
 			`MHPMEVENT28, `MHPMEVENT29, `MHPMEVENT30, `MHPMEVENT31
 			: testdata = truncate({`bit_64_max});
 			//read only registers
 			`HPMCOUNTER3, `HPMCOUNTER4,`HPMCOUNTER5, `HPMCOUNTER6, `HPMCOUNTER7, `HPMCOUNTER8,
 			`HPMCOUNTER9, `HPMCOUNTER10, `HPMCOUNTER11, `HPMCOUNTER12, `HPMCOUNTER13, `HPMCOUNTER14,
 			`HPMCOUNTER15, `HPMCOUNTER16, `HPMCOUNTER17, `HPMCOUNTER18, `HPMCOUNTER19,
 			`HPMCOUNTER20, `HPMCOUNTER21, `HPMCOUNTER22, `HPMCOUNTER23, `HPMCOUNTER24, 
 			`HPMCOUNTER25, `HPMCOUNTER26, `HPMCOUNTER27, `HPMCOUNTER28, `HPMCOUNTER29,
 			`HPMCOUNTER30, `HPMCOUNTER31,
 			
 			`HPMCOUNTER3H, `HPMCOUNTER4H,`HPMCOUNTER5H, `HPMCOUNTER6H, `HPMCOUNTER7H, `HPMCOUNTER8H,
 			`HPMCOUNTER9H, `HPMCOUNTER10H, `HPMCOUNTER11H, `HPMCOUNTER12H, `HPMCOUNTER13H,
 			`HPMCOUNTER14H, `HPMCOUNTER15H, `HPMCOUNTER16H, `HPMCOUNTER17H, `HPMCOUNTER18H, 
 			`HPMCOUNTER19H, `HPMCOUNTER20H, `HPMCOUNTER21H, `HPMCOUNTER22H, `HPMCOUNTER23H,
 			`HPMCOUNTER24H, `HPMCOUNTER25H, `HPMCOUNTER26H, `HPMCOUNTER27H, `HPMCOUNTER28H, 
 			`HPMCOUNTER29H, `HPMCOUNTER30H, `HPMCOUNTER31H
 			: testdata = truncate({64'h10101111});
 			default : testdata = 0;
  	endcase
  	
  	case(address) //exp_data formation
  	
		`MHPMCOUNTER3, `MHPMCOUNTER4,`MHPMCOUNTER5, `MHPMCOUNTER6, `MHPMCOUNTER7, `MHPMCOUNTER8,
 		`MHPMCOUNTER9, `MHPMCOUNTER10, `MHPMCOUNTER11, `MHPMCOUNTER12, `MHPMCOUNTER13, `MHPMCOUNTER14,
 		`MHPMCOUNTER15, `MHPMCOUNTER16, `MHPMCOUNTER17, `MHPMCOUNTER18, `MHPMCOUNTER19,
 		`MHPMCOUNTER20, `MHPMCOUNTER21, `MHPMCOUNTER22, `MHPMCOUNTER23, `MHPMCOUNTER24, 
 		`MHPMCOUNTER25, `MHPMCOUNTER26, `MHPMCOUNTER27, `MHPMCOUNTER28, `MHPMCOUNTER29,
 		`MHPMCOUNTER30, `MHPMCOUNTER31,
 	`ifndef RV64
 		`MHPMCOUNTER3H, `MHPMCOUNTER4H,`MHPMCOUNTER5H, `MHPMCOUNTER6H, `MHPMCOUNTER7H, `MHPMCOUNTER8H,
 		`MHPMCOUNTER9H, `MHPMCOUNTER10H, `MHPMCOUNTER11H, `MHPMCOUNTER12H, `MHPMCOUNTER13H,
 		`MHPMCOUNTER14H, `MHPMCOUNTER15H, `MHPMCOUNTER16H, `MHPMCOUNTER17H, `MHPMCOUNTER18H, 
 		`MHPMCOUNTER19H, `MHPMCOUNTER20H, `MHPMCOUNTER21H, `MHPMCOUNTER22H, `MHPMCOUNTER23H,
 		`MHPMCOUNTER24H, `MHPMCOUNTER25H, `MHPMCOUNTER26H, `MHPMCOUNTER27H, `MHPMCOUNTER28H, 
 		`MHPMCOUNTER29H, `MHPMCOUNTER30H, `MHPMCOUNTER31H,
 	`endif
 		`MHPMEVENT3, `MHPMEVENT4, `MHPMEVENT5, `MHPMEVENT6, `MHPMEVENT7, `MHPMEVENT8, `MHPMEVENT9,
 		`MHPMEVENT10, `MHPMEVENT11, `MHPMEVENT12, `MHPMEVENT13, `MHPMEVENT14, `MHPMEVENT15,
 		`MHPMEVENT16, `MHPMEVENT17, `MHPMEVENT18, `MHPMEVENT19, `MHPMEVENT20, `MHPMEVENT21,
 		`MHPMEVENT22, `MHPMEVENT23, `MHPMEVENT24, `MHPMEVENT25, `MHPMEVENT26, `MHPMEVENT27,
 		`MHPMEVENT28, `MHPMEVENT29, `MHPMEVENT30, `MHPMEVENT31,
 		
 		`HPMCOUNTER3, `HPMCOUNTER4,`HPMCOUNTER5, `HPMCOUNTER6, `HPMCOUNTER7, `HPMCOUNTER8,
 		`HPMCOUNTER9, `HPMCOUNTER10, `HPMCOUNTER11, `HPMCOUNTER12, `HPMCOUNTER13, `HPMCOUNTER14,
 		`HPMCOUNTER15, `HPMCOUNTER16, `HPMCOUNTER17, `HPMCOUNTER18, `HPMCOUNTER19,
 		`HPMCOUNTER20, `HPMCOUNTER21, `HPMCOUNTER22, `HPMCOUNTER23, `HPMCOUNTER24, 
 		`HPMCOUNTER25, `HPMCOUNTER26, `HPMCOUNTER27, `HPMCOUNTER28, `HPMCOUNTER29,
 		`HPMCOUNTER30, `HPMCOUNTER31
 	`ifndef RV64 ,
 		`HPMCOUNTER3H, `HPMCOUNTER4H,`HPMCOUNTER5H, `HPMCOUNTER6H, `HPMCOUNTER7H, `HPMCOUNTER8H,
 		`HPMCOUNTER9H, `HPMCOUNTER10H, `HPMCOUNTER11H, `HPMCOUNTER12H, `HPMCOUNTER13H,
 		`HPMCOUNTER14H, `HPMCOUNTER15H, `HPMCOUNTER16H, `HPMCOUNTER17H, `HPMCOUNTER18H, 
 		`HPMCOUNTER19H, `HPMCOUNTER20H, `HPMCOUNTER21H, `HPMCOUNTER22H, `HPMCOUNTER23H,
 		`HPMCOUNTER24H, `HPMCOUNTER25H, `HPMCOUNTER26H, `HPMCOUNTER27H, `HPMCOUNTER28H, 
 		`HPMCOUNTER29H, `HPMCOUNTER30H, `HPMCOUNTER31H
 	`endif
 		: exp_data = truncate({`bit_64_max});

  		default : exp_data = 0;
  	endcase
  	CSRReq req = CSRReq{csr_address : address , writedata : testdata, funct3 : 1};
		Bit#(XLEN) response = exp_data;
		return tuple2(req, response);
  endfunction
  //(*doc = "func : the function checks the expected data and the actual response form the CSR read\
  //         and prints the appropriate message"*)
  function Action fn_check_response(CSRResponse csr_response, Bit#(XLEN) exp_data, 
                                    Bit#(12) address);
		case(address)                                    
	`ifdef csr_grp4
			`MHPMCOUNTER3 : return fn_print_csr_grp4_case(csr_response, exp_data, "MHPMCOUNTER3", 0);
			`MHPMCOUNTER4 : return fn_print_csr_grp4_case(csr_response, exp_data, "MHPMCOUNTER4", 1);
			`MHPMCOUNTER5 : return fn_print_csr_grp4_case(csr_response, exp_data, "MHPMCOUNTER5", 2);
			`MHPMCOUNTER6 : return fn_print_csr_grp4_case(csr_response, exp_data, "MHPMCOUNTER6", 3);
			`MHPMCOUNTER7 : return fn_print_csr_grp4_case(csr_response, exp_data, "MHPMCOUNTER7", 4);
			`MHPMCOUNTER8 : return fn_print_csr_grp4_case(csr_response, exp_data, "MHPMCOUNTER8", 5);
			`MHPMCOUNTER9 : return fn_print_csr_grp4_case(csr_response, exp_data, "MHPMCOUNTER9", 6);
			
			`MHPMEVENT3 : return fn_print_csr_grp4_case(csr_response, exp_data, "MHPMEVENT3", 0);
			`MHPMEVENT4 : return fn_print_csr_grp4_case(csr_response, exp_data, "MHPMEVENT4", 1);
			`MHPMEVENT5 : return fn_print_csr_grp4_case(csr_response, exp_data, "MHPMEVENT5", 2);
			`MHPMEVENT6 : return fn_print_csr_grp4_case(csr_response, exp_data, "MHPMEVENT6", 3);
			`MHPMEVENT7 : return fn_print_csr_grp4_case(csr_response, exp_data, "MHPMEVENT7", 4);
			`MHPMEVENT8 : return fn_print_csr_grp4_case(csr_response, exp_data, "MHPMEVENT8", 5);
			`MHPMEVENT9 : return fn_print_csr_grp4_case(csr_response, exp_data, "MHPMEVENT9", 6);
			`ifndef RV64
				`MHPMCOUNTER3H : return fn_print_csr_grp4_case(csr_response, exp_data, "MHPMCOUNTER3H",0);
				`MHPMCOUNTER4H : return fn_print_csr_grp4_case(csr_response, exp_data, "MHPMCOUNTER4H",1);
				`MHPMCOUNTER5H : return fn_print_csr_grp4_case(csr_response, exp_data, "MHPMCOUNTER5H",2);
				`MHPMCOUNTER6H : return fn_print_csr_grp4_case(csr_response, exp_data, "MHPMCOUNTER6H",3);
				`MHPMCOUNTER7H : return fn_print_csr_grp4_case(csr_response, exp_data, "MHPMCOUNTER7H",4);
				`MHPMCOUNTER8H : return fn_print_csr_grp4_case(csr_response, exp_data, "MHPMCOUNTER8H",5);
				`MHPMCOUNTER9H : return fn_print_csr_grp4_case(csr_response, exp_data, "MHPMCOUNTER9H",6);
			`endif
			`ifdef user
				`HPMCOUNTER3 : return fn_print_csr_grp4_case(csr_response, exp_data, "HPMCOUNTER3", 0);
				`HPMCOUNTER4 : return fn_print_csr_grp4_case(csr_response, exp_data, "HPMCOUNTER4", 1);
				`HPMCOUNTER5 : return fn_print_csr_grp4_case(csr_response, exp_data, "HPMCOUNTER5", 2);
				`HPMCOUNTER6 : return fn_print_csr_grp4_case(csr_response, exp_data, "HPMCOUNTER6", 3);
				`HPMCOUNTER7 : return fn_print_csr_grp4_case(csr_response, exp_data, "HPMCOUNTER7", 4);
				`HPMCOUNTER8 : return fn_print_csr_grp4_case(csr_response, exp_data, "HPMCOUNTER8", 5);
				`HPMCOUNTER9 : return fn_print_csr_grp4_case(csr_response, exp_data, "HPMCOUNTER9", 6);
				`ifndef RV64
					`HPMCOUNTER3H : return fn_print_csr_grp4_case(csr_response, exp_data, "HPMCOUNTER3H",0);
					`HPMCOUNTER4H : return fn_print_csr_grp4_case(csr_response, exp_data, "HPMCOUNTER4H",1);
					`HPMCOUNTER5H : return fn_print_csr_grp4_case(csr_response, exp_data, "HPMCOUNTER5H",2);
					`HPMCOUNTER6H : return fn_print_csr_grp4_case(csr_response, exp_data, "HPMCOUNTER6H",3);
					`HPMCOUNTER7H : return fn_print_csr_grp4_case(csr_response, exp_data, "HPMCOUNTER7H",4);
					`HPMCOUNTER8H : return fn_print_csr_grp4_case(csr_response, exp_data, "HPMCOUNTER8H",5);
					`HPMCOUNTER9H : return fn_print_csr_grp4_case(csr_response, exp_data, "HPMCOUNTER9H",6);
				`endif
			`endif
		`else
			`MHPMCOUNTER3, `MHPMCOUNTER4,`MHPMCOUNTER5, `MHPMCOUNTER6, `MHPMCOUNTER7, `MHPMCOUNTER8,
 			`MHPMCOUNTER9,
 			`MHPMCOUNTER3H, `MHPMCOUNTER4H,`MHPMCOUNTER5H, `MHPMCOUNTER6H, `MHPMCOUNTER7H, `MHPMCOUNTER8H,
 			`MHPMCOUNTER9H,
 			`MHPMEVENT3, `MHPMEVENT4, `MHPMEVENT5, `MHPMEVENT6, `MHPMEVENT7, `MHPMEVENT8, `MHPMEVENT9,
 			`HPMCOUNTER3, `HPMCOUNTER4,`HPMCOUNTER5, `HPMCOUNTER6, `HPMCOUNTER7, `HPMCOUNTER8,
 			`HPMCOUNTER9,
 			`HPMCOUNTER3H, `HPMCOUNTER4H,`HPMCOUNTER5H, `HPMCOUNTER6H, `HPMCOUNTER7H, `HPMCOUNTER8H,
 			`HPMCOUNTER9H : begin 
 				return fn_print_ifdef_miss (csr_response, exp_data, "csr_grp4");
 			end
		`endif
		`ifdef csr_grp5
			`MHPMCOUNTER10 : return fn_print_csr_grp5_case(csr_response, exp_data, "MHPMCOUNTER10", 0);
			`MHPMCOUNTER11 : return fn_print_csr_grp5_case(csr_response, exp_data, "MHPMCOUNTER11", 1);
			`MHPMCOUNTER12 : return fn_print_csr_grp5_case(csr_response, exp_data, "MHPMCOUNTER12", 2);
			`MHPMCOUNTER13 : return fn_print_csr_grp5_case(csr_response, exp_data, "MHPMCOUNTER13", 3);
			`MHPMCOUNTER14 : return fn_print_csr_grp5_case(csr_response, exp_data, "MHPMCOUNTER14", 4);
			`MHPMCOUNTER15 : return fn_print_csr_grp5_case(csr_response, exp_data, "MHPMCOUNTER15", 5);
			`MHPMCOUNTER16 : return fn_print_csr_grp5_case(csr_response, exp_data, "MHPMCOUNTER16", 6);
			
			`MHPMEVENT10 : return fn_print_csr_grp5_case(csr_response, exp_data, "MHPMEVENT10", 0);
			`MHPMEVENT11 : return fn_print_csr_grp5_case(csr_response, exp_data, "MHPMEVENT11", 1);
			`MHPMEVENT12 : return fn_print_csr_grp5_case(csr_response, exp_data, "MHPMEVENT12", 2);
			`MHPMEVENT13 : return fn_print_csr_grp5_case(csr_response, exp_data, "MHPMEVENT13", 3);
			`MHPMEVENT14 : return fn_print_csr_grp5_case(csr_response, exp_data, "MHPMEVENT14", 4);
			`MHPMEVENT15 : return fn_print_csr_grp5_case(csr_response, exp_data, "MHPMEVENT15", 5);
			`MHPMEVENT16 : return fn_print_csr_grp5_case(csr_response, exp_data, "MHPMEVENT16", 6);
			`ifndef RV64
				`MHPMCOUNTER10H : return fn_print_csr_grp5_case(csr_response, exp_data,"MHPMCOUNTER10H",0);
				`MHPMCOUNTER11H : return fn_print_csr_grp5_case(csr_response, exp_data,"MHPMCOUNTER11H",1);
				`MHPMCOUNTER12H : return fn_print_csr_grp5_case(csr_response, exp_data,"MHPMCOUNTER12H",2);
				`MHPMCOUNTER13H : return fn_print_csr_grp5_case(csr_response, exp_data,"MHPMCOUNTER13H",3);
				`MHPMCOUNTER14H : return fn_print_csr_grp5_case(csr_response, exp_data,"MHPMCOUNTER14H",4);
				`MHPMCOUNTER15H : return fn_print_csr_grp5_case(csr_response, exp_data,"MHPMCOUNTER15H",5);
				`MHPMCOUNTER16H : return fn_print_csr_grp5_case(csr_response, exp_data,"MHPMCOUNTER16H",6);
			`endif
			`ifdef user
				`HPMCOUNTER10 : return fn_print_csr_grp5_case(csr_response, exp_data, "HPMCOUNTER10", 0);
				`HPMCOUNTER11 : return fn_print_csr_grp5_case(csr_response, exp_data, "HPMCOUNTER11", 1);
				`HPMCOUNTER12 : return fn_print_csr_grp5_case(csr_response, exp_data, "HPMCOUNTER12", 2);
				`HPMCOUNTER13 : return fn_print_csr_grp5_case(csr_response, exp_data, "HPMCOUNTER13", 3);
				`HPMCOUNTER14 : return fn_print_csr_grp5_case(csr_response, exp_data, "HPMCOUNTER14", 4);
				`HPMCOUNTER15 : return fn_print_csr_grp5_case(csr_response, exp_data, "HPMCOUNTER15", 5);
				`HPMCOUNTER16 : return fn_print_csr_grp5_case(csr_response, exp_data, "HPMCOUNTER16", 6);
				`ifndef RV64
					`HPMCOUNTER10H : return fn_print_csr_grp5_case(csr_response, exp_data,"HPMCOUNTER10H",0);
					`HPMCOUNTER11H : return fn_print_csr_grp5_case(csr_response, exp_data,"HPMCOUNTER11H",1);
					`HPMCOUNTER12H : return fn_print_csr_grp5_case(csr_response, exp_data,"HPMCOUNTER12H",2);
					`HPMCOUNTER13H : return fn_print_csr_grp5_case(csr_response, exp_data,"HPMCOUNTER13H",3);
					`HPMCOUNTER14H : return fn_print_csr_grp5_case(csr_response, exp_data,"HPMCOUNTER14H",4);
					`HPMCOUNTER15H : return fn_print_csr_grp5_case(csr_response, exp_data,"HPMCOUNTER15H",5);
					`HPMCOUNTER16H : return fn_print_csr_grp5_case(csr_response, exp_data,"HPMCOUNTER16H",6);
				`endif
			`endif
		`else
			`MHPMCOUNTER10, `MHPMCOUNTER11, `MHPMCOUNTER12, `MHPMCOUNTER13, `MHPMCOUNTER14,
 			`MHPMCOUNTER15, `MHPMCOUNTER16,
 			`MHPMCOUNTER10H, `MHPMCOUNTER11H, `MHPMCOUNTER12H, `MHPMCOUNTER13H, `MHPMCOUNTER14H,
 			`MHPMCOUNTER15H, `MHPMCOUNTER16H,
 			`MHPMEVENT10, `MHPMEVENT11, `MHPMEVENT12, `MHPMEVENT13, `MHPMEVENT14, `MHPMEVENT15,
 			`MHPMEVENT16,
 			`HPMCOUNTER10, `HPMCOUNTER11, `HPMCOUNTER12, `HPMCOUNTER13, `HPMCOUNTER14,
 			`HPMCOUNTER15, `HPMCOUNTER16,
 			`HPMCOUNTER10H, `HPMCOUNTER11H, `HPMCOUNTER12H, `HPMCOUNTER13H, `HPMCOUNTER14H,
 			`HPMCOUNTER15H, `HPMCOUNTER16H : begin 
 				return fn_print_ifdef_miss (csr_response, exp_data, "csr_grp5");
 			end
		`endif
		`ifdef csr_grp6
			`MHPMCOUNTER17 : return fn_print_csr_grp6_case(csr_response, exp_data, "MHPMCOUNTER17", 0);
			`MHPMCOUNTER18 : return fn_print_csr_grp6_case(csr_response, exp_data, "MHPMCOUNTER18", 1);
			`MHPMCOUNTER19 : return fn_print_csr_grp6_case(csr_response, exp_data, "MHPMCOUNTER19", 2);
			`MHPMCOUNTER20 : return fn_print_csr_grp6_case(csr_response, exp_data, "MHPMCOUNTER20", 3);
			`MHPMCOUNTER21 : return fn_print_csr_grp6_case(csr_response, exp_data, "MHPMCOUNTER21", 4);
			`MHPMCOUNTER22 : return fn_print_csr_grp6_case(csr_response, exp_data, "MHPMCOUNTER22", 5);
			`MHPMCOUNTER23 : return fn_print_csr_grp6_case(csr_response, exp_data, "MHPMCOUNTER23", 6);
			
			`MHPMEVENT17 : return fn_print_csr_grp6_case(csr_response, exp_data, "MHPMEVENT17", 0);
			`MHPMEVENT18 : return fn_print_csr_grp6_case(csr_response, exp_data, "MHPMEVENT18", 1);
			`MHPMEVENT19 : return fn_print_csr_grp6_case(csr_response, exp_data, "MHPMEVENT19", 2);
			`MHPMEVENT20 : return fn_print_csr_grp6_case(csr_response, exp_data, "MHPMEVENT20", 3);
			`MHPMEVENT21 : return fn_print_csr_grp6_case(csr_response, exp_data, "MHPMEVENT21", 4);
			`MHPMEVENT22 : return fn_print_csr_grp6_case(csr_response, exp_data, "MHPMEVENT22", 5);
			`MHPMEVENT23 : return fn_print_csr_grp6_case(csr_response, exp_data, "MHPMEVENT23", 6);
			`ifndef RV64
				`MHPMCOUNTER17H : return fn_print_csr_grp6_case(csr_response, exp_data,"MHPMCOUNTER17H",0);
				`MHPMCOUNTER18H : return fn_print_csr_grp6_case(csr_response, exp_data,"MHPMCOUNTER18H",1);
				`MHPMCOUNTER19H : return fn_print_csr_grp6_case(csr_response, exp_data,"MHPMCOUNTER19H",2);
				`MHPMCOUNTER20H : return fn_print_csr_grp6_case(csr_response, exp_data,"MHPMCOUNTER20H",3);
				`MHPMCOUNTER21H : return fn_print_csr_grp6_case(csr_response, exp_data,"MHPMCOUNTER21H",4);
				`MHPMCOUNTER22H : return fn_print_csr_grp6_case(csr_response, exp_data,"MHPMCOUNTER22H",5);
				`MHPMCOUNTER23H : return fn_print_csr_grp6_case(csr_response, exp_data,"MHPMCOUNTER23H",6);
			`endif
			`ifdef user
				`HPMCOUNTER17 : return fn_print_csr_grp6_case(csr_response, exp_data, "HPMCOUNTER17", 0);
				`HPMCOUNTER18 : return fn_print_csr_grp6_case(csr_response, exp_data, "HPMCOUNTER18", 1);
				`HPMCOUNTER19 : return fn_print_csr_grp6_case(csr_response, exp_data, "HPMCOUNTER19", 2);
				`HPMCOUNTER20 : return fn_print_csr_grp6_case(csr_response, exp_data, "HPMCOUNTER20", 3);
				`HPMCOUNTER21 : return fn_print_csr_grp6_case(csr_response, exp_data, "HPMCOUNTER21", 4);
				`HPMCOUNTER22 : return fn_print_csr_grp6_case(csr_response, exp_data, "HPMCOUNTER22", 5);
				`HPMCOUNTER23 : return fn_print_csr_grp6_case(csr_response, exp_data, "HPMCOUNTER23", 6);
				`ifndef RV64
					`HPMCOUNTER17H : return fn_print_csr_grp6_case(csr_response, exp_data,"HPMCOUNTER17H",0);
					`HPMCOUNTER18H : return fn_print_csr_grp6_case(csr_response, exp_data,"HPMCOUNTER18H",1);
					`HPMCOUNTER19H : return fn_print_csr_grp6_case(csr_response, exp_data,"HPMCOUNTER19H",2);
					`HPMCOUNTER20H : return fn_print_csr_grp6_case(csr_response, exp_data,"HPMCOUNTER20H",3);
					`HPMCOUNTER21H : return fn_print_csr_grp6_case(csr_response, exp_data,"HPMCOUNTER21H",4);
					`HPMCOUNTER22H : return fn_print_csr_grp6_case(csr_response, exp_data,"HPMCOUNTER22H",5);
					`HPMCOUNTER23H : return fn_print_csr_grp6_case(csr_response, exp_data,"HPMCOUNTER23H",6);
				`endif
			`endif
		`else
			`MHPMCOUNTER17, `MHPMCOUNTER18, `MHPMCOUNTER19, `MHPMCOUNTER20, `MHPMCOUNTER21,
 			`MHPMCOUNTER22, `MHPMCOUNTER23,
 			`MHPMCOUNTER17H, `MHPMCOUNTER18H, `MHPMCOUNTER19H, `MHPMCOUNTER20H, `MHPMCOUNTER21H,
 			`MHPMCOUNTER22H, `MHPMCOUNTER23H,
 			`MHPMEVENT17, `MHPMEVENT18, `MHPMEVENT19, `MHPMEVENT20, `MHPMEVENT21, `MHPMEVENT22,
 			`MHPMEVENT23,
 			`HPMCOUNTER17, `HPMCOUNTER18, `HPMCOUNTER19, `HPMCOUNTER20, `HPMCOUNTER21,
 			`HPMCOUNTER22, `HPMCOUNTER23,
 			`HPMCOUNTER17H, `HPMCOUNTER18H, `HPMCOUNTER19H, `HPMCOUNTER20H, `HPMCOUNTER21H,
 			`HPMCOUNTER22H, `HPMCOUNTER23H : begin 
 				return fn_print_ifdef_miss (csr_response, exp_data, "csr_grp6");
 			end
		`endif
		`ifdef csr_grp7
			`MHPMCOUNTER24 : return fn_print_csr_grp7_case(csr_response, exp_data, "MHPMCOUNTER24", 0);
			`MHPMCOUNTER25 : return fn_print_csr_grp7_case(csr_response, exp_data, "MHPMCOUNTER25", 1);
			`MHPMCOUNTER26 : return fn_print_csr_grp7_case(csr_response, exp_data, "MHPMCOUNTER26", 2);
			`MHPMCOUNTER27 : return fn_print_csr_grp7_case(csr_response, exp_data, "MHPMCOUNTER27", 3);
			`MHPMCOUNTER28 : return fn_print_csr_grp7_case(csr_response, exp_data, "MHPMCOUNTER28", 4);
			`MHPMCOUNTER29 : return fn_print_csr_grp7_case(csr_response, exp_data, "MHPMCOUNTER29", 5);
			`MHPMCOUNTER30 : return fn_print_csr_grp7_case(csr_response, exp_data, "MHPMCOUNTER30", 6);
			`MHPMCOUNTER31 : return fn_print_csr_grp7_case(csr_response, exp_data, "MHPMCOUNTER31", 7);
			
			`MHPMEVENT24 : return fn_print_csr_grp7_case(csr_response, exp_data, "MHPMEVENT24", 0);
			`MHPMEVENT25 : return fn_print_csr_grp7_case(csr_response, exp_data, "MHPMEVENT25", 1);
			`MHPMEVENT26 : return fn_print_csr_grp7_case(csr_response, exp_data, "MHPMEVENT26", 2);
			`MHPMEVENT27 : return fn_print_csr_grp7_case(csr_response, exp_data, "MHPMEVENT27", 3);
			`MHPMEVENT28 : return fn_print_csr_grp7_case(csr_response, exp_data, "MHPMEVENT28", 4);
			`MHPMEVENT29 : return fn_print_csr_grp7_case(csr_response, exp_data, "MHPMEVENT29", 5);
			`MHPMEVENT30 : return fn_print_csr_grp7_case(csr_response, exp_data, "MHPMEVENT30", 6);
			`MHPMEVENT31 : return fn_print_csr_grp7_case(csr_response, exp_data, "MHPMEVENT31", 7);
			`ifndef RV64
				`MHPMCOUNTER24H : return fn_print_csr_grp7_case(csr_response, exp_data, "MHPMCOUNTER24H",0);
				`MHPMCOUNTER25H : return fn_print_csr_grp7_case(csr_response, exp_data, "MHPMCOUNTER25H",1);
				`MHPMCOUNTER26H : return fn_print_csr_grp7_case(csr_response, exp_data, "MHPMCOUNTER26H",2);
				`MHPMCOUNTER27H : return fn_print_csr_grp7_case(csr_response, exp_data, "MHPMCOUNTER27H",3);
				`MHPMCOUNTER28H : return fn_print_csr_grp7_case(csr_response, exp_data, "MHPMCOUNTER28H",4);
				`MHPMCOUNTER29H : return fn_print_csr_grp7_case(csr_response, exp_data, "MHPMCOUNTER29H",5);
				`MHPMCOUNTER30H : return fn_print_csr_grp7_case(csr_response, exp_data, "MHPMCOUNTER30H",6);
				`MHPMCOUNTER31H : return fn_print_csr_grp7_case(csr_response, exp_data, "MHPMCOUNTER31H",7);
			`endif
			`ifdef user
				`HPMCOUNTER24 : return fn_print_csr_grp7_case(csr_response, exp_data, "HPMCOUNTER24", 0);
				`HPMCOUNTER25 : return fn_print_csr_grp7_case(csr_response, exp_data, "HPMCOUNTER25", 1);
				`HPMCOUNTER26 : return fn_print_csr_grp7_case(csr_response, exp_data, "HPMCOUNTER26", 2);
				`HPMCOUNTER27 : return fn_print_csr_grp7_case(csr_response, exp_data, "HPMCOUNTER27", 3);
				`HPMCOUNTER28 : return fn_print_csr_grp7_case(csr_response, exp_data, "HPMCOUNTER28", 4);
				`HPMCOUNTER29 : return fn_print_csr_grp7_case(csr_response, exp_data, "HPMCOUNTER29", 5);
				`HPMCOUNTER30 : return fn_print_csr_grp7_case(csr_response, exp_data, "HPMCOUNTER30", 6);
			  `HPMCOUNTER31 : return fn_print_csr_grp7_case(csr_response, exp_data, "HPMCOUNTER31", 7);
				`ifndef RV64
					`HPMCOUNTER24H : return fn_print_csr_grp7_case(csr_response, exp_data, "HPMCOUNTER24H",0);
					`HPMCOUNTER25H : return fn_print_csr_grp7_case(csr_response, exp_data, "HPMCOUNTER25H",1);
					`HPMCOUNTER26H : return fn_print_csr_grp7_case(csr_response, exp_data, "HPMCOUNTER26H",2);
					`HPMCOUNTER27H : return fn_print_csr_grp7_case(csr_response, exp_data, "HPMCOUNTER27H",3);
					`HPMCOUNTER28H : return fn_print_csr_grp7_case(csr_response, exp_data, "HPMCOUNTER28H",4);
					`HPMCOUNTER29H : return fn_print_csr_grp7_case(csr_response, exp_data, "HPMCOUNTER29H",5);
					`HPMCOUNTER30H : return fn_print_csr_grp7_case(csr_response, exp_data, "HPMCOUNTER30H",6);
					`HPMCOUNTER31H : return fn_print_csr_grp7_case(csr_response, exp_data, "HPMCOUNTER31H",7);
				`endif
			`endif
		`else
			`MHPMCOUNTER24, `MHPMCOUNTER25, `MHPMCOUNTER26, `MHPMCOUNTER27, `MHPMCOUNTER28,
 			`MHPMCOUNTER29, `MHPMCOUNTER30,`MHPMCOUNTER31,
 			`MHPMCOUNTER24H, `MHPMCOUNTER25H, `MHPMCOUNTER26H, `MHPMCOUNTER27H, `MHPMCOUNTER28H,
 			`MHPMCOUNTER29H, `MHPMCOUNTER30H,`MHPMCOUNTER31H,
 			`MHPMEVENT24, `MHPMEVENT25, `MHPMEVENT26, `MHPMEVENT27, `MHPMEVENT28, `MHPMEVENT29,
 			`MHPMEVENT30, `MHPMEVENT31,
 			`HPMCOUNTER24, `HPMCOUNTER25, `HPMCOUNTER26, `HPMCOUNTER27, `HPMCOUNTER28,
 			`HPMCOUNTER29, `HPMCOUNTER30, `HPMCOUNTER31,
 			`HPMCOUNTER24H, `HPMCOUNTER25H, `HPMCOUNTER26H, `HPMCOUNTER27H, `HPMCOUNTER28H,
 			`HPMCOUNTER29H, `HPMCOUNTER30H, `HPMCOUNTER31H : begin 
 				return fn_print_ifdef_miss (csr_response, exp_data, "csr_grp7");
 			end
		`endif
		`ifdef RV64
			`ifdef csr_grp4   `MHPMCOUNTER3H, `MHPMCOUNTER4H,`MHPMCOUNTER5H, `MHPMCOUNTER6H, 
												`MHPMCOUNTER7H, `MHPMCOUNTER8H, `MHPMCOUNTER9H `endif 
			`ifdef csr_grp5 , `MHPMCOUNTER10H, `MHPMCOUNTER11H, `MHPMCOUNTER12H, `MHPMCOUNTER13H,
 			                  `MHPMCOUNTER14H, `MHPMCOUNTER15H, `MHPMCOUNTER16H `endif
 			`ifdef csr_grp6 , `MHPMCOUNTER17H, `MHPMCOUNTER18H, `MHPMCOUNTER19H, `MHPMCOUNTER20H, 
 			                  `MHPMCOUNTER21H, `MHPMCOUNTER22H, `MHPMCOUNTER23H `endif
 			`ifdef csr_grp7 , `MHPMCOUNTER24H, `MHPMCOUNTER25H, `MHPMCOUNTER26H, `MHPMCOUNTER27H, 
 			 									`MHPMCOUNTER28H, `MHPMCOUNTER29H, `MHPMCOUNTER30H, `MHPMCOUNTER31H  `endif
 			`ifdef user 			
 			`ifdef csr_grp4 , `HPMCOUNTER3H, `HPMCOUNTER4H,`HPMCOUNTER5H, `HPMCOUNTER6H, `HPMCOUNTER7H, 
 			                  `HPMCOUNTER8H, `HPMCOUNTER9H  `endif
 			`ifdef csr_grp5 , `HPMCOUNTER10H, `HPMCOUNTER11H, `HPMCOUNTER12H, `HPMCOUNTER13H,
 												`HPMCOUNTER14H, `HPMCOUNTER15H, `HPMCOUNTER16H  `endif
 			`ifdef csr_grp6 , `HPMCOUNTER17H, `HPMCOUNTER18H, `HPMCOUNTER19H, `HPMCOUNTER20H, 
 												`HPMCOUNTER21H, `HPMCOUNTER22H, `HPMCOUNTER23H  `endif
 			`ifdef csr_grp7 , `HPMCOUNTER24H, `HPMCOUNTER25H, `HPMCOUNTER26H, `HPMCOUNTER27H, 
 												`HPMCOUNTER28H, `HPMCOUNTER29H, `HPMCOUNTER30H, `HPMCOUNTER31H `endif `endif 
 			: begin
				return fn_print_ifdef_miss (csr_response, exp_data, "as RV32");
  		end
  	`endif
  	`ifndef user
  		`ifdef csr_grp4   `HPMCOUNTER3H, `HPMCOUNTER4H,`HPMCOUNTER5H, `HPMCOUNTER6H, `HPMCOUNTER7H, 
 			                  `HPMCOUNTER8H, `HPMCOUNTER9H  `endif
 			`ifdef csr_grp5 , `HPMCOUNTER10H, `HPMCOUNTER11H, `HPMCOUNTER12H, `HPMCOUNTER13H,
 												`HPMCOUNTER14H, `HPMCOUNTER15H, `HPMCOUNTER16H  `endif
 			`ifdef csr_grp6 , `HPMCOUNTER17H, `HPMCOUNTER18H, `HPMCOUNTER19H, `HPMCOUNTER20H, 
 												`HPMCOUNTER21H, `HPMCOUNTER22H, `HPMCOUNTER23H  `endif
 			`ifdef csr_grp7 , `HPMCOUNTER24H, `HPMCOUNTER25H, `HPMCOUNTER26H, `HPMCOUNTER27H, 
 												`HPMCOUNTER28H, `HPMCOUNTER29H, `HPMCOUNTER30H, `HPMCOUNTER31H `endif
 			: begin
  			return fn_print_ifdef_miss (csr_response, exp_data, "user");
  		end
  	`endif	
  	endcase                                   
  endfunction
`ifdef csr_grp4
	//(*doc = "func : the function checks the response of the CSRs against expected data, while \
	//         taking grp4 size value into consideration"*)
  function Action fn_print_csr_grp4_case(CSRResponse csr_response , Bit#(XLEN) exp_data, 
                                 				String s, Integer counter_val);
		if(`counters_grp4 > counter_val) begin
			return fn_print_message(csr_response, exp_data);
		end else begin
			case(`counters_grp4)
				0 : return fn_perfmo_miss(csr_response, exp_data, strConcat("grp-4 size=0 hence ", s));
				1 : return fn_perfmo_miss(csr_response, exp_data, strConcat("grp-4 size=1 hence ", s));
				2 : return fn_perfmo_miss(csr_response, exp_data, strConcat("grp-4 size=2 hence ", s));
				3 : return fn_perfmo_miss(csr_response, exp_data, strConcat("grp-4 size=3 hence ", s));
				4 : return fn_perfmo_miss(csr_response, exp_data, strConcat("grp-4 size=4 hence ", s));
				5 : return fn_perfmo_miss(csr_response, exp_data, strConcat("grp-4 size=5 hence ", s));
				6 : return fn_perfmo_miss(csr_response, exp_data, strConcat("grp-4 size=6 hence ", s));
			endcase
		end	  
  endfunction
`endif
`ifdef csr_grp5
	//(*doc = "func : the function checks the response of the CSRs against expected data, while \
	//         taking grp5 size value into consideration"*)
  function Action fn_print_csr_grp5_case(CSRResponse csr_response , Bit#(XLEN) exp_data, 
                                 String s, Integer counter_val);
		if(`counters_grp5 > counter_val) begin
			return fn_print_message(csr_response, exp_data);
		end else begin
			case(`counters_grp5)
				0 : return fn_perfmo_miss(csr_response, exp_data, strConcat("grp-5 size=0 hence ", s));
				1 : return fn_perfmo_miss(csr_response, exp_data, strConcat("grp-5 size=1 hence ", s));
				2 : return fn_perfmo_miss(csr_response, exp_data, strConcat("grp-5 size=2 hence ", s));
				3 : return fn_perfmo_miss(csr_response, exp_data, strConcat("grp-5 size=3 hence ", s));
				4 : return fn_perfmo_miss(csr_response, exp_data, strConcat("grp-5 size=4 hence ", s));
				5 : return fn_perfmo_miss(csr_response, exp_data, strConcat("grp-5 size=5 hence ", s));
				6 : return fn_perfmo_miss(csr_response, exp_data, strConcat("grp-5 size=6 hence ", s));
			endcase
		end	  
  endfunction
`endif
`ifdef csr_grp6
	//(*doc = "func : the function checks the response of the CSRs against expected data, while \
	//         taking grp6 size value into consideration"*)
  function Action fn_print_csr_grp6_case(CSRResponse csr_response , Bit#(XLEN) exp_data, 
                                 String s, Integer counter_val);
		if(`counters_grp6 > counter_val) begin
			return fn_print_message(csr_response, exp_data);
		end else begin
			case(`counters_grp6)
				0 : return fn_perfmo_miss(csr_response, exp_data, strConcat("grp-6 size=0 hence ", s));
				1 : return fn_perfmo_miss(csr_response, exp_data, strConcat("grp-6 size=1 hence ", s));
				2 : return fn_perfmo_miss(csr_response, exp_data, strConcat("grp-6 size=2 hence ", s));
				3 : return fn_perfmo_miss(csr_response, exp_data, strConcat("grp-6 size=3 hence ", s));
				4 : return fn_perfmo_miss(csr_response, exp_data, strConcat("grp-6 size=4 hence ", s));
				5 : return fn_perfmo_miss(csr_response, exp_data, strConcat("grp-6 size=5 hence ", s));
				6 : return fn_perfmo_miss(csr_response, exp_data, strConcat("grp-6 size=6 hence ", s));
			endcase
		end	  
  endfunction
`endif
`ifdef csr_grp7
	//(*doc = "func : the function checks the response of the CSRs against expected data, while \
	//         taking grp7 size value into consideration"*)  
  function Action fn_print_csr_grp7_case(CSRResponse csr_response , Bit#(XLEN) exp_data, 
                                 String s, Integer counter_val);
		if(`counters_grp7 > counter_val) begin
			return fn_print_message(csr_response, exp_data);
		end else begin
			case(`counters_grp7)
				0 : return fn_perfmo_miss(csr_response, exp_data, strConcat("grp-7 size=0 hence ", s));
				1 : return fn_perfmo_miss(csr_response, exp_data, strConcat("grp-7 size=1 hence ", s));
				2 : return fn_perfmo_miss(csr_response, exp_data, strConcat("grp-7 size=2 hence ", s));
				3 : return fn_perfmo_miss(csr_response, exp_data, strConcat("grp-7 size=3 hence ", s));
				4 : return fn_perfmo_miss(csr_response, exp_data, strConcat("grp-7 size=4 hence ", s));
				5 : return fn_perfmo_miss(csr_response, exp_data, strConcat("grp-7 size=5 hence ", s));
				6 : return fn_perfmo_miss(csr_response, exp_data, strConcat("grp-7 size=6 hence ", s));
				7 : return fn_perfmo_miss(csr_response, exp_data, strConcat("grp-7 size=7 hence ", s));
			endcase
		end	  
  endfunction
`endif
	//(*doc = "func: function checks for hit in csr_response and the check between expected data and \
	//               response data, prints the message then"*)
	function Action fn_print_message (CSRResponse csr_response , Bit#(XLEN) exp_data);
  	if(!(csr_response.hit)) begin
  		$display("NOT-HIT,hit miss error");
  	end else begin
  		if(csr_response.data == exp_data) begin
  			$display("SUCCESS, response matched the expected data: %h", exp_data);
  		end else begin
  			$display("FAIL, response : %h while expected data: %h", csr_response.data, exp_data);
  		end
  	end
  endfunction
  //(*doc = "func : the function prints the message of a definition-miss or direcitve defined as \
  //         false, whihc might be causing a CSR to be undefined"*)
  function Action fn_print_ifdef_miss (CSRResponse csr_response , Bit#(XLEN) exp_data, 
                                    String ifdef_val);
                                   
		if(csr_response.hit) begin
  		$display("ERROR, hit : %b, exp_data : %h, csr_response : %h", 
  		             csr_response.hit, exp_data, csr_response.data);
  	end else begin
  		$display(ifdef_val," is not defined hence the register does not exist");	
  	end  			         
  endfunction
`ifdef perfmonitors
	//(*doc = "func : the function prints the message of counters size being less, there by causing\
	//         no operations onto the CSR requested"*)
  function Action fn_perfmo_miss(CSRResponse csr_response , Bit#(XLEN) exp_data, String ifdef_val);
 		if(!csr_response.hit) begin
  		$display("ERROR, hit : %b, exp_data : %h, csr_response : %h", 
  		             csr_response.hit, exp_data, csr_response.data);
  	end else begin
  		$display(ifdef_val," is not defined hence the register does not exist");	
  	end
  endfunction
`endif
	(*doc = "module : the testbench module, which tests the last 4 CSR groups. the module performs\
	         two types of tests, firstly a skeleton test to verify the regular read-write CSR access\
	         on all the registers, followed by testing whether the counters really increment or not"*)
	module mk_tb_csr_grp_4_5_6_7_daisy(Empty);
		
		//module instantiation
		Ifc_csr_daisy mk_test_module <- mk_csr_daisy;
		//common registers accross the FSMs
		(*doc = "reg : a register to count the number of CSRS tested"*)
		Reg#(Bit#(10)) rg_count <- mkReg(0);
		(*doc = "reg : a register to hold the request structure to be applied"*)
		Reg#(CSRReq) rg_req <- mkReg(CSRReq{csr_address : `MHPMCOUNTER3, writedata : 0, funct3 : 0});
		(*doc = "reg : a register to hold the address of current CSR being tested"*)
  	Reg#(Bit#(12)) rg_address <- mkReg(`MHPMCOUNTER3); 
  	(*doc = "reg : a register to hold the address of next CSR to be tested"*) 
  	Reg#(Bit#(12)) rg_next_address <- mkReg(0); 
  	(*doc = "reg : a register to hold the the expected data from the CSR read operation"*)
  	Reg#(Bit#(XLEN)) rg_exp_data <- mkReg(0);
  	(*doc = "reg : a register to hold the actual response from the CSRs"*)
  	Reg#(CSRResponse) rg_csr_response <- mkReg(CSRResponse{hit : False, data : 0});
  	//(*doc = "reg : a vector to hold the values stored in MHPMEVENT registers in all the groups"*)
  	Vector#(`counters_size, Reg#(Bit#(XLEN))) v_mhpmevent <- replicateM(mkReg(0));
  	//(*doc = "reg : a vector to hold the values stored in MHPMCOUNTER registers in all the groups"*)
  	Vector#(`counters_size, Reg#(Bit#(64))) v_mhpmcounter <- replicateM(mkReg(0));
  	(*doc = "reg : a register to initiate testing of registers, becomes false once testing starts"*)
  	Reg#(Bool) rg_start <- mkReg(True);
  	(*doc = "reg : a register used for writing 'for' loops in an FSM"*) 
  	Reg#(int) i <- mkRegU;
//-------------------------------basic FSM to access the CSRS---------------------------------------
		//(*doc = "note : the stmt_form_data sequence forms the request and updates the rg_req,\
		//         gets the next address of register to be tested, all based on current address in\
		//         rg_address"*)
		Stmt stmt_form_data = 
		seq
			action
  			Tuple2#(CSRReq, Bit#(XLEN)) req_resp = fn_req_resp_f3_1(rg_address);
  			rg_req <= tpl_1(req_resp);
  			rg_exp_data <= tpl_2(req_resp);
  			rg_next_address <= tpl_2(fn_addr_to_str_next_addr(rg_address));
  		endaction
		endseq;
		
	`ifdef csr_grp4
		//(*doc = "the stmt_access_grp4 performs the CSR request operations twice and captures the \
		//         response from the csr_daisy file. For grp-4 the request to write and read the CSR\
		//         happen with delay of 3 clock cycles"*)
		Stmt stmt_access_grp4 = 
		seq
			action
  			String str_address = tpl_1(fn_addr_to_str_next_addr(rg_address));
  			$write(strConcat(str_address, " :"));
  			mk_test_module.ma_core_req(rg_req);
  		endaction
			delay(2);
  		rg_csr_response <= mk_test_module.mv_resp_to_core;
  		mk_test_module.ma_core_req(rg_req);
  		delay(2);
  		rg_csr_response <= mk_test_module.mv_resp_to_core;
		endseq;
	`endif
	
	`ifdef csr_grp5
		//(*doc = "the stmt_access_grp5 performs the CSR request operations twice and captures the \
		//         response from the csr_daisy file. For grp-5 the request to write and read the CSR\
		//         happen with delay of 4 clock cycles"*)
		Stmt stmt_access_grp5 = 
		seq
			action
  			String str_address = tpl_1(fn_addr_to_str_next_addr(rg_address));
  			$write(strConcat(str_address, " :"));
  			mk_test_module.ma_core_req(rg_req);
  		endaction
			delay(3);
  		rg_csr_response <= mk_test_module.mv_resp_to_core;
  		mk_test_module.ma_core_req(rg_req);
  		delay(3);
  		rg_csr_response <= mk_test_module.mv_resp_to_core;
		endseq;
	`endif
	
	`ifdef csr_grp6
		//(*doc = "the stmt_access_grp6 performs the CSR request operations twice and captures the \
		//         response from the csr_daisy file. For grp-6 the request to write and read the CSR\
		//         happen with delay of 5 clock cycles"*)
		Stmt stmt_access_grp6 = 
		seq
			action
  			String str_address = tpl_1(fn_addr_to_str_next_addr(rg_address));
  			$write(strConcat(str_address, " :"));
  			mk_test_module.ma_core_req(rg_req);
  		endaction
			delay(4);
  		rg_csr_response <= mk_test_module.mv_resp_to_core;
  		mk_test_module.ma_core_req(rg_req);
  		delay(4);
  		rg_csr_response <= mk_test_module.mv_resp_to_core;
		endseq;
	`endif
	
	`ifdef csr_grp7
		//(*doc = "the stmt_access_grp7 performs the CSR request operations twice and captures the \
		//         response from the csr_daisy file. For grp-7 the request to write and read the CSR\
		//         happen with delay of 6 clock cycles"*)
		Stmt stmt_access_grp7 = 
		seq
			action
  			String str_address = tpl_1(fn_addr_to_str_next_addr(rg_address));
  			$write(strConcat(str_address, " :"));
  			mk_test_module.ma_core_req(rg_req);
  		endaction
			delay(5);
  		rg_csr_response <= mk_test_module.mv_resp_to_core;
  		mk_test_module.ma_core_req(rg_req);
  		delay(5);
  		rg_csr_response <= mk_test_module.mv_resp_to_core;
		endseq;
	`endif 
		FSM fsm_form_data <- mkFSM(stmt_form_data);
	`ifdef csr_grp4
		FSM fsm_access_grp4 <- mkFSM(stmt_access_grp4);
	`endif
	`ifdef csr_grp5
		FSM fsm_access_grp5 <- mkFSM(stmt_access_grp5);
	`endif
	`ifdef csr_grp6
		FSM fsm_access_grp6 <- mkFSM(stmt_access_grp6);
	`endif
	`ifdef csr_grp7
		FSM fsm_access_grp7 <- mkFSM(stmt_access_grp7);
	`endif 	
//-------------------------------basic FSM to perform skeleton tests--------------------------------
		//(*doc = "note : the skeleton testing of CSRS is performed as a state machine of sequence,\
		//         1. form the request, expected data and next address to be tested using current \
		//             address to be tested\
		//         2. make a request and capture the response after required clock cycles\
		//         3. repeat the above step once again to read the expected data and update the \
		//              response captured\
		//         4. check the response, print appropriate message, assign the next address to\
		//            be tested as the current address.\
		//         5. call the same FSM once again to test next register in the group.\
		//         6. if all registers in a group are finished (checked using rg_count), update the\
		//            current address with the address of first register in the next group and call the\
		//            testing FSM of the next group."*)
	`ifdef csr_grp4
		//(*doc = "note : stmt_grp4_skeleton_f3_1 performs skeleton testing of a single grp-4 register"*)
  	Stmt stmt_grp4_skeleton_f3_1 = 
  	seq
  		fsm_form_data.start;
  		fsm_form_data.waitTillDone;
  		fsm_access_grp4.start;
  		fsm_access_grp4.waitTillDone;
  		fn_check_response(rg_csr_response, rg_exp_data, rg_address);
  	`ifdef csr_grp5
  		action
  			if(rg_count == 36) begin
  				rg_address <= `MHPMCOUNTER10;
  			end else begin
  				rg_address <= rg_next_address;
  			end
  		endaction
  	`else
  		rg_address <= rg_next_address;
  	`endif
  	endseq;
  `endif
  
  `ifdef csr_grp5
  	//(*doc = "note : stmt_grp5_skeleton_f3_1 performs skeleton testing of a single grp-5 register"*)
  	Stmt stmt_grp5_skeleton_f3_1 = 
  	seq
  		fsm_form_data.start;
  		fsm_form_data.waitTillDone;
  		fsm_access_grp5.start;
  		fsm_access_grp5.waitTillDone;
  		fn_check_response(rg_csr_response, rg_exp_data, rg_address);
  	`ifdef csr_grp6
  		action
  			if(rg_count == 72) begin
  				rg_address <= `MHPMCOUNTER17;
  			end else begin
  				rg_address <= rg_next_address;
  			end
  		endaction
  	`else
  		rg_address <= rg_next_address;
  	`endif
  	endseq;
  `endif
  
  `ifdef csr_grp6
  	//(*doc = "note : stmt_grp6_skeleton_f3_1 performs skeleton testing of a single grp-6 register"*)
  	Stmt stmt_grp6_skeleton_f3_1 = 
  	seq
  		fsm_form_data.start;
  		fsm_form_data.waitTillDone;
  		fsm_access_grp6.start;
  		fsm_access_grp6.waitTillDone;
  		fn_check_response(rg_csr_response, rg_exp_data, rg_address);
  	`ifdef csr_grp7
  		action
  			if(rg_count == 108) begin
  				rg_address <= `MHPMCOUNTER24;
  			end else begin
  				rg_address <= rg_next_address;
  			end
  		endaction
  	`else
  		rg_address <= rg_next_address;
  	`endif
  	endseq;
  `endif
  
  `ifdef csr_grp7
  	//(*doc = "note : stmt_grp7_skeleton_f3_1 performs skeleton testing of a single grp-7 register"*)
  	Stmt stmt_grp7_skeleton_f3_1 = 
  	seq
  		fsm_form_data.start;
  		fsm_form_data.waitTillDone;
  		fsm_access_grp7.start;
  		fsm_access_grp7.waitTillDone;
  		fn_check_response(rg_csr_response, rg_exp_data, rg_address);
  		rg_address <= rg_next_address;
  	endseq;
  `endif 
  `ifdef csr_grp4
  	FSM fsm_grp4_skeleton_f3_1 <- mkFSM(stmt_grp4_skeleton_f3_1);
  `endif
  `ifdef csr_grp5
  	FSM fsm_grp5_skeleton_f3_1 <- mkFSM(stmt_grp5_skeleton_f3_1);
  `endif
  `ifdef csr_grp6
  	FSM fsm_grp6_skeleton_f3_1 <- mkFSM(stmt_grp6_skeleton_f3_1);
  `endif
  `ifdef csr_grp7
  	FSM fsm_grp7_skeleton_f3_1 <- mkFSM(stmt_grp7_skeleton_f3_1);
  `endif 	
//-------------------------------------FSM to setup the counters------------------------------------
		//(*doc = "the stmt_setup_counters clears all the counters and sets them to 0, clears the \
		//         mcountinhibit register to allow counting, sets up the mhpmevents to cause increments\
		//         in the counters only when the required event is triggered via ma_events_grp4/5/6/7 "*)
		Stmt stmt_setup_counters = 
		seq
			$display("\n=======================testing counters=======================\n");
			$display("clearing mcountinhibit bits to allow counter increments");	
			mk_test_module.ma_core_req(CSRReq{csr_address : `MCOUNTINHIBIT, writedata: 0, funct3 : 1});
		`ifdef debug
			$display("clearing dcsr (dcsr_stop_count) to allow counters to increment");
			mk_test_module.ma_core_req(CSRReq{csr_address : `DCSR, writedata: 0, funct3 : 1});
		`endif
			$display("clearing all counters and setting up event registers");
		`ifdef csr_grp4
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMEVENT3, writedata: 1, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMEVENT4, writedata: 2, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMEVENT5, writedata: 3, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMEVENT6, writedata: 4, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMEVENT7, writedata: 5, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMEVENT8, writedata: 6, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMEVENT9, writedata: 7, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER3, writedata: 0, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER4, writedata: 0, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER5, writedata: 0, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER6, writedata: 0, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER7, writedata: 0, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER8, writedata: 0, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER9, writedata: 0, funct3 : 1});
			`ifdef RV32
				$display("setting higher 32-bits of the counters as 32'd4 in grp4");
				mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER3H, writedata: 32'd4, 
																	        funct3 : 1});
				mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER4H, writedata: 32'd4, 
				                                  funct3 : 1});
				mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER5H, writedata: 32'd4, 
				                                  funct3 : 1});
				mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER6H, writedata: 32'd4, 
				                                  funct3 : 1});
				mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER7H, writedata: 32'd4, 
				                                  funct3 : 1});
				mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER8H, writedata: 32'd4, 
				                                  funct3 : 1});
				mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER9H, writedata: 32'd4, 
				                                  funct3 : 1});
			`endif
		`endif
		`ifdef csr_grp5
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMEVENT10, writedata: 1, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMEVENT11, writedata: 2, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMEVENT12, writedata: 3, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMEVENT13, writedata: 4, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMEVENT14, writedata: 5, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMEVENT15, writedata: 6, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMEVENT16, writedata: 7, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER10, writedata: 0, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER11, writedata: 0, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER12, writedata: 0, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER13, writedata: 0, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER14, writedata: 0, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER15, writedata: 0, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER16, writedata: 0, funct3 : 1});
			`ifdef RV32
				$display("setting higher 32-bits of the counters as 32'd5 in grp5");
				mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER10H, writedata: 32'd5, 
				                                  funct3 : 1});
				mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER11H, writedata: 32'd5, 
				                                  funct3 : 1});
				mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER12H, writedata: 32'd5, 
				                                  funct3 : 1});
				mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER13H, writedata: 32'd5, 
				                                  funct3 : 1});
				mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER14H, writedata: 32'd5, 
				                                  funct3 : 1});
				mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER15H, writedata: 32'd5, 
				                                  funct3 : 1});
				mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER16H, writedata: 32'd5, 
				                                  funct3 : 1});
			`endif
		`endif
		`ifdef csr_grp6
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMEVENT17, writedata: 1, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMEVENT18, writedata: 2, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMEVENT19, writedata: 3, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMEVENT20, writedata: 4, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMEVENT21, writedata: 5, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMEVENT22, writedata: 6, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMEVENT23, writedata: 7, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER17, writedata: 0, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER18, writedata: 0, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER19, writedata: 0, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER20, writedata: 0, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER21, writedata: 0, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER22, writedata: 0, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER23, writedata: 0, funct3 : 1});
			`ifdef RV32
				$display("setting higher 32-bits of the counters as 32'd6 in grp6");
				mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER17H, writedata: 32'd6, 
				                                  funct3 : 1});
				mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER18H, writedata: 32'd6, 
				                                  funct3 : 1});
				mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER19H, writedata: 32'd6, 
				                                  funct3 : 1});
				mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER20H, writedata: 32'd6, 
				                                  funct3 : 1});
				mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER21H, writedata: 32'd6, 
				                                  funct3 : 1});
				mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER22H, writedata: 32'd6, 
				                                  funct3 : 1});
				mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER23H, writedata: 32'd6, 
				                                  funct3 : 1});
			`endif
		`endif
		`ifdef csr_grp7
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMEVENT24, writedata: 1, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMEVENT25, writedata: 2, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMEVENT26, writedata: 3, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMEVENT27, writedata: 4, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMEVENT28, writedata: 5, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMEVENT29, writedata: 6, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMEVENT30, writedata: 7, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMEVENT31, writedata: 8, funct3 : 1});			
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER24, writedata: 0, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER25, writedata: 0, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER26, writedata: 0, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER27, writedata: 0, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER28, writedata: 0, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER29, writedata: 0, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER30, writedata: 0, funct3 : 1});
			mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER31, writedata: 0, funct3 : 1});
			`ifdef RV32
				$display("setting higher 32-bits of the counters as 32'd7 in grp7");
				mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER24H, writedata: 32'd7, 
				                                  funct3 : 1});
				mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER25H, writedata: 32'd7, 
				                                  funct3 : 1});
				mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER26H, writedata: 32'd7, 
				                                  funct3 : 1});
				mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER27H, writedata: 32'd7, 
				                                  funct3 : 1});
				mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER28H, writedata: 32'd7, 
				                                  funct3 : 1});
				mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER29H, writedata: 32'd7, 
				                                  funct3 : 1});
				mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER30H, writedata: 32'd7, 
				                                  funct3 : 1});
				mk_test_module.ma_core_req(CSRReq{csr_address : `MHPMCOUNTER31H, writedata: 32'd7, 
				                                  funct3 : 1});
			`endif
		`endif
		delay(10);
		endseq;
//--------------------------------------------------------------------------------------------------
//----------------------------------FSM to increment the counters-----------------------------------
		//(*doc ="note: stmt_incr_counters calls the ma_events_grp4/5/6/7 for particular number of times\
		//        as per the group i.e. call four times for grp-4, five times for grp-5..and so on.\
		//        it performs such calls for all the events described in Event_grp4/5/6/7 and the \
		//        value stored in MHPMEVENT register. All the counters are incremented and\
		//        no two counters are made to increment on the same event." *)
		Stmt stmt_incr_counters = 
		seq
			$display("incrementing counters");
			for (i <= 0; i < 4; i <= i + 1) mk_test_module.ma_events_grp4({'d0,1'b1}); 
			for (i <= 0; i < 4; i <= i + 1) mk_test_module.ma_events_grp4({'d0,2'b10}); 
			for (i <= 0; i < 4; i <= i + 1) mk_test_module.ma_events_grp4({'d0,3'b100}); 
			for (i <= 0; i < 4; i <= i + 1) mk_test_module.ma_events_grp4({'d0,4'h8}); 
			for (i <= 0; i < 4; i <= i + 1) mk_test_module.ma_events_grp4({'d0,1'b1,4'h0}); 
			for (i <= 0; i < 4; i <= i + 1) mk_test_module.ma_events_grp4({'d0,2'b10,4'h0}); 
			for (i <= 0; i < 4; i <= i + 1) mk_test_module.ma_events_grp4({'d0,3'b100,4'h0}); 
			mk_test_module.ma_events_grp4('d0); delay(1);
		`ifdef csr_grp5
			for (i <= 0; i < 5; i <= i + 1) mk_test_module.ma_events_grp5({'d0,1'b1}); delay(4);
			for (i <= 0; i < 5; i <= i + 1) mk_test_module.ma_events_grp5({'d0,2'b10}); delay(4);
			for (i <= 0; i < 5; i <= i + 1) mk_test_module.ma_events_grp5({'d0,3'b100}); delay(4);
			for (i <= 0; i < 5; i <= i + 1) mk_test_module.ma_events_grp5({'d0,4'h8}); delay(4);
			for (i <= 0; i < 5; i <= i + 1) mk_test_module.ma_events_grp5({'d0,1'b1,4'h0}); delay(4);
			for (i <= 0; i < 5; i <= i + 1) mk_test_module.ma_events_grp5({'d0,2'b10,4'h0}); delay(4);
			for (i <= 0; i < 5; i <= i + 1) mk_test_module.ma_events_grp5({'d0,3'b100,4'h0}); delay(4);
			for (i <= 0; i < 5; i <= i + 1) mk_test_module.ma_events_grp5('d0); delay(1);
		`endif
		`ifdef csr_grp6
			for (i <= 0; i < 6; i <= i + 1) mk_test_module.ma_events_grp6({'d0,1'b1}); delay(4);
			for (i <= 0; i < 6; i <= i + 1) mk_test_module.ma_events_grp6({'d0,2'b10}); delay(4);
			for (i <= 0; i < 6; i <= i + 1) mk_test_module.ma_events_grp6({'d0,3'b100}); delay(4);
			for (i <= 0; i < 6; i <= i + 1) mk_test_module.ma_events_grp6({'d0,4'h8}); delay(4);
			for (i <= 0; i < 6; i <= i + 1) mk_test_module.ma_events_grp6({'d0,1'b1,4'h0}); delay(4);
			for (i <= 0; i < 6; i <= i + 1) mk_test_module.ma_events_grp6({'d0,2'b10,4'h0}); delay(4);
			for (i <= 0; i < 6; i <= i + 1) mk_test_module.ma_events_grp6({'d0,3'b100,4'h0}); delay(4);
			mk_test_module.ma_events_grp6('d0); delay(1);
		`endif
		`ifdef csr_grp7
			for (i <= 0; i < 7; i <= i + 1) mk_test_module.ma_events_grp7({'d0,1'b1}); delay(4);
			for (i <= 0; i < 7; i <= i + 1) mk_test_module.ma_events_grp7({'d0,2'b10}); delay(4);
			for (i <= 0; i < 7; i <= i + 1) mk_test_module.ma_events_grp7({'d0,3'b100}); delay(4);
			for (i <= 0; i < 7; i <= i + 1) mk_test_module.ma_events_grp7({'d0,4'h8}); delay(4);
			for (i <= 0; i < 7; i <= i + 1) mk_test_module.ma_events_grp7({'d0,1'b1,4'h0}); delay(4);
			for (i <= 0; i < 7; i <= i + 1) mk_test_module.ma_events_grp7({'d0,2'b10,4'h0}); delay(4);
			for (i <= 0; i < 7; i <= i + 1) mk_test_module.ma_events_grp7({'d0,3'b100,4'h0}); delay(4);
			for (i <= 0; i < 7; i <= i + 1) mk_test_module.ma_events_grp7({'d0,8'h80}); delay(4);
			mk_test_module.ma_events_grp7('d0); delay(1);
		`endif
		endseq;
//--------------------------------------------------------------------------------------------------
//------------------------------FSM to test mv_counter_values---------------------------------------
		//(*doc = "note :the stmt_read_counters fetches all the values stored in MHPMEVENTS and \
		//         MHPMCOUNTERS via mv_counter_values method and prints it out"*)
		Stmt stmt_read_counters = 
		seq
			action
				let x = mk_test_module.mv_counter_values;
				writeVReg(v_mhpmevent, tpl_1(x));
				writeVReg(v_mhpmcounter, tpl_2(x));
			endaction
			for (i <= 0; i < `counters_grp4; i <= i + 1) action
				$display("MHPMEVENT[%d] : %h, MHPMCOUNTER[%d] : %h", 
				         (i + 3), v_mhpmevent[i], (i + 3), v_mhpmcounter[i]);
			endaction
			for (i <= 0; i < `counters_grp5 ; i <= i + 1) action
				$display("MHPMEVENT[%d] : %h, MHPMCOUNTER[%d] : %h", 
				         (i + 10), v_mhpmevent[(`counters_grp4 + i)], 
				         (i + 10), v_mhpmcounter[(`counters_grp4 + i)]);
			endaction
			for (i <= 0; i < `counters_grp6 ; i <= i + 1) action
				$display("MHPMEVENT[%d] : %h, MHPMCOUNTER[%d] : %h", 
				         (i + 17), v_mhpmevent[(`counters_grp4 + `counters_grp5 + i)], 
				         (i + 17), v_mhpmcounter[(`counters_grp4 + `counters_grp5 + i)]);
			endaction
			for (i <= 0; i < `counters_grp7 ; i <= i + 1) action
				$display("MHPMEVENT[%d] : %h, MHPMCOUNTER[%d] : %h", 
				         (i + 24), v_mhpmevent[(`counters_grp4 + `counters_grp5 + `counters_grp6 + i)], 
				         (i + 24), v_mhpmcounter[(`counters_grp4 + `counters_grp5 + `counters_grp6 + i)]);
			endaction
		endseq;
//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
		FSM fsm_setup_counters <- mkFSM(stmt_setup_counters);
		FSM fsm_incr_counters	<- mkFSM(stmt_incr_counters);
		FSM fsm_read_counters <-mkFSM(stmt_read_counters);
		//(*doc = "note : the stmt_test_counters performs the testing of counters using FSMS to setup,\
		//         increment and read out"*)
		Stmt stmt_test_counters = 
		seq
			fsm_setup_counters.start;
			fsm_setup_counters.waitTillDone;
			fsm_incr_counters.start;
			fsm_incr_counters.waitTillDone;
			fsm_read_counters.start;
			fsm_read_counters.waitTillDone;
			$finish;
		endseq;
		
		FSM fsm_test_counters <- mkFSM(stmt_test_counters);
		(*doc = "rule : the rule initiates the skeleton tests"*)
		rule start_testing(rg_start);
			$display("\n============skeleton testing grp4====================\n");
			fsm_grp4_skeleton_f3_1.start;
			rg_start <= False;
		endrule
		(*doc = "rule : the rule increments the rg_count on completion of testing of a register,\
  	         initiates the skeleton testing of next group upon completion of testing of current\
  	         group, initiates the testing of incrememenrs in the counters"*)
		rule fsm_loop((`ifdef csr_grp4 (fsm_grp4_skeleton_f3_1.done) `endif
  							`ifdef csr_grp5 || (fsm_grp5_skeleton_f3_1.done) `endif
  							`ifdef csr_grp6 || (fsm_grp6_skeleton_f3_1.done) `endif
  							`ifdef csr_grp7 || (fsm_grp7_skeleton_f3_1.done) `endif
  	                                ) && (!rg_start) && (rg_count < 150));
		
		`ifdef csr_grp4
  		if(rg_count < 36) begin
  			fsm_grp4_skeleton_f3_1.start;
  		end
  	`endif
  	`ifdef csr_grp5
  		if((rg_count > 36) && (rg_count < 72)) begin
  			fsm_grp5_skeleton_f3_1.start;
  		end
  	`endif
  	`ifdef csr_grp6
  		if((rg_count > 72) && (rg_count < 108)) begin
  			fsm_grp6_skeleton_f3_1.start;
  		end
  	`endif
  	`ifdef csr_grp7
  		if((rg_count > 108) && (rg_count < 149)) begin
  			fsm_grp7_skeleton_f3_1.start;
  		end 
  	`endif
  		case(rg_count)
  			`ifdef csr_grp5 36 : $display("\n============skeleton testing grp5====================\n");
  			`ifdef csr_grp6 72 : $display("\n============skeleton testing grp6====================\n");
  			`ifdef csr_grp7 108 : $display("\n============skeleton testing grp7====================\n");
  											149 : fsm_test_counters.start;
  			`else 108 : fsm_test_counters.start; `endif
  			`else 72 : fsm_test_counters.start; `endif
  			`else 36 : fsm_test_counters.start; `endif
  		endcase
  		rg_count <= rg_count + 1; 	                                
  	endrule
	endmodule
endpackage
