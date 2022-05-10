#=======================================================================
# UCB CS250 Makefile fragment for benchmarks
#-----------------------------------------------------------------------
#
# Each benchmark directory should have its own fragment which
# essentially lists what the source files are and how to link them
# into an riscv and/or host executable. All variables should include
# the benchmark name as a prefix so that they are unique.
#

dhry_c_src = \
	dhry_1.c \
	dhry_2.c \
	syscalls.c \

dhry_riscv_src = \
	crt.S \

dhry_c_objs     = $(patsubst %.c, %.o, $(dhry_c_src))
dhry_riscv_objs = $(patsubst %.S, %.o, $(dhry_riscv_src))

dhry_host_bin = dhry.host
$(dhry_host_bin): $(dhry_c_src)
	$(HOST_COMP) $^ -o $(dhry_host_bin)

dhry_riscv_bin = dhry.riscv
$(dhry_riscv_bin): $(dhry_c_objs) $(dhry_riscv_objs)
	$(RISCV_LINK) $(dhry_c_objs) $(dhry_riscv_objs) \
    -o $(dhry_riscv_bin) $(RISCV_LINK_OPTS)

junk += $(dhry_c_objs) $(dhry_riscv_objs) \
        $(dhry_host_bin) $(dhry_riscv_bin)
