## 			Makefile for C-Class Base-sim

ifeq (, $(wildcard ./old_vars))
	old_define_macros = ""
else
	include ./old_vars
endif

CONFIG?=soc_config.inc

include $(CONFIG)

SHAKTI_HOME=$(PWD)
export SHAKTI_HOME

TOP_MODULE:=mkTbSoc
TOP_FILE:=TbSoc.bsv
TOP_DIR:=./
WORKING_DIR := $(shell pwd)

BLUESPECDIR := /home/surya/BLUESPEC/bsc/src

# ------------------ based on the config generate define macros for bsv compilation --------------#
ifneq (,$(findstring RV64,$(ISA)))
  override define_macros += -D RV64=True
  XLEN=64
endif
ifneq (,$(findstring RV32,$(ISA)))
  override define_macros += -D RV32=True
  XLEN=32
endif

ifneq (,$(findstring RV64,$(ISA)))
	IBUSWIDTH = 64
else ifneq (,$(findstring D,$(ISA)))
	IBUSWIDTH = 64
else
	IBUSWIDTH = 32
endif
ifneq (,$(findstring A,$(ISA)))
  override define_macros += -D atomic=True
endif
ifneq (,$(findstring F,$(ISA)))
  override define_macros += -D spfpu=True
  FLOAT=--float
endif
ifneq (,$(findstring D,$(ISA)))
  override define_macros += -D dpfpu=True
  FLOAT=--float
endif
ifneq (,$(findstring C,$(ISA)))
  override define_macros += -D compressed=True
endif

ifneq (,$(findstring M,$(ISA)))
  override define_macros += -D muldiv=True
endif
ifeq ($(SYNTH),SIM)
  override define_macros += -D simulate=True
endif
ifeq ($(BOOTROM), enable)
  override define_macros += -D BOOTROM=True
endif
ifeq ($(COREFABRIC), AXI4Lite)
  override define_macros += -D CORE_AXI4Lite=True
endif
ifeq ($(USERTRAPS), enable)
  override define_macros += -D usertraps=True
endif
ifeq ($(USER), enable)
  override define_macros += -D user=True
endif
ifeq ($(RTLDUMP), enable)
  override define_macros += -D rtldump=True
endif
ifneq ($(SUPERVISOR),  none)
  override define_macros += -D supervisor=True -D $(SUPERVISOR)
endif
ifeq ($(ASSERTIONS), enable)
  override define_macros += -D ASSERT=True
endif
ifeq ($(ICACHE), enable)
  override define_macros += -D icache=True
endif
ifeq ($(DCACHE), enable)
  override define_macros += -D dcache=True
endif
ifeq ($(ECC), enable)
  override define_macros += -D ECC=True
endif
ifeq ($(PMP), enable)
	override define_macros += -D pmp=True
endif
ifeq ($(DTIM), enable)
	override define_macros += -D dtim
endif
ifeq ($(ITIM), enable)
	override define_macros += -D itim
endif
ifneq ($(PREDICTOR), none)
	override define_macros += -D bpu=True
endif
ifeq ($(ARITH_TRAP), enable)
	override define_macros += -D arith_trap=True
endif
ifeq ($(DEBUG), enable)
	override define_macros += -D debug=True
endif
ifeq ($(OPENOCD), enable)
	override define_macros += -D openocd=True
endif
# Generate ifence if icache or bpu is enabled
ifeq ($(ICACHE), enable)
	override define_macros += -D ifence=True
else ifneq ($(PREDICTOR), none)
	override define_macros += -D ifence=True
endif


ifneq ($(TRIGGERS), 0)
	override define_macros += -D triggers=True -D trigger_num=$(TRIGGERS)
	ifeq ($(XLEN), 64)
		override define_macros += -D mcontext=0 -D scontext=0
	else
		override define_macros += -D mcontext=0 -D scontext=0
	endif
endif

ifneq ($(RASDEPTH), 0)
	override define_macros += -D bpu_ras
endif

ifeq ($(COVERAGE), none)
else ifeq ($(COVERAGE),all)
  coverage := --coverage
else
  coverage := --coverage-$(COVERAGE)
endif

ifeq ($(TRACE), enable)
  trace := --trace
endif

ifeq ($(SUPPRESSWARNINGS),all)
	suppresswarn = -suppress-warnings G0010:T0054:G0020:G0024:G0023:G0096:G0036:G0117:G0015
