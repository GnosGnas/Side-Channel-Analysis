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

RVTEST_ISA("RV32IM")

# Test Virtual Machine (TVM) used by program.


# Test code region.
RVTEST_CODE_BEGIN
    .option norvc

    RVMODEL_IO_INIT
    RVMODEL_IO_ASSERT_GPR_EQ(x31, x0, 0x00000000)
    RVMODEL_IO_WRITE_STR(x31, "# Test Begin\n")

    # ---------------------------------------------------------------------------------------------
    RVTEST_CASE(1,"check ISA:=regex(.*I.*); \
                        def TEST_CASE_1=True")
    RVMODEL_IO_WRITE_STR(x31, "#Test-1 Check dcache atomic miss count\n");
    
    # dcache atomic miss 
    # initialize 
    csrwi EVENT_REG, 23
    csrw COUNTER_REG, x0
    
    la t4, test_data1
    li t2, 1

    fence
    
    amoswap.w t5, t3, (t4)
    csrr t0, COUNTER_REG
    bne t0, t2, fail

    addi t4, t4, BLOCKSIZE
    addi t2, t2, 1
    amoadd.w t5, t3, (t4)
    csrr t0, COUNTER_REG
    bne t0, t2, fail

    addi t4, t4, BLOCKSIZE
    addi t2, t2, 1
    amoxor.w t5, t3, (t4)
    csrr t0, COUNTER_REG
    bne t0, t2, fail

    addi t4, t4, BLOCKSIZE
    addi t2, t2, 1
    amoand.w t5, t3, (t4)
    csrr t0, COUNTER_REG
    bne t0, t2, fail

    addi t4, t4, BLOCKSIZE
    addi t2, t2, 1
    amoor.w t5, t3, (t4)
    csrr t0, COUNTER_REG
    bne t0, t2, fail

    addi t4, t4, BLOCKSIZE
    addi t2, t2, 1
    amomin.w t5, t3, (t4)
    csrr t0, COUNTER_REG
    bne t0, t2, fail

    
    addi t4, t4, BLOCKSIZE
    addi t2, t2, 1
    amomax.w t5, t3, (t4)
    csrr t0, COUNTER_REG
    bne t0, t2, fail

    addi t4, t4, BLOCKSIZE
    addi t2, t2, 1
    amominu.w t5, t3, (t4)
    csrr t0, COUNTER_REG
    bne t0, t2, fail

    addi t4, t4, BLOCKSIZE
    addi t2, t2, 1
    amomaxu.w t5, t3, (t4)
    csrr t0, COUNTER_REG
    bne t0, t2, fail

#if __riscv_xlen == 64
    addi t4, t4, BLOCKSIZE
    addi t2, t2, 1
    amoswap.d t5, t3, (t4)
    csrr t0, COUNTER_REG
    bne t0, t2, fail

    addi t4, t4, BLOCKSIZE
    addi t2, t2, 1
    amoadd.d t5, t3, (t4)
    csrr t0, COUNTER_REG
    bne t0, t2, fail

    addi t4, t4, BLOCKSIZE
    addi t2, t2, 1
    amoxor.d t5, t3, (t4)
    csrr t0, COUNTER_REG
    bne t0, t2, fail

    addi t4, t4, BLOCKSIZE
    addi t2, t2, 1
    amoand.d t5, t3, (t4)
    csrr t0, COUNTER_REG
    bne t0, t2, fail

    addi t4, t4, BLOCKSIZE
    addi t2, t2, 1
    amoor.d t5, t3, (t4)
    csrr t0, COUNTER_REG
    bne t0, t2, fail

    addi t4, t4, BLOCKSIZE
    addi t2, t2, 1
    amomin.d t5, t3, (t4)
    csrr t0, COUNTER_REG
    bne t0, t2, fail

    
    addi t4, t4, BLOCKSIZE
    addi t2, t2, 1
    amomax.d t5, t3, (t4)
    csrr t0, COUNTER_REG
    bne t0, t2, fail

    addi t4, t4, BLOCKSIZE
    addi t2, t2, 1
    amominu.d t5, t3, (t4)
    csrr t0, COUNTER_REG
    bne t0, t2, fail

    addi t4, t4, BLOCKSIZE
    addi t2, t2, 1
    amomaxu.d t5, t3, (t4)
    csrr t0, COUNTER_REG
    bne t0, t2, fail

#endif



  pass:
    RVMODEL_IO_WRITE_STR(x31, "#Test-1 Passed\n");
    j HALT
  fail:
    RVMODEL_IO_WRITE_STR(x31, "#Test-1 Failed\n");
    j HALT

 # ---------------------------------------------------------------------------------------------
  HALT:
    RVMODEL_HALT

RVTEST_CODE_END

# Input data section.
    .data

test_data1:
    .dword 0xdeadbeaf

test_data2:
    .fill 100, 4, -1

# Output data section.
RVMODEL_DATA_BEGIN


RVMODEL_DATA_END
