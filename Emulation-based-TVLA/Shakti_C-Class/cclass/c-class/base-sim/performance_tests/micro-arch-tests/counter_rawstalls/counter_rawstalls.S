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
    RVMODEL_IO_WRITE_STR(x31, "#Test-1 Check raw stalls count\n");
    
    # initialize 
    li t2, 1
    csrwi EVENT_REG, 9
    csrw COUNTER_REG, x0
   
    la t4, test_data1
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    addi t2, t2, 11   # on dcache miss condition raw stalls = 12 cycles
    csrw COUNTER_REG, x0
 	  
    lw t5, (t4)        
    addi t5, t5, 1
    csrr t0, COUNTER_REG
    bne t0, t2, fail

    addi t2, t2, 1     # on dcache hit condition, raw stalls = 1 cycle

    # load followed by mul
    la t4, test_data2
    li t2, 12             # on dcache miss, raw stalls = 12 cycles
    csrw COUNTER_REG, x0

 	  lw t5, 100(t4)        
    mul t5, t5, t2
    csrr t0, COUNTER_REG
    bne t0, t2, fail
    
    addi t2, t2, 1     # on dcache hit condition, raw stalls = 1 cycle
 	  
    lw t5, 100(t4)        
    mul t5, t5, t2
    csrr t0, COUNTER_REG
    bne t0, t2, fail

    # load followed by div
    la t4, test_data2
    li t2, 12             # on dcache miss, raw stalls = 12 cycles
    csrw COUNTER_REG, x0

 	  lw t5, 200(t4)        
    div t5, t5, t2
    csrr t0, COUNTER_REG
    bne t0, t2, fail
    
    addi t2, t2, 1     # on dcache hit condition, raw stalls = 1 cycle
 	  
    lw t5, 200(t4)        
    div t5, t5, t2
    csrr t0, COUNTER_REG
    bne t0, t2, fail

#if __riscv_xlen == 64
    # sw followed by lw
    la t4, test_data2
    li t2, 1             # on dcache miss, raw stalls = 12 cycles
    csrw COUNTER_REG, x0

    sd t5, 400(t4)
    ld t5, 400(t4)        
    div t5, t5, t2
    csrr t0, COUNTER_REG
    bne t0, t2, fail
    
    # ld miss followed by store miss
    addi t2, t2, 12     # on dcache  load hit condition from store buffer, raw stalls = 1 cycle
 	 
    ld t5, 800(t4)
    sd t5, 1000(t4)
    csrr t0, COUNTER_REG
    bne t0, t2, fail


    # load followed by mul
    la t4, test_data2
    li t2, 12             # on dcache miss, raw stalls = 12 cycles
    csrw COUNTER_REG, x0

 	  ld t5, 600(t4)        
    mul t5, t5, t2
    csrr t0, COUNTER_REG
    bne t0, t2, fail
    
    addi t2, t2, 1     # on dcache hit condition, raw stalls = 1 cycle
 	  
    ld t5, 600(t4)        
    mul t5, t5, t2
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
    .dword 0xabcd

# Output data section.
RVMODEL_DATA_BEGIN


RVMODEL_DATA_END