else ifneq ($(SUPPRESSWARNINGS), none)
	suppresswarn = -suppress-warnings $(SUPPRESSWARNINGS)
endif

VCS_MACROS =  +define+BSV_RESET_FIFO_HEAD=True +define+BSV_RESET_FIFO_ARRAY=True

ifeq (enable,$(VERBOSITY))
	VERILATOR_FLAGS += -DVERBOSE
	VCS_MACROS += +define+VERBOSE=True
endif

ifeq ($(CSR_LATENCY),low)
	override define_macros += -D csr_low_latency=True
endif

ifneq ($(COUNTERS_GRP4), 0)
	override define_macros += -D perfmonitors=True
	override define_macros += -D csr_grp4=True
	ifneq ($(COUNTERS_GRP5), 0)
		override define_macros += -D csr_grp5=True
		ifneq ($(COUNTERS_GRP6), 0)
			override define_macros += -D csr_grp6=True
			ifneq ($(COUNTERS_GRP7), 0)
				override define_macros += -D csr_grp7=True
			endif
		endif
	endif
endif

ifneq ($(COUNTERS_GRP4), 0)
	ifneq ($(COUNTERS_GRP5), 0)
		ifneq ($(COUNTERS_GRP6), 0)
			ifneq ($(COUNTERS_GRP7), 0)
				override define_macros += -D counters_size=$(shell echo $(COUNTERS_GRP4) + $(COUNTERS_GRP5) + $(COUNTERS_GRP6) + $(COUNTERS_GRP7) | bc)
			else
				override define_macros += -D counters_size=$(shell echo $(COUNTERS_GRP4) + $(COUNTERS_GRP5) + $(COUNTERS_GRP6) | bc)
			endif
		else
			override define_macros += -D counters_size=$(shell echo $(COUNTERS_GRP4) + $(COUNTERS_GRP5) | bc)
		endif
	else
		override define_macros += -D counters_size=$(COUNTERS_GRP4)
	endif
endif

override define_macros += -D CORE_$(COREFABRIC)=True -D MULSTAGES=$(MULSTAGES) \
								 -D DIVSTAGES=$(DIVSTAGES) -D counters_grp4=$(COUNTERS_GRP4)\
								 -D counters_grp5=$(COUNTERS_GRP5) -D counters_grp6=$(COUNTERS_GRP6)\
								 -D counters_grp7=$(COUNTERS_GRP7) -D Addr_space=$(ADDR_SPACE)\
								 -D iwords=$(IWORDS) -D iblocks=$(IBLOCKS) -D iways=$(IWAYS) -D isets=$(ISETS) \
								 -D ifbsize=$(IFBSIZE) -D irepl=$(IREPL) -D icachereset=$(IRESET) -D iesize=$(IESIZE) \
								 -D idbanks=$(IDBANKS) -D itbanks=$(ITBANKS) -D ddbanks=$(DDBANKS) -D dtbanks=$(DTBANKS) \
								 -D dwords=$(DWORDS) -D dblocks=$(DBLOCKS) -D dways=$(DWAYS) -D dsets=$(DSETS) \
								 -D dfbsize=$(DFBSIZE) -D drepl=$(DREPL) -D dcachereset=$(DRESET) -D desize=$(DESIZE) \
								 -D dsbsize=$(DSBSIZE) -D ibuswidth=$(IBUSWIDTH) \
								 -D paddr=$(PADDR) -D vaddr=$(XLEN) -D PMPSIZE=$(PMPSIZE) \
								 -D resetpc=$(RESETPC) -D asidwidth=$(ASIDWIDTH) -D  DTVEC_BASE=$(DTVEC)  \
								 -D btbdepth=$(BTBDEPTH) -D bhtdepth=$(BHTDEPTH) -D histlen=$(HISTLEN) \
								 -D extrahist=$(EXTRAHIST) -D rasdepth=$(RASDEPTH) \
								 -D bpureset=$(BPURESET) -D causesize=$(CAUSESIZE) -D $(PREDICTOR)=True\
								 -D itlbsize=$(ITLBSIZE) -D dtlbsize=$(DTLBSIZE)\
								 -D dtim_banks=$(DTIMWAYS) -D itim_banks=$(ITIMWAYS)\
                 -D dtimbase=$(DTIMBASE) -D dtimbound=$(DTIMBOUND) -D itimbase=$(ITIMBASE) -D itimbound=$(ITIMBOUND)

