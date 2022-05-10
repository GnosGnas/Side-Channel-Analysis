# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VmkTbSoc.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VmkTbSoc \
	VmkTbSoc__1 \
	VmkTbSoc__2 \
	VmkTbSoc__3 \
	VmkTbSoc__4 \
	VmkTbSoc__5 \
	VmkTbSoc__6 \
	VmkTbSoc__7 \
	VmkTbSoc__8 \
	VmkTbSoc__9 \
	VmkTbSoc__10 \
	VmkTbSoc__11 \
	VmkTbSoc__12 \
	VmkTbSoc__13 \
	VmkTbSoc__14 \
	VmkTbSoc__15 \
	VmkTbSoc__16 \
	VmkTbSoc__17 \
	VmkTbSoc__18 \
	VmkTbSoc__19 \
	VmkTbSoc__20 \
	VmkTbSoc__21 \
	VmkTbSoc__22 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VmkTbSoc__Slow \
	VmkTbSoc__1__Slow \
	VmkTbSoc__2__Slow \
	VmkTbSoc__3__Slow \
	VmkTbSoc__4__Slow \
	VmkTbSoc__5__Slow \
	VmkTbSoc__6__Slow \
	VmkTbSoc__7__Slow \
	VmkTbSoc__8__Slow \
	VmkTbSoc__9__Slow \
	VmkTbSoc__10__Slow \
	VmkTbSoc__11__Slow \
	VmkTbSoc__12__Slow \
	VmkTbSoc__13__Slow \
	VmkTbSoc__14__Slow \
	VmkTbSoc__15__Slow \
	VmkTbSoc__16__Slow \
	VmkTbSoc__17__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VmkTbSoc__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
