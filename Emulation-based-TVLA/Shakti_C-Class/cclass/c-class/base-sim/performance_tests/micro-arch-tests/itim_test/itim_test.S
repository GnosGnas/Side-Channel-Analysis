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

    RVMODEL_IO_INIT
    RVMODEL_IO_ASSERT_GPR_EQ(x31, x0, 0x00000000)
    RVMODEL_IO_WRITE_STR(x31, "# Test Begin\n")

    # ---------------------------------------------------------------------------------------------
    RVTEST_CASE(1,"check ISA:=regex(.*I.*); \
                        def TEST_CASE_1=True")
    RVMODEL_IO_WRITE_STR(x31, "#Test-1 ITIM TEST\n");

    la a0, trap_vector
    csrw mtvec, a0

    // first change the base and bound and check is access fault is generated or not
    li a1, 0x10000000
    li a2, 0x10000FFF
    csrw 0x7c5, a1
    csrw 0x7c6, a2
    la a1, pass
    csrw  mepc, a1


    li a3, 0x10000000
    la a1, itim_inst
    lw a2, (a1)
    sw a2, (a3)

    lw a2, 4(a1)
    sw a2, 4(a3)
    
    lw a2, 8(a1)
    sw a2, 8(a3)

    fence.i

    jalr a3

    j fail
    // trap_rountine
    trap_vector:
      csrr t0, mcause
      j fail

    itim_inst:
      mret

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

test_A1_data:
    .dword 0
test_A2_data:
    .dword 1
test_A3_data:
    .dword -1
test_A4_data:
    .dword 0x7FFFFFFF
test_A5_data:
    .dword 0x80000000
test_B_data:
    .dword 0x0000ABCD
test_C_data:
    .dword 0x12345678
test_D_data:
    .dword 0xFEDCBA98
test_E_data:
    .dword 0x36925814

# Output data section.
RVMODEL_DATA_BEGIN


RVMODEL_DATA_END