# ------------------------------------------------------------------------------------------------ #
# ------------------ Include directories for bsv compilation ------------------------------------- #
BSVDEFAULT:=.:%/Prelude:%/Libraries:%/Libraries/BlueNoC
VARIABLE := $(BSVDEFAULT)$(shell sed 's/^/:..\//g' ../bsvpath)
BSVINCDIR := $(shell echo $(VARIABLE) | sed 's/ //g' )
# ------------------------------------------------------------------------------------------------ #

# ----------------- Setting up flags for verilator ----------------------------------------------- #
ifeq ($(VERILATESIM), fast)
	verilate_fast := OPT_SLOW="-O1" OPT_FAST="-O1"
endif
VERILATOR_FLAGS += -O1 -LDFLAGS "-static" --x-assign fast --x-initial fast \
--noassert sim_main.cpp --bbox-sys -Wno-STMTDLY -Wno-UNOPTFLAT -Wno-WIDTH \
-Wno-lint -Wno-COMBDLY -Wno-INITIALDLY --autoflush $(coverage) $(trace) --threads $(THREADS) \
-DBSV_RESET_FIFO_HEAD -DBSV_RESET_FIFO_ARRAY --output-split 20000 --output-split-ctrace 10000
# ------------------------------------------------------------------------------------------------ #

# ---------------- Setting the variables for bluespec compile  --------------------------------- #
BSC_CMD:= bsc -u -verilog -elab
BSVCOMPILEOPTS:= +RTS -K40000M -RTS -check-assert  -keep-fires -opt-undetermined-vals \
									$(suppresswarn) -remove-false-rules -remove-empty-rules -remove-starved-rules \
									-remove-dollar -unspecified-to X
BSVLINKOPTS:=-parallel-sim-link 8 -keep-fires
VERILOGDIR:=./verilog/
BSVBUILDDIR:=./bsv_build/
BSVOUTDIR:=./bin
#ifeq (, $(wildcard ${HWTOOLS_DIR}/insert_license.sh))
#  VERILOG_FILTER:= -verilog-filter ${BLUESPECDIR}/bin/basicinout \
									 -verilog-filter ./rename_translate.sh
#else
 # VERILOG_FILTER:= -verilog-filter ${BLUESPECDIR}/bin/basicinout \
									 -verilog-filter ${HWTOOLS_DIR}/insert_license.sh \
									 -verilog-filter ./rename_translate.sh
	#VERILOGLICENSE:= cp ${HWTOOLS_DIR}/IITM_LICENSE.txt ${VERILOGDIR}/IITM_LICENSE.txt
#endif
# ------------------------------------------------------------------------------------------------ #

# ------------------------------------- Makefile TARGETS ----------------------------------------- #
default: generate_verilog link_verilator generate_boot_files
gdb: generate_verilog link_verilator_gdb generate_boot_files

.PHONY: help
help: ## This help dialog.
	@fgrep -h "##" $(MAKEFILE_LIST) | fgrep -v fgrep | sed -e 's/\\$$//' | sed -e 's/##//' | column	-c2 -t -s :

#check-env:
#	@if test -z "$$BLUESPECDIR"; then echo "BLUESPECDIR variable not set"; exit 1; fi;

check-py:
	@if ! [ -a /usr/bin/python3 ] ; then echo "Python3 is required in /usr/bin to run AAPG" ; exit 1; fi;

.PHONY: check-restore
check-restore:
	@if [ "$(define_macros)" != "$(old_define_macros)" ];	then	make clean ;	fi;

.PHONY: update_xlen
update_xlen:
	@echo "XLEN=$(XLEN)" > verification/dts/Makefile.inc

.PHONY: simulate
simulate: ## Simulate the 'out' executable
	@echo Simulation...
	@exec ./$(BSVOUTDIR)/out > log
	@echo Simulation finished

