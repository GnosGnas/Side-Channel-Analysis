#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#      * Redistributions of source code must retain the above copyright
#        notice, this list of conditions and the following disclaimer.
#      * Redistributions in binary form must reproduce the above copyright
#        notice, this list of conditions and the following disclaimer in the
#        documentation and/or other materials provided with the distribution.
#      * Neither the name of the Codasip Ltd., Imperas Software Ltd. nor the
#        names of its contributors may be used to endorse or promote products
#        derived from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
# IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
# THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
# PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL Codasip Ltd., Imperas Software Ltd.
# BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
# DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
# LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
# ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
# THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include "compliance_test.h"
#include "compliance_model.h"

RVTEST_ISA("RV32IF")

# Test Virtual Machine (TVM) used by program.


# Test code region.
RVTEST_CODE_BEGIN

    RVMODEL_IO_INIT
    RVMODEL_IO_ASSERT_GPR_EQ(x31, x0, 0x00000000)
    RVMODEL_IO_WRITE_STR(x31, "# Test Begin\n")

    # ---------------------------------------------------------------------------------------------
    RVTEST_CASE(1,"check ISA:=regex(.*I.*); \
                        def TEST_CASE_1=True")
    RVMODEL_IO_WRITE_STR(x31, "#Test-1 Check Exception Count\n");
    
    # initialize 
    li t2, 1
    csrwi EVENT_REG, 2    
    csrw COUNTER_REG, x0
    csrr t3, mtvec
    la t4, mtvec_handler
    csrw mtvec, t4
   
#if __riscv_xlen == 64
#    fcvt.l.s t5, ft4          
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
#
#    addi t2, t2, 1
#
#    fcvt.lu.s t5, ft4          
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
#
#    addi t2, t2, 1
#
#    fcvt.s.l ft5, t4          
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
#
#    addi t2, t2, 1
#
#    fcvt.s.lu ft5, t4          
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
#
#    addi t2, t2, 1
#
#endif
    .word 0
    csrr t0, COUNTER_REG
    #bne t0, t2, fail

    addi t2, t2, 1
    
    .word 0
    csrr t0, COUNTER_REG
    bne t0, t2, fail


#    #fsw ft5, (t3)          
#    #csrr t0, COUNTER_REG
#    #bne t0, t2, fail
#
#    #addi t2, t2, 1
#
#    fmadd.s ft5, ft5, ft5, ft4          
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
#
#    addi t2, t2, 1
#
#    fmsub.s ft10, ft4, fs2, ft0 
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
#
#    addi t2, t2, 1
#
#    fnmsub.s ft0, fa1, fa1, fs5  
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
#
#    addi t2, t2, 1
#
#    fnmadd.s ft0, fa1, fa1, fs5  
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
#
#    addi t2, t2, 1
#
#    fadd.s ft0, fs3, ft1       
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
#
#    addi t2, t2, 1
#
#    fsub.s ft0, fs3, ft1       
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
#
#    addi t2, t2, 1
#
#    fsub.s ft0, fs3, ft1       
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
#
#    addi t2, t2, 1
#
#    fsub.s ft0, fs3, ft1       
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
#
#    addi t2, t2, 1
#
#    fmul.s ft0, fs3, ft1       
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
#
#    addi t2, t2, 1
#
#    fdiv.s ft0, fs3, ft1       
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
#
#    addi t2, t2, 1
#
#    fsqrt.s ft8, fs2       
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
#
#    addi t2, t2, 1
#
#    fsgnj.s ft0, fs3, ft1       
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
#
#    addi t2, t2, 1
#
#    fsgnjn.s ft0, fs3, ft1       
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
#
#    addi t2, t2, 1
#
#    fsgnjx.s ft0, fs3, ft1       
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
#
#    addi t2, t2, 1
#
#    fmin.s ft0, fs3, ft1       
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
#
#    addi t2, t2, 1
#
#    fmax.s ft0, fs3, ft1       
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
#
#    addi t2, t2, 1
#
#    fcvt.wu.s t4, ft10             
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
#
#    addi t2, t2, 1
#
#    fcvt.w.s t5, ft11             
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
#
#    addi t2, t2, 1
#
#    fmv.x.w t4, fs3       
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
#
#    addi t2, t2, 1
#
#    feq.s t4, fs3, ft1       
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
#
#    addi t2, t2, 1
#
#    flt.s t4, fs3, ft1       
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
#
#    addi t2, t2, 1
#
#    fle.s t4, fs3, ft1       
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
#
#    addi t2, t2, 1
#
#    fclass.s t4, fs3       
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
#
#    addi t2, t2, 1
#
#    fcvt.s.wu ft0, t4             
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
#
#    addi t2, t2, 1
#
#    fcvt.s.w ft0, t4             
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
#
#    addi t2, t2, 1
#
#    fmv.w.x ft0, t4             
#    csrr t0, COUNTER_REG
#    bne t0, t2, fail
    csrw mtvec, t3
  pass:
    RVMODEL_IO_WRITE_STR(x31, "#Test-1 Passed\n");
    j HALT
  fail:
    RVMODEL_IO_WRITE_STR(x31, "#Test-1 Failed\n");
    j HALT

 # ---------------------------------------------------------------------------------------------
  HALT:
    RVMODEL_HALT

mtvec_handler:
    csrr t4, mepc
    addi t4, t4, 4
    csrw mepc, t4
    mret

RVTEST_CODE_END

# Input data section.
    .data

test_data:
    .dword 0

# Output data section.
RVMODEL_DATA_BEGIN


RVMODEL_DATA_END
