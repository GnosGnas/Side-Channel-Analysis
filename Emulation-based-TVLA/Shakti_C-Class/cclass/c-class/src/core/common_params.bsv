  `define statesize 2
  
  `ifdef muldiv
    `define multicycle True
  `endif
  `ifdef spfpu
    `define multicycle True
  `endif

// ------------ NEEDS TO BE REVISED ------------------
`define SDRAMMemBase	'h80000000	
`define SDRAMMemEnd  'h8FFFFFFF // 1GB

`define ICACHE_MISS							0
`define ICACHE_CACHEABLE	 				`ICACHE_MISS+1	
`define ICACHE_LINEREPLACE 				`ICACHE_CACHEABLE+1
`define ICACHE_TLBMISS						`ICACHE_LINEREPLACE+1
`define ICACHE_MISALIGNED					`ICACHE_TLBMISS+1
`define ICACHE_PREFETCHMISS				`ICACHE_MISALIGNED+1
`define COND_BRANCH							`ICACHE_PREFETCHMISS+1
`define COND_BRANCH_TAKEN					`COND_BRANCH+1
`define COND_BRANCH_MISPREDICTED			`COND_BRANCH_TAKEN+1
`define TAKEN_BRANCH_MISPREDICTED		`COND_BRANCH_MISPREDICTED+1
`define UNCOND_JUMPS							`TAKEN_BRANCH_MISPREDICTED+1
`define SPFPU_INST							`UNCOND_JUMPS+1
`define DPFPU_INST							`SPFPU_INST+1
`define DCACHE_TLBMISS						`DPFPU_INST+1
`define TOTAL_LOADS							`DCACHE_TLBMISS+1
`define TOTAL_STORES							`TOTAL_LOADS+1
`define TOTAL_ATOMIC							`TOTAL_STORES+1
`define DCACHE_LOAD_MISS					`TOTAL_ATOMIC+1
`define DCACHE_STORE_MISS					`DCACHE_LOAD_MISS+1
`define DCACHE_ATOMIC_MISS					`DCACHE_STORE_MISS+1
`define DCACHE_CACHEABLE_LOAD				`DCACHE_ATOMIC_MISS+1
`define DCACHE_CACHEABLE_STORE			`DCACHE_CACHEABLE_LOAD+1
`define DCACHE_CACHEABLE_ATOMIC			`DCACHE_CACHEABLE_STORE+1
`define DCACHE_WRITEBACKS					`DCACHE_CACHEABLE_ATOMIC+1
`define DCACHE_LINEREPLACE					`DCACHE_WRITEBACKS+1
`define DCACHE_MISALIGNED					`DCACHE_LINEREPLACE+1
`define EXCEPTIONS_TAKEN					`DCACHE_MISALIGNED+1
`define INTERRUPTS_TAKEN					`EXCEPTIONS_TAKEN+1
`define MULDIV_INSTRUCTIONS				`INTERRUPTS_TAKEN+1
`define MEMORY_INSTRUCTIONS				`MULDIV_INSTRUCTIONS+1
`define EXEC_FLUSHES							`MEMORY_INSTRUCTIONS+1
`define WB_FLUSHES							`EXEC_FLUSHES+1
// --------------------------------------------------------------
`define FNADD   0   //'b0000
`define FNSL	  1	  //'b0001  	
`define FNSEQ	  2	  //'b0010  	
`define FNSNE	  3	  //'b0011  	
`define FNXOR	  4	  //'b0100  	
`define FNSR	  5	  //'b0101  	
`define FNOR	  6	  //'b0110	
`define FNAND	  7	  //'b0111
`define FNSUB	  10	//'b1010
`define FNSRA	  11	//'b1011
`define FNSLT	  12	//'b1100
`define FNSGE	  13	//'b1101
`define FNSLTU	14	//'b1110
`define FNSGEU	15	//'b1111

`define FNLR	2	
`define FNSC    3	
`define FNSWAP 1 
`define FMINU	10
`define FMIN	11
`define FMAXU  12
`define FMAX	13

`define FNRAND	8

`ifdef usertraps
  `define non_m_traps True
`endif
`ifdef supervisor
  `define non_m_traps True
`endif
`ifdef icache
  `define cache_control
`endif
`ifdef dcache
  `define cache_control
`endif
/////////////////////////////////////////////////////////////////////////
////////////////////// opcode definitions of ISA ////////////////////////
`define AUIPC_op			    'b00101
`define LUI_op				    'b01101
`define JAL_op  			    'b11011
`define JALR_op  			    'b11001
`define BRANCH_op			    'b11000
`define LOAD_op				    'b00000
`define STORE_op			    'b01000
`define IMM_ARITH_op	    'b00100
`define	ARITH_op			    'b01100
`ifdef RV64
	`define IMM_ARITHW_op	  'b00110
	`define	ARITHW_op		    'b01110
	`define MULDIVW_op		  'b01110
`endif
`define	CSR_op				    'b11100
`define	SYSTEM_INSTR_op		'b11100
`define	MULDIV_op			    'b01100
`define FSTORE_op			'b01001
`define	ATOMIC_op			'b01011

////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////// funct3 defintions for ISA ////////////////////

`define MUL_f3		'b000
`define MULH_f3		'b001
`define MULHSU_f3	'b010
`define MULHU_f3	'b011
`define DIV_f3		'b100
`define DIVU_f3		'b101

////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////cache related parameters//////////////////////////
`define ICACHE_WAYS 4			// way_bits =2
`define ICACHE_BLOCK_SIZE 8	// word_bits = 3
`define ICACHE_SETS 512			// set_bits	=7
`define ICACHE_WORD_SIZE 4		// byte_bits=2
`define ICACHE_TAG_BITS 20		// tag_bits = 52

`define Counters 0

////////////////////////////////////////////////////////////////////////////////////
`ifdef simulate
  `define BAUD_RATE 5 //130 //
`else
  `define BAUD_RATE 5 
`endif

`define Inst_addr_misaligned  0 
`define Inst_access_fault     1 
`define Illegal_inst          2 
`define Breakpoint            3 
`define Load_addr_misaligned  4 
`define Load_access_fault     5 
`define Store_addr_misaligned 6 
`define Store_access_fault    7 
`define Ecall_from_user       8 
`define Ecall_from_supervisor 9 
`define Ecall_from_machine    11
`define Inst_pagefault        12
`define Load_pagefault        13
`define Store_pagefault       15
`define Int_divide_by_zero    17
`define FP_invalid            18
`define FP_divide_by_zero     19
`define FP_overflow           20
`define FP_underflow          21
`define FP_inexact            22


//------------ internal encodings --------------//
`define Rerun                 23
`define IcacheFence           24
`define SFence                25
// --------------------------------------------//
`define User_soft_int         0
`define Supervisor_soft_int   1
`define Machine_soft_int      3
`define User_timer_int        4
`define Supervisor_timer_int  5
`define Machine_timer_int     7
`define User_external_int     8
`define Supervisor_external_int 9
`define Machine_external_int  11
`define CounterInterrupt      16
`define HaltEbreak            17
`define HaltTrigger           18
`define HaltDebugger          19
`define HaltStep              20
`define HaltReset             21
`define Resume_int            22