.PHONY: generate_verilog
generate_verilog: ## Generete verilog from BSV
generate_verilog: check-restore #check-env
	@echo Compiling $(TOP_MODULE) in verilog ...
	@mkdir -p $(BSVBUILDDIR);
	@mkdir -p $(VERILOGDIR);
	@echo "old_define_macros = $(define_macros)" > old_vars
	$(BSC_CMD) -vdir $(VERILOGDIR) -bdir $(BSVBUILDDIR) -info-dir $(BSVBUILDDIR)\
  $(define_macros) $(BSVCOMPILEOPTS) $(VERILOG_FILTER) \
  -p $(BSVINCDIR) -g $(TOP_MODULE) $(TOP_DIR)/$(TOP_FILE)  || (echo "BSC COMPILE ERROR"; exit 1)
	@cp ${BLUESPECDIR}/Verilog.Vivado/RegFile.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog.Vivado/BRAM2BELoad.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog.Vivado/BRAM2BE.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog.Vivado/BRAM2.v ${VERILOGDIR}
	@cp ./common_verilog/bram_1r1w.v ${VERILOGDIR}
	@cp ./common_verilog/bram_1rw.v ${VERILOGDIR}
	@cp ./common_verilog/BRAM1Load.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/FIFO2.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/FIFO1.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/FIFO10.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/RevertReg.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/FIFO20.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/FIFOL1.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/SyncFIFO.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/Counter.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/SizedFIFO.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/RegFileLoad.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/SyncReset0.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/SyncRegister.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/MakeClock.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/UngatedClockMux.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/ClockInverter.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/MakeResetA.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/MakeReset0.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/SyncResetA.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/ResetEither.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/SyncHandshake.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/SyncFIFO1.v ${VERILOGDIR}
	@cp common_verilog/signedmul.v ${VERILOGDIR}
	@$(VERILOGLICENSE)
	@echo Compilation finished

.PHONY: link_vcs
link_vcs: ## Generate simulation executable using Synopsys VCS
	@rm -rf $(BSVOUTDIR)
	@mkdir -p $(BSVOUTDIR)
	vcs -LDFLAGS -Wl,--no-as-needed -l vcs_compile.log -sverilog +vpi +v2k -lca +define+TOP=$(TOP_MODULE) $(VCS_MACROS) \
	+define+BSV_TIMESCALE=1ns/1ps +cli+4 +libext+.v +notimingcheck \
	-y $(VERILOGDIR)/ \
	${BLUESPECDIR}/Verilog/main.v -o out
	@mv csrc out* $(BSVOUTDIR)

.PHONY: link_ncverilog
link_ncverilog: ## Generate simulation executable using Cadence NCVerilog
	@echo "Linking $(TOP_MODULE) using ncverilog..."
	@rm -rf work include $(BSVOUTDIR)/work
	@mkdir -p $(BSVOUTDIR)
	@mkdir work
	@echo "define work ./work" > cds.lib
	@echo "define WORK work" > hdl.var
	@ncvlog -64BIT -sv -cdslib ./cds.lib -hdlvar ./hdl.var +define+TOP=$(TOP_MODULE) $(VCS_MACROS)\
	${BLUESPECDIR}/Verilog/main.v \
	-y $(VERILOGDIR)/ \
	-y ${BLUESPECDIR}/Verilog/
	@ncelab  -cdslib ./cds.lib -hdlvar ./hdl.var work.main -timescale 1ns/1ps
	@echo 'ncsim -cdslib ./cds.lib -hdlvar ./hdl.var work.main #> /dev/null' > $(BSVOUTDIR)/out
	@mv work cds.lib hdl.var $(BSVOUTDIR)/
	@chmod +x $(BSVOUTDIR)/out
	@echo Linking finished

