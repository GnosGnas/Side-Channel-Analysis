// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkAES_Wrapper2.h for the primary calling header

#include "VmkAES_Wrapper2_mkSbox2.h"
#include "VmkAES_Wrapper2__Syms.h"

//==========

VL_CTOR_IMP(VmkAES_Wrapper2_mkSbox2) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VmkAES_Wrapper2_mkSbox2::__Vconfigure(VmkAES_Wrapper2__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

VmkAES_Wrapper2_mkSbox2::~VmkAES_Wrapper2_mkSbox2() {
}

void VmkAES_Wrapper2_mkSbox2::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VmkAES_Wrapper2_mkSbox2::_ctor_var_reset\n"); );
    // Body
    CLK = VL_RAND_RESET_I(1);
    getbyte_byte_in = VL_RAND_RESET_I(8);
    getbyte_decrypt_ = VL_RAND_RESET_I(1);
    EN_getbyte = VL_RAND_RESET_I(1);
    getbyte = VL_RAND_RESET_I(8);
    __PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44 = VL_RAND_RESET_I(7);
    __PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49 = VL_RAND_RESET_I(2);
    __PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53 = VL_RAND_RESET_I(2);
    __PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16 = VL_RAND_RESET_I(1);
    __PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4 = VL_RAND_RESET_I(1);
    __PVT__aaa___05Fh195 = VL_RAND_RESET_I(1);
    __PVT__ah___05Fh194 = VL_RAND_RESET_I(1);
    __PVT__al___05Fh193 = VL_RAND_RESET_I(1);
    __PVT__bb___05Fh198 = VL_RAND_RESET_I(1);
    __PVT__bh___05Fh197 = VL_RAND_RESET_I(1);
    __PVT__bl___05Fh196 = VL_RAND_RESET_I(1);
    __PVT__dd___05Fh207 = VL_RAND_RESET_I(1);
    __PVT__dh___05Fh206 = VL_RAND_RESET_I(1);
    __PVT__dl___05Fh205 = VL_RAND_RESET_I(1);
    __PVT__p_BIT_0___05F_h3739 = VL_RAND_RESET_I(1);
    __PVT__p_BIT_1___05F_h3571 = VL_RAND_RESET_I(1);
    __PVT__p_BIT_2___05F_h3656 = VL_RAND_RESET_I(1);
    __PVT__p_BIT_3___05F_h3614 = VL_RAND_RESET_I(1);
    __PVT__p___05Fh2623 = VL_RAND_RESET_I(1);
    __PVT__p___05Fh3262 = VL_RAND_RESET_I(1);
    __PVT__qq_BIT_1___05F_h3821 = VL_RAND_RESET_I(1);
    __PVT__qq_BIT_2___05F_h3759 = VL_RAND_RESET_I(1);
    __PVT__qq_BIT_3___05F_h3591 = VL_RAND_RESET_I(1);
    __PVT__qq___05Fh2624 = VL_RAND_RESET_I(1);
    __PVT__qq___05Fh3263 = VL_RAND_RESET_I(1);
    __PVT__r1___05Fh27 = VL_RAND_RESET_I(1);
    __PVT__r3___05Fh29 = VL_RAND_RESET_I(1);
    __PVT__r4___05Fh30 = VL_RAND_RESET_I(1);
    __PVT__r5___05Fh31 = VL_RAND_RESET_I(1);
    __PVT__r6___05Fh32 = VL_RAND_RESET_I(1);
    __PVT__r7___05Fh33 = VL_RAND_RESET_I(1);
    __PVT__r8___05Fh34 = VL_RAND_RESET_I(1);
    __PVT__r9___05Fh35 = VL_RAND_RESET_I(1);
    __PVT__sa___05Fh299 = VL_RAND_RESET_I(1);
    __PVT__sb___05Fh300 = VL_RAND_RESET_I(1);
    __PVT__sd___05Fh303 = VL_RAND_RESET_I(1);
    __PVT__t10___05Fh53 = VL_RAND_RESET_I(1);
    __PVT__t1___05Fh44 = VL_RAND_RESET_I(1);
    __PVT__t2___05Fh45 = VL_RAND_RESET_I(1);
    __PVT__t3___05Fh46 = VL_RAND_RESET_I(1);
    __PVT__t4___05Fh47 = VL_RAND_RESET_I(1);
    __PVT__t5___05Fh48 = VL_RAND_RESET_I(1);
    __PVT__t6___05Fh49 = VL_RAND_RESET_I(1);
    __PVT__t7___05Fh50 = VL_RAND_RESET_I(1);
    __PVT__t8___05Fh51 = VL_RAND_RESET_I(1);
    __PVT__t9___05Fh52 = VL_RAND_RESET_I(1);
    __PVT__x___05Fh1386 = VL_RAND_RESET_I(1);
    __PVT__x___05Fh1488 = VL_RAND_RESET_I(1);
    __PVT__x___05Fh1688 = VL_RAND_RESET_I(1);
    __PVT__x___05Fh2223 = VL_RAND_RESET_I(1);
    __PVT__x___05Fh2409 = VL_RAND_RESET_I(1);
    __PVT__x___05Fh2519 = VL_RAND_RESET_I(1);
    __PVT__x___05Fh2522 = VL_RAND_RESET_I(1);
    __PVT__x___05Fh2642 = VL_RAND_RESET_I(1);
    __PVT__x___05Fh2744 = VL_RAND_RESET_I(1);
    __PVT__x___05Fh2965 = VL_RAND_RESET_I(1);
    __PVT__x___05Fh2968 = VL_RAND_RESET_I(1);
    __PVT__x___05Fh3203 = VL_RAND_RESET_I(1);
    __PVT__x___05Fh327 = VL_RAND_RESET_I(1);
    __PVT__x___05Fh3291 = VL_RAND_RESET_I(1);
    __PVT__x___05Fh3512 = VL_RAND_RESET_I(1);
    __PVT__x___05Fh390 = VL_RAND_RESET_I(1);
    __PVT__y___05Fh2027 = VL_RAND_RESET_I(1);
    __PVT__y___05Fh2082 = VL_RAND_RESET_I(1);
    __PVT__y___05Fh2237 = VL_RAND_RESET_I(1);
    __PVT__y___05Fh2523 = VL_RAND_RESET_I(1);
    __PVT__y___05Fh2643 = VL_RAND_RESET_I(1);
    __PVT__y___05Fh2969 = VL_RAND_RESET_I(1);
    __PVT__y___05Fh328 = VL_RAND_RESET_I(1);
}
