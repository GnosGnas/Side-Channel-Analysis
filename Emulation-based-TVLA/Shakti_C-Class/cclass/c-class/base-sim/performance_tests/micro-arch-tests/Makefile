#=======================================================================
# UCB VLSI FLOW: Makefile for riscv-bmarks
#-----------------------------------------------------------------------
# Yunsup Lee (yunsup@cs.berkeley.edu)
#

XLEN ?= 64

default: all

src_dir = .

instname = riscv-bmarks
instbasedir = $(UCB_VLSI_HOME)/install

#--------------------------------------------------------------------
# Sources
#--------------------------------------------------------------------

bmarks = \
	counter_test1\
	counter_test2\
	counter_muldiv\
	counter_floats\
	counter_exceptions\
	counter_csrops\
  counter_dcache_access\
  counter_dcache_readmiss\
  counter_jump_branch\
  counter_rawstalls\
  counter_exstalls\
	counter_fb_hits\
	counter_dcache_writemiss\
	counter_dcache_atomic_miss\
  counter_icache_access\
  counter_icache_nc_access\
  counter_icache_miss\
  counter_icache_fb_hit\
  counter_dcache_fb_releases\
	counter_misprediction\
  dtim_test\
  itim_test

#--------------------------------------------------------------------
# Build rules
#--------------------------------------------------------------------

DOPTS ?= -DEVENT_REG=mhpmevent9 -DCOUNTER_REG=mhpmcounter9 -DMULSTAGES=2 -DDIVSTAGES=32 \
			-DPIPESTAGES=2 -DNC_READ_ADDR=0x11300 -DNC_WRITE_ADDR=0x2000c -DBLOCKSIZE=64\
			-DHISTLEN=11

RISCV_PREFIX ?= riscv$(XLEN)-unknown-elf-
RISCV_GCC ?= $(RISCV_PREFIX)gcc
RISCV_GCC_OPTS ?= -DPREALLOCATE=1 -mcmodel=medany -static -std=gnu99 -O2 -ffast-math -fno-common -fno-builtin-printf -DCONFIG_RISCV64=True -DXLEN=$(XLEN) -march=rv$(XLEN)imafd
RISCV_LINK ?= $(RISCV_GCC) -T $(src_dir)/env/test.ld $(incs)
RISCV_LINK_OPTS ?= -static -nostdlib -nostartfiles -lm -lgcc -T $(src_dir)/env/test.ld
RISCV_OBJDUMP ?= $(RISCV_PREFIX)objdump -D 
RISCV_SIM ?= ./out +rtldump > /dev/null
OUTDIR= outputs

incs  += -I$(src_dir)/env $(addprefix -I$(src_dir)/, $(bmarks))
objs  :=

define compile_template
$(1).riscv: $(wildcard $(src_dir)/$(1)/*) $(wildcard $(src_dir)/env/*)
	@echo "Compiling: " $$@
	$$(RISCV_GCC) $$(incs) $$(RISCV_GCC_OPTS) $$(DOPTS) -o $$@ $(wildcard $(src_dir)/$(1)/*.S) $(wildcard $(src_dir)/env/*.S) $$(RISCV_LINK_OPTS)
endef

$(foreach bmark,$(bmarks),$(eval $(call compile_template,$(bmark))))

#------------------------------------------------------------
# Build and run benchmarks on riscv simulator

bmarks_riscv_bin  = $(addsuffix .riscv,  $(bmarks))
bmarks_riscv_out  = $(addsuffix .riscv.out,  $(bmarks))
#bmarks_hex 				= $(addsuffix .mem, $(bmarks))

$(bmarks_riscv_out): %.riscv.out: %.riscv
	@echo "-----------------------------------------"
	@$(RISCV_OBJDUMP) $< > $<.dump
	@echo "Generating hex files for " $<
	@elf2hex  8  4194304 $< 2147483648 > code.mem
	@echo "Simulating Benchmark:" $<
	@$(RISCV_SIM)
	@cat app_log
	@cp app_log $@
	@echo "-----------------------------------------"

#$(bmarks_hex): %.mem: %.riscv
#	@echo "Generating hex files for " $@
#	@elf2hex  8  4194304 $< 2147483648 > $@

riscv: $(bmarks_riscv_out)
run: $(bmarks_riscv_out)

junk += $(bmarks_riscv_bin) $(bmarks_riscv_hex) $(bmarks_riscv_out)

#------------------------------------------------------------
# Default

.PHONY: init
init:
	@echo "Copying executable of C-class"
	@cp ../../bin/out .
	@cp ../../bin/boot.* .

all: init riscv

#------------------------------------------------------------
# Install

date_suffix = $(shell date +%Y-%m-%d_%H-%M)
install_dir = $(instbasedir)/$(instname)-$(date_suffix)
latest_install = $(shell ls -1 -d $(instbasedir)/$(instname)* | tail -n 1)

install:
	mkdir $(install_dir)
	cp -r $(bmarks_riscv_bin) $(bmarks_riscv_dump) $(install_dir)

install-link:
	rm -rf $(instbasedir)/$(instname)
	ln -s $(latest_install) $(instbasedir)/$(instname)

#------------------------------------------------------------
# Clean up

clean:
	rm -rf $(objs) $(junk) boot.* out app_log log rtl.dump signature code.mem *.dump