.PHONY: link_ncverilog_openocd
link_ncverilog_openocd: ## Generate simulation executable using Synopsys VCS with VPI for GDB
	@echo "Linking $(TOP_MODULE) using ncverilog..."
	@rm -rf work include bin/work
	@mkdir -p bin
	@mkdir work
	@echo "Building RBB VPI"
	@echo "define work ./work" > cds.lib
	@echo "define WORK work" > hdl.var
	@ncvlog -64BIT -sv -cdslib ./cds.lib -hdlvar ./hdl.var +define+TOP=$(TOP_MODULE) \
	${BLUESPECDIR}/Verilog/main.v \
	-y $(VERILOGDIR)/ \
	-y ${BLUESPECDIR}/Verilog/
	@ncelab -64BIT -cdslib ./cds.lib -hdlvar ./hdl.var work.main -loadvpi rbb_vpi.so: -timescale 1ns/1ps
	@echo 'ncsim -64BIT -cdslib ./cds.lib -hdlvar ./hdl.var -loadvpi rbb_vpi.so: work.main #> /dev/null' > $(BSVOUTDIR)/out
	@mv ./*.so $(BSVOUTDIR)/
	@mv work cds.lib hdl.var $(BSVOUTDIR)/
	@chmod +x $(BSVOUTDIR)/out
	@echo Linking finished

.PHONY: link_irun
link_irun:
	@irun -define TOP=mkTbSoC -timescale 1ns/1ps $(VERILOGDIR)/main.v \
	-y $(VERILOGDIR)/ \
	-y ${BLUESPECDIR}/Verilog/

.PHONY: link_msim
link_msim: ## Generate simulation executable using Mentor's ModelSim tool
	@echo "Linking $(TOP_MODULE) using modelsim..."
	@rm -rf work* $(BSVOUTDIR)/*
	@mkdir -p $(BSVOUTDIR)
	vlib work
	vlog -work work +libext+.v+.vqm -y $(VERILOGDIR) -y ${BLUESPECDIR}/Verilog \
		+define+TOP=$(TOP_MODULE) $(VCS_MACROS) ${BLUESPECDIR}/Verilog/main.v \
		./$(VERILOGDIR)/$(TOP_MODULE).v  > compile_log
	mv compile_log ./$(BSVOUTDIR)
	mv work ./$(BSVOUTDIR)
	echo 'vsim -quiet -novopt -lib work -do "run -all; quit" -c main' > $(BSVOUTDIR)/out
	@chmod +x $(BSVOUTDIR)/out
	@echo Linking finished


.PHONY: link_verilator
link_verilator: ## Generate simulation executable using Verilator
	@echo "Linking $(TOP_MODULE) using verilator"
	@mkdir -p $(BSVOUTDIR) obj_dir
	@echo "#define TOPMODULE V$(TOP_MODULE)" > sim_main.h
	@echo '#include "V$(TOP_MODULE).h"' >> sim_main.h
	verilator $(VERILATOR_FLAGS) --cc $(TOP_MODULE).v -y $(VERILOGDIR) -y common_verilog --exe
	@ln -f -s ../sim_main.cpp obj_dir/sim_main.cpp
	@ln -f -s ../sim_main.h obj_dir/sim_main.h
	make $(verilate_fast) VM_PARALLEL_BUILDS=1 -j8 -C obj_dir -f V$(TOP_MODULE).mk
	@cp obj_dir/V$(TOP_MODULE) $(BSVOUTDIR)/out


.PHONY: link_verilator_gdb
link_verilator_gdb: ## Generate simulation executable using Verilator and VPI for GDB
	@echo "Linking Verilator With the Shakti RBB Vpi"
	@mkdir -p bin
	@echo "#define TOPMODULE V$(TOP_MODULE)_edited" >sim_main.h
	@echo '#include "V$(TOP_MODULE)_edited.h"' >> sim_main.h
	@sed  -f devices/jtagdtm/sed_script.txt  $(VERILOGDIR)/$(TOP_MODULE).v > tmp1.v
	@cat  devices/jtagdtm/verilator_config.vlt \
	      devices/jtagdtm/vpi_sv.v \
	      tmp1.v                         > $(VERILOGDIR)/$(TOP_MODULE)_edited.v
	@rm   -f  tmp1.v
	verilator --threads-dpi all --cc $(TOP_MODULE)_edited.v --exe sim_main.cpp devices/jtagdtm/RBB_Shakti.c -y $(VERILOGDIR) $(VERILATOR_FLAGS)
	@ln -f -s ../sim_main.cpp obj_dir/sim_main.cpp
	@ln -f -s ../sim_main.h obj_dir/sim_main.h
	@ln -f -s ./devices/jtagdtm/RBB_Shakti.c obj_dir/RBB_Shakti.c
	@echo "INFO: Linking verilated files"
	make $(verilate_fast) VM_PARALLEL_BUILDS=1 -j8 -C obj_dir -f V$(TOP_MODULE)_edited.mk
	@cp obj_dir/V$(TOP_MODULE)_edited bin/out
	@cp gdb_setup/code.mem* ./bin/
	@echo Linking finished

.PHONY: release-verilog-artifacts
release-verilog-artifacts: ## target to generate verilog artifacts
release-verilog-artifacts: generate_verilog generate_boot_files link_verilator
	@mkdir -p verilog-artifacts
	@mkdir -p verilog-artifacts/sim
	@cp -r ${VERILOGDIR} verilog-artifacts/
	@cp ${CONFIG} verilog-artifacts/
	@cp -r benchmarks verilog-artifacts/
	@cp ${BSVOUTDIR}/boot.* verilog-artifacts/sim
	@cp ${BSVOUTDIR}/out verilog-artifacts/sim/cclass
	@cp ${HWTOOLS_DIR}/IITM_LICENSE.txt verilog-artifacts/LICENSE.txt
	@mv verilog-artifacts ../

.PHONY: regress
regress: ## To run regressions on the core.
	@SHAKTI_HOME=$$PWD perl -I$(SHAKTI_HOME)/verification/verif-scripts $(SHAKTI_HOME)/verification/verif-scripts/makeRegress.pl $(opts)

.PHONY: test
test: ## To run a single riscv-test on the core.
	@SHAKTI_HOME=$$PWD CONFIG_LOG=0 perl -I$(SHAKTI_HOME)/verification/verif-scripts $(SHAKTI_HOME)/verification/verif-scripts/makeTest.pl $(opts)

.PHONY: torture
torture: ## To run riscv-tortur on the core.
	@SHAKTI_HOME=$$PWD perl -I$(SHAKTI_HOME)/verification/verif-scripts $(SHAKTI_HOME)/verification/verif-scripts/makeTorture.pl $(opts)

.PHONY: aapg
aapg: ## to generate and run aapf tests
	@SHAKTI_HOME=$$PWD perl -I$(SHAKTI_HOME)/verification/verif-scripts $(SHAKTI_HOME)/verification/verif-scripts/makeAapg.pl $(opts)

.PHONY: csmith
csmith: ## to generate and run csmith tests
	@SHAKTI_HOME=$$PWD perl -I$(SHAKTI_HOME)/verification/verif-scripts $(SHAKTI_HOME)/verification/verif-scripts/makeCSmith.pl $(opts)

.PHONY: generate_boot_files
generate_boot_files: ## to generate boot files for simulation
generate_boot_files: update_xlen
	@mkdir -p bin
	@cd verification/dts/; make;
	@cut -c1-8 verification/dts/boot.hex > bin/boot.MSB
	@if [ "$(XLEN)" = "64" ]; then\
	  cut -c9-16 verification/dts/boot.hex > bin/boot.LSB;\
    else cp bin/boot.MSB bin/boot.LSB;\
  fi

.PHONY: patch
patch:
	@cd $(SHAKTI_HOME)/verification/riscv-tests/env && git apply $(SHAKTI_HOME)/verification/patches/riscv-tests-shakti-signature.patch

.PHONY: unpatch
unpatch:
	@cd $(SHAKTI_HOME)/verification/riscv-tests/env && git apply -R $(SHAKTI_HOME)/verification/patches/riscv-tests-shakti-signature.patch

.PHONY: merge_cov
merge_cov:
	cd $(SHAKTI_HOME)/verification/workdir && ln -s $(SHAKTI_HOME)/verilog verilog
	verilator_coverage --write merged.dat $(SHAKTI_HOME)/verification/workdir/*/*/*/coverage.dat	
	verilator_coverage --annotate logs merged.dat
	verilator_coverage --rank $(SHAKTI_HOME)/verification/workdir/*/*/*/coverage.dat	
	rm -rf $(SHAKTI_HOME)/verification/workdir/*/*/*/coverage.dat	

.PHONY: yml
yml:
	@SHAKTI_HOME=$$PWD python3 $(SHAKTI_HOME)/verification/verif-scripts/gen_yml.py $(opts)

.PHONY: clean
clean:
	rm -rf $(BSVBUILDDIR) *.log $(BSVOUTDIR) obj_dir
	rm -f *.jou rm *.log *.mem old_vars log

clean_verilog: clean
	rm -rf verilog/
	rm -rf fpga/
	rm -rf INCA*
	rm -rf work
	rm -f ./ncvlog.*
	rm -f irun.*

clean_verif:
	rm -rf verification/workdir/*
	rm -rf verification/riscv-torture/output/riscv-torture

restore: clean_verilog
