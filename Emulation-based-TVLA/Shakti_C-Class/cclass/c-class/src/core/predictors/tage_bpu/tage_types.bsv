
//tage branch predictor

//size of the tables are assumed by default to be the following values; 
//if any changes are made, corresponding changes have to be made in the 
//address calculations in the rules and methods and functions
`define SIZE_BIMODAL 4096  //size of the tables
`define SIZE_GLOBAL 1024
`define BIMODAL_MAX_ADDR 4095
`define GLOBAL_MAX_ADDR 1023
`define DATA_SIZE_BIMODAL 4
`define DATA_SIZE_GLOBAL 12
`define TAG_SIZE 8
`define HIST_SIZE 80 //no. of history bits
`define PC_SIZE 32
`define BANK_BITS 3
`define WRITE True
`define READ False
`define COUNTER_SIZE 3

typedef Bit#(TLog#(`SIZE_BIMODAL)) Gv_bimodal_addr;
typedef Bit#(TLog#(`SIZE_GLOBAL)) Gv_global_addr;
typedef Bit#(`DATA_SIZE_BIMODAL) Gv_bimodal_data;
typedef Bit#(`DATA_SIZE_GLOBAL) Gv_global_data;
typedef Bit#(`TAG_SIZE) Gv_tag;
typedef Bit#(`HIST_SIZE) Gv_hist;
typedef Bit#(`PC_SIZE) Gv_pc;
typedef Bit#(TSub#(`TAG_SIZE,1)) Gv_secondary_csr;
typedef Bit#(`BANK_BITS) Gv_bank_num;
typedef Bit#(`COUNTER_SIZE) Gv_counter;
typedef struct{Gv_pc pc;Bool hit;Bool truth;Bit#(1) prediction;Gv_counter counter;Gv_tag tag;Bit#(5) bank_bits;Gv_bank_num bank_num;Gv_counter bimodal;} Gv_train_predictor deriving(Bits, Eq, FShow);
typedef struct{Bit#(1) prediction;Gv_counter counter;Gv_tag tag;Bit#(5) bank_bits;Gv_bank_num bank_num;Gv_counter bimodal_counter;} Gv_return_predictor deriving(Bits, Eq, FShow);

//return value of btb after extracting the branch pc
typedef struct{Bool hit;Gv_ways way_num;} Gv_modreturn_btb deriving(Bits, Eq, FShow);
//return value of bpu as a whole; includes the predictor and btb returned values; 
//branch address is extracted from btb return value and sent separately
typedef struct{Bool final_pred;Gv_return_predictor tage_return;Gv_modreturn_btb btb_return;} Gv_return_bpu deriving(Bits, Eq, FShow);

`define BTB_SIZE 16
`define BTB_ADDR 4
`define BTB_DATA 39
`define BTB_TAG 26
`define BTB_VAL 12
`define PC_SIZE 32
`define NUM_WAYS 4
`define VRG_DEPTH 17
`define READ False
`define WRITE True

typedef Bit#(TLog#(`BTB_SIZE)) Gv_btb_addr;
typedef Bit#(`BTB_DATA) Gv_btb_data;
typedef Bit#(`BTB_TAG) Gv_btb_tag;
typedef Bit#(`BTB_VAL) Gv_btb_val;
typedef Bit#(TLog#(`NUM_WAYS)) Gv_ways;

//structure for the value returned by the mn_get method
typedef struct{Bool hit_bram;Bool hit_vrg;Gv_ways way_num;Gv_pc branch_pc;} Gv_return_btb deriving(Bits, Eq, FShow);
//structure for the value used to update btb in case of miss
typedef struct{Bool conditional;Gv_pc pc;Gv_pc branch_imm;Gv_ways way_num;} Gv_update_btb deriving(Bits, Eq, FShow);
//structure for reg vector data
typedef struct{Gv_pc pc;Gv_pc branch_pc;} Gv_vrg_data deriving(Bits, Eq, FShow);
