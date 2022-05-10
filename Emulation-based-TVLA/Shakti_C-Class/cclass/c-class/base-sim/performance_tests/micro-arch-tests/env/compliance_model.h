#ifndef _COMPLIANCE_MODEL_H
#define _COMPLIANCE_MODEL_H
#include "encoding.h"

#define RVMODEL_DATA_SECTION \
        .pushsection .tohost,"aw",@progbits;                            \
        .align 8; .global tohost; tohost: .dword 0;                     \
        .align 8; .global fromhost; fromhost: .dword 0;                 \
        .popsection;                                                    \
        .align 8; .global begin_regstate; begin_regstate:               \
        .word 128;                                                      \
        .align 8; .global end_regstate; end_regstate:                   \
        .word 4;

//RV_COMPLIANCE_HALT
#define RVMODEL_HALT                                              \
shakti_end:                                                             \
    uart_end: \
      li t1, 0x11300;\
      lb a1, 12(t1);\
      andi a1, a1, 0x1;\
      beqz a1, uart_end;\
      li t6, 0x20000;\
      sw t5, 12(t6);\
      li t6, 0x20000;                                                   \
      la t5, begin_signature;                                           \
      sw t5, 0(t6);                                                     \
      la t5, end_signature;                                             \
      sw t5, 8(t6);                                                     \
      sw t5, 12(t6);  

#define RVMODEL_BOOT

//RV_COMPLIANCE_DATA_BEGIN
#define RVMODEL_DATA_BEGIN                                              \
  RVMODEL_DATA_SECTION                                                        \
  .align 4; .global begin_signature; begin_signature:

//RV_COMPLIANCE_DATA_END
#define RVMODEL_DATA_END                                                      \
        .align 4; .global end_signature; end_signature:  

//RVTEST_IO_INIT
#define RVMODEL_IO_INIT \
  li t0, MSTATUS_FS | MSTATUS_XS;\
  csrs mstatus, t0;\
  csrwi mhpmevent3, 1; \
  csrwi mhpmevent4, 2; \
  csrwi mhpmevent5, 3;\
  csrwi mhpmevent6, 4;\
  csrwi mhpmevent7, 5;\
  csrwi mhpmevent8, 6;\
  csrwi mhpmevent9, 7;\
  csrwi mhpmevent10, 8;\
  csrwi mhpmevent11, 9;\
  csrwi mhpmevent12, 10;\
  csrwi mhpmevent13, 11;\
  csrwi mhpmevent14, 12;\
  csrwi mhpmevent15, 13;\
  csrwi mhpmevent16, 14;\
  csrwi mhpmevent17, 15;\
  csrwi mhpmevent18, 16;\
  csrwi mhpmevent19, 17;\
  csrwi mhpmevent20, 18;\
  csrwi mhpmevent21, 19;\
  csrwi mhpmevent22, 20;\
  csrwi mhpmevent23, 21;\
  csrwi mhpmevent24, 22;\
  csrwi mhpmevent25, 23;\
  csrwi mhpmevent26, 24;\
  csrwi mhpmevent27, 25;\
  csrwi mhpmevent28, 26;\
  csrwi mhpmevent29, 27;\
  csrwi mhpmevent30, 28;\
  csrwi mhpmevent31, 29;

//RVTEST_IO_WRITE_STR
#define RVMODEL_IO_WRITE_STR(_R, _STR)\
        .section .data.string;                                              \
    20001:                                                                  \
        .string _STR;                                                       \
        .section .text.init;                                                \
        la a0, 20001b;                                                      \
        jal FN_WriteStr;

    FN_WriteStr:
        mv          t0, a0;
        li          t1, 0x11300;
    10000:
        lbu         a0, (t0);
        addi        t0, t0, 1;
        beq         a0, zero, 10000f;
    20000:
        lb          a1, 12(t1);
        andi        a1, a1, 0x2;
        beqz        a1, 20000b;
        sb          a0, 4(t1);
        j           10000b;
    10000:
        ret;
//RVTEST_IO_CHECK
#define RVMODEL_IO_CHECK()
//RVTEST_IO_ASSERT_GPR_EQ
#define RVMODEL_IO_ASSERT_GPR_EQ(_S, _R, _I)
//RVTEST_IO_ASSERT_SFPR_EQ
#define RVMODEL_IO_ASSERT_SFPR_EQ(_F, _R, _I)
//RVTEST_IO_ASSERT_DFPR_EQ
#define RVMODEL_IO_ASSERT_DFPR_EQ(_D, _R, _I)

#endif // _COMPLIANCE_MODEL_H
