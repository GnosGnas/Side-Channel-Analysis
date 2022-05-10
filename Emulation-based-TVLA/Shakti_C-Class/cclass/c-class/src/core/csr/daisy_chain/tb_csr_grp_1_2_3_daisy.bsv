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

package tb_csr_grp_1_2_3_daisy;

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
			`MSTATUS : return tuple2("MSTATUS", `MEDELEG); 
			`MEDELEG : return tuple2("MEDELEG", `MIDELEG); 
			`MIDELEG : return tuple2("MIDELEG", `MIE); 
			`MIE : return tuple2("MIE", `MIP); 
			`MIP : return tuple2("MIP", `MTVEC); 
			`MTVEC : return tuple2("MTVEC", `MEPC); 
			`MEPC : return tuple2("MEPC", `MCAUSE); 
			`MCAUSE : return tuple2("MCAUSE", `MTVAL); 
			`MTVAL : return tuple2("MTVAL", `SSTATUS);
			`SSTATUS : return tuple2("SSTATUS", `SEDELEG); 
			`SEDELEG : return tuple2("SEDELEG", `SIDELEG); 
			`SIDELEG : return tuple2("SIDELEG", `SIE); 
			`SIE : return tuple2("SIE", `SIP);
			`SIP : return tuple2("SIP", `STVEC);  
			`STVEC : return tuple2("STVEC", `SEPC); 
			`SEPC : return tuple2("SEPC", `SCAUSE); 
			`SCAUSE : return tuple2("SCAUSE", `STVAL); 
			`STVAL : return tuple2("STVAL", `SATP); 
			`SATP : return tuple2("SATP", `USTATUS); 
			`USTATUS : return tuple2("USTATUS", `UIE); 
			`UIE : return tuple2("UIE", `UIP); 
			`UIP : return tuple2("UIP", `UTVEC); 
			`UTVEC : return tuple2("UTVEC", `UEPC); 
			`UEPC : return tuple2("UEPC", `UCAUSE); 
			`UCAUSE : return tuple2("UCAUSE", `UTVAL);
			`UTVAL : return tuple2("UTVAL", 000);
			//=========================================
			//grp2 
			`MISA : return tuple2("MISA", `MSCRATCH);
			`MSCRATCH : return tuple2("MSCRATCH", `SSCRATCH);
			`SSCRATCH : return tuple2("SSCRATCH", `USCRATCH);
			`USCRATCH : return tuple2("USCRATCH", `CUSTOMCNTRL);
			`CUSTOMCNTRL : return tuple2("CUSTOMCNTRL", `FFLAGS);
			`FFLAGS : return tuple2("FFLAGS", `FRM);
			`FRM : return tuple2("FRM", `FCSR);
			`FCSR : return tuple2("FCSR", `PMPCFG0);
			`PMPCFG0 : return tuple2("PMPCFG0", `PMPCFG1);
			`PMPCFG1 : return tuple2("PMPCFG1", `PMPCFG2);
			`PMPCFG2 : return tuple2("PMPCFG2", `PMPCFG3);
			`PMPCFG3 : return tuple2("PMPCFG3", `PMPADDR0);
			`PMPADDR0 : return tuple2("PMPADDR0", `PMPADDR1);
			`PMPADDR1 : return tuple2("PMPADDR1", `PMPADDR2);
			`PMPADDR2 : return tuple2("PMPADDR2", `PMPADDR3);
			`PMPADDR3 : return tuple2("PMPADDR3", `PMPADDR4);
			`PMPADDR4 : return tuple2("PMPADDR4", `PMPADDR5);
			`PMPADDR5 : return tuple2("PMPADDR5", `PMPADDR6);
			`PMPADDR6 : return tuple2("PMPADDR6", `PMPADDR7);
			`PMPADDR7 : return tuple2("PMPADDR7", `PMPADDR8);
			`PMPADDR8 : return tuple2("PMPADDR8", `PMPADDR9);
			`PMPADDR9 : return tuple2("PMPADDR9", `PMPADDR10);
			`PMPADDR10 : return tuple2("PMPADDR10", `PMPADDR11);
			`PMPADDR11 : return tuple2("PMPADDR11", `PMPADDR12);
			`PMPADDR12 : return tuple2("PMPADDR12", `PMPADDR13);
			`PMPADDR13 : return tuple2("PMPADDR13", `PMPADDR14);
			`PMPADDR14 : return tuple2("PMPADDR14", `PMPADDR15);
			`PMPADDR15 : return tuple2("PMPADDR15", 000);
			//=========================================
			//grp3
			`DCSR : return tuple2("DCSR", `DPC);
			`DPC : return tuple2("DPC", `DSCRATCH);
			`DSCRATCH : return tuple2("DSCRATCH", `DTVEC);
			`DTVEC : return tuple2("DTVEC", `DENABLE);
			`DENABLE : return tuple2("DENABLE", `TSELECT);
			`TSELECT : return tuple2("TSELECT", `TDATA1);
			`TDATA1	: return tuple2("TDATA1", `TDATA2);
			`TDATA2 : return tuple2("TDATA2", `TDATA3);
			`TDATA3 : return tuple2("TDATA3", `TINFO);
			`TINFO : return tuple2("TINFO", `TMCONTEXT);
			`TMCONTEXT : return tuple2("TMCONTEXT", `TSCONTEXT);
			`TSCONTEXT : return tuple2("TSCONTEXT", `MVENDROID);
			`MVENDROID : return tuple2("MVENDROID", `MARCHID);
			`MARCHID : return tuple2("MARCHID", `MIMPID);
			`MIMPID : return tuple2("MIMPID", `MHARTID);
			`MHARTID : return tuple2("MHARTID", `MCYCLE);
			`MCYCLE : return tuple2("MCYCLE", `MTIME);
			`MTIME : return tuple2("MTIME", `MINSTRET);
			`MINSTRET : return tuple2("MINSTRET", `MCYCLEH);
			`MCYCLEH : return tuple2("MCYCLEH", `MTIMEH);
			`MTIMEH : return tuple2("MTIMEH", `MINSTRETH);
			`MINSTRETH : return tuple2("MINSTRETH", `MCOUNTEREN);
			`MCOUNTEREN : return tuple2("MCOUNTEREN", `MCOUNTINHIBIT);
			`MCOUNTINHIBIT : return tuple2("MCOUNTINHIBIT", `SCOUNTEREN);
			`SCOUNTEREN : return tuple2("SCOUNTEREN", `CYCLE);
			`CYCLE : return tuple2("CYCLE", `TIME);
			`TIME : return tuple2("TIME", `INSTRET);
			`INSTRET : return tuple2("INSTRET", `CYCLEH);
			`CYCLEH : return tuple2("CYCLEH", `TIMEH);
			`TIMEH : return tuple2("TIMEH", `INSTRETH);
			`INSTRETH : return tuple2("INSTRETH", 000);
			//=========================================
  		default : return tuple2("none", 000);
  	endcase
  endfunction
  
  //(*doc = "func : the function returns request structure containing the testdata to be written \
  //         onto the CSR and the expected data while reading the CSR, based on the address of the \
  //         CSR given"*)
  function Tuple2#(CSRReq, Bit#(XLEN)) fn_req_resp_f3_1 (Bit#(12) address);
  	let maxIndex = valueOf(XLEN);
		let paddr = valueOf(`paddr);
		let vaddr = valueOf(`vaddr);
  	Bit#(XLEN) testdata = 0;
  	Bit#(XLEN) exp_data = 0;
  	case(address) //testdata formation
  		`MSTATUS : begin
				testdata[3] = 1'b1; //rg_mie gets written
  			testdata[7] = 1'b1; //rg_mpie gets written
  			testdata[17] = 1'b1; //rg_mprv gets written
   			testdata[14:13] = 2'b11; //Fs gets written
   		`ifdef usertraps
   			testdata[0] = 1'b1; //rg_uie gets written 
        testdata[4] = 1'b1; //rg_upie gets written
   		`endif
   		`ifdef supervisor
   			testdata[1] = 1'b1; //sie gets written
        testdata[5] = 1'b1; //spie gets written           
        testdata[8] = 1'b1; //spp gets written 
        testdata[18]= 1'b1; //sum gets written 
        testdata[19]= 1'b1; //mxr gets written 
        testdata[20]= 1'b1; //tvm gets written 
        testdata[21]= 1'b1; //tw gets written 
        testdata[22]= 1'b1; //tsr gets written
      `endif
      end
			`MEDELEG : begin 
				testdata[15] = 1'b1;   // rg_medleg_u1 gets written over
  			testdata[13:12] = 2'b11; //rg_medleg_m2 gets written over
  			testdata[9:0] = truncate({16'hffff}); //rg_medleg_l10 gets written over
			end
			`MIDELEG : begin
				testdata[11:0] = 12'hfff;
			end
			`MIE : begin
				testdata[3] = 1'b1; //rg_msie gets written over
        testdata[7] = 1'b1; //rg_mtie gets written over
        testdata[11] = 1'b1; // rg_meie gets written over
			`ifdef supervisor
				testdata[9] = 1'b1;  //seie gets written over
        testdata[1] = 1'b1;  //ssie gets written over
        testdata[5] = 1'b1;  //stie gets written over
			`endif
			`ifdef usertraps
				testdata[8] = 1'b1; //rg_ueie gets written over 
        testdata[0] = 1'b1; //rg_usie gets written over 
        testdata[4] = 1'b1; //rg_utie gets written over 
			`endif
			end
			`MIP : begin
			`ifdef usertraps
				testdata[0] = 1'b1; //rg_usip gets written over
        testdata[4] = 1'b1; //rg_utip gets written over
        testdata[8] = 1'b1; //soft_ueip gets written over
			`endif
			`ifdef supervisor
				testdata[1] = 1'b1; //ssip gets written over
        testdata[5] = 1'b1; //stip gets written over
        testdata[9] = 1'b1; //soft_seip gets written over
			`endif 
			end //requires multicycle testing TODO
			`MTVEC : begin
				testdata[paddr-1 :2] = {28'hfffffff, 2'b11}; 
 				testdata[1:0] = 2'b01;
 			end
 			`SSTATUS : begin 
				testdata[14 : 13] = 2'b11; //fs gets written over  
        testdata[1] = 1'b1; //sie gets written over 
        testdata[5] = 1'b1; //spie gets written over 
        testdata[8] = 1'b1;  //spp gets written over 
        testdata[18] = 1'b1; //sum gets written over 
        testdata[19] = 1'b1; //mxr gets written over 
        testdata[20] = 1'b1; //tvm gets written over 
        testdata[21] = 1'b1; //tw gets written over 
        testdata[22] = 1'b1; //tsr gets written over 
      `ifdef usertraps 
        testdata[0] = 1'b1; //rg_uie gets written over 
        testdata[4] = 1'b1; //rg_upie gets written over 
      `endif
     	end
			`SEDELEG : begin
				testdata[15] = 1'b1; //rg_sedeleg_u1 gets written over
        testdata[13 : 12] = 2'b11; //rg_sedeleg_m2 gets written over
        testdata[8 : 0] = 9'b111111111; //rg_sedeleg_l9 gets written over
				end
			`SIDELEG : begin 
				testdata = truncate({`bit_64_max});
			end
			`SIE : begin
				testdata[9] = 1'b1; //seie gets written over 
        testdata[1] = 1'b1; //ssie gets written over 
        testdata[5] = 1'b1; //stie gets written over 
  		`ifdef usertraps
        testdata[8] = 1'b1; //rg_ueie gets written over 
        testdata[0] = 1'b1; //rg_usie gets written over
        testdata[4] = 1'b1; //rg_utie gets written over
      `endif
      end
      `SIP : begin
     	`ifdef usertraps
      	testdata[0] = 1'b1; //rg_usip gets written over
        testdata[8] = 1'b1; //soft_ueip gets written over 
     	`endif
     		testdata[1] = 1'b1; //ssip gets written over 
      end //TODO - multicycle check
			`STVEC : begin 
				testdata[63:2] = truncate({`bit_64_max}); //rg_stvec gets written over
  			testdata[1:0] = 2'b01; //rg_smode gets written over
			end
			`SATP : begin 
			`ifdef RV64
      	testdata = truncate({`bit_64_max});
       	testdata[63:60] = 4'h8;
      `else
        testdata = 32'hffffffff;
      `endif
			end
    	`USTATUS : begin
				testdata[0] = 1'b1; //rg_uie gets written over
  			testdata[4] = 1'b1; //rg_upie gets written over
			end
			`UIE : begin
				//the check assumes rg_mideleg is enabled.
				//assumes meie, seie, mtie,stie, msie, ssie are updated to one.(if MSU privileges)
				testdata[0] = 1'b1; //rg_usie gets written over
        testdata[4] = 1'b1; //rg_utie gets written over
        testdata[8] = 1'b1; //rg_ueie gets written over
			end
			`UIP : begin
				testdata[0] = 1'b1; //rg_usip gets written over
        testdata[8] = 1'b1; //soft_ueip gets written over
			end //TODO-multicycle check.
			`UTVEC : begin
				testdata = truncate({`bit_64_max});
				testdata[1:0] = 2'b01;
			end
    	`MISA : begin 
  		`ifdef atomic
  			testdata[0] = 1'b1; //misa_a
  		`endif
  		`ifdef compressed
  			testdata[2] = 1'b1; //misa_c
  		`endif
  		`ifdef dpfpu
  			testdata[3] = 1'b1; //misa_d
  		`endif
  		`ifdef spfpu
  			testdata[5] = 1'b1; //misa_f
  		`endif
  			testdata[8] = 1'b1; //misa_i
  		`ifdef muldiv
  			testdata[12] = 1'b1; //misa_m
  		`endif
  		`ifdef usertraps
  			testdata[13] = 1'b1; //misa_n
  		`endif
  		`ifdef supervisor
  			testdata[18] = 1'b1; //misa_s
  		`endif
  		`ifdef user
  			testdata[20] = 1'b1;//misa_u
  		`endif
  		end
  		`PMPCFG0, `PMPCFG1, `PMPCFG2, `PMPCFG3 : testdata = truncate({64'h7f7f7f7f7f7f7f7f});
  		  		
 			`MEPC, `MCAUSE, `MTVAL, `MSCRATCH, `CUSTOMCNTRL, `FFLAGS, `FRM, `FCSR, `MVENDROID, `MARCHID,
 			`MIMPID, `MHARTID, `MCYCLE, `MTIME, `MINSTRET, `MCOUNTEREN, `MCOUNTINHIBIT, `MCYCLEH, `MTIMEH,
 			 
      `SEPC, `SCAUSE, `STVAL, `SSCRATCH,
      
 			`UEPC, `UCAUSE, `UTVAL, `USCRATCH, 
 			
 			`PMPADDR0, `PMPADDR1, `PMPADDR2, `PMPADDR3, `PMPADDR4, `PMPADDR5, `PMPADDR6, `PMPADDR7,
 			`PMPADDR8, `PMPADDR9, `PMPADDR10, `PMPADDR11, `PMPADDR12, `PMPADDR13 ,`PMPADDR14, `PMPADDR15,
 			
 			`DCSR, `DPC, `DTVEC, `DSCRATCH, `DENABLE,
 			
			`TSELECT, `TDATA1, `TDATA2, `TDATA3, `TINFO, `TMCONTEXT, `TSCONTEXT
 			: testdata = truncate({`bit_64_max});
 			//read only registers
 			`CYCLE, `INSTRET, `TIME , `CYCLEH, `INSTRETH, `TIMEH
 			: testdata = truncate({64'h10101111});
 			default : testdata = 0;
  	endcase
  	
  	case(address) //exp_data formation
			`MSTATUS : begin
      `ifdef usertraps
       	`ifdef supervisor
       		`ifdef RV64
   			 		exp_data = {1'b1, 27'd0, 2'b10, 2'b10, 9'd0, 6'b111111, 2'b00, 2'b11, 
   						          2'b00, //rg_mpp
   						          2'b00, 2'b11, 1'b0, 3'b111, 1'b0, 2'b11}; 
   				`endif
   				`ifdef RV32
   				 	exp_data = {'d0, 1'b1, 8'd0,6'b111111, 2'b00, 2'b11,
   							        2'b00, //rg_mpp
   							        2'b00, 2'b11, 1'b0, 3'b111, 1'b0, 2'b11};
   				`endif
       	`else
       		`ifdef RV64
   					exp_data = {1'b1, 27'd0, 2'b10, 2'b10, 9'd0, 5'd0, 1'b1, 2'b00, 2'b11,
   						          2'b00,2'b00, //rg_mpp 
   						          3'd0, 1'b1, 2'b00, 1'b1, 2'b00, 1'b1}; 
   				`endif
   				`ifdef RV32
   					exp_data = {'d0, 1'b1, 8'd0, 5'd0, 1'b1, 2'b00, 2'b11,
   							        2'b00, //rg_mpp
   							        3'd0, 1'b1, 2'b00, 2'b11, 2'b00, 1'b1};
   				`endif
       	`endif
      `else
      	`ifdef supervisor //TODO
       	`else
       		`ifdef RV64
   					Bit#(XLEN) exp_data = {1'b1, 27'd0, 2'b10, 2'b10, 9'd0, 5'd0, 1'b1, 2'b00, 2'b11, 
   						                     2'b00, //rg_mpp
   						                     3'd0, 1'b1, 3'd0, 1'b1, 3'd0}; 
   				`endif
   				`ifdef RV32
   					Bit#(XLEN) exp_data = {'d0, 1'b1, 8'd0, 5'd0, 1'b1, 2'b00, 2'b11,
   							                   2'b00, //rg_mpp
   							                   3'd0, 1'b1, 3'd0, 1'b1, 3'd0};
   				`endif
       	`endif
      `endif 
			end
		`ifdef non_m_traps
			`MEDELEG : exp_data = {'d0, 1'b1, 1'd0, 2'b11, 2'd0, 8'hff, 2'b11};
			`MIDELEG : exp_data = {'d0, 12'hfff}; 
		`endif
			`MIE, `MIP : begin
			`ifdef supervisor
				`ifdef usertraps
					exp_data ={'d0, 12'hbbb};
				`else
					exp_data ={'d0,12'haaa};
				`endif
			`else
				`ifdef usertraps
					exp_data ={'d0,12'h999};
				`else
					exp_data ={'d0,12'h888};
				`endif
			`endif
			end //MIP - requires multicycle testing 
			`MTVEC : exp_data = signExtend(testdata); 
			`MEPC : exp_data = truncate({64'hfffffffffffffffe}); 
			`MCAUSE : exp_data = {1'b1,'d0,5'b11111}; 
			`MTVAL : exp_data = truncate({`bit_64_max});
		`ifdef supervisor
			`SSTATUS : begin 
      `ifdef usertraps
      	`ifdef RV64
        	exp_data = {1'b1, 29'd0, 2'b10, 12'd0, 2'b11, 1'd0, 2'b00, 2'b11, 4'd0, 1'b1, 2'd0, 
        	            2'b11, 2'd0, 2'b11};
        `else
        	exp_data = {'d0, 1'b1, 11'd0, 2'b11, 1'b0, 2'b00, 2'b11, 4'd0, 2'b11, 1'd0, 2'b11, 1'd0, 
        	            2'b00, 12'b11}
       	`endif
      `endif
			end
			`ifdef usertraps
				`SEDELEG : exp_data = {'d0, 1'b1, 1'b0, 2'b11, 3'd0, 9'b111111111}; 
				`SIDELEG : exp_data = {'d0, 12'hfff, 2'b11};
			`endif
			`SIE, `SIP : begin
      `ifdef usertraps
      	exp_data = {'d0, 12'h333};
      `else
      	exp_data = {'d0. 12'h222};
      `endif //SIP has a seperate test fsm 
			end
			`STVEC : exp_data = signExtend({testdata[63:0]});
			`SEPC : exp_data = 64'hfffffffffffffffe;
			`SCAUSE : exp_data = {1'b1, 'd0, 5'b11111};
			`STVAL : exp_data = `bit_64_max; 
			`SATP : begin 
			`ifdef RV64
        exp_data = {testdata[63:60], 'd0, 8'hff, 1'b1, 44'hfffffffffff};
      `else
        exp_data = {1'b1, 'd0, 8'hff, 1'b1, 20'hfffff, 2'b11};
      `endif
			end
		`endif
		`ifdef usertraps
			`USTATUS : begin
  		`ifdef RV64
				exp_data = {1'b1, 29'd0, 2'b10, 17'd0, 2'b11, 4'd0, 1'b1, 3'd0, 1'b1, 3'd0, 1'b1};
			`else
				exp_data = {'d0, 1'b1, 16'd0, 2'b11, 5'd0, 1'b1, 2'd0, 1'b1, 3'd0, 1'b1};
			`endif
			 
			end
			`UIE, `UIP : begin
			`ifdef supervisor
				exp_data = {'d0, 12'hbbb};
			`else
				exp_data = {'d0, 12'h999};
			`endif
			end //UIP is tested seperately.
			`UTVEC : exp_data = {'d0, testdata[31:0]}; 
			`UEPC : exp_data = signExtend({64'hfffffffffffffffe});
			`UCAUSE : exp_data = {1'b1, 'd0, 5'b11111}; 
			`UTVAL : exp_data = signExtend({testdata});
		`endif
		//grp2----------------------------------------------------------------------------------------
			`MISA : begin  
  			exp_data[25 : 0] = {5'd0, testdata[20], 1'd0, testdata[18], 4'd0, testdata[13:12], 3'd0,
  		                      testdata[8], 2'd0, testdata[5], 1'b0, testdata[3:2], 1'b0, 
  		                      testdata[0]};
  		`ifdef RV64
  			exp_data[63 : 62] = 2'b10; 
  		`else
  			exp_data[31 : 30] = 2'b01;
  		`endif 	
  		end
  		`MSCRATCH : exp_data = truncate({`bit_64_max});
  	`ifdef supervisor
  		`SSCRATCH : exp_data = truncate({`bit_64_max});
  	`endif
  	`ifdef usertraps
  		`USCRATCH : exp_data = truncate({`bit_64_max});
  	`endif
  		`CUSTOMCNTRL : begin 
  		`ifdef icache
  			exp_data[0] = 1'b1;
  		`else
  			exp_data[0] = 1'b0;
  		`endif
  		`ifdef dcache
  			exp_data[1] = 1'b1;
  		`else
  			exp_data[1] = 1'b0;
  		`endif
  		`ifdef bpu
  			exp_data[2] = 1'b1;
  		`else
  			exp_data[2] = 1'b0;
  		`endif
  		`ifdef arith_trap
  			exp_data[3] = 1'b1;
  		`else
  			exp_data[3] = 1'b1;
  		`endif
  		end
			`FFLAGS : exp_data = zeroExtend({5'b11111}); 
			`FRM : exp_data = zeroExtend({3'b111});  
			`FCSR : exp_data = zeroExtend({8'hff});
		`ifdef pmp
			`PMPCFG0, `PMPCFG2 : exp_data = truncate({64'h7f7f7f7f7f7f7f7f});	 
			`ifdef RV32
				`PMPCFG1, `PMPCFG3 : exp_data = truncate({64'h7f7f7f7f7f7f7f7f});	  
			`endif 
			`PMPADDR0 : if (`PMPSIZE > 0) exp_data = zeroExtend({testdata[31:0]});
			`PMPADDR1 : if (`PMPSIZE > 1) exp_data = zeroExtend({testdata[31:0]});
			`PMPADDR2 : if (`PMPSIZE > 2) exp_data = zeroExtend({testdata[31:0]});
			`PMPADDR3 : if (`PMPSIZE > 3) exp_data = zeroExtend({testdata[31:0]});
			`PMPADDR4 : if (`PMPSIZE > 4) exp_data = zeroExtend({testdata[31:0]});
			`PMPADDR5 : if (`PMPSIZE > 5) exp_data = zeroExtend({testdata[31:0]});
			`PMPADDR6 : if (`PMPSIZE > 6) exp_data = zeroExtend({testdata[31:0]});
			`PMPADDR7 : if (`PMPSIZE > 7) exp_data = zeroExtend({testdata[31:0]});
			`PMPADDR8 : if (`PMPSIZE > 8) exp_data = zeroExtend({testdata[31:0]});
			`PMPADDR9 : if (`PMPSIZE > 9) exp_data = zeroExtend({testdata[31:0]});
			`PMPADDR10 : if (`PMPSIZE > 10) exp_data = zeroExtend({testdata[31:0]});
			`PMPADDR11 : if (`PMPSIZE > 11) exp_data = zeroExtend({testdata[31:0]});
			`PMPADDR12 : if (`PMPSIZE > 12) exp_data = zeroExtend({testdata[31:0]});
			`PMPADDR13 : if (`PMPSIZE > 13) exp_data = zeroExtend({testdata[31:0]});
			`PMPADDR14 : if (`PMPSIZE > 14) exp_data = zeroExtend({testdata[31:0]});
			`PMPADDR15 : if (`PMPSIZE > 15) exp_data = zeroExtend({testdata[31:0]}); 
		`endif
		//grp3------------------------------------------------------------------------------------------
		`ifdef debug
  		`DCSR : exp_data = {'d0,4'b0100, 12'd0, 1'b1, 1'b0, 5'b11111, 3'd0, 1'b0, 1'b1, 1'b0, 3'b111};
			`DPC : begin
				Bit#(TSub#(`vaddr, 1)) data = truncate({`bit_64_max});
				exp_data = signExtend({data,1'b0});
			end
			`DSCRATCH : exp_data = truncate({`bit_64_max});
			`DTVEC : begin
				Bit#(TSub#(`vaddr, 1)) data = truncate({`bit_64_max});
				exp_data = signExtend({data,1'b0});
			end
			`DENABLE : exp_data = zeroExtend(1'b1);
		`endif
		`ifdef triggers
			`TSELECT : begin
				Bit#(TLog#(`trigger_num)) data = truncate({`bit_64_max});
				exp_data = zeroExtend(data);
			end
			`TDATA1 : begin end //TODO
			`TDATA2 : exp_data = truncate({`bit_64_max}); 
			`TDATA3 : begin end //TODO
			`TINFO : exp_data ={'d0,6'b110100};
			`TMCONTEXT : begin
				Bit#(`mcontext) data = truncate({`bit_64_max});
			 	exp_data ={'d0,data};
			end
			`ifdef supervisor
				`TSCONTEXT : begin
			 		Bit#(`scontext) data = truncate({`bit_64_max});
			 		exp_data ={'d0,data};
				end
			`endif
		`endif
			`MVENDROID, `MARCHID, `MIMPID, `MHARTID : exp_data = 0;
			`MCYCLE : exp_data = truncate({64'd15}); 
			`MTIME : exp_data = truncate({64'hbbbbaaaaccccaaaa}); // multicycle check
			`MINSTRET : exp_data = truncate({`bit_64_max});
			`MCOUNTEREN : exp_data = {'d0,32'hffffffff};
			`MCOUNTINHIBIT : exp_data = {'d0, 28'hfffffff, 2'b11,1'b0, 1'b1};
		`ifndef RV64
			`MCYCLEH : exp_data = truncate({`bit_64_max});
			`MTIMEH : exp_data = truncateLSB({64'hbbbbaaaaccccaaaa}); // multi cycle check
			`MINSTRETH : exp_data = truncate({`bit_64_max});
		`endif
		`ifdef supervisor
			`SCOUNTEREN : begin end //TODO not defined yet
		`endif
		`ifdef user
  		`CYCLE : exp_data = truncate({64'd21}); // multicycle check
			`TIME : exp_data = truncate({64'hbbbbaaaaccccaaaa}); // multi cycle check
			`INSTRET : exp_data = truncate({`bit_64_max});
			`ifndef RV64
				`CYCLEH : exp_data = {'d1}; // multi cycle check
				`TIMEH : exp_data = truncateLSB({64'hbbbbaaaaccccaaaa}); //multi cycle check
				`INSTRETH : exp_data = truncate({`bit_64_max});
			`endif
		`endif
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
  		`MSTATUS, `MIE, `MIP, `MTVEC, `MEPC, `MCAUSE, `MTVAL, `MISA ,`MSCRATCH, 
  		`FFLAGS, `FRM, `FCSR, `CUSTOMCNTRL, `MVENDROID, `MARCHID, `MIMPID, `MHARTID, 
  		`MCYCLE, `MTIME, `MINSTRET, `MCOUNTEREN, `MCOUNTINHIBIT
  		`ifndef RV64 , `MCYCLEH, `MTIMEH,`MINSTRETH `endif
  		`ifdef non_m_traps ,`MEDELEG, `MIDELEG `endif
  		`ifdef supervisor ,`SSTATUS, `SIE, `SIP, `STVEC, `SEPC, `SCAUSE, `STVAL, `SATP, `SSCRATCH
  											,`SCOUNTEREN `ifdef usertraps ,`SEDELEG, `SIDELEG `endif `endif
  		`ifdef usertraps ,`USTATUS, `UIE, `UIP, `UTVEC, `UEPC, `UCAUSE, `UTVAL,`USCRATCH `endif
  		`ifdef triggers , `TSELECT, `TDATA1, `TDATA2, `TDATA3, `TINFO, `TMCONTEXT
  			`ifdef supervisor , `TSCONTEXT `endif `endif
  		`ifdef user , `CYCLE, `TIME, `INSTRET `ifndef RV64 , `CYCLEH, `TIMEH, `INSTRETH `endif `endif
  		`ifdef debug , `DCSR, `DPC, `DSCRATCH, `DTVEC, `DENABLE `endif
  			: begin
  			return fn_print_message(csr_response, exp_data);
  		end
  	`ifdef pmp
			`ifdef RV32 `PMPCFG0, `PMPCFG1, `PMPCFG2, `PMPCFG3
			`elsif RV64 `PMPCFG0, `PMPCFG2 `endif : begin
				return fn_print_message(csr_response, exp_data);
			end
			`PMPADDR0 : return fn_print_pmp_case(csr_response, exp_data, 0); 
			`PMPADDR1 : return fn_print_pmp_case(csr_response, exp_data, 1); 
			`PMPADDR2 : return fn_print_pmp_case(csr_response, exp_data, 2); 
			`PMPADDR3 : return fn_print_pmp_case(csr_response, exp_data, 3); 
			`PMPADDR4 : return fn_print_pmp_case(csr_response, exp_data, 4); 
			`PMPADDR5 : return fn_print_pmp_case(csr_response, exp_data, 5); 
			`PMPADDR6 : return fn_print_pmp_case(csr_response, exp_data, 6); 
			`PMPADDR7 : return fn_print_pmp_case(csr_response, exp_data, 7); 
			`PMPADDR8 : return fn_print_pmp_case(csr_response, exp_data, 8); 
			`PMPADDR9 : return fn_print_pmp_case(csr_response, exp_data, 9); 
			`PMPADDR10 : return fn_print_pmp_case(csr_response, exp_data, 10); 
			`PMPADDR11 : return fn_print_pmp_case(csr_response, exp_data, 11); 
			`PMPADDR12 : return fn_print_pmp_case(csr_response, exp_data, 12); 
			`PMPADDR13 : return fn_print_pmp_case(csr_response, exp_data, 13); 
			`PMPADDR14 : return fn_print_pmp_case(csr_response, exp_data, 14); 
			`PMPADDR15 : return fn_print_pmp_case(csr_response, exp_data, 15);
			`ifdef RV64
				`PMPCFG1, `PMPCFG3 : return fn_print_ifdef_miss(csr_response, exp_data, "as RV32 ");
			`endif 
		`else
			`PMPCFG0, `PMPCFG1, `PMPCFG2, `PMPCFG3, `PMPADDR0, `PMPADDR1, `PMPADDR2, `PMPADDR3,
			`PMPADDR4, `PMPADDR5, `PMPADDR6, `PMPADDR7, `PMPADDR8, `PMPADDR9, `PMPADDR10, `PMPADDR11,
			`PMPADDR12, `PMPADDR13, `PMPADDR14, `PMPADDR15 : begin
				return fn_print_ifdef_miss(csr_response, exp_data, "pmp");
			end
		`endif
		`ifdef RV64
			`MCYCLEH, `MTIMEH,`MINSTRETH 
			`ifdef user , `CYCLEH, `TIMEH, `INSTRETH `endif 
 			: begin
				return fn_print_ifdef_miss (csr_response, exp_data, "as RV32");
  		end
  	`endif
  	`ifndef non_m_traps
  		`MEDELEG, `MIDELEG : begin
  			return fn_print_ifdef_miss (csr_response, exp_data, "non_m_traps");
  		end
  	`endif
		`ifndef supervisor 
  		`SSTATUS, `SIE, `SIP, `STVEC, `SEPC, `SCAUSE, `STVAL, `SATP 
  		`ifdef usertraps , `SEDELEG, `SIDELEG `endif , `SSCRATCH, `SCOUNTEREN
  		`ifdef triggers , `TSCONTEXT `endif : begin
  			return fn_print_ifdef_miss (csr_response, exp_data, "supervisor");
  		end
  	`endif
  	`ifndef usertraps
  		`SEDELEG, `SIDELEG, `USTATUS, `UIE, `UIP, `UTVEC, `UEPC, `UCAUSE, `UTVAL,`USCRATCH : begin
  			return fn_print_ifdef_miss (csr_response, exp_data, "usertraps");
  		end
  	`endif
  	`ifndef triggers
  		`TSELECT, TDATA1, `TDATA2, `TDATA3, `TINFO, `TMCONTEXT, `TSCONTEXT : begin
  			return fn_print_ifdef_miss (csr_response, exp_data, "triggers");
  		end
  	`endif
  	`ifndef debug
  		`DCSR, `DPC, `DSCRATCH, `DTVEC, `DENABLE : begin
  			return fn_print_ifdef_miss (csr_response, exp_data, "debug");
  		end
  	`endif
  	`ifndef user
  		`CYCLE, `TIME, `INSTRET, `CYCLEH, `TIMEH, `INSTRETH
 			: begin
  			return fn_print_ifdef_miss (csr_response, exp_data, "user");
  		end
  	`endif	
  	endcase
  endfunction
`ifdef pmp
	//(*doc = "func : the function checks the response of the CSRs against expected data, while \
	//         taking PMPSIZE value into consideration"*)
  function Action fn_print_pmp_case(CSRResponse csr_response ,Bit#(XLEN) exp_data,Integer addr_val);
		if(`PMPSIZE > addr_val) begin
			return fn_print_message(csr_response, exp_data);
		end else begin
			case(`PMPSIZE)
				0 : return fn_print_ifdef_miss(csr_response, exp_data, "PMPSIZE is 0 hence PMPADDR0");
				1 : return fn_print_ifdef_miss(csr_response, exp_data, "PMPSIZE is 1 hence PMPADDR1");
				2 : return fn_print_ifdef_miss(csr_response, exp_data, "PMPSIZE is 2 hence PMPADDR2");
				3 : return fn_print_ifdef_miss(csr_response, exp_data, "PMPSIZE is 3 hence PMPADDR3");
				4 : return fn_print_ifdef_miss(csr_response, exp_data, "PMPSIZE is 4 hence PMPADDR4");
				5 : return fn_print_ifdef_miss(csr_response, exp_data, "PMPSIZE is 5 hence PMPADDR5");
				6 : return fn_print_ifdef_miss(csr_response, exp_data, "PMPSIZE is 6 hence PMPADDR6");
				7 : return fn_print_ifdef_miss(csr_response, exp_data, "PMPSIZE is 7 hence PMPADDR7");
				8 : return fn_print_ifdef_miss(csr_response, exp_data, "PMPSIZE is 8 hence PMPADDR8");
				9 : return fn_print_ifdef_miss(csr_response, exp_data, "PMPSIZE is 9 hence PMPADDR9");
				10 : return fn_print_ifdef_miss(csr_response, exp_data, "PMPSIZE is 10 hence PMPADDR10");
				11 : return fn_print_ifdef_miss(csr_response, exp_data, "PMPSIZE is 11 hence PMPADDR11");
				12 : return fn_print_ifdef_miss(csr_response, exp_data, "PMPSIZE is 12 hence PMPADDR12");
				13 : return fn_print_ifdef_miss(csr_response, exp_data, "PMPSIZE is 13 hence PMPADDR13");
				14 : return fn_print_ifdef_miss(csr_response, exp_data, "PMPSIZE is 14 hence PMPADDR14");
				15 : return fn_print_ifdef_miss(csr_response, exp_data, "PMPSIZE is 15 hence PMPADDR15");
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
 	//module definition
 	(*doc = "module : the testbench module, which tests the first 3 CSR groups. the module performs \
 					 3 types of tests, firstly, a skeleton test to verify regular CSR read-write operation on\
 					 the register and verify its existence, followed by testing of registers which can be \
 					 updated by various sideband connections from core/other groups, followed by testing of \
 					 all the side-band access form the core"*)
  module mk_tb_csr_grp_1_2_3_daisy(Empty);
  	//module instantiation
  	Ifc_csr_daisy mk_test_module <- mk_csr_daisy;
  	
  	//common registers, values
  	(*doc = "reg : a register to count the number of CSRS tested"*)
  	Reg#(Bit#(10)) rg_count <- mkReg(0);
  	(*doc = "reg : a register to initiate testing of registers, becomes false once testing starts"*)
  	Reg#(Bool) rg_init_grp1 <- mkReg(True);
  	//Bit#(12) support = 12'h000;
  	//registers to hold requests, address, response
  	(*doc = "reg : a register to hold the request structure to be applied"*)
  	Reg#(CSRReq) rg_req <- mkReg(CSRReq{csr_address : `MSTATUS, writedata : 0, funct3 : 0});
  	(*doc = "reg : a register to hold the address of current CSR being tested"*)
  	Reg#(Bit#(12)) rg_address <- mkReg(`MSTATUS);
  	(*doc = "reg : a register to hold the address of next CSR to be tested"*) 
  	Reg#(Bit#(12)) rg_next_address <- mkReg(0);
  	(*doc = "reg : a register to hold the the expected data from the CSR read operation"*) 
  	Reg#(Bit#(XLEN)) rg_exp_data <- mkReg(0);
  	(*doc = "reg : a register to hold the actual response from the CSRs"*)
  	Reg#(CSRResponse) rg_csr_response <- mkReg(CSRResponse{hit : False, data : 0});
  	(*doc = "reg : a register used for writing 'for' loops in an FSM"*) 
  	Reg#(int) i <- mkRegU; //loop counters ins FSM;
  	(*doc = "reg : a register used for capturing response from action-value method upd_on_ret"*) 
  	Reg#(Bit#(`vaddr)) rg_excep_pc_ret <- mkReg(0);
  	(*doc = "reg : a register to initiate sideband access testing of the groups"*) 
  	Reg#(Bool) rg_sideband <- mkReg(False);
  	//Reg#(Bool) rg_capture_excep_pc <- mkReg(False);
  	let paddr = valueOf(`paddr);
  	let vaddr = valueOf(`vaddr);
  	
  	
//----------------------------state machines to perform csr access----------------------------------
		
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
		
		//(*doc = "the stmt_access_grp1 performs the CSR request operations twice and captures the \
		//         response from the csr_daisy file. For grp-1 the request to write and readthe CSR\
		//         happen within the same clock cycle"*)
		Stmt stmt_access_grp1 = 
		seq
			par
  			seq
  				action
  					mk_test_module.ma_core_req(rg_req);
  					String str_address = tpl_1(fn_addr_to_str_next_addr(rg_address));
  					$write(strConcat(str_address, " :"));
  				endaction
  				mk_test_module.ma_core_req(rg_req);
  			endseq
  			seq
  				rg_csr_response <= mk_test_module.mv_resp_to_core;
  				rg_csr_response <= mk_test_module.mv_resp_to_core;
  			endseq
  		endpar
		endseq;
		
		//(*doc = "the stmt_access_grp2 performs the CSR request operations twice and captures the \
		//         response from the csr_daisy file. For grp-2 the request to write and read the CSR\
		//         happen with delay of 1 clock cycle"*)
		Stmt stmt_access_grp2 = 
		seq
			action
  			String str_address = tpl_1(fn_addr_to_str_next_addr(rg_address));
  			$write(strConcat(str_address, " :"));
  			mk_test_module.ma_core_req(rg_req);
  		endaction
  		rg_csr_response <= mk_test_module.mv_resp_to_core;
  		mk_test_module.ma_core_req(rg_req);
  		rg_csr_response <= mk_test_module.mv_resp_to_core;
		endseq;
		
		//(*doc = "the stmt_access_grp3 performs the CSR request operations twice and captures the \
		//         response from the csr_daisy file. For grp-3 the request to write and read the CSR\
		//         happen with delay of 2 clock cycles"*)		
		Stmt stmt_access_grp3 = 
		seq
			action
  			String str_address = tpl_1(fn_addr_to_str_next_addr(rg_address));
  			$write(strConcat(str_address, " :"));
  			mk_test_module.ma_core_req(rg_req);
  		endaction
			delay(1);
  		rg_csr_response <= mk_test_module.mv_resp_to_core;
  		mk_test_module.ma_core_req(rg_req);
  		delay(1);
  		rg_csr_response <= mk_test_module.mv_resp_to_core;
		endseq;
	
	
		FSM fsm_form_data <- mkFSM(stmt_form_data);
		FSM fsm_access_grp1 <- mkFSM(stmt_access_grp1);
		FSM fsm_access_grp2 <- mkFSM(stmt_access_grp2);
		FSM fsm_access_grp3 <- mkFSM(stmt_access_grp3);
//--------------------------------------------------------------------------------------------------
//-----------------------------------skeleton testing FSMS------------------------------------------
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
		
		//(*doc = "note : stmt_grp1_skeleton_f3_1 performs skeleton testing of a single grp-1 register"*)
  	Stmt stmt_grp1_skeleton_f3_1 =
  	seq
  		//form the data
  		fsm_form_data.start;
  		fsm_form_data.waitTillDone;
  		fsm_access_grp1.start;
  		fsm_access_grp1.waitTillDone;
  		fn_check_response(rg_csr_response, rg_exp_data, rg_address);
  		action
  			if(rg_count == 25) begin
  				rg_address <= (`MISA);
  			end else begin
  				rg_address <= rg_next_address;
  			end
  		endaction
  	endseq;
  	//(*doc = "note : stmt_grp2_skeleton_f3_1 performs skeleton testing of a single grp-2 register"*)	
  	Stmt stmt_grp2_skeleton_f3_1 = 
  	seq
  		fsm_form_data.start;
  		fsm_form_data.waitTillDone;
  		fsm_access_grp2.start;
  		fsm_access_grp2.waitTillDone;
  		fn_check_response(rg_csr_response, rg_exp_data, rg_address);
  		action
  			if(rg_count == 54) begin
  				rg_address <= (`DCSR);
  			end else begin
  				rg_address <= rg_next_address;
  			end
  		endaction
  	endseq;
  	//(*doc = "note : stmt_grp3_skeleton_f3_1 performs skeleton testing of a single grp-3 register"*)
  	Stmt stmt_grp3_skeleton_f3_1 = 
  	seq
  		fsm_form_data.start;
  		fsm_form_data.waitTillDone;
  		fsm_access_grp3.start;
  		fsm_access_grp3.waitTillDone;
  		fn_check_response(rg_csr_response, rg_exp_data, rg_address);
  		rg_address <= rg_next_address;
  	endseq;
  	
  	FSM fsm_grp1_skeleton_f3_1 <- mkFSM(stmt_grp1_skeleton_f3_1);
  	FSM fsm_grp2_skeleton_f3_1 <- mkFSM(stmt_grp2_skeleton_f3_1);
  	FSM fsm_grp3_skeleton_f3_1 <- mkFSM(stmt_grp3_skeleton_f3_1);
//--------------------------------------------------------------------------------------------------
//---------------------registers requiring sideband-access-enabled-registers------------------------
	//TEST_LEVEL_2/*
		//(*doc = "note : stmt_mip_test first sets the registers rg_meip, ext_seip, ext_ueip through\
		//         ma_set_external_interrupt and setting appropriate privilege level. It then enables\
		//         the rg_msip, rg_mtip through ma_clint_msip, ma_clint_mtip methods and finally tests\
		//         the MIP register in regular manner"*)
  	Stmt stmt_mip_test = 
  	seq
  		$display("\n========testing registers requiring sideband-access-enabled-registers========\n");
  		$display("\ntesting mip register in grp1");
  		//prepare conditions
  		mk_test_module.test_upd_privilege(Machine); 
  		delay(1); $display("updating privilege to Machine-mode");
  		mk_test_module.ma_set_external_interrupt(1'b1); 
  		delay(1); $display("firing ma_set_external_interrupt"); //rg_meip
  	`ifdef supervisor
  		mk_test_module.test_upd_privilege(Supervisor); 
  		delay(1); $display("updating privilege to Supervisor-mode"); 
  		mk_test_module.ma_set_external_interrupt(1'b1); 
  		delay(1); $display("firing ma_set_external_interrupt"); //ext_seip
  	`endif
		`ifdef usertraps
			mk_test_module.test_upd_privilege(User); 
			delay(1); $display("updating privilege to User-mode"); 
  		mk_test_module.ma_set_external_interrupt(1'b1); 
  		delay(1); $display("firing ma_set_external_interrupt"); //ext_ueip
		`endif
  		mk_test_module.ma_clint_msip(1'b1); 
  		delay(1); $display("firing ma_clint_msip"); //rg_msip
  		mk_test_module.ma_clint_mtip(1'b1); 
  		delay(1); $display("firing ma_clint_mtip"); //rg_mtip
  		rg_address <= `MIP;
  		fsm_form_data.start;
  		fsm_form_data.waitTillDone;
  		fsm_access_grp1.start;
  		fsm_access_grp1.waitTillDone;
  		fn_check_response(rg_csr_response, rg_exp_data, rg_address);
  	endseq;
  	
  `ifdef supervisor
  	//(*doc="note:the stmt_sip_test checks the SIP register in a regular manner and is to be tested\
  	//         only after MIP register is tested through stmt_mip_test sequence"*)
  	Stmt stmt_sip_test = 
  	seq
  		$display("\ntesting sip register in grp1");
  		rg_address <= `SIP;
  		fsm_form_data.start;
  		fsm_form_data.waitTillDone;
  		fsm_access_grp1.start;
  		fsm_access_grp1.waitTillDone;
  		fn_check_response(rg_csr_response, rg_exp_data, rg_address);
  	endseq;
  `endif
  
  `ifdef usertraps
 //(*doc="note:the stmt_sip_test checks the UIP register after enabling certain bits in rg_mideleg,\
  	//         in a regular manner and is to be tested only after MIP register is tested\
  	//         through stmt_mip_test sequence"*)
  	Stmt stmt_uip_test = 
  	seq
  		$display("\ntesting uip register in grp1");
  		rg_address <= `MIDELEG;
  		fsm_form_data.start;
  		fsm_form_data.waitTillDone;
  		$display("setting bits in MIDELEG registers");
  		fsm_access_grp1.start;
  		fsm_access_grp1.waitTillDone;
  		rg_address <= `UIP;
  		fsm_form_data.start;
  		fsm_form_data.waitTillDone;
  		fsm_access_grp1.start;
  		fsm_access_grp1.waitTillDone;
  		fn_check_response(rg_csr_response, rg_exp_data, rg_address);
  	endseq;
  `endif
 //(*doc ="note: stmt_mcycle_test, tests wether the mcycle register increments its value on itslef \
  	//         or not. It first clears certain bits in MCOUNTINHIBIT register, waits for certain\
  	//         clock cycles and performs regular csr-read operation to check the increments"*)
  	Stmt stmt_mcycle_test = 
  	seq
  		$display("\ntesting mcycle register in grp3");
  		rg_req <= CSRReq{csr_address : `MCOUNTINHIBIT, writedata : 0, funct3 : 1};
  		mk_test_module.ma_core_req(rg_req);
  		delay(2); $display("clearing mcountinhibit bits"); //mcountinhibit
  		rg_req <= CSRReq{csr_address : `MCYCLE , writedata : 0, funct3 : 1};
  		rg_exp_data <= tpl_2(fn_req_resp_f3_1(`MCYCLE));
  		action
  			$display("reset the mcycle");
  			mk_test_module.ma_core_req(rg_req);
  		endaction
  		delay(14);
  		rg_req <= CSRReq{csr_address : `MCYCLE, writedata : 0, funct3 : 2};
  		action
  			String str_address = tpl_1(fn_addr_to_str_next_addr(`MCYCLE));
  			$write(strConcat(str_address, " :"));
  			mk_test_module.ma_core_req(rg_req);
  		endaction
  		delay(1);
  		rg_csr_response <= mk_test_module.mv_resp_to_core;
  		fn_check_response(rg_csr_response, rg_exp_data, `MCYCLE);
		endseq;
			  	
  `ifdef user
  	//(*doc = "note : the stmt_cycle_test checks wether the cycle -URO register is accessible or \
  	//         not, to be performed only after mcycle is tested via stmt_mcycle_test sequence"*)
  	Stmt stmt_cycle_test = 
  	seq
  		$display("\ntesting cycle register in grp3");
  		action
  			String str_address = tpl_1(fn_addr_to_str_next_addr(`CYCLE));
  			$write(strConcat(str_address, " :"));
  			mk_test_module.ma_core_req(rg_req);
  		endaction
  		delay(1);
  		rg_csr_response <= mk_test_module.mv_resp_to_core;
  		rg_exp_data <= tpl_2(fn_req_resp_f3_1(`CYCLE));
  		fn_check_response(rg_csr_response, rg_exp_data, `CYCLE);
  	endseq;
  `endif
  
  `ifndef RV64
  	//(*doc = "note : the stmt_mcycleh_test first fills the mcycle register with its maximum value,\
  	//         after one clock cycle, the mcycleh should become 1 as the cycle counters keep\
  	//         incrementing by themselves. this tested by regular read request."*)
  	Stmt stmt_mcycleh_test = 
  	seq
  		$display("\n testing mcycleh register in grp3");
  		rg_req <= CSRReq{csr_address : `MCYCLE, writedata : truncate({`bit_64_max}), funct3 : 1};
  		mk_test_module.ma_core_req(rg_req);
  		$display("setting mcycle counters to max-value to increment mcycleh");
  		rg_req <= CSRReq{csr_address : `MCYCLEH, writedata : 0, funct3 : 2};
  		action
  			String str_address = tpl_1(fn_addr_to_str_next_addr(`MCYCLEH));
  			$write(strConcat(str_address, " :"));
  			mk_test_module.ma_core_req(rg_req);
  		endaction
  		delay(1);
  		rg_csr_response <= mk_test_module.mv_resp_to_core;
  		rg_exp_data <= tpl_2(fn_req_resp_f3_1(`MCYCLEH));
  		fn_check_response(rg_csr_response, rg_exp_data, `MCYCLEH);
  	endseq;
  	
  	`ifdef user
  		//(*doc = "note : the stmt_cycle_test checks wether the cycle -URO register is accessible"*)
  		Stmt stmt_cycleh_test = 
  		seq
  			$display("\n testing cycleh register in grp3");
  			action
  				String str_address = tpl_1(fn_addr_to_str_next_addr(`CYCLEH));
  				$write(strConcat(str_address, " :"));
  				mk_test_module.ma_core_req(rg_req);
  			endaction
  			delay(1);
  			rg_csr_response <= mk_test_module.mv_resp_to_core;
  			rg_exp_data <= tpl_2(fn_req_resp_f3_1(`CYCLEH));
  			fn_check_response(rg_csr_response, rg_exp_data, `CYCLEH);
  		endseq;
  	`endif
  `endif
  	//(*doc ="note: the mtime register is MRO, can be set by sideband access method ma_clint_mtime.\
  	//         hence this is called first, and then a regular check on mtime register is made"*)
  	Stmt stmt_mtime_test = 
  	seq
  		$display("\ntesting mtime register in grp3");
  		mk_test_module.ma_clint_mtime(64'hbbbbaaaaccccaaaa);
  		$display("fired ma_clint_mtime method");
  		rg_address <= `MTIME;
  		fsm_form_data.start;
  		fsm_form_data.waitTillDone;
  		fsm_access_grp3.start;
  		fsm_access_grp3.waitTillDone;
  		fn_check_response(rg_csr_response, rg_exp_data, rg_address);
  	endseq;
  	
  `ifdef user
  	//(*doc ="note: the time register is URO, a regular read is to be performed to check it after\
  	//         stmt_mtime_test sequence is run first."*)
  	Stmt stmt_time_test = 
  	seq
  		$display("\ntesting time register in grp3");	
  		rg_address <= `TIME;
  		fsm_form_data.start;
  		fsm_form_data.waitTillDone;
  		fsm_access_grp3.start;
  		fsm_access_grp3.waitTillDone;
  		fn_check_response(rg_csr_response, rg_exp_data, rg_address);
  	endseq;
  `endif
  
  `ifndef RV64
  	//(*doc ="note:the mtimeh register is MRO, can be set by sideband access method ma_clint_mtime.\
  	//         hence this is called first in stmt_mtime_test sequence, and then a regular check \
  	//         on mtimeh register is made"*)
  	Stmt stmt_mtimeh_test = 
  	seq
  		$display("\n testing mtimeh register in grp3");
  		rg_address <= `MTIMEH;
  		fsm_form_data.start;
  		fsm_form_data.waitTillDone;
  		fsm_access_grp3.start;
  		fsm_access_grp3.waitTillDone;
  		fn_check_response(rg_csr_response, rg_exp_data, rg_address);
  	endseq;
  	
  	`ifdef user
  		//(*doc="note:the timeh register is URO, a regular read is to be performed to check it, after\
  		//         stmt_mtime_test sequence is run first."*)
  		Stmt stmt_timeh_test = 
  		seq
  			$display("\n testing timeh register in grp3");
  			rg_address <= `TIMEH;
  			fsm_form_data.start;
  			fsm_form_data.waitTillDone;
  			fsm_access_grp3.start;
  			fsm_access_grp3.waitTillDone;
  			fn_check_response(rg_csr_response, rg_exp_data, rg_address);
  		endseq;
  	`endif
  `endif	
  	
  	FSM fsm_mip_test <- mkFSM(stmt_mip_test);
  `ifdef supervisor
  	FSM fsm_sip_test <- mkFSM(stmt_sip_test);
  `endif
  `ifdef usertraps
  	FSM fsm_uip_test <- mkFSM(stmt_uip_test);
  `endif
  	FSM fsm_mcycle_test <- mkFSM(stmt_mcycle_test);
  `ifdef user
  	FSM fsm_cycle_test <- mkFSM(stmt_cycle_test);
  `endif
  `ifndef RV64
  	FSM fsm_mcycleh_test <- mkFSM(stmt_mcycleh_test);
  	`ifdef user
  		FSM fsm_cycleh_test <- mkFSM(stmt_cycleh_test);
  	`endif
  `endif
  	FSM fsm_mtime_test <- mkFSM(stmt_mtime_test);
  `ifdef user
  	FSM fsm_time_test <- mkFSM(stmt_time_test);
  `endif
  `ifndef RV64
  	FSM fsm_mtimeh_test <- mkFSM(stmt_mtimeh_test);
  	`ifdef user
  		FSM fsm_timeh_test <- mkFSM(stmt_timeh_test);
  	`endif
  `endif
		//(*doc = "note : the stmt_test_regs calls sequentially all the methods to test\
		//         MIP, SIP, UIP, MCYCLE, MTIME, MCYCLEH, MTIMEH, CYCLE, TIME, CYCLEH, TIMEH registers"*)
		Stmt stmt_test_regs = 
  	seq
  		fsm_mip_test.start;
  		fsm_mip_test.waitTillDone;
  	`ifdef supervisor
  		fsm_sip_test.start;
  		fsm_sip_test.waitTillDone;
  	`endif
  	`ifdef usertraps
  		fsm_uip_test.start;
  		fsm_uip_test.waitTillDone;
  	`endif
  		fsm_mcycle_test.start;
  		fsm_mcycle_test.waitTillDone;
  	`ifdef user
  		fsm_cycle_test.start;
  		fsm_cycle_test.waitTillDone;
  	`endif
  	`ifndef RV64
  		fsm_mcycleh_test.start;
  		fsm_mcycleh_test.waitTillDone;
  		`ifdef user
  			fsm_cycleh_test.start;
  			fsm_cycleh_test.waitTillDone;
  		`endif
  	`endif
  		fsm_mtime_test.start;
  		fsm_mtime_test.waitTillDone;
  	`ifdef user
  		fsm_time_test.start;
  		fsm_time_test.waitTillDone;
  	`endif
  	`ifndef RV64
  		fsm_mtimeh_test.start;
  		fsm_mtimeh_test.waitTillDone;
  		`ifdef user
  			fsm_timeh_test.start;
  			fsm_timeh_test.waitTillDone;
  		`endif
  	`endif
  	rg_sideband <= True;
  	endseq;
  	
  	FSM fsm_test_regs <-mkFSM(stmt_test_regs);
//--------------------------------------------------------------------------------------------------

//----------------------------------side band connections testing-----------------------------------
	//(*doc="note: the stmt_test_upd_on_ret tests the side-band connection upd_on_ret. to perform the\
		//         test, following steps are taken:\
		//         1. set registers mie = 1, mpie = 0, mpp = Machine\
		//         2. set MEPC as 64'hffffffffffffffff.\
		//         3. set MISA-C as 1\
		//         4. fire the method and check if recieved address is 64'hfffffffffffffffe, mie as 0,\
		//            mpie = 1, mpp as 0/User\
		//         5. set registers sie = 1, spie = 0, spp = 1\
		//				 6. set SEPC as 64'hdddddddddddddddd.\
		//         7. fire the method and check if recieved address is 64'hdddddddddddddddc, sie as 0,\
		//            spie = 1, spp as 0/User
		//				 8. set registers uie = 1, upie = 0
		//				 9. set UEPC as 64'hbbbbbbbbbbbbbbbb.\
		//        10. fire the method and check if recieved address is 64'hbbbbbbbbbbbbbbba, uie as 0,\
		//            upie = 1"*)
		Stmt stmt_test_upd_on_ret = 
		seq
			//set mpp as machine
			//mpie as 0, mie as 1;
			$display("testing mav_upd_on_ret method in machine privilege\n");
			$display("setting mpp as Machine, mie as 1, mpie as 0");
			action
				Bit#(XLEN) testdata = 0;
				testdata[3] = 1'b1; //mie
				testdata[7] = 1'b0; //mpie
				testdata[12:11] = 2'd3; //mpp as machine
				mk_test_module.ma_core_req(CSRReq {csr_address : `MSTATUS, writedata : testdata 
				                                                         , funct3 : 1});
			endaction 
			$display("setting machine exception pc address as 64'hffffffffffffffff");
			//set mepc value first,
			action
				Bit#(XLEN) testdata = truncate({64'hffffffffffffffff});
				mk_test_module.ma_core_req(CSRReq {csr_address : `MEPC, writedata : testdata, funct3 : 1});
			endaction
			//set lv_misa_c
			$display("setting MISA-C and firing the method");
			rg_address <= `MISA;
			fsm_form_data.start;
			fsm_form_data.waitTillDone;
			mk_test_module.ma_core_req(rg_req);
			delay(1);
			//call the method;
			action
			`ifdef non_m_traps
				let x <- mk_test_module.mav_upd_on_ret(Machine);
				rg_excep_pc_ret <= x;
			`else
				let x <- mk_test_module.mav_upd_on_ret;
				rg_excep_pc_ret <= x;
			`endif
			endaction
			//check the mstatus register
				par
					mk_test_module.ma_core_req(CSRReq {csr_address : `MSTATUS, writedata : 0, funct3 : 2});
					rg_csr_response <= mk_test_module.mv_resp_to_core;
				endpar
			delay(1);
			$display("recieved vector address :%h", rg_excep_pc_ret);
			$display("MSTATUS : %h, mpp: %d, mie : %b, mpie : %b",rg_csr_response.data, 
								rg_csr_response.data[12:11], rg_csr_response.data[3], rg_csr_response.data[7]);
	`ifdef non_m_traps
		`ifdef supervisor			
			$display("\ntesting mav_upd_on_ret method in supervisor privilege\n");
			$display("setting spp as 1, sie as 1, spie as 0");
			//make spp as 1, sie as 1, spie as 0;
			action
				Bit#(XLEN) testdata = 0;
				testdata[1] = 1'b1; //sie
				testdata[5] = 1'b0; //spie
				testdata[8] = 1'b1; //spp as 1
				mk_test_module.ma_core_req(CSRReq {csr_address : `MSTATUS, writedata : testdata, funct3 : 1});
			endaction 
			$display("setting supervisor exception pc address as 64'hdddddddddddddddd");
			//set sepc value first,
			action
				Bit#(XLEN) testdata = truncate({64'hdddddddddddddddd});
				mk_test_module.ma_core_req(CSRReq {csr_address : `SEPC, writedata : testdata, funct3 : 1});
			endaction
			action
				let x <- mk_test_module.mav_upd_on_ret(Supervisor);
				rg_excep_pc_ret <= x;
			endaction
			//check the mstatus register
				par
					mk_test_module.ma_core_req(CSRReq {csr_address : `MSTATUS, writedata : 0, funct3 : 2});
					rg_csr_response <= mk_test_module.mv_resp_to_core;
				endpar
			delay(1);
			$display("recieved vector address :%h", rg_excep_pc_ret);
			$display("MSTATUS : %h, spp: %b, sie : %b, spie : %b", rg_csr_response.data, 
								rg_csr_response.data[8], rg_csr_response.data[1], rg_csr_response.data[5]);
		`endif
		`ifdef usertraps
			$display("\ntesting mav_upd_on_ret method in user privilege\n");
			$display("setting uie as 1, upie as 0");
			//make spp as 1, sie as 1, spie as 0;
			action
				Bit#(XLEN) testdata = 0;
				testdata[0] = 1'b1; //uie
				testdata[4] = 1'b0; //upie
				mk_test_module.ma_core_req(CSRReq {csr_address : `MSTATUS, writedata : testdata, funct3 : 1});
			endaction 
			delay(1);
			$display("setting user exception pc address as 64'hbbbbbbbbbbbbbbbb ");
			//set sepc value first,
			action
				Bit#(XLEN) testdata = truncate({64'hbbbbbbbbbbbbbbbb});
				mk_test_module.ma_core_req(CSRReq {csr_address : `UEPC, writedata : testdata, funct3 : 1});
			endaction
			delay(1);
			action
				let x <- mk_test_module.mav_upd_on_ret(User);
				rg_excep_pc_ret <= x;
			endaction
			//check the mstatus register
				par
					mk_test_module.ma_core_req(CSRReq {csr_address : `MSTATUS, writedata : 0, funct3 : 2});
					rg_csr_response <= mk_test_module.mv_resp_to_core;
				endpar
			delay(1);
			$display("recieved vector address :%h", rg_excep_pc_ret);
			$display("MSTATUS : %h, uie :%b, upie : %b", rg_csr_response.data, 
								rg_csr_response.data[0], rg_csr_response.data[4]);
		`endif
	`endif
		endseq;
		//(*doc = "note : stmt_mv_grp_1 tests the mv_csr_satp, mv_mstatus methods by first setting the\
		//         SATP,MSTATUS registers respectively with some test values and then checking the \
		//         response from these methods."*)
		Stmt stmt_mv_grp_1 = 
		seq
		`ifdef supervisor
			$display("\n testing mv_csr_satp method");
			action
			`ifdef RV64
    		Bit#(XLEN) exp_data = {4'h8, 'd0, 8'hff, 1'b1, 44'hfffffffffff};
    	`else
      	Bit#(XLEN) exp_data = {1'b1, 'd0, 8'hff, 1'b1, 20'hfffff, 2'b11};
    	`endif
    		fn_check_response(CSRResponse{hit : True, data : mk_test_module.mv_csr_satp}, 
    		                  exp_data, `SATP);
    	endaction
    `endif
    	$display("\n testing mv_mstatus method");
    	rg_address <= `MSTATUS;
    	fsm_form_data.start;
    	fsm_form_data.waitTillDone;
			mk_test_module.ma_core_req(rg_req);
			fn_check_response(CSRResponse{hit : True, data: mk_test_module.mv_csr_mstatus}, 
			                  rg_exp_data, rg_address);
			//csr_to_decode--?
		endseq;
		//(*doc = "note : stmt_grp2_sidebands tests \
		//         1. the mv_cacheenable, mv_arith_excep, mv_csr_misa_c\
		//         by setting the accessed bits by the methods first through regular access, and then\
		//         firing these methods\
		//         2. ma_update_fflags, is tested by, setting fflags to 5'b00111 through regular access\
		//         firing ma_update_fflags with 5'b11000 as input, followed by regular csr-access \
		//         to read the fflags and check the value to be 5'b11111\
		//         3. mv_pmp_cfg is tested by simply firing it to see the previously set values through\
		//         skeleton tests."*)
		seq
		`ifdef spfpu
			$display("\n testing FFLAGS");
			rg_address <= `FFLAGS;
			rg_req <= CSRReq{csr_address : `FFLAGS, writedata : {'d0,3'b111}, funct3 : 1};
			mk_test_module.ma_core_req(rg_req);
			delay(4);
			mk_test_module.ma_update_fflags(5'b11000);
			mk_test_module.ma_core_req(CSRReq{csr_address : `FFLAGS, writedata : 0, funct3 : 2});
			rg_csr_response <= mk_test_module.mv_resp_to_core;
			fn_check_response(rg_csr_response, {'d0,5'b11111}, `FFLAGS);
		`endif
			//mv_cacheenable
			$display("\n testing mv_cacheenable : %b", mk_test_module.mv_cacheenable);
		`ifdef arith_trap
			$display("\n testing mv_arith_excep : %b", mk_test_module.mv_arith_excep);
		`endif
			$display("\n testing mv_misa_c  : %b", mk_test_module.mv_csr_misa_c);
		`ifdef pmp
			$display("\n testing mv_pmp_cfg rgisters");
			for(i <= 0; i < `PMPSIZE; i <= i + 1) action
				let x = mk_test_module.mv_pmp_cfg[i];
				Bit#(8) check_val = 8'h7f;
				if(x == check_val) 
					$display("pmp_cfg[%d] verified", i);
				else 
					$display("ERROR pmp_cfg[%d] : %h, expected 8'h7f", i, x);
			endaction
			$display("\n testing mv_pmp_cfg rgisters");
			for(i <= 0; i < `PMPSIZE; i <= i + 1) action
				let x = mk_test_module.mv_pmp_addr[i];
				Bit#(`paddr) check_val = truncate({`bit_64_max});
				if(x == check_val) 
					$display("pmp_addr[%d] verified", i);
				else 
					$display("ERROR pmp_addr[%d] : %h, expected :%h", i, x, check_val);
			endaction
		`endif
		endseq;
		//(*doc = "note : the stmt_grp3_ma_test tests ma_incr_minstret method by first clearing \
		//                mcountinhibit bits, firing the method 4 times and then making a regular\
		//                csr-access to read minstret"*)
		Stmt stmt_grp3_ma_test = 
		seq
			$display("\n testing ma_incr_minstret");
  		rg_req <= CSRReq{csr_address : `MCOUNTINHIBIT, writedata : 0, funct3 : 1};
  		mk_test_module.ma_core_req(rg_req);
  		delay(2); $display("clearing mcountinhibit bits"); //mcountinhibit
  		rg_req <= CSRReq{csr_address : `MINSTRET, writedata : 0, funct3 : 1};
  		mk_test_module.ma_core_req(rg_req);
  		delay(2); $display("clearing minstret"); //mcountinhibit
  		for(i <= 0; i < 4; i <= i + 1) action
  			mk_test_module.ma_incr_minstret;
  		endaction
  		rg_req <= CSRReq{csr_address : `MINSTRET, writedata : 0, funct3 : 2};
  		mk_test_module.ma_core_req(rg_req); delay(1);
  		rg_csr_response <= mk_test_module.mv_resp_to_core;
  		fn_check_response(rg_csr_response, 4, `MINSTRET);
		endseq;
		
		//(*doc = "note : stmt_grp3_mv_test, tests the sideband access mv_step_is_set, mv_step_ie\
		//         mv_core_is_halted, mv_core_debugenable"*)
		Stmt stmt_grp3_mv_test = 
		seq
			$display("\n testing mv_step_is_set : %b", mk_test_module.mv_step_is_set);
			$display("\n testing mv_step_ie : %b", mk_test_module.mv_step_ie);
			$display("\n testing mv_core_is_halted : %b", mk_test_module.mv_core_is_halted);
			$display("\n testing mv_core_debugenable : %h", mk_test_module.mv_core_debugenable);
		endseq;
		
		FSM fsm_test_upd_on_ret <- mkFSM(stmt_test_upd_on_ret);
		FSM fsm_mv_grp_1 <- mkFSM(stmt_mv_grp_1);
		FSM fsm_grp2_sidebands <- mkFSM(stmt_grp2_sidebands);
		FSM fsm_grp3_ma_test <- mkFSM(stmt_grp3_ma_test);
		FSM fsm_grp3_mv_test <- mkFSM(stmt_grp3_mv_test);
  	
  	//(*doc = "note : the stmt_test_sidebands tests all the sidebands of the csr grps 1,2,3 \
  	//         sequentially"*)
  	Stmt stmt_test_sidebands =
  	seq 
  		$display("\n======================testing sideband connections==========================\n");
  		fsm_test_upd_on_ret.start;
  		fsm_test_upd_on_ret.waitTillDone;
  		fsm_test_upd_on_ret.start;
  		fsm_test_upd_on_ret.waitTillDone;
  		fsm_mv_grp_1.start;
  		fsm_mv_grp_1.waitTillDone;
  		fsm_grp2_sidebands.start;
  		fsm_grp2_sidebands.waitTillDone;
  		fsm_grp3_ma_test.start;
  		fsm_grp3_ma_test.waitTillDone;
  		fsm_grp3_mv_test.start;
  		fsm_grp3_mv_test.waitTillDone;
  		$finish;		
  	endseq;
  	
  	FSM fsm_test_sidebands <- mkFSM(stmt_test_sidebands);
		//TEST_LEVEL_2*/
//--------------------------------------------------------------------------------------------------		
  	//rules
  	(*doc = "rule : the rule initiates the skeleton tests"*)
  	rule rl_starter_grp1(rg_init_grp1);
  	`ifdef RV64
  		$display("========testing csr_grp1 in RV64========\n");
  	`else
  		$display("========testing csr_grp1 in RV32========\n");
  	`endif
  		fsm_grp1_skeleton_f3_1.start;
  		rg_init_grp1<= False;
  	endrule
  	
  	(*doc = "rule : the rule increments the rg_count on completion of testing of a register,\
  	         initiates the skeleton testing of next group upon completion of testing of current\
  	         group, initiates the testing of sideband-access-enabled-registers"*)
  	rule rl_fsm_loop(((fsm_grp1_skeleton_f3_1.done) 
  	                || (fsm_grp2_skeleton_f3_1.done)
  	                || (fsm_grp3_skeleton_f3_1.done)
  	                   ) && (!rg_init_grp1) && (rg_count < 87));
  	               
  		if(rg_count < 25) begin
  			fsm_grp1_skeleton_f3_1.start;
  		end
  		if((rg_count > 25) && (rg_count < 54)) begin
  			fsm_grp2_skeleton_f3_1.start;
  		end
  		if((rg_count > 54) && (rg_count < 86)) begin
  			fsm_grp3_skeleton_f3_1.start;
  		end
  	//if(rg_count == 86) $finish;
  		case(rg_count)
  		`ifdef RV64
 				25 : $display("========testing csr_grp2 in RV64========\n");
 				54 : $display("========testing csr_grp3 in RV64========\n");
 			`else
 				25 : $display("========testing csr_grp2 in RV32========\n");
 				54 : $display("========testing csr_grp3 in RV32========\n");
 			`endif
 				86 : fsm_test_regs.start;
 			endcase
 			rg_count <= rg_count + 1;
  	endrule
  	
  	(*doc = "rule : initiates the testing of sideband accesses to grps-1,2,3"*)
  	rule rl_sideband_testing(rg_sideband);
  		fsm_test_sidebands.start;
  		rg_sideband <= False;
  	endrule
  endmodule
endpackage
