## Makefile for Simulation-based TVLA
## Author: Surya Prasad S (EE19B121)

# Please see the README File before using this

# Changable parameters
## Directory for all verilog files
VERILOG_FILES := verilog_files
## Top module for verilator here
TOP_MODULE := mkAES_Wrapper2
## Other modules - don't include main.v here as for verilator the cpp code provides clock and reset to the modules
SYN_VERILOG_MODULES := $(VERILOG_FILES)/mkAES_synthesized.v $(VERILOG_FILES)/sample.v
NORMAL_VERILOG_MODULES := $(VERILOG_FILES)/mkAES.v $(VERILOG_FILES)/mkSbox2.v $(VERILOG_FILES)/mkRconRom.v $(VERILOG_FILES)/BRAM1.v
CURR_MODULES := $(NORMAL_VERILOG_MODULES)
## main.v
MAIN := $(VERILOG_FILES)/main.v
## Verilator flags
VERILATOR_FLAGS := -cc -Wno-STMTDLY -Wno-UNOPTFLAT -Wno-WIDTH -Wno-lint -Wno-COMBDLY -Wno-INITIALDLY --exe
#VERILATOR_FLAGS := --stats -O3 -CFLAGS -O3 -LDFLAGS -static --x-assign fast --x-initial fast --noassert --cc $(TOP_MODULE).v --exe sim_main.cpp -Wno-STMTDLY -Wno-UNOPTFLAT -Wno-WIDTH -Wno-lint -Wno-COMBDLY -Wno-INITIALDLY 
#$(VERILATOR) $(VERILATOR_FLAGS) --top-module $(TOP_MODULE) $(VERILOG_FILES)/$(TOP_MODULE).v $(CURR_MODULES) sim_main.cpp
#verilator $(VERILATOR_FLAGS)  -y ./src/bfm -y $(VERILOGDIR) -y ${BLUESPECDIR}/Verilog/ 

ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
endif

default: check_verilator
	@echo "For iverilog use make iv; For verilator use make veri"

### To be fixed!!!!!!!!!!!
veri: check_verilator
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) $(VERILATOR_FLAGS) --top-module $(TOP_MODULE) $(VERILOG_FILES)/$(TOP_MODULE).v $(CURR_MODULES) sim_main.cpp
	@echo "-- RUN ---------------------"
	obj_dir/V$(TOP_MODULE)
	@echo "-- DONE --------------------"

check_verilator:
	@type verilator >/dev/null 2>&1 && ([ $$? -eq 0 ]) || { echo "Verilator not found. Please install verilator..."; exit 1; }
	
iv: check_iverilog
	iverilog $(MAIN) $(TOP_MODULE).v $(CURR_MODULES) -o iv
	./iv

check_iverilog:
	@type iverilog >/dev/null 2>&1 && ([ $$? -eq 0 ]) || { echo "Iverilog not found. Please install iverilog..."; exit 1; }

######################################################################

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	-rm -rf obj_dir *.log *.dmp *.vpd core a.out iv