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
    RVMODEL_IO_WRITE_STR(x31, "#Test-1 Check jump and branch count\n");
    
    # braches  
    # initialize 
    csrwi EVENT_REG, 6
    csrw COUNTER_REG, x0
    
    li t4, 10
    li t5, 11

    li t2, 1
    bne t4, t5, target1
    nop
    nop
    nop
target1:
    nop
    csrr t0, COUNTER_REG
    bne t0, t2, fail
    addi t2, t2, 1

    li t4, 10
    li t5, 10
    addi t2, t2, 1
    bne t4, t5, target2
    nop
    nop
    nop
target2:
    nop
    csrr t0, COUNTER_REG
    bne t0, t2, fail
    addi t2, t2, 1
   

    li t4, 10
    li t5, 11

    addi t2, t2, 1
    beq t4, t5, target3
    nop
    nop
    nop
target3:
    nop
    csrr t0, COUNTER_REG
    bne t0, t2, fail
    addi t2, t2, 1

    li t4, 10
    li t5, 10
    addi t2, t2, 1
    beq t4, t5, target4
    nop
    nop
    nop
target4:
    nop
    csrr t0, COUNTER_REG
    bne t0, t2, fail
    addi t2, t2, 1


    li t4, 10
    li t5, 11

    addi t2, t2, 1
    blt t4, t5, target5
    nop
    nop
    nop
target5:
    nop
    csrr t0, COUNTER_REG
    bne t0, t2, fail
    addi t2, t2, 1

    li t4, 11
    li t5, 10
    addi t2, t2, 1
    blt t4, t5, target6
    nop
    nop
    nop
target6:
    nop
    csrr t0, COUNTER_REG
    bne t0, t2, fail
    addi t2, t2, 1


    li t4, 10
    li t5, 11

    addi t2, t2, 1
    bge t4, t5, target7
    nop
    nop
    nop
target7:
    nop
    csrr t0, COUNTER_REG
    bne t0, t2, fail
    addi t2, t2, 1

    li t4, 11
    li t5, 10
    addi t2, t2, 1
    bge t4, t5, target8
    nop
    nop
    nop
target8:
    nop
    csrr t0, COUNTER_REG
    bne t0, t2, fail
    addi t2, t2, 1


    li t4, 10
    li t5, 11

    addi t2, t2, 1
    bltu t4, t5, target9
    nop
    nop
    nop
target9:
    nop
    csrr t0, COUNTER_REG
    bne t0, t2, fail
    addi t2, t2, 1

    li t4, 11
    li t5, 10
    addi t2, t2, 1
    bltu t4, t5, target10
    nop
    nop
    nop
target10:
    nop
    csrr t0, COUNTER_REG
    bne t0, t2, fail
    addi t2, t2, 1


    li t4, 10
    li t5, 11

    addi t2, t2, 1
    bgeu t4, t5, target11
    nop
    nop
    nop
target11:
    nop
    csrr t0, COUNTER_REG
    bne t0, t2, fail
    addi t2, t2, 1

    li t4, 11
    li t5, 10
    addi t2, t2, 1
    bgeu t4, t5, target12
    nop
    nop
    nop
target12:
    nop
    csrr t0, COUNTER_REG
    bne t0, t2, fail
    addi t2, t2, 1


  # jumps
    # initialize 
    csrwi EVENT_REG, 5
    csrw COUNTER_REG, x0
    li t2, 1
    jal target13
    nop
    nop
target13:
    csrr t0, COUNTER_REG
    bne t0, t2, fail
    nop
    nop


    addi t2,t2, 1
    la t4, target14
    jalr x5, (t4)
    nop
    nop
target14:
    csrr t0, COUNTER_REG
    bne t0, t2, fail
    addi t2, t2, 1
    nop
    nop

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
    .dword 0xabcd

# Output data section.
RVMODEL_DATA_BEGIN


RVMODEL_DATA_END
