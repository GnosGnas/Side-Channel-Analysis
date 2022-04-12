// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkAES_Wrapper2.h for the primary calling header

#include "VmkAES_Wrapper2_mkSbox2.h"
#include "VmkAES_Wrapper2__Syms.h"

//==========

VL_INLINE_OPT void VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__16(VmkAES_Wrapper2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__16\n"); );
    VmkAES_Wrapper2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__r6___05Fh32 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_byte_in)));
    this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4 
        = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_byte_in) 
                     >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_byte_in) 
                               >> 4U))));
    this->__PVT__r1___05Fh27 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_byte_in) 
                                       >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_byte_in) 
                                                 >> 5U)));
    this->__PVT__r3___05Fh29 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_byte_in) 
                                       >> 6U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_byte_in)));
    this->__PVT__r7___05Fh33 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_byte_in) 
                                       >> 2U) ^ (IData)(this->__PVT__r1___05Fh27)));
    this->__PVT__r4___05Fh30 = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_byte_in) 
                                          >> 5U) ^ (IData)(this->__PVT__r3___05Fh29))));
    this->__PVT__r8___05Fh34 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_byte_in) 
                                       >> 1U) ^ (IData)(this->__PVT__r3___05Fh29)));
    this->__PVT__r5___05Fh31 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_byte_in) 
                                       >> 4U) ^ (IData)(this->__PVT__r4___05Fh30)));
    this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16 
        = (1U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_decrypt_)
                  ? (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4)
                  : (~ ((IData)(this->__PVT__r7___05Fh33) 
                        ^ (IData)(this->__PVT__r8___05Fh34)))));
    this->__PVT__r9___05Fh35 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(this->__PVT__r8___05Fh34)));
    this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_decrypt_)
            ? ((0x40U & ((0xffffffc0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_byte_in) 
                                         << 2U)) ^ 
                         ((IData)(this->__PVT__r8___05Fh34) 
                          << 6U))) | ((0x20U & ((0x7fffffe0U 
                                                 & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_byte_in) 
                                                    >> 1U)) 
                                                ^ (0xffffffe0U 
                                                   & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_byte_in) 
                                                      << 1U)))) 
                                      | (((IData)(this->__PVT__r9___05Fh35) 
                                          << 4U) | 
                                         ((8U & ((~ 
                                                  (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_byte_in) 
                                                    >> 6U) 
                                                   ^ (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4))) 
                                                 << 3U)) 
                                          | (((IData)(this->__PVT__r7___05Fh33) 
                                              << 2U) 
                                             | ((2U 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_byte_in) 
                                                        >> 3U)) 
                                                    ^ 
                                                    ((IData)(this->__PVT__r6___05Fh32) 
                                                     << 1U))) 
                                                | (1U 
                                                   & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_byte_in) 
                                                       >> 1U) 
                                                      ^ (IData)(this->__PVT__r5___05Fh31)))))))))
            : (((IData)(this->__PVT__r5___05Fh31) << 6U) 
               | ((0x20U & ((0xffffffe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_byte_in) 
                                            << 4U)) 
                            ^ ((IData)(this->__PVT__r4___05Fh30) 
                               << 5U))) | ((0x10U & 
                                            ((~ ((IData)(this->__PVT__r1___05Fh27) 
                                                 ^ (IData)(this->__PVT__r3___05Fh29))) 
                                             << 4U)) 
                                           | ((8U & 
                                               (((0xfffffff8U 
                                                  & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_byte_in) 
                                                     << 2U)) 
                                                 ^ 
                                                 ((IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4) 
                                                  << 3U)) 
                                                ^ ((IData)(this->__PVT__r6___05Fh32) 
                                                   << 3U))) 
                                              | ((4U 
                                                  & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_byte_in)) 
                                                     << 2U)) 
                                                 | (((IData)(this->__PVT__r4___05Fh30) 
                                                     << 1U) 
                                                    | (1U 
                                                       & (~ 
                                                          (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_byte_in) 
                                                            >> 2U) 
                                                           ^ (IData)(this->__PVT__r9___05Fh35)))))))))));
    this->__PVT__al___05Fh193 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 5U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 4U))));
    this->__PVT__bl___05Fh196 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 1U)) 
                                       ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__ah___05Fh194 = (1U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U))));
    this->__PVT__bh___05Fh197 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 3U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 2U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49 
        = (3U & (((2U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                         << 1U)) | (1U & (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U)))) 
                 ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                       >> 4U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53 
        = (3U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                     >> 2U)) ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__x___05Fh1386 = ((IData)(this->__PVT__ah___05Fh194) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__aaa___05Fh195 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                         >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49)));
    this->__PVT__x___05Fh1688 = (1U & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                       & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__bb___05Fh198 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                        >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__y___05Fh2027 = (1U & ((((~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                              | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                             >> 1U)) 
                                         ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 6U)) 
                                               & (~ 
                                                  ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 2U))))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__y___05Fh2082 = (1U & ((((~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                 >> 4U)) 
                                             | (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                         ^ (~ ((IData)(this->__PVT__al___05Fh193) 
                                               & (IData)(this->__PVT__bl___05Fh196)))) 
                                        ^ (~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                              >> 1U))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__x___05Fh1488 = ((IData)(this->__PVT__aaa___05Fh195) 
                                 & (IData)(this->__PVT__bb___05Fh198));
    this->__PVT__x___05Fh390 = (1U & ((((~ ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                            | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53))) 
                                        ^ (~ ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 3U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__y___05Fh328 = (1U & ((((~ ((IData)(this->__PVT__al___05Fh193) 
                                            | (IData)(this->__PVT__bl___05Fh196))) 
                                        ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 5U)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 1U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__sa___05Fh299 = ((IData)(this->__PVT__x___05Fh390) 
                                 ^ (IData)(this->__PVT__y___05Fh2027));
    this->__PVT__sb___05Fh300 = ((IData)(this->__PVT__y___05Fh328) 
                                 ^ (IData)(this->__PVT__y___05Fh2082));
    this->__PVT__x___05Fh327 = (1U & ((~ ((IData)(this->__PVT__sa___05Fh299) 
                                          | (IData)(this->__PVT__sb___05Fh300))) 
                                      ^ (~ ((IData)(this->__PVT__y___05Fh2027) 
                                            & (IData)(this->__PVT__y___05Fh2082)))));
    this->__PVT__y___05Fh2237 = (1U & ((~ ((IData)(this->__PVT__x___05Fh390) 
                                           | (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ ((IData)(this->__PVT__sa___05Fh299) 
                                             & (IData)(this->__PVT__sb___05Fh300)))));
    this->__PVT__sd___05Fh303 = ((IData)(this->__PVT__x___05Fh327) 
                                 ^ (IData)(this->__PVT__y___05Fh2237));
    this->__PVT__x___05Fh2409 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sa___05Fh299));
    this->__PVT__x___05Fh2223 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sb___05Fh300));
    this->__PVT__x___05Fh2968 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__x___05Fh390))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__y___05Fh2969 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2027))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__x___05Fh2522 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__y___05Fh2523 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2082))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__dl___05Fh205 = ((IData)(this->__PVT__x___05Fh2968) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh2642 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__x___05Fh2968));
    this->__PVT__dh___05Fh206 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__y___05Fh2523));
    this->__PVT__y___05Fh2643 = ((IData)(this->__PVT__y___05Fh2523) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh3512 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__al___05Fh193));
    this->__PVT__x___05Fh2965 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__bl___05Fh196));
    this->__PVT__x___05Fh3203 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__ah___05Fh194));
    this->__PVT__x___05Fh2519 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__x___05Fh3291 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49));
    this->__PVT__x___05Fh2744 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53));
    this->__PVT__dd___05Fh207 = ((IData)(this->__PVT__x___05Fh2642) 
                                 ^ (IData)(this->__PVT__y___05Fh2643));
    this->__PVT__qq___05Fh3263 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__qq___05Fh2624 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__p___05Fh3262 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__aaa___05Fh195))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__p___05Fh2623 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__bb___05Fh198))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__qq_BIT_2___05F_h3759 = (1U & (((~ 
                                                 ((IData)(this->__PVT__y___05Fh2523) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 6U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__qq___05Fh3263)));
    this->__PVT__p_BIT_0___05F_h3739 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                                   & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__p_BIT_2___05F_h3656 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2523) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 2U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__qq_BIT_1___05F_h3821 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2968) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 5U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__qq_BIT_3___05F_h3591 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2522) 
                                                  & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__p_BIT_3___05F_h3614 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2522) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 3U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__p_BIT_1___05F_h3571 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2968) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 1U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__t2___05Fh45 = ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                ^ (IData)(this->__PVT__p_BIT_0___05F_h3739));
    this->__PVT__t3___05Fh46 = (1U & ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                      ^ (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 4U)))) 
                                          ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                         ^ (IData)(this->__PVT__qq___05Fh3263))));
    this->__PVT__t1___05Fh44 = ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591));
    this->__PVT__t4___05Fh47 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591))));
    this->__PVT__t6___05Fh49 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))));
    this->__PVT__t9___05Fh52 = ((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                ^ (IData)(this->__PVT__t2___05Fh45));
    this->__PVT__t5___05Fh48 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__t1___05Fh44))));
    this->__PVT__t8___05Fh51 = ((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                ^ (IData)(this->__PVT__t4___05Fh47));
    this->__PVT__t7___05Fh50 = (1U & (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                         ^ (IData)(this->__PVT__t6___05Fh49))));
    this->__PVT__t10___05Fh53 = ((IData)(this->__PVT__t3___05Fh46) 
                                 ^ (IData)(this->__PVT__t5___05Fh48));
    this->getbyte = ((0x80U & ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_decrypt_)
                                    ? (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                          ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821)))
                                    : (IData)(this->__PVT__t4___05Fh47))) 
                               << 7U)) | (0x7fU & (~ 
                                                   ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_decrypt_)
                                                     ? 
                                                    ((((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                                       ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                      << 6U) 
                                                     | ((((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                                          ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                         << 5U) 
                                                        | ((0x10U 
                                                            & ((~ 
                                                                ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                                                 ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))) 
                                                               << 4U)) 
                                                           | ((((IData)(this->__PVT__t8___05Fh51) 
                                                                ^ (IData)(this->__PVT__t9___05Fh52)) 
                                                               << 3U) 
                                                              | ((4U 
                                                                  & ((~ 
                                                                      ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                                                       ^ (IData)(this->__PVT__t7___05Fh50))) 
                                                                     << 2U)) 
                                                                 | (((IData)(this->__PVT__t6___05Fh49) 
                                                                     << 1U) 
                                                                    | (1U 
                                                                       & (~ (IData)(this->__PVT__qq_BIT_2___05F_h3759)))))))))
                                                     : 
                                                    (((IData)(this->__PVT__t1___05Fh44) 
                                                      << 6U) 
                                                     | (((IData)(this->__PVT__t3___05Fh46) 
                                                         << 5U) 
                                                        | (((IData)(this->__PVT__t5___05Fh48) 
                                                            << 4U) 
                                                           | ((((IData)(this->__PVT__t2___05Fh45) 
                                                                ^ (IData)(this->__PVT__t5___05Fh48)) 
                                                               << 3U) 
                                                              | ((((IData)(this->__PVT__t3___05Fh46) 
                                                                   ^ (IData)(this->__PVT__t8___05Fh51)) 
                                                                  << 2U) 
                                                                 | (((IData)(this->__PVT__t7___05Fh50) 
                                                                     << 1U) 
                                                                    | (IData)(this->__PVT__t9___05Fh52)))))))))));
}

VL_INLINE_OPT void VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__1(VmkAES_Wrapper2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__1\n"); );
    VmkAES_Wrapper2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__r6___05Fh32 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__024getbyte_byte_in)));
    this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4 
        = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__024getbyte_byte_in) 
                     >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__024getbyte_byte_in) 
                               >> 4U))));
    this->__PVT__r1___05Fh27 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__024getbyte_byte_in) 
                                       >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__024getbyte_byte_in) 
                                                 >> 5U)));
    this->__PVT__r3___05Fh29 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__024getbyte_byte_in) 
                                       >> 6U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__024getbyte_byte_in)));
    this->__PVT__r7___05Fh33 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__024getbyte_byte_in) 
                                       >> 2U) ^ (IData)(this->__PVT__r1___05Fh27)));
    this->__PVT__r4___05Fh30 = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__024getbyte_byte_in) 
                                          >> 5U) ^ (IData)(this->__PVT__r3___05Fh29))));
    this->__PVT__r8___05Fh34 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__024getbyte_byte_in) 
                                       >> 1U) ^ (IData)(this->__PVT__r3___05Fh29)));
    this->__PVT__r5___05Fh31 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__024getbyte_byte_in) 
                                       >> 4U) ^ (IData)(this->__PVT__r4___05Fh30)));
    this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16 
        = (1U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                  ? (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4)
                  : (~ ((IData)(this->__PVT__r7___05Fh33) 
                        ^ (IData)(this->__PVT__r8___05Fh34)))));
    this->__PVT__r9___05Fh35 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(this->__PVT__r8___05Fh34)));
    this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
            ? ((0x40U & ((0xffffffc0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__024getbyte_byte_in) 
                                         << 2U)) ^ 
                         ((IData)(this->__PVT__r8___05Fh34) 
                          << 6U))) | ((0x20U & ((0x7fffffe0U 
                                                 & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__024getbyte_byte_in) 
                                                    >> 1U)) 
                                                ^ (0xffffffe0U 
                                                   & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__024getbyte_byte_in) 
                                                      << 1U)))) 
                                      | (((IData)(this->__PVT__r9___05Fh35) 
                                          << 4U) | 
                                         ((8U & ((~ 
                                                  (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__024getbyte_byte_in) 
                                                    >> 6U) 
                                                   ^ (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4))) 
                                                 << 3U)) 
                                          | (((IData)(this->__PVT__r7___05Fh33) 
                                              << 2U) 
                                             | ((2U 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__024getbyte_byte_in) 
                                                        >> 3U)) 
                                                    ^ 
                                                    ((IData)(this->__PVT__r6___05Fh32) 
                                                     << 1U))) 
                                                | (1U 
                                                   & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__024getbyte_byte_in) 
                                                       >> 1U) 
                                                      ^ (IData)(this->__PVT__r5___05Fh31)))))))))
            : (((IData)(this->__PVT__r5___05Fh31) << 6U) 
               | ((0x20U & ((0xffffffe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__024getbyte_byte_in) 
                                            << 4U)) 
                            ^ ((IData)(this->__PVT__r4___05Fh30) 
                               << 5U))) | ((0x10U & 
                                            ((~ ((IData)(this->__PVT__r1___05Fh27) 
                                                 ^ (IData)(this->__PVT__r3___05Fh29))) 
                                             << 4U)) 
                                           | ((8U & 
                                               (((0xfffffff8U 
                                                  & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__024getbyte_byte_in) 
                                                     << 2U)) 
                                                 ^ 
                                                 ((IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4) 
                                                  << 3U)) 
                                                ^ ((IData)(this->__PVT__r6___05Fh32) 
                                                   << 3U))) 
                                              | ((4U 
                                                  & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__024getbyte_byte_in)) 
                                                     << 2U)) 
                                                 | (((IData)(this->__PVT__r4___05Fh30) 
                                                     << 1U) 
                                                    | (1U 
                                                       & (~ 
                                                          (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__024getbyte_byte_in) 
                                                            >> 2U) 
                                                           ^ (IData)(this->__PVT__r9___05Fh35)))))))))));
    this->__PVT__al___05Fh193 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 5U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 4U))));
    this->__PVT__bl___05Fh196 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 1U)) 
                                       ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__ah___05Fh194 = (1U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U))));
    this->__PVT__bh___05Fh197 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 3U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 2U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49 
        = (3U & (((2U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                         << 1U)) | (1U & (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U)))) 
                 ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                       >> 4U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53 
        = (3U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                     >> 2U)) ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__x___05Fh1386 = ((IData)(this->__PVT__ah___05Fh194) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__aaa___05Fh195 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                         >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49)));
    this->__PVT__x___05Fh1688 = (1U & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                       & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__bb___05Fh198 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                        >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__y___05Fh2027 = (1U & ((((~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                              | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                             >> 1U)) 
                                         ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 6U)) 
                                               & (~ 
                                                  ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 2U))))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__y___05Fh2082 = (1U & ((((~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                 >> 4U)) 
                                             | (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                         ^ (~ ((IData)(this->__PVT__al___05Fh193) 
                                               & (IData)(this->__PVT__bl___05Fh196)))) 
                                        ^ (~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                              >> 1U))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__x___05Fh1488 = ((IData)(this->__PVT__aaa___05Fh195) 
                                 & (IData)(this->__PVT__bb___05Fh198));
    this->__PVT__x___05Fh390 = (1U & ((((~ ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                            | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53))) 
                                        ^ (~ ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 3U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__y___05Fh328 = (1U & ((((~ ((IData)(this->__PVT__al___05Fh193) 
                                            | (IData)(this->__PVT__bl___05Fh196))) 
                                        ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 5U)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 1U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__sa___05Fh299 = ((IData)(this->__PVT__x___05Fh390) 
                                 ^ (IData)(this->__PVT__y___05Fh2027));
    this->__PVT__sb___05Fh300 = ((IData)(this->__PVT__y___05Fh328) 
                                 ^ (IData)(this->__PVT__y___05Fh2082));
    this->__PVT__x___05Fh327 = (1U & ((~ ((IData)(this->__PVT__sa___05Fh299) 
                                          | (IData)(this->__PVT__sb___05Fh300))) 
                                      ^ (~ ((IData)(this->__PVT__y___05Fh2027) 
                                            & (IData)(this->__PVT__y___05Fh2082)))));
    this->__PVT__y___05Fh2237 = (1U & ((~ ((IData)(this->__PVT__x___05Fh390) 
                                           | (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ ((IData)(this->__PVT__sa___05Fh299) 
                                             & (IData)(this->__PVT__sb___05Fh300)))));
    this->__PVT__sd___05Fh303 = ((IData)(this->__PVT__x___05Fh327) 
                                 ^ (IData)(this->__PVT__y___05Fh2237));
    this->__PVT__x___05Fh2409 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sa___05Fh299));
    this->__PVT__x___05Fh2223 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sb___05Fh300));
    this->__PVT__x___05Fh2968 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__x___05Fh390))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__y___05Fh2969 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2027))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__x___05Fh2522 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__y___05Fh2523 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2082))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__dl___05Fh205 = ((IData)(this->__PVT__x___05Fh2968) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh2642 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__x___05Fh2968));
    this->__PVT__dh___05Fh206 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__y___05Fh2523));
    this->__PVT__y___05Fh2643 = ((IData)(this->__PVT__y___05Fh2523) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh3512 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__al___05Fh193));
    this->__PVT__x___05Fh2965 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__bl___05Fh196));
    this->__PVT__x___05Fh3203 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__ah___05Fh194));
    this->__PVT__x___05Fh2519 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__x___05Fh3291 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49));
    this->__PVT__x___05Fh2744 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53));
    this->__PVT__dd___05Fh207 = ((IData)(this->__PVT__x___05Fh2642) 
                                 ^ (IData)(this->__PVT__y___05Fh2643));
    this->__PVT__qq___05Fh3263 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__qq___05Fh2624 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__p___05Fh3262 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__aaa___05Fh195))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__p___05Fh2623 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__bb___05Fh198))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__qq_BIT_2___05F_h3759 = (1U & (((~ 
                                                 ((IData)(this->__PVT__y___05Fh2523) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 6U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__qq___05Fh3263)));
    this->__PVT__p_BIT_0___05F_h3739 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                                   & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__p_BIT_2___05F_h3656 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2523) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 2U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__qq_BIT_1___05F_h3821 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2968) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 5U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__qq_BIT_3___05F_h3591 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2522) 
                                                  & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__p_BIT_3___05F_h3614 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2522) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 3U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__p_BIT_1___05F_h3571 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2968) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 1U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__t2___05Fh45 = ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                ^ (IData)(this->__PVT__p_BIT_0___05F_h3739));
    this->__PVT__t3___05Fh46 = (1U & ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                      ^ (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 4U)))) 
                                          ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                         ^ (IData)(this->__PVT__qq___05Fh3263))));
    this->__PVT__t1___05Fh44 = ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591));
    this->__PVT__t4___05Fh47 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591))));
    this->__PVT__t6___05Fh49 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))));
    this->__PVT__t9___05Fh52 = ((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                ^ (IData)(this->__PVT__t2___05Fh45));
    this->__PVT__t5___05Fh48 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__t1___05Fh44))));
    this->__PVT__t8___05Fh51 = ((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                ^ (IData)(this->__PVT__t4___05Fh47));
    this->__PVT__t7___05Fh50 = (1U & (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                         ^ (IData)(this->__PVT__t6___05Fh49))));
    this->__PVT__t10___05Fh53 = ((IData)(this->__PVT__t3___05Fh46) 
                                 ^ (IData)(this->__PVT__t5___05Fh48));
    this->getbyte = ((0x80U & ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                    ? (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                          ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821)))
                                    : (IData)(this->__PVT__t4___05Fh47))) 
                               << 7U)) | (0x7fU & (~ 
                                                   ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                                     ? 
                                                    ((((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                                       ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                      << 6U) 
                                                     | ((((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                                          ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                         << 5U) 
                                                        | ((0x10U 
                                                            & ((~ 
                                                                ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                                                 ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))) 
                                                               << 4U)) 
                                                           | ((((IData)(this->__PVT__t8___05Fh51) 
                                                                ^ (IData)(this->__PVT__t9___05Fh52)) 
                                                               << 3U) 
                                                              | ((4U 
                                                                  & ((~ 
                                                                      ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                                                       ^ (IData)(this->__PVT__t7___05Fh50))) 
                                                                     << 2U)) 
                                                                 | (((IData)(this->__PVT__t6___05Fh49) 
                                                                     << 1U) 
                                                                    | (1U 
                                                                       & (~ (IData)(this->__PVT__qq_BIT_2___05F_h3759)))))))))
                                                     : 
                                                    (((IData)(this->__PVT__t1___05Fh44) 
                                                      << 6U) 
                                                     | (((IData)(this->__PVT__t3___05Fh46) 
                                                         << 5U) 
                                                        | (((IData)(this->__PVT__t5___05Fh48) 
                                                            << 4U) 
                                                           | ((((IData)(this->__PVT__t2___05Fh45) 
                                                                ^ (IData)(this->__PVT__t5___05Fh48)) 
                                                               << 3U) 
                                                              | ((((IData)(this->__PVT__t3___05Fh46) 
                                                                   ^ (IData)(this->__PVT__t8___05Fh51)) 
                                                                  << 2U) 
                                                                 | (((IData)(this->__PVT__t7___05Fh50) 
                                                                     << 1U) 
                                                                    | (IData)(this->__PVT__t9___05Fh52)))))))))));
}

VL_INLINE_OPT void VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__2(VmkAES_Wrapper2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__2\n"); );
    VmkAES_Wrapper2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__r6___05Fh32 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__024getbyte_byte_in)));
    this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4 
        = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__024getbyte_byte_in) 
                     >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__024getbyte_byte_in) 
                               >> 4U))));
    this->__PVT__r1___05Fh27 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__024getbyte_byte_in) 
                                       >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__024getbyte_byte_in) 
                                                 >> 5U)));
    this->__PVT__r3___05Fh29 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__024getbyte_byte_in) 
                                       >> 6U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__024getbyte_byte_in)));
    this->__PVT__r7___05Fh33 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__024getbyte_byte_in) 
                                       >> 2U) ^ (IData)(this->__PVT__r1___05Fh27)));
    this->__PVT__r4___05Fh30 = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__024getbyte_byte_in) 
                                          >> 5U) ^ (IData)(this->__PVT__r3___05Fh29))));
    this->__PVT__r8___05Fh34 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__024getbyte_byte_in) 
                                       >> 1U) ^ (IData)(this->__PVT__r3___05Fh29)));
    this->__PVT__r5___05Fh31 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__024getbyte_byte_in) 
                                       >> 4U) ^ (IData)(this->__PVT__r4___05Fh30)));
    this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16 
        = (1U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                  ? (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4)
                  : (~ ((IData)(this->__PVT__r7___05Fh33) 
                        ^ (IData)(this->__PVT__r8___05Fh34)))));
    this->__PVT__r9___05Fh35 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(this->__PVT__r8___05Fh34)));
    this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
            ? ((0x40U & ((0xffffffc0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__024getbyte_byte_in) 
                                         << 2U)) ^ 
                         ((IData)(this->__PVT__r8___05Fh34) 
                          << 6U))) | ((0x20U & ((0x7fffffe0U 
                                                 & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__024getbyte_byte_in) 
                                                    >> 1U)) 
                                                ^ (0xffffffe0U 
                                                   & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__024getbyte_byte_in) 
                                                      << 1U)))) 
                                      | (((IData)(this->__PVT__r9___05Fh35) 
                                          << 4U) | 
                                         ((8U & ((~ 
                                                  (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__024getbyte_byte_in) 
                                                    >> 6U) 
                                                   ^ (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4))) 
                                                 << 3U)) 
                                          | (((IData)(this->__PVT__r7___05Fh33) 
                                              << 2U) 
                                             | ((2U 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__024getbyte_byte_in) 
                                                        >> 3U)) 
                                                    ^ 
                                                    ((IData)(this->__PVT__r6___05Fh32) 
                                                     << 1U))) 
                                                | (1U 
                                                   & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__024getbyte_byte_in) 
                                                       >> 1U) 
                                                      ^ (IData)(this->__PVT__r5___05Fh31)))))))))
            : (((IData)(this->__PVT__r5___05Fh31) << 6U) 
               | ((0x20U & ((0xffffffe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__024getbyte_byte_in) 
                                            << 4U)) 
                            ^ ((IData)(this->__PVT__r4___05Fh30) 
                               << 5U))) | ((0x10U & 
                                            ((~ ((IData)(this->__PVT__r1___05Fh27) 
                                                 ^ (IData)(this->__PVT__r3___05Fh29))) 
                                             << 4U)) 
                                           | ((8U & 
                                               (((0xfffffff8U 
                                                  & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__024getbyte_byte_in) 
                                                     << 2U)) 
                                                 ^ 
                                                 ((IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4) 
                                                  << 3U)) 
                                                ^ ((IData)(this->__PVT__r6___05Fh32) 
                                                   << 3U))) 
                                              | ((4U 
                                                  & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__024getbyte_byte_in)) 
                                                     << 2U)) 
                                                 | (((IData)(this->__PVT__r4___05Fh30) 
                                                     << 1U) 
                                                    | (1U 
                                                       & (~ 
                                                          (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__024getbyte_byte_in) 
                                                            >> 2U) 
                                                           ^ (IData)(this->__PVT__r9___05Fh35)))))))))));
    this->__PVT__al___05Fh193 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 5U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 4U))));
    this->__PVT__bl___05Fh196 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 1U)) 
                                       ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__ah___05Fh194 = (1U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U))));
    this->__PVT__bh___05Fh197 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 3U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 2U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49 
        = (3U & (((2U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                         << 1U)) | (1U & (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U)))) 
                 ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                       >> 4U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53 
        = (3U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                     >> 2U)) ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__x___05Fh1386 = ((IData)(this->__PVT__ah___05Fh194) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__aaa___05Fh195 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                         >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49)));
    this->__PVT__x___05Fh1688 = (1U & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                       & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__bb___05Fh198 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                        >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__y___05Fh2027 = (1U & ((((~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                              | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                             >> 1U)) 
                                         ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 6U)) 
                                               & (~ 
                                                  ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 2U))))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__y___05Fh2082 = (1U & ((((~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                 >> 4U)) 
                                             | (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                         ^ (~ ((IData)(this->__PVT__al___05Fh193) 
                                               & (IData)(this->__PVT__bl___05Fh196)))) 
                                        ^ (~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                              >> 1U))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__x___05Fh1488 = ((IData)(this->__PVT__aaa___05Fh195) 
                                 & (IData)(this->__PVT__bb___05Fh198));
    this->__PVT__x___05Fh390 = (1U & ((((~ ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                            | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53))) 
                                        ^ (~ ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 3U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__y___05Fh328 = (1U & ((((~ ((IData)(this->__PVT__al___05Fh193) 
                                            | (IData)(this->__PVT__bl___05Fh196))) 
                                        ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 5U)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 1U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__sa___05Fh299 = ((IData)(this->__PVT__x___05Fh390) 
                                 ^ (IData)(this->__PVT__y___05Fh2027));
    this->__PVT__sb___05Fh300 = ((IData)(this->__PVT__y___05Fh328) 
                                 ^ (IData)(this->__PVT__y___05Fh2082));
    this->__PVT__x___05Fh327 = (1U & ((~ ((IData)(this->__PVT__sa___05Fh299) 
                                          | (IData)(this->__PVT__sb___05Fh300))) 
                                      ^ (~ ((IData)(this->__PVT__y___05Fh2027) 
                                            & (IData)(this->__PVT__y___05Fh2082)))));
    this->__PVT__y___05Fh2237 = (1U & ((~ ((IData)(this->__PVT__x___05Fh390) 
                                           | (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ ((IData)(this->__PVT__sa___05Fh299) 
                                             & (IData)(this->__PVT__sb___05Fh300)))));
    this->__PVT__sd___05Fh303 = ((IData)(this->__PVT__x___05Fh327) 
                                 ^ (IData)(this->__PVT__y___05Fh2237));
    this->__PVT__x___05Fh2409 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sa___05Fh299));
    this->__PVT__x___05Fh2223 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sb___05Fh300));
    this->__PVT__x___05Fh2968 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__x___05Fh390))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__y___05Fh2969 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2027))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__x___05Fh2522 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__y___05Fh2523 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2082))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__dl___05Fh205 = ((IData)(this->__PVT__x___05Fh2968) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh2642 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__x___05Fh2968));
    this->__PVT__dh___05Fh206 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__y___05Fh2523));
    this->__PVT__y___05Fh2643 = ((IData)(this->__PVT__y___05Fh2523) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh3512 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__al___05Fh193));
    this->__PVT__x___05Fh2965 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__bl___05Fh196));
    this->__PVT__x___05Fh3203 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__ah___05Fh194));
    this->__PVT__x___05Fh2519 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__x___05Fh3291 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49));
    this->__PVT__x___05Fh2744 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53));
    this->__PVT__dd___05Fh207 = ((IData)(this->__PVT__x___05Fh2642) 
                                 ^ (IData)(this->__PVT__y___05Fh2643));
    this->__PVT__qq___05Fh3263 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__qq___05Fh2624 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__p___05Fh3262 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__aaa___05Fh195))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__p___05Fh2623 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__bb___05Fh198))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__qq_BIT_2___05F_h3759 = (1U & (((~ 
                                                 ((IData)(this->__PVT__y___05Fh2523) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 6U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__qq___05Fh3263)));
    this->__PVT__p_BIT_0___05F_h3739 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                                   & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__p_BIT_2___05F_h3656 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2523) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 2U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__qq_BIT_1___05F_h3821 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2968) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 5U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__qq_BIT_3___05F_h3591 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2522) 
                                                  & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__p_BIT_3___05F_h3614 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2522) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 3U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__p_BIT_1___05F_h3571 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2968) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 1U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__t2___05Fh45 = ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                ^ (IData)(this->__PVT__p_BIT_0___05F_h3739));
    this->__PVT__t3___05Fh46 = (1U & ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                      ^ (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 4U)))) 
                                          ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                         ^ (IData)(this->__PVT__qq___05Fh3263))));
    this->__PVT__t1___05Fh44 = ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591));
    this->__PVT__t4___05Fh47 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591))));
    this->__PVT__t6___05Fh49 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))));
    this->__PVT__t9___05Fh52 = ((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                ^ (IData)(this->__PVT__t2___05Fh45));
    this->__PVT__t5___05Fh48 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__t1___05Fh44))));
    this->__PVT__t8___05Fh51 = ((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                ^ (IData)(this->__PVT__t4___05Fh47));
    this->__PVT__t7___05Fh50 = (1U & (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                         ^ (IData)(this->__PVT__t6___05Fh49))));
    this->__PVT__t10___05Fh53 = ((IData)(this->__PVT__t3___05Fh46) 
                                 ^ (IData)(this->__PVT__t5___05Fh48));
    this->getbyte = ((0x80U & ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                    ? (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                          ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821)))
                                    : (IData)(this->__PVT__t4___05Fh47))) 
                               << 7U)) | (0x7fU & (~ 
                                                   ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                                     ? 
                                                    ((((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                                       ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                      << 6U) 
                                                     | ((((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                                          ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                         << 5U) 
                                                        | ((0x10U 
                                                            & ((~ 
                                                                ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                                                 ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))) 
                                                               << 4U)) 
                                                           | ((((IData)(this->__PVT__t8___05Fh51) 
                                                                ^ (IData)(this->__PVT__t9___05Fh52)) 
                                                               << 3U) 
                                                              | ((4U 
                                                                  & ((~ 
                                                                      ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                                                       ^ (IData)(this->__PVT__t7___05Fh50))) 
                                                                     << 2U)) 
                                                                 | (((IData)(this->__PVT__t6___05Fh49) 
                                                                     << 1U) 
                                                                    | (1U 
                                                                       & (~ (IData)(this->__PVT__qq_BIT_2___05F_h3759)))))))))
                                                     : 
                                                    (((IData)(this->__PVT__t1___05Fh44) 
                                                      << 6U) 
                                                     | (((IData)(this->__PVT__t3___05Fh46) 
                                                         << 5U) 
                                                        | (((IData)(this->__PVT__t5___05Fh48) 
                                                            << 4U) 
                                                           | ((((IData)(this->__PVT__t2___05Fh45) 
                                                                ^ (IData)(this->__PVT__t5___05Fh48)) 
                                                               << 3U) 
                                                              | ((((IData)(this->__PVT__t3___05Fh46) 
                                                                   ^ (IData)(this->__PVT__t8___05Fh51)) 
                                                                  << 2U) 
                                                                 | (((IData)(this->__PVT__t7___05Fh50) 
                                                                     << 1U) 
                                                                    | (IData)(this->__PVT__t9___05Fh52)))))))))));
}

VL_INLINE_OPT void VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__3(VmkAES_Wrapper2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__3\n"); );
    VmkAES_Wrapper2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__r6___05Fh32 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__024getbyte_byte_in)));
    this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4 
        = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__024getbyte_byte_in) 
                     >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__024getbyte_byte_in) 
                               >> 4U))));
    this->__PVT__r1___05Fh27 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__024getbyte_byte_in) 
                                       >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__024getbyte_byte_in) 
                                                 >> 5U)));
    this->__PVT__r3___05Fh29 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__024getbyte_byte_in) 
                                       >> 6U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__024getbyte_byte_in)));
    this->__PVT__r7___05Fh33 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__024getbyte_byte_in) 
                                       >> 2U) ^ (IData)(this->__PVT__r1___05Fh27)));
    this->__PVT__r4___05Fh30 = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__024getbyte_byte_in) 
                                          >> 5U) ^ (IData)(this->__PVT__r3___05Fh29))));
    this->__PVT__r8___05Fh34 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__024getbyte_byte_in) 
                                       >> 1U) ^ (IData)(this->__PVT__r3___05Fh29)));
    this->__PVT__r5___05Fh31 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__024getbyte_byte_in) 
                                       >> 4U) ^ (IData)(this->__PVT__r4___05Fh30)));
    this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16 
        = (1U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                  ? (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4)
                  : (~ ((IData)(this->__PVT__r7___05Fh33) 
                        ^ (IData)(this->__PVT__r8___05Fh34)))));
    this->__PVT__r9___05Fh35 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(this->__PVT__r8___05Fh34)));
    this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
            ? ((0x40U & ((0xffffffc0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__024getbyte_byte_in) 
                                         << 2U)) ^ 
                         ((IData)(this->__PVT__r8___05Fh34) 
                          << 6U))) | ((0x20U & ((0x7fffffe0U 
                                                 & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__024getbyte_byte_in) 
                                                    >> 1U)) 
                                                ^ (0xffffffe0U 
                                                   & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__024getbyte_byte_in) 
                                                      << 1U)))) 
                                      | (((IData)(this->__PVT__r9___05Fh35) 
                                          << 4U) | 
                                         ((8U & ((~ 
                                                  (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__024getbyte_byte_in) 
                                                    >> 6U) 
                                                   ^ (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4))) 
                                                 << 3U)) 
                                          | (((IData)(this->__PVT__r7___05Fh33) 
                                              << 2U) 
                                             | ((2U 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__024getbyte_byte_in) 
                                                        >> 3U)) 
                                                    ^ 
                                                    ((IData)(this->__PVT__r6___05Fh32) 
                                                     << 1U))) 
                                                | (1U 
                                                   & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__024getbyte_byte_in) 
                                                       >> 1U) 
                                                      ^ (IData)(this->__PVT__r5___05Fh31)))))))))
            : (((IData)(this->__PVT__r5___05Fh31) << 6U) 
               | ((0x20U & ((0xffffffe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__024getbyte_byte_in) 
                                            << 4U)) 
                            ^ ((IData)(this->__PVT__r4___05Fh30) 
                               << 5U))) | ((0x10U & 
                                            ((~ ((IData)(this->__PVT__r1___05Fh27) 
                                                 ^ (IData)(this->__PVT__r3___05Fh29))) 
                                             << 4U)) 
                                           | ((8U & 
                                               (((0xfffffff8U 
                                                  & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__024getbyte_byte_in) 
                                                     << 2U)) 
                                                 ^ 
                                                 ((IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4) 
                                                  << 3U)) 
                                                ^ ((IData)(this->__PVT__r6___05Fh32) 
                                                   << 3U))) 
                                              | ((4U 
                                                  & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__024getbyte_byte_in)) 
                                                     << 2U)) 
                                                 | (((IData)(this->__PVT__r4___05Fh30) 
                                                     << 1U) 
                                                    | (1U 
                                                       & (~ 
                                                          (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__024getbyte_byte_in) 
                                                            >> 2U) 
                                                           ^ (IData)(this->__PVT__r9___05Fh35)))))))))));
    this->__PVT__al___05Fh193 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 5U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 4U))));
    this->__PVT__bl___05Fh196 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 1U)) 
                                       ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__ah___05Fh194 = (1U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U))));
    this->__PVT__bh___05Fh197 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 3U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 2U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49 
        = (3U & (((2U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                         << 1U)) | (1U & (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U)))) 
                 ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                       >> 4U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53 
        = (3U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                     >> 2U)) ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__x___05Fh1386 = ((IData)(this->__PVT__ah___05Fh194) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__aaa___05Fh195 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                         >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49)));
    this->__PVT__x___05Fh1688 = (1U & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                       & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__bb___05Fh198 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                        >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__y___05Fh2027 = (1U & ((((~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                              | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                             >> 1U)) 
                                         ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 6U)) 
                                               & (~ 
                                                  ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 2U))))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__y___05Fh2082 = (1U & ((((~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                 >> 4U)) 
                                             | (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                         ^ (~ ((IData)(this->__PVT__al___05Fh193) 
                                               & (IData)(this->__PVT__bl___05Fh196)))) 
                                        ^ (~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                              >> 1U))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__x___05Fh1488 = ((IData)(this->__PVT__aaa___05Fh195) 
                                 & (IData)(this->__PVT__bb___05Fh198));
    this->__PVT__x___05Fh390 = (1U & ((((~ ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                            | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53))) 
                                        ^ (~ ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 3U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__y___05Fh328 = (1U & ((((~ ((IData)(this->__PVT__al___05Fh193) 
                                            | (IData)(this->__PVT__bl___05Fh196))) 
                                        ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 5U)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 1U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__sa___05Fh299 = ((IData)(this->__PVT__x___05Fh390) 
                                 ^ (IData)(this->__PVT__y___05Fh2027));
    this->__PVT__sb___05Fh300 = ((IData)(this->__PVT__y___05Fh328) 
                                 ^ (IData)(this->__PVT__y___05Fh2082));
    this->__PVT__x___05Fh327 = (1U & ((~ ((IData)(this->__PVT__sa___05Fh299) 
                                          | (IData)(this->__PVT__sb___05Fh300))) 
                                      ^ (~ ((IData)(this->__PVT__y___05Fh2027) 
                                            & (IData)(this->__PVT__y___05Fh2082)))));
    this->__PVT__y___05Fh2237 = (1U & ((~ ((IData)(this->__PVT__x___05Fh390) 
                                           | (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ ((IData)(this->__PVT__sa___05Fh299) 
                                             & (IData)(this->__PVT__sb___05Fh300)))));
    this->__PVT__sd___05Fh303 = ((IData)(this->__PVT__x___05Fh327) 
                                 ^ (IData)(this->__PVT__y___05Fh2237));
    this->__PVT__x___05Fh2409 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sa___05Fh299));
    this->__PVT__x___05Fh2223 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sb___05Fh300));
    this->__PVT__x___05Fh2968 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__x___05Fh390))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__y___05Fh2969 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2027))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__x___05Fh2522 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__y___05Fh2523 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2082))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__dl___05Fh205 = ((IData)(this->__PVT__x___05Fh2968) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh2642 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__x___05Fh2968));
    this->__PVT__dh___05Fh206 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__y___05Fh2523));
    this->__PVT__y___05Fh2643 = ((IData)(this->__PVT__y___05Fh2523) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh3512 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__al___05Fh193));
    this->__PVT__x___05Fh2965 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__bl___05Fh196));
    this->__PVT__x___05Fh3203 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__ah___05Fh194));
    this->__PVT__x___05Fh2519 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__x___05Fh3291 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49));
    this->__PVT__x___05Fh2744 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53));
    this->__PVT__dd___05Fh207 = ((IData)(this->__PVT__x___05Fh2642) 
                                 ^ (IData)(this->__PVT__y___05Fh2643));
    this->__PVT__qq___05Fh3263 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__qq___05Fh2624 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__p___05Fh3262 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__aaa___05Fh195))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__p___05Fh2623 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__bb___05Fh198))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__qq_BIT_2___05F_h3759 = (1U & (((~ 
                                                 ((IData)(this->__PVT__y___05Fh2523) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 6U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__qq___05Fh3263)));
    this->__PVT__p_BIT_0___05F_h3739 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                                   & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__p_BIT_2___05F_h3656 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2523) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 2U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__qq_BIT_1___05F_h3821 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2968) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 5U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__qq_BIT_3___05F_h3591 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2522) 
                                                  & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__p_BIT_3___05F_h3614 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2522) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 3U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__p_BIT_1___05F_h3571 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2968) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 1U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__t2___05Fh45 = ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                ^ (IData)(this->__PVT__p_BIT_0___05F_h3739));
    this->__PVT__t3___05Fh46 = (1U & ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                      ^ (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 4U)))) 
                                          ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                         ^ (IData)(this->__PVT__qq___05Fh3263))));
    this->__PVT__t1___05Fh44 = ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591));
    this->__PVT__t4___05Fh47 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591))));
    this->__PVT__t6___05Fh49 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))));
    this->__PVT__t9___05Fh52 = ((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                ^ (IData)(this->__PVT__t2___05Fh45));
    this->__PVT__t5___05Fh48 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__t1___05Fh44))));
    this->__PVT__t8___05Fh51 = ((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                ^ (IData)(this->__PVT__t4___05Fh47));
    this->__PVT__t7___05Fh50 = (1U & (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                         ^ (IData)(this->__PVT__t6___05Fh49))));
    this->__PVT__t10___05Fh53 = ((IData)(this->__PVT__t3___05Fh46) 
                                 ^ (IData)(this->__PVT__t5___05Fh48));
    this->getbyte = ((0x80U & ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                    ? (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                          ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821)))
                                    : (IData)(this->__PVT__t4___05Fh47))) 
                               << 7U)) | (0x7fU & (~ 
                                                   ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                                     ? 
                                                    ((((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                                       ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                      << 6U) 
                                                     | ((((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                                          ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                         << 5U) 
                                                        | ((0x10U 
                                                            & ((~ 
                                                                ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                                                 ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))) 
                                                               << 4U)) 
                                                           | ((((IData)(this->__PVT__t8___05Fh51) 
                                                                ^ (IData)(this->__PVT__t9___05Fh52)) 
                                                               << 3U) 
                                                              | ((4U 
                                                                  & ((~ 
                                                                      ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                                                       ^ (IData)(this->__PVT__t7___05Fh50))) 
                                                                     << 2U)) 
                                                                 | (((IData)(this->__PVT__t6___05Fh49) 
                                                                     << 1U) 
                                                                    | (1U 
                                                                       & (~ (IData)(this->__PVT__qq_BIT_2___05F_h3759)))))))))
                                                     : 
                                                    (((IData)(this->__PVT__t1___05Fh44) 
                                                      << 6U) 
                                                     | (((IData)(this->__PVT__t3___05Fh46) 
                                                         << 5U) 
                                                        | (((IData)(this->__PVT__t5___05Fh48) 
                                                            << 4U) 
                                                           | ((((IData)(this->__PVT__t2___05Fh45) 
                                                                ^ (IData)(this->__PVT__t5___05Fh48)) 
                                                               << 3U) 
                                                              | ((((IData)(this->__PVT__t3___05Fh46) 
                                                                   ^ (IData)(this->__PVT__t8___05Fh51)) 
                                                                  << 2U) 
                                                                 | (((IData)(this->__PVT__t7___05Fh50) 
                                                                     << 1U) 
                                                                    | (IData)(this->__PVT__t9___05Fh52)))))))))));
}

VL_INLINE_OPT void VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__4(VmkAES_Wrapper2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__4\n"); );
    VmkAES_Wrapper2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__r6___05Fh32 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__024getbyte_byte_in)));
    this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4 
        = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__024getbyte_byte_in) 
                     >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__024getbyte_byte_in) 
                               >> 4U))));
    this->__PVT__r1___05Fh27 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__024getbyte_byte_in) 
                                       >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__024getbyte_byte_in) 
                                                 >> 5U)));
    this->__PVT__r3___05Fh29 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__024getbyte_byte_in) 
                                       >> 6U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__024getbyte_byte_in)));
    this->__PVT__r7___05Fh33 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__024getbyte_byte_in) 
                                       >> 2U) ^ (IData)(this->__PVT__r1___05Fh27)));
    this->__PVT__r4___05Fh30 = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__024getbyte_byte_in) 
                                          >> 5U) ^ (IData)(this->__PVT__r3___05Fh29))));
    this->__PVT__r8___05Fh34 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__024getbyte_byte_in) 
                                       >> 1U) ^ (IData)(this->__PVT__r3___05Fh29)));
    this->__PVT__r5___05Fh31 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__024getbyte_byte_in) 
                                       >> 4U) ^ (IData)(this->__PVT__r4___05Fh30)));
    this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16 
        = (1U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                  ? (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4)
                  : (~ ((IData)(this->__PVT__r7___05Fh33) 
                        ^ (IData)(this->__PVT__r8___05Fh34)))));
    this->__PVT__r9___05Fh35 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(this->__PVT__r8___05Fh34)));
    this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
            ? ((0x40U & ((0xffffffc0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__024getbyte_byte_in) 
                                         << 2U)) ^ 
                         ((IData)(this->__PVT__r8___05Fh34) 
                          << 6U))) | ((0x20U & ((0x7fffffe0U 
                                                 & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__024getbyte_byte_in) 
                                                    >> 1U)) 
                                                ^ (0xffffffe0U 
                                                   & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__024getbyte_byte_in) 
                                                      << 1U)))) 
                                      | (((IData)(this->__PVT__r9___05Fh35) 
                                          << 4U) | 
                                         ((8U & ((~ 
                                                  (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__024getbyte_byte_in) 
                                                    >> 6U) 
                                                   ^ (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4))) 
                                                 << 3U)) 
                                          | (((IData)(this->__PVT__r7___05Fh33) 
                                              << 2U) 
                                             | ((2U 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__024getbyte_byte_in) 
                                                        >> 3U)) 
                                                    ^ 
                                                    ((IData)(this->__PVT__r6___05Fh32) 
                                                     << 1U))) 
                                                | (1U 
                                                   & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__024getbyte_byte_in) 
                                                       >> 1U) 
                                                      ^ (IData)(this->__PVT__r5___05Fh31)))))))))
            : (((IData)(this->__PVT__r5___05Fh31) << 6U) 
               | ((0x20U & ((0xffffffe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__024getbyte_byte_in) 
                                            << 4U)) 
                            ^ ((IData)(this->__PVT__r4___05Fh30) 
                               << 5U))) | ((0x10U & 
                                            ((~ ((IData)(this->__PVT__r1___05Fh27) 
                                                 ^ (IData)(this->__PVT__r3___05Fh29))) 
                                             << 4U)) 
                                           | ((8U & 
                                               (((0xfffffff8U 
                                                  & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__024getbyte_byte_in) 
                                                     << 2U)) 
                                                 ^ 
                                                 ((IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4) 
                                                  << 3U)) 
                                                ^ ((IData)(this->__PVT__r6___05Fh32) 
                                                   << 3U))) 
                                              | ((4U 
                                                  & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__024getbyte_byte_in)) 
                                                     << 2U)) 
                                                 | (((IData)(this->__PVT__r4___05Fh30) 
                                                     << 1U) 
                                                    | (1U 
                                                       & (~ 
                                                          (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__024getbyte_byte_in) 
                                                            >> 2U) 
                                                           ^ (IData)(this->__PVT__r9___05Fh35)))))))))));
    this->__PVT__al___05Fh193 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 5U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 4U))));
    this->__PVT__bl___05Fh196 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 1U)) 
                                       ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__ah___05Fh194 = (1U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U))));
    this->__PVT__bh___05Fh197 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 3U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 2U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49 
        = (3U & (((2U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                         << 1U)) | (1U & (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U)))) 
                 ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                       >> 4U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53 
        = (3U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                     >> 2U)) ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__x___05Fh1386 = ((IData)(this->__PVT__ah___05Fh194) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__aaa___05Fh195 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                         >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49)));
    this->__PVT__x___05Fh1688 = (1U & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                       & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__bb___05Fh198 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                        >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__y___05Fh2027 = (1U & ((((~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                              | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                             >> 1U)) 
                                         ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 6U)) 
                                               & (~ 
                                                  ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 2U))))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__y___05Fh2082 = (1U & ((((~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                 >> 4U)) 
                                             | (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                         ^ (~ ((IData)(this->__PVT__al___05Fh193) 
                                               & (IData)(this->__PVT__bl___05Fh196)))) 
                                        ^ (~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                              >> 1U))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__x___05Fh1488 = ((IData)(this->__PVT__aaa___05Fh195) 
                                 & (IData)(this->__PVT__bb___05Fh198));
    this->__PVT__x___05Fh390 = (1U & ((((~ ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                            | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53))) 
                                        ^ (~ ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 3U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__y___05Fh328 = (1U & ((((~ ((IData)(this->__PVT__al___05Fh193) 
                                            | (IData)(this->__PVT__bl___05Fh196))) 
                                        ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 5U)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 1U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__sa___05Fh299 = ((IData)(this->__PVT__x___05Fh390) 
                                 ^ (IData)(this->__PVT__y___05Fh2027));
    this->__PVT__sb___05Fh300 = ((IData)(this->__PVT__y___05Fh328) 
                                 ^ (IData)(this->__PVT__y___05Fh2082));
    this->__PVT__x___05Fh327 = (1U & ((~ ((IData)(this->__PVT__sa___05Fh299) 
                                          | (IData)(this->__PVT__sb___05Fh300))) 
                                      ^ (~ ((IData)(this->__PVT__y___05Fh2027) 
                                            & (IData)(this->__PVT__y___05Fh2082)))));
    this->__PVT__y___05Fh2237 = (1U & ((~ ((IData)(this->__PVT__x___05Fh390) 
                                           | (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ ((IData)(this->__PVT__sa___05Fh299) 
                                             & (IData)(this->__PVT__sb___05Fh300)))));
    this->__PVT__sd___05Fh303 = ((IData)(this->__PVT__x___05Fh327) 
                                 ^ (IData)(this->__PVT__y___05Fh2237));
    this->__PVT__x___05Fh2409 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sa___05Fh299));
    this->__PVT__x___05Fh2223 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sb___05Fh300));
    this->__PVT__x___05Fh2968 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__x___05Fh390))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__y___05Fh2969 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2027))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__x___05Fh2522 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__y___05Fh2523 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2082))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__dl___05Fh205 = ((IData)(this->__PVT__x___05Fh2968) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh2642 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__x___05Fh2968));
    this->__PVT__dh___05Fh206 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__y___05Fh2523));
    this->__PVT__y___05Fh2643 = ((IData)(this->__PVT__y___05Fh2523) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh3512 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__al___05Fh193));
    this->__PVT__x___05Fh2965 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__bl___05Fh196));
    this->__PVT__x___05Fh3203 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__ah___05Fh194));
    this->__PVT__x___05Fh2519 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__x___05Fh3291 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49));
    this->__PVT__x___05Fh2744 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53));
    this->__PVT__dd___05Fh207 = ((IData)(this->__PVT__x___05Fh2642) 
                                 ^ (IData)(this->__PVT__y___05Fh2643));
    this->__PVT__qq___05Fh3263 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__qq___05Fh2624 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__p___05Fh3262 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__aaa___05Fh195))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__p___05Fh2623 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__bb___05Fh198))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__qq_BIT_2___05F_h3759 = (1U & (((~ 
                                                 ((IData)(this->__PVT__y___05Fh2523) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 6U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__qq___05Fh3263)));
    this->__PVT__p_BIT_0___05F_h3739 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                                   & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__p_BIT_2___05F_h3656 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2523) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 2U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__qq_BIT_1___05F_h3821 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2968) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 5U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__qq_BIT_3___05F_h3591 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2522) 
                                                  & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__p_BIT_3___05F_h3614 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2522) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 3U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__p_BIT_1___05F_h3571 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2968) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 1U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__t2___05Fh45 = ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                ^ (IData)(this->__PVT__p_BIT_0___05F_h3739));
    this->__PVT__t3___05Fh46 = (1U & ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                      ^ (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 4U)))) 
                                          ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                         ^ (IData)(this->__PVT__qq___05Fh3263))));
    this->__PVT__t1___05Fh44 = ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591));
    this->__PVT__t4___05Fh47 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591))));
    this->__PVT__t6___05Fh49 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))));
    this->__PVT__t9___05Fh52 = ((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                ^ (IData)(this->__PVT__t2___05Fh45));
    this->__PVT__t5___05Fh48 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__t1___05Fh44))));
    this->__PVT__t8___05Fh51 = ((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                ^ (IData)(this->__PVT__t4___05Fh47));
    this->__PVT__t7___05Fh50 = (1U & (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                         ^ (IData)(this->__PVT__t6___05Fh49))));
    this->__PVT__t10___05Fh53 = ((IData)(this->__PVT__t3___05Fh46) 
                                 ^ (IData)(this->__PVT__t5___05Fh48));
    this->getbyte = ((0x80U & ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                    ? (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                          ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821)))
                                    : (IData)(this->__PVT__t4___05Fh47))) 
                               << 7U)) | (0x7fU & (~ 
                                                   ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                                     ? 
                                                    ((((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                                       ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                      << 6U) 
                                                     | ((((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                                          ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                         << 5U) 
                                                        | ((0x10U 
                                                            & ((~ 
                                                                ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                                                 ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))) 
                                                               << 4U)) 
                                                           | ((((IData)(this->__PVT__t8___05Fh51) 
                                                                ^ (IData)(this->__PVT__t9___05Fh52)) 
                                                               << 3U) 
                                                              | ((4U 
                                                                  & ((~ 
                                                                      ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                                                       ^ (IData)(this->__PVT__t7___05Fh50))) 
                                                                     << 2U)) 
                                                                 | (((IData)(this->__PVT__t6___05Fh49) 
                                                                     << 1U) 
                                                                    | (1U 
                                                                       & (~ (IData)(this->__PVT__qq_BIT_2___05F_h3759)))))))))
                                                     : 
                                                    (((IData)(this->__PVT__t1___05Fh44) 
                                                      << 6U) 
                                                     | (((IData)(this->__PVT__t3___05Fh46) 
                                                         << 5U) 
                                                        | (((IData)(this->__PVT__t5___05Fh48) 
                                                            << 4U) 
                                                           | ((((IData)(this->__PVT__t2___05Fh45) 
                                                                ^ (IData)(this->__PVT__t5___05Fh48)) 
                                                               << 3U) 
                                                              | ((((IData)(this->__PVT__t3___05Fh46) 
                                                                   ^ (IData)(this->__PVT__t8___05Fh51)) 
                                                                  << 2U) 
                                                                 | (((IData)(this->__PVT__t7___05Fh50) 
                                                                     << 1U) 
                                                                    | (IData)(this->__PVT__t9___05Fh52)))))))))));
}

VL_INLINE_OPT void VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__5(VmkAES_Wrapper2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__5\n"); );
    VmkAES_Wrapper2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__r6___05Fh32 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__024getbyte_byte_in)));
    this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4 
        = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__024getbyte_byte_in) 
                     >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__024getbyte_byte_in) 
                               >> 4U))));
    this->__PVT__r1___05Fh27 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__024getbyte_byte_in) 
                                       >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__024getbyte_byte_in) 
                                                 >> 5U)));
    this->__PVT__r3___05Fh29 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__024getbyte_byte_in) 
                                       >> 6U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__024getbyte_byte_in)));
    this->__PVT__r7___05Fh33 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__024getbyte_byte_in) 
                                       >> 2U) ^ (IData)(this->__PVT__r1___05Fh27)));
    this->__PVT__r4___05Fh30 = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__024getbyte_byte_in) 
                                          >> 5U) ^ (IData)(this->__PVT__r3___05Fh29))));
    this->__PVT__r8___05Fh34 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__024getbyte_byte_in) 
                                       >> 1U) ^ (IData)(this->__PVT__r3___05Fh29)));
    this->__PVT__r5___05Fh31 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__024getbyte_byte_in) 
                                       >> 4U) ^ (IData)(this->__PVT__r4___05Fh30)));
    this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16 
        = (1U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                  ? (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4)
                  : (~ ((IData)(this->__PVT__r7___05Fh33) 
                        ^ (IData)(this->__PVT__r8___05Fh34)))));
    this->__PVT__r9___05Fh35 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(this->__PVT__r8___05Fh34)));
    this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
            ? ((0x40U & ((0xffffffc0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__024getbyte_byte_in) 
                                         << 2U)) ^ 
                         ((IData)(this->__PVT__r8___05Fh34) 
                          << 6U))) | ((0x20U & ((0x7fffffe0U 
                                                 & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__024getbyte_byte_in) 
                                                    >> 1U)) 
                                                ^ (0xffffffe0U 
                                                   & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__024getbyte_byte_in) 
                                                      << 1U)))) 
                                      | (((IData)(this->__PVT__r9___05Fh35) 
                                          << 4U) | 
                                         ((8U & ((~ 
                                                  (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__024getbyte_byte_in) 
                                                    >> 6U) 
                                                   ^ (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4))) 
                                                 << 3U)) 
                                          | (((IData)(this->__PVT__r7___05Fh33) 
                                              << 2U) 
                                             | ((2U 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__024getbyte_byte_in) 
                                                        >> 3U)) 
                                                    ^ 
                                                    ((IData)(this->__PVT__r6___05Fh32) 
                                                     << 1U))) 
                                                | (1U 
                                                   & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__024getbyte_byte_in) 
                                                       >> 1U) 
                                                      ^ (IData)(this->__PVT__r5___05Fh31)))))))))
            : (((IData)(this->__PVT__r5___05Fh31) << 6U) 
               | ((0x20U & ((0xffffffe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__024getbyte_byte_in) 
                                            << 4U)) 
                            ^ ((IData)(this->__PVT__r4___05Fh30) 
                               << 5U))) | ((0x10U & 
                                            ((~ ((IData)(this->__PVT__r1___05Fh27) 
                                                 ^ (IData)(this->__PVT__r3___05Fh29))) 
                                             << 4U)) 
                                           | ((8U & 
                                               (((0xfffffff8U 
                                                  & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__024getbyte_byte_in) 
                                                     << 2U)) 
                                                 ^ 
                                                 ((IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4) 
                                                  << 3U)) 
                                                ^ ((IData)(this->__PVT__r6___05Fh32) 
                                                   << 3U))) 
                                              | ((4U 
                                                  & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__024getbyte_byte_in)) 
                                                     << 2U)) 
                                                 | (((IData)(this->__PVT__r4___05Fh30) 
                                                     << 1U) 
                                                    | (1U 
                                                       & (~ 
                                                          (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__024getbyte_byte_in) 
                                                            >> 2U) 
                                                           ^ (IData)(this->__PVT__r9___05Fh35)))))))))));
    this->__PVT__al___05Fh193 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 5U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 4U))));
    this->__PVT__bl___05Fh196 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 1U)) 
                                       ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__ah___05Fh194 = (1U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U))));
    this->__PVT__bh___05Fh197 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 3U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 2U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49 
        = (3U & (((2U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                         << 1U)) | (1U & (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U)))) 
                 ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                       >> 4U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53 
        = (3U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                     >> 2U)) ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__x___05Fh1386 = ((IData)(this->__PVT__ah___05Fh194) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__aaa___05Fh195 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                         >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49)));
    this->__PVT__x___05Fh1688 = (1U & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                       & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__bb___05Fh198 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                        >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__y___05Fh2027 = (1U & ((((~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                              | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                             >> 1U)) 
                                         ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 6U)) 
                                               & (~ 
                                                  ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 2U))))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__y___05Fh2082 = (1U & ((((~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                 >> 4U)) 
                                             | (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                         ^ (~ ((IData)(this->__PVT__al___05Fh193) 
                                               & (IData)(this->__PVT__bl___05Fh196)))) 
                                        ^ (~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                              >> 1U))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__x___05Fh1488 = ((IData)(this->__PVT__aaa___05Fh195) 
                                 & (IData)(this->__PVT__bb___05Fh198));
    this->__PVT__x___05Fh390 = (1U & ((((~ ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                            | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53))) 
                                        ^ (~ ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 3U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__y___05Fh328 = (1U & ((((~ ((IData)(this->__PVT__al___05Fh193) 
                                            | (IData)(this->__PVT__bl___05Fh196))) 
                                        ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 5U)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 1U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__sa___05Fh299 = ((IData)(this->__PVT__x___05Fh390) 
                                 ^ (IData)(this->__PVT__y___05Fh2027));
    this->__PVT__sb___05Fh300 = ((IData)(this->__PVT__y___05Fh328) 
                                 ^ (IData)(this->__PVT__y___05Fh2082));
    this->__PVT__x___05Fh327 = (1U & ((~ ((IData)(this->__PVT__sa___05Fh299) 
                                          | (IData)(this->__PVT__sb___05Fh300))) 
                                      ^ (~ ((IData)(this->__PVT__y___05Fh2027) 
                                            & (IData)(this->__PVT__y___05Fh2082)))));
    this->__PVT__y___05Fh2237 = (1U & ((~ ((IData)(this->__PVT__x___05Fh390) 
                                           | (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ ((IData)(this->__PVT__sa___05Fh299) 
                                             & (IData)(this->__PVT__sb___05Fh300)))));
    this->__PVT__sd___05Fh303 = ((IData)(this->__PVT__x___05Fh327) 
                                 ^ (IData)(this->__PVT__y___05Fh2237));
    this->__PVT__x___05Fh2409 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sa___05Fh299));
    this->__PVT__x___05Fh2223 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sb___05Fh300));
    this->__PVT__x___05Fh2968 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__x___05Fh390))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__y___05Fh2969 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2027))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__x___05Fh2522 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__y___05Fh2523 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2082))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__dl___05Fh205 = ((IData)(this->__PVT__x___05Fh2968) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh2642 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__x___05Fh2968));
    this->__PVT__dh___05Fh206 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__y___05Fh2523));
    this->__PVT__y___05Fh2643 = ((IData)(this->__PVT__y___05Fh2523) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh3512 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__al___05Fh193));
    this->__PVT__x___05Fh2965 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__bl___05Fh196));
    this->__PVT__x___05Fh3203 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__ah___05Fh194));
    this->__PVT__x___05Fh2519 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__x___05Fh3291 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49));
    this->__PVT__x___05Fh2744 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53));
    this->__PVT__dd___05Fh207 = ((IData)(this->__PVT__x___05Fh2642) 
                                 ^ (IData)(this->__PVT__y___05Fh2643));
    this->__PVT__qq___05Fh3263 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__qq___05Fh2624 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__p___05Fh3262 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__aaa___05Fh195))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__p___05Fh2623 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__bb___05Fh198))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__qq_BIT_2___05F_h3759 = (1U & (((~ 
                                                 ((IData)(this->__PVT__y___05Fh2523) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 6U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__qq___05Fh3263)));
    this->__PVT__p_BIT_0___05F_h3739 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                                   & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__p_BIT_2___05F_h3656 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2523) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 2U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__qq_BIT_1___05F_h3821 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2968) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 5U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__qq_BIT_3___05F_h3591 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2522) 
                                                  & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__p_BIT_3___05F_h3614 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2522) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 3U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__p_BIT_1___05F_h3571 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2968) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 1U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__t2___05Fh45 = ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                ^ (IData)(this->__PVT__p_BIT_0___05F_h3739));
    this->__PVT__t3___05Fh46 = (1U & ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                      ^ (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 4U)))) 
                                          ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                         ^ (IData)(this->__PVT__qq___05Fh3263))));
    this->__PVT__t1___05Fh44 = ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591));
    this->__PVT__t4___05Fh47 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591))));
    this->__PVT__t6___05Fh49 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))));
    this->__PVT__t9___05Fh52 = ((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                ^ (IData)(this->__PVT__t2___05Fh45));
    this->__PVT__t5___05Fh48 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__t1___05Fh44))));
    this->__PVT__t8___05Fh51 = ((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                ^ (IData)(this->__PVT__t4___05Fh47));
    this->__PVT__t7___05Fh50 = (1U & (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                         ^ (IData)(this->__PVT__t6___05Fh49))));
    this->__PVT__t10___05Fh53 = ((IData)(this->__PVT__t3___05Fh46) 
                                 ^ (IData)(this->__PVT__t5___05Fh48));
    this->getbyte = ((0x80U & ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                    ? (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                          ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821)))
                                    : (IData)(this->__PVT__t4___05Fh47))) 
                               << 7U)) | (0x7fU & (~ 
                                                   ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                                     ? 
                                                    ((((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                                       ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                      << 6U) 
                                                     | ((((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                                          ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                         << 5U) 
                                                        | ((0x10U 
                                                            & ((~ 
                                                                ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                                                 ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))) 
                                                               << 4U)) 
                                                           | ((((IData)(this->__PVT__t8___05Fh51) 
                                                                ^ (IData)(this->__PVT__t9___05Fh52)) 
                                                               << 3U) 
                                                              | ((4U 
                                                                  & ((~ 
                                                                      ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                                                       ^ (IData)(this->__PVT__t7___05Fh50))) 
                                                                     << 2U)) 
                                                                 | (((IData)(this->__PVT__t6___05Fh49) 
                                                                     << 1U) 
                                                                    | (1U 
                                                                       & (~ (IData)(this->__PVT__qq_BIT_2___05F_h3759)))))))))
                                                     : 
                                                    (((IData)(this->__PVT__t1___05Fh44) 
                                                      << 6U) 
                                                     | (((IData)(this->__PVT__t3___05Fh46) 
                                                         << 5U) 
                                                        | (((IData)(this->__PVT__t5___05Fh48) 
                                                            << 4U) 
                                                           | ((((IData)(this->__PVT__t2___05Fh45) 
                                                                ^ (IData)(this->__PVT__t5___05Fh48)) 
                                                               << 3U) 
                                                              | ((((IData)(this->__PVT__t3___05Fh46) 
                                                                   ^ (IData)(this->__PVT__t8___05Fh51)) 
                                                                  << 2U) 
                                                                 | (((IData)(this->__PVT__t7___05Fh50) 
                                                                     << 1U) 
                                                                    | (IData)(this->__PVT__t9___05Fh52)))))))))));
}

VL_INLINE_OPT void VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__6(VmkAES_Wrapper2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__6\n"); );
    VmkAES_Wrapper2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__r6___05Fh32 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__024getbyte_byte_in)));
    this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4 
        = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__024getbyte_byte_in) 
                     >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__024getbyte_byte_in) 
                               >> 4U))));
    this->__PVT__r1___05Fh27 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__024getbyte_byte_in) 
                                       >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__024getbyte_byte_in) 
                                                 >> 5U)));
    this->__PVT__r3___05Fh29 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__024getbyte_byte_in) 
                                       >> 6U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__024getbyte_byte_in)));
    this->__PVT__r7___05Fh33 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__024getbyte_byte_in) 
                                       >> 2U) ^ (IData)(this->__PVT__r1___05Fh27)));
    this->__PVT__r4___05Fh30 = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__024getbyte_byte_in) 
                                          >> 5U) ^ (IData)(this->__PVT__r3___05Fh29))));
    this->__PVT__r8___05Fh34 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__024getbyte_byte_in) 
                                       >> 1U) ^ (IData)(this->__PVT__r3___05Fh29)));
    this->__PVT__r5___05Fh31 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__024getbyte_byte_in) 
                                       >> 4U) ^ (IData)(this->__PVT__r4___05Fh30)));
    this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16 
        = (1U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                  ? (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4)
                  : (~ ((IData)(this->__PVT__r7___05Fh33) 
                        ^ (IData)(this->__PVT__r8___05Fh34)))));
    this->__PVT__r9___05Fh35 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(this->__PVT__r8___05Fh34)));
    this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
            ? ((0x40U & ((0xffffffc0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__024getbyte_byte_in) 
                                         << 2U)) ^ 
                         ((IData)(this->__PVT__r8___05Fh34) 
                          << 6U))) | ((0x20U & ((0x7fffffe0U 
                                                 & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__024getbyte_byte_in) 
                                                    >> 1U)) 
                                                ^ (0xffffffe0U 
                                                   & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__024getbyte_byte_in) 
                                                      << 1U)))) 
                                      | (((IData)(this->__PVT__r9___05Fh35) 
                                          << 4U) | 
                                         ((8U & ((~ 
                                                  (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__024getbyte_byte_in) 
                                                    >> 6U) 
                                                   ^ (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4))) 
                                                 << 3U)) 
                                          | (((IData)(this->__PVT__r7___05Fh33) 
                                              << 2U) 
                                             | ((2U 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__024getbyte_byte_in) 
                                                        >> 3U)) 
                                                    ^ 
                                                    ((IData)(this->__PVT__r6___05Fh32) 
                                                     << 1U))) 
                                                | (1U 
                                                   & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__024getbyte_byte_in) 
                                                       >> 1U) 
                                                      ^ (IData)(this->__PVT__r5___05Fh31)))))))))
            : (((IData)(this->__PVT__r5___05Fh31) << 6U) 
               | ((0x20U & ((0xffffffe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__024getbyte_byte_in) 
                                            << 4U)) 
                            ^ ((IData)(this->__PVT__r4___05Fh30) 
                               << 5U))) | ((0x10U & 
                                            ((~ ((IData)(this->__PVT__r1___05Fh27) 
                                                 ^ (IData)(this->__PVT__r3___05Fh29))) 
                                             << 4U)) 
                                           | ((8U & 
                                               (((0xfffffff8U 
                                                  & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__024getbyte_byte_in) 
                                                     << 2U)) 
                                                 ^ 
                                                 ((IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4) 
                                                  << 3U)) 
                                                ^ ((IData)(this->__PVT__r6___05Fh32) 
                                                   << 3U))) 
                                              | ((4U 
                                                  & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__024getbyte_byte_in)) 
                                                     << 2U)) 
                                                 | (((IData)(this->__PVT__r4___05Fh30) 
                                                     << 1U) 
                                                    | (1U 
                                                       & (~ 
                                                          (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__024getbyte_byte_in) 
                                                            >> 2U) 
                                                           ^ (IData)(this->__PVT__r9___05Fh35)))))))))));
    this->__PVT__al___05Fh193 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 5U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 4U))));
    this->__PVT__bl___05Fh196 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 1U)) 
                                       ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__ah___05Fh194 = (1U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U))));
    this->__PVT__bh___05Fh197 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 3U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 2U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49 
        = (3U & (((2U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                         << 1U)) | (1U & (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U)))) 
                 ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                       >> 4U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53 
        = (3U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                     >> 2U)) ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__x___05Fh1386 = ((IData)(this->__PVT__ah___05Fh194) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__aaa___05Fh195 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                         >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49)));
    this->__PVT__x___05Fh1688 = (1U & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                       & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__bb___05Fh198 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                        >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__y___05Fh2027 = (1U & ((((~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                              | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                             >> 1U)) 
                                         ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 6U)) 
                                               & (~ 
                                                  ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 2U))))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__y___05Fh2082 = (1U & ((((~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                 >> 4U)) 
                                             | (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                         ^ (~ ((IData)(this->__PVT__al___05Fh193) 
                                               & (IData)(this->__PVT__bl___05Fh196)))) 
                                        ^ (~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                              >> 1U))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__x___05Fh1488 = ((IData)(this->__PVT__aaa___05Fh195) 
                                 & (IData)(this->__PVT__bb___05Fh198));
    this->__PVT__x___05Fh390 = (1U & ((((~ ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                            | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53))) 
                                        ^ (~ ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 3U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__y___05Fh328 = (1U & ((((~ ((IData)(this->__PVT__al___05Fh193) 
                                            | (IData)(this->__PVT__bl___05Fh196))) 
                                        ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 5U)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 1U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__sa___05Fh299 = ((IData)(this->__PVT__x___05Fh390) 
                                 ^ (IData)(this->__PVT__y___05Fh2027));
    this->__PVT__sb___05Fh300 = ((IData)(this->__PVT__y___05Fh328) 
                                 ^ (IData)(this->__PVT__y___05Fh2082));
    this->__PVT__x___05Fh327 = (1U & ((~ ((IData)(this->__PVT__sa___05Fh299) 
                                          | (IData)(this->__PVT__sb___05Fh300))) 
                                      ^ (~ ((IData)(this->__PVT__y___05Fh2027) 
                                            & (IData)(this->__PVT__y___05Fh2082)))));
    this->__PVT__y___05Fh2237 = (1U & ((~ ((IData)(this->__PVT__x___05Fh390) 
                                           | (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ ((IData)(this->__PVT__sa___05Fh299) 
                                             & (IData)(this->__PVT__sb___05Fh300)))));
    this->__PVT__sd___05Fh303 = ((IData)(this->__PVT__x___05Fh327) 
                                 ^ (IData)(this->__PVT__y___05Fh2237));
    this->__PVT__x___05Fh2409 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sa___05Fh299));
    this->__PVT__x___05Fh2223 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sb___05Fh300));
    this->__PVT__x___05Fh2968 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__x___05Fh390))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__y___05Fh2969 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2027))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__x___05Fh2522 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__y___05Fh2523 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2082))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__dl___05Fh205 = ((IData)(this->__PVT__x___05Fh2968) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh2642 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__x___05Fh2968));
    this->__PVT__dh___05Fh206 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__y___05Fh2523));
    this->__PVT__y___05Fh2643 = ((IData)(this->__PVT__y___05Fh2523) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh3512 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__al___05Fh193));
    this->__PVT__x___05Fh2965 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__bl___05Fh196));
    this->__PVT__x___05Fh3203 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__ah___05Fh194));
    this->__PVT__x___05Fh2519 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__x___05Fh3291 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49));
    this->__PVT__x___05Fh2744 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53));
    this->__PVT__dd___05Fh207 = ((IData)(this->__PVT__x___05Fh2642) 
                                 ^ (IData)(this->__PVT__y___05Fh2643));
    this->__PVT__qq___05Fh3263 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__qq___05Fh2624 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__p___05Fh3262 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__aaa___05Fh195))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__p___05Fh2623 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__bb___05Fh198))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__qq_BIT_2___05F_h3759 = (1U & (((~ 
                                                 ((IData)(this->__PVT__y___05Fh2523) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 6U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__qq___05Fh3263)));
    this->__PVT__p_BIT_0___05F_h3739 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                                   & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__p_BIT_2___05F_h3656 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2523) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 2U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__qq_BIT_1___05F_h3821 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2968) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 5U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__qq_BIT_3___05F_h3591 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2522) 
                                                  & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__p_BIT_3___05F_h3614 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2522) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 3U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__p_BIT_1___05F_h3571 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2968) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 1U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__t2___05Fh45 = ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                ^ (IData)(this->__PVT__p_BIT_0___05F_h3739));
    this->__PVT__t3___05Fh46 = (1U & ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                      ^ (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 4U)))) 
                                          ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                         ^ (IData)(this->__PVT__qq___05Fh3263))));
    this->__PVT__t1___05Fh44 = ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591));
    this->__PVT__t4___05Fh47 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591))));
    this->__PVT__t6___05Fh49 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))));
    this->__PVT__t9___05Fh52 = ((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                ^ (IData)(this->__PVT__t2___05Fh45));
    this->__PVT__t5___05Fh48 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__t1___05Fh44))));
    this->__PVT__t8___05Fh51 = ((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                ^ (IData)(this->__PVT__t4___05Fh47));
    this->__PVT__t7___05Fh50 = (1U & (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                         ^ (IData)(this->__PVT__t6___05Fh49))));
    this->__PVT__t10___05Fh53 = ((IData)(this->__PVT__t3___05Fh46) 
                                 ^ (IData)(this->__PVT__t5___05Fh48));
    this->getbyte = ((0x80U & ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                    ? (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                          ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821)))
                                    : (IData)(this->__PVT__t4___05Fh47))) 
                               << 7U)) | (0x7fU & (~ 
                                                   ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                                     ? 
                                                    ((((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                                       ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                      << 6U) 
                                                     | ((((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                                          ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                         << 5U) 
                                                        | ((0x10U 
                                                            & ((~ 
                                                                ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                                                 ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))) 
                                                               << 4U)) 
                                                           | ((((IData)(this->__PVT__t8___05Fh51) 
                                                                ^ (IData)(this->__PVT__t9___05Fh52)) 
                                                               << 3U) 
                                                              | ((4U 
                                                                  & ((~ 
                                                                      ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                                                       ^ (IData)(this->__PVT__t7___05Fh50))) 
                                                                     << 2U)) 
                                                                 | (((IData)(this->__PVT__t6___05Fh49) 
                                                                     << 1U) 
                                                                    | (1U 
                                                                       & (~ (IData)(this->__PVT__qq_BIT_2___05F_h3759)))))))))
                                                     : 
                                                    (((IData)(this->__PVT__t1___05Fh44) 
                                                      << 6U) 
                                                     | (((IData)(this->__PVT__t3___05Fh46) 
                                                         << 5U) 
                                                        | (((IData)(this->__PVT__t5___05Fh48) 
                                                            << 4U) 
                                                           | ((((IData)(this->__PVT__t2___05Fh45) 
                                                                ^ (IData)(this->__PVT__t5___05Fh48)) 
                                                               << 3U) 
                                                              | ((((IData)(this->__PVT__t3___05Fh46) 
                                                                   ^ (IData)(this->__PVT__t8___05Fh51)) 
                                                                  << 2U) 
                                                                 | (((IData)(this->__PVT__t7___05Fh50) 
                                                                     << 1U) 
                                                                    | (IData)(this->__PVT__t9___05Fh52)))))))))));
}

VL_INLINE_OPT void VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__7(VmkAES_Wrapper2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__7\n"); );
    VmkAES_Wrapper2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__r6___05Fh32 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__024getbyte_byte_in)));
    this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4 
        = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__024getbyte_byte_in) 
                     >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__024getbyte_byte_in) 
                               >> 4U))));
    this->__PVT__r1___05Fh27 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__024getbyte_byte_in) 
                                       >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__024getbyte_byte_in) 
                                                 >> 5U)));
    this->__PVT__r3___05Fh29 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__024getbyte_byte_in) 
                                       >> 6U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__024getbyte_byte_in)));
    this->__PVT__r7___05Fh33 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__024getbyte_byte_in) 
                                       >> 2U) ^ (IData)(this->__PVT__r1___05Fh27)));
    this->__PVT__r4___05Fh30 = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__024getbyte_byte_in) 
                                          >> 5U) ^ (IData)(this->__PVT__r3___05Fh29))));
    this->__PVT__r8___05Fh34 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__024getbyte_byte_in) 
                                       >> 1U) ^ (IData)(this->__PVT__r3___05Fh29)));
    this->__PVT__r5___05Fh31 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__024getbyte_byte_in) 
                                       >> 4U) ^ (IData)(this->__PVT__r4___05Fh30)));
    this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16 
        = (1U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                  ? (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4)
                  : (~ ((IData)(this->__PVT__r7___05Fh33) 
                        ^ (IData)(this->__PVT__r8___05Fh34)))));
    this->__PVT__r9___05Fh35 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(this->__PVT__r8___05Fh34)));
    this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
            ? ((0x40U & ((0xffffffc0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__024getbyte_byte_in) 
                                         << 2U)) ^ 
                         ((IData)(this->__PVT__r8___05Fh34) 
                          << 6U))) | ((0x20U & ((0x7fffffe0U 
                                                 & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__024getbyte_byte_in) 
                                                    >> 1U)) 
                                                ^ (0xffffffe0U 
                                                   & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__024getbyte_byte_in) 
                                                      << 1U)))) 
                                      | (((IData)(this->__PVT__r9___05Fh35) 
                                          << 4U) | 
                                         ((8U & ((~ 
                                                  (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__024getbyte_byte_in) 
                                                    >> 6U) 
                                                   ^ (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4))) 
                                                 << 3U)) 
                                          | (((IData)(this->__PVT__r7___05Fh33) 
                                              << 2U) 
                                             | ((2U 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__024getbyte_byte_in) 
                                                        >> 3U)) 
                                                    ^ 
                                                    ((IData)(this->__PVT__r6___05Fh32) 
                                                     << 1U))) 
                                                | (1U 
                                                   & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__024getbyte_byte_in) 
                                                       >> 1U) 
                                                      ^ (IData)(this->__PVT__r5___05Fh31)))))))))
            : (((IData)(this->__PVT__r5___05Fh31) << 6U) 
               | ((0x20U & ((0xffffffe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__024getbyte_byte_in) 
                                            << 4U)) 
                            ^ ((IData)(this->__PVT__r4___05Fh30) 
                               << 5U))) | ((0x10U & 
                                            ((~ ((IData)(this->__PVT__r1___05Fh27) 
                                                 ^ (IData)(this->__PVT__r3___05Fh29))) 
                                             << 4U)) 
                                           | ((8U & 
                                               (((0xfffffff8U 
                                                  & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__024getbyte_byte_in) 
                                                     << 2U)) 
                                                 ^ 
                                                 ((IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4) 
                                                  << 3U)) 
                                                ^ ((IData)(this->__PVT__r6___05Fh32) 
                                                   << 3U))) 
                                              | ((4U 
                                                  & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__024getbyte_byte_in)) 
                                                     << 2U)) 
                                                 | (((IData)(this->__PVT__r4___05Fh30) 
                                                     << 1U) 
                                                    | (1U 
                                                       & (~ 
                                                          (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__024getbyte_byte_in) 
                                                            >> 2U) 
                                                           ^ (IData)(this->__PVT__r9___05Fh35)))))))))));
    this->__PVT__al___05Fh193 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 5U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 4U))));
    this->__PVT__bl___05Fh196 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 1U)) 
                                       ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__ah___05Fh194 = (1U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U))));
    this->__PVT__bh___05Fh197 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 3U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 2U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49 
        = (3U & (((2U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                         << 1U)) | (1U & (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U)))) 
                 ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                       >> 4U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53 
        = (3U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                     >> 2U)) ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__x___05Fh1386 = ((IData)(this->__PVT__ah___05Fh194) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__aaa___05Fh195 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                         >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49)));
    this->__PVT__x___05Fh1688 = (1U & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                       & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__bb___05Fh198 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                        >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__y___05Fh2027 = (1U & ((((~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                              | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                             >> 1U)) 
                                         ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 6U)) 
                                               & (~ 
                                                  ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 2U))))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__y___05Fh2082 = (1U & ((((~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                 >> 4U)) 
                                             | (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                         ^ (~ ((IData)(this->__PVT__al___05Fh193) 
                                               & (IData)(this->__PVT__bl___05Fh196)))) 
                                        ^ (~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                              >> 1U))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__x___05Fh1488 = ((IData)(this->__PVT__aaa___05Fh195) 
                                 & (IData)(this->__PVT__bb___05Fh198));
    this->__PVT__x___05Fh390 = (1U & ((((~ ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                            | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53))) 
                                        ^ (~ ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 3U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__y___05Fh328 = (1U & ((((~ ((IData)(this->__PVT__al___05Fh193) 
                                            | (IData)(this->__PVT__bl___05Fh196))) 
                                        ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 5U)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 1U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__sa___05Fh299 = ((IData)(this->__PVT__x___05Fh390) 
                                 ^ (IData)(this->__PVT__y___05Fh2027));
    this->__PVT__sb___05Fh300 = ((IData)(this->__PVT__y___05Fh328) 
                                 ^ (IData)(this->__PVT__y___05Fh2082));
    this->__PVT__x___05Fh327 = (1U & ((~ ((IData)(this->__PVT__sa___05Fh299) 
                                          | (IData)(this->__PVT__sb___05Fh300))) 
                                      ^ (~ ((IData)(this->__PVT__y___05Fh2027) 
                                            & (IData)(this->__PVT__y___05Fh2082)))));
    this->__PVT__y___05Fh2237 = (1U & ((~ ((IData)(this->__PVT__x___05Fh390) 
                                           | (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ ((IData)(this->__PVT__sa___05Fh299) 
                                             & (IData)(this->__PVT__sb___05Fh300)))));
    this->__PVT__sd___05Fh303 = ((IData)(this->__PVT__x___05Fh327) 
                                 ^ (IData)(this->__PVT__y___05Fh2237));
    this->__PVT__x___05Fh2409 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sa___05Fh299));
    this->__PVT__x___05Fh2223 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sb___05Fh300));
    this->__PVT__x___05Fh2968 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__x___05Fh390))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__y___05Fh2969 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2027))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__x___05Fh2522 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__y___05Fh2523 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2082))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__dl___05Fh205 = ((IData)(this->__PVT__x___05Fh2968) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh2642 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__x___05Fh2968));
    this->__PVT__dh___05Fh206 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__y___05Fh2523));
    this->__PVT__y___05Fh2643 = ((IData)(this->__PVT__y___05Fh2523) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh3512 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__al___05Fh193));
    this->__PVT__x___05Fh2965 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__bl___05Fh196));
    this->__PVT__x___05Fh3203 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__ah___05Fh194));
    this->__PVT__x___05Fh2519 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__x___05Fh3291 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49));
    this->__PVT__x___05Fh2744 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53));
    this->__PVT__dd___05Fh207 = ((IData)(this->__PVT__x___05Fh2642) 
                                 ^ (IData)(this->__PVT__y___05Fh2643));
    this->__PVT__qq___05Fh3263 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__qq___05Fh2624 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__p___05Fh3262 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__aaa___05Fh195))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__p___05Fh2623 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__bb___05Fh198))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__qq_BIT_2___05F_h3759 = (1U & (((~ 
                                                 ((IData)(this->__PVT__y___05Fh2523) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 6U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__qq___05Fh3263)));
    this->__PVT__p_BIT_0___05F_h3739 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                                   & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__p_BIT_2___05F_h3656 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2523) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 2U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__qq_BIT_1___05F_h3821 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2968) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 5U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__qq_BIT_3___05F_h3591 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2522) 
                                                  & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__p_BIT_3___05F_h3614 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2522) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 3U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__p_BIT_1___05F_h3571 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2968) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 1U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__t2___05Fh45 = ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                ^ (IData)(this->__PVT__p_BIT_0___05F_h3739));
    this->__PVT__t3___05Fh46 = (1U & ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                      ^ (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 4U)))) 
                                          ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                         ^ (IData)(this->__PVT__qq___05Fh3263))));
    this->__PVT__t1___05Fh44 = ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591));
    this->__PVT__t4___05Fh47 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591))));
    this->__PVT__t6___05Fh49 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))));
    this->__PVT__t9___05Fh52 = ((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                ^ (IData)(this->__PVT__t2___05Fh45));
    this->__PVT__t5___05Fh48 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__t1___05Fh44))));
    this->__PVT__t8___05Fh51 = ((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                ^ (IData)(this->__PVT__t4___05Fh47));
    this->__PVT__t7___05Fh50 = (1U & (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                         ^ (IData)(this->__PVT__t6___05Fh49))));
    this->__PVT__t10___05Fh53 = ((IData)(this->__PVT__t3___05Fh46) 
                                 ^ (IData)(this->__PVT__t5___05Fh48));
    this->getbyte = ((0x80U & ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                    ? (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                          ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821)))
                                    : (IData)(this->__PVT__t4___05Fh47))) 
                               << 7U)) | (0x7fU & (~ 
                                                   ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                                     ? 
                                                    ((((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                                       ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                      << 6U) 
                                                     | ((((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                                          ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                         << 5U) 
                                                        | ((0x10U 
                                                            & ((~ 
                                                                ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                                                 ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))) 
                                                               << 4U)) 
                                                           | ((((IData)(this->__PVT__t8___05Fh51) 
                                                                ^ (IData)(this->__PVT__t9___05Fh52)) 
                                                               << 3U) 
                                                              | ((4U 
                                                                  & ((~ 
                                                                      ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                                                       ^ (IData)(this->__PVT__t7___05Fh50))) 
                                                                     << 2U)) 
                                                                 | (((IData)(this->__PVT__t6___05Fh49) 
                                                                     << 1U) 
                                                                    | (1U 
                                                                       & (~ (IData)(this->__PVT__qq_BIT_2___05F_h3759)))))))))
                                                     : 
                                                    (((IData)(this->__PVT__t1___05Fh44) 
                                                      << 6U) 
                                                     | (((IData)(this->__PVT__t3___05Fh46) 
                                                         << 5U) 
                                                        | (((IData)(this->__PVT__t5___05Fh48) 
                                                            << 4U) 
                                                           | ((((IData)(this->__PVT__t2___05Fh45) 
                                                                ^ (IData)(this->__PVT__t5___05Fh48)) 
                                                               << 3U) 
                                                              | ((((IData)(this->__PVT__t3___05Fh46) 
                                                                   ^ (IData)(this->__PVT__t8___05Fh51)) 
                                                                  << 2U) 
                                                                 | (((IData)(this->__PVT__t7___05Fh50) 
                                                                     << 1U) 
                                                                    | (IData)(this->__PVT__t9___05Fh52)))))))))));
}

VL_INLINE_OPT void VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__8(VmkAES_Wrapper2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__8\n"); );
    VmkAES_Wrapper2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__r6___05Fh32 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__024getbyte_byte_in)));
    this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4 
        = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__024getbyte_byte_in) 
                     >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__024getbyte_byte_in) 
                               >> 4U))));
    this->__PVT__r1___05Fh27 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__024getbyte_byte_in) 
                                       >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__024getbyte_byte_in) 
                                                 >> 5U)));
    this->__PVT__r3___05Fh29 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__024getbyte_byte_in) 
                                       >> 6U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__024getbyte_byte_in)));
    this->__PVT__r7___05Fh33 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__024getbyte_byte_in) 
                                       >> 2U) ^ (IData)(this->__PVT__r1___05Fh27)));
    this->__PVT__r4___05Fh30 = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__024getbyte_byte_in) 
                                          >> 5U) ^ (IData)(this->__PVT__r3___05Fh29))));
    this->__PVT__r8___05Fh34 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__024getbyte_byte_in) 
                                       >> 1U) ^ (IData)(this->__PVT__r3___05Fh29)));
    this->__PVT__r5___05Fh31 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__024getbyte_byte_in) 
                                       >> 4U) ^ (IData)(this->__PVT__r4___05Fh30)));
    this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16 
        = (1U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                  ? (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4)
                  : (~ ((IData)(this->__PVT__r7___05Fh33) 
                        ^ (IData)(this->__PVT__r8___05Fh34)))));
    this->__PVT__r9___05Fh35 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(this->__PVT__r8___05Fh34)));
    this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
            ? ((0x40U & ((0xffffffc0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__024getbyte_byte_in) 
                                         << 2U)) ^ 
                         ((IData)(this->__PVT__r8___05Fh34) 
                          << 6U))) | ((0x20U & ((0x7fffffe0U 
                                                 & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__024getbyte_byte_in) 
                                                    >> 1U)) 
                                                ^ (0xffffffe0U 
                                                   & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__024getbyte_byte_in) 
                                                      << 1U)))) 
                                      | (((IData)(this->__PVT__r9___05Fh35) 
                                          << 4U) | 
                                         ((8U & ((~ 
                                                  (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__024getbyte_byte_in) 
                                                    >> 6U) 
                                                   ^ (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4))) 
                                                 << 3U)) 
                                          | (((IData)(this->__PVT__r7___05Fh33) 
                                              << 2U) 
                                             | ((2U 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__024getbyte_byte_in) 
                                                        >> 3U)) 
                                                    ^ 
                                                    ((IData)(this->__PVT__r6___05Fh32) 
                                                     << 1U))) 
                                                | (1U 
                                                   & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__024getbyte_byte_in) 
                                                       >> 1U) 
                                                      ^ (IData)(this->__PVT__r5___05Fh31)))))))))
            : (((IData)(this->__PVT__r5___05Fh31) << 6U) 
               | ((0x20U & ((0xffffffe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__024getbyte_byte_in) 
                                            << 4U)) 
                            ^ ((IData)(this->__PVT__r4___05Fh30) 
                               << 5U))) | ((0x10U & 
                                            ((~ ((IData)(this->__PVT__r1___05Fh27) 
                                                 ^ (IData)(this->__PVT__r3___05Fh29))) 
                                             << 4U)) 
                                           | ((8U & 
                                               (((0xfffffff8U 
                                                  & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__024getbyte_byte_in) 
                                                     << 2U)) 
                                                 ^ 
                                                 ((IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4) 
                                                  << 3U)) 
                                                ^ ((IData)(this->__PVT__r6___05Fh32) 
                                                   << 3U))) 
                                              | ((4U 
                                                  & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__024getbyte_byte_in)) 
                                                     << 2U)) 
                                                 | (((IData)(this->__PVT__r4___05Fh30) 
                                                     << 1U) 
                                                    | (1U 
                                                       & (~ 
                                                          (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__024getbyte_byte_in) 
                                                            >> 2U) 
                                                           ^ (IData)(this->__PVT__r9___05Fh35)))))))))));
    this->__PVT__al___05Fh193 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 5U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 4U))));
    this->__PVT__bl___05Fh196 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 1U)) 
                                       ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__ah___05Fh194 = (1U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U))));
    this->__PVT__bh___05Fh197 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 3U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 2U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49 
        = (3U & (((2U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                         << 1U)) | (1U & (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U)))) 
                 ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                       >> 4U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53 
        = (3U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                     >> 2U)) ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__x___05Fh1386 = ((IData)(this->__PVT__ah___05Fh194) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__aaa___05Fh195 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                         >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49)));
    this->__PVT__x___05Fh1688 = (1U & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                       & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__bb___05Fh198 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                        >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__y___05Fh2027 = (1U & ((((~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                              | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                             >> 1U)) 
                                         ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 6U)) 
                                               & (~ 
                                                  ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 2U))))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__y___05Fh2082 = (1U & ((((~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                 >> 4U)) 
                                             | (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                         ^ (~ ((IData)(this->__PVT__al___05Fh193) 
                                               & (IData)(this->__PVT__bl___05Fh196)))) 
                                        ^ (~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                              >> 1U))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__x___05Fh1488 = ((IData)(this->__PVT__aaa___05Fh195) 
                                 & (IData)(this->__PVT__bb___05Fh198));
    this->__PVT__x___05Fh390 = (1U & ((((~ ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                            | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53))) 
                                        ^ (~ ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 3U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__y___05Fh328 = (1U & ((((~ ((IData)(this->__PVT__al___05Fh193) 
                                            | (IData)(this->__PVT__bl___05Fh196))) 
                                        ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 5U)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 1U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__sa___05Fh299 = ((IData)(this->__PVT__x___05Fh390) 
                                 ^ (IData)(this->__PVT__y___05Fh2027));
    this->__PVT__sb___05Fh300 = ((IData)(this->__PVT__y___05Fh328) 
                                 ^ (IData)(this->__PVT__y___05Fh2082));
    this->__PVT__x___05Fh327 = (1U & ((~ ((IData)(this->__PVT__sa___05Fh299) 
                                          | (IData)(this->__PVT__sb___05Fh300))) 
                                      ^ (~ ((IData)(this->__PVT__y___05Fh2027) 
                                            & (IData)(this->__PVT__y___05Fh2082)))));
    this->__PVT__y___05Fh2237 = (1U & ((~ ((IData)(this->__PVT__x___05Fh390) 
                                           | (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ ((IData)(this->__PVT__sa___05Fh299) 
                                             & (IData)(this->__PVT__sb___05Fh300)))));
    this->__PVT__sd___05Fh303 = ((IData)(this->__PVT__x___05Fh327) 
                                 ^ (IData)(this->__PVT__y___05Fh2237));
    this->__PVT__x___05Fh2409 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sa___05Fh299));
    this->__PVT__x___05Fh2223 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sb___05Fh300));
    this->__PVT__x___05Fh2968 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__x___05Fh390))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__y___05Fh2969 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2027))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__x___05Fh2522 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__y___05Fh2523 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2082))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__dl___05Fh205 = ((IData)(this->__PVT__x___05Fh2968) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh2642 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__x___05Fh2968));
    this->__PVT__dh___05Fh206 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__y___05Fh2523));
    this->__PVT__y___05Fh2643 = ((IData)(this->__PVT__y___05Fh2523) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh3512 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__al___05Fh193));
    this->__PVT__x___05Fh2965 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__bl___05Fh196));
    this->__PVT__x___05Fh3203 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__ah___05Fh194));
    this->__PVT__x___05Fh2519 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__x___05Fh3291 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49));
    this->__PVT__x___05Fh2744 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53));
    this->__PVT__dd___05Fh207 = ((IData)(this->__PVT__x___05Fh2642) 
                                 ^ (IData)(this->__PVT__y___05Fh2643));
    this->__PVT__qq___05Fh3263 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__qq___05Fh2624 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__p___05Fh3262 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__aaa___05Fh195))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__p___05Fh2623 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__bb___05Fh198))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__qq_BIT_2___05F_h3759 = (1U & (((~ 
                                                 ((IData)(this->__PVT__y___05Fh2523) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 6U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__qq___05Fh3263)));
    this->__PVT__p_BIT_0___05F_h3739 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                                   & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__p_BIT_2___05F_h3656 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2523) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 2U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__qq_BIT_1___05F_h3821 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2968) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 5U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__qq_BIT_3___05F_h3591 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2522) 
                                                  & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__p_BIT_3___05F_h3614 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2522) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 3U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__p_BIT_1___05F_h3571 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2968) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 1U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__t2___05Fh45 = ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                ^ (IData)(this->__PVT__p_BIT_0___05F_h3739));
    this->__PVT__t3___05Fh46 = (1U & ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                      ^ (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 4U)))) 
                                          ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                         ^ (IData)(this->__PVT__qq___05Fh3263))));
    this->__PVT__t1___05Fh44 = ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591));
    this->__PVT__t4___05Fh47 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591))));
    this->__PVT__t6___05Fh49 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))));
    this->__PVT__t9___05Fh52 = ((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                ^ (IData)(this->__PVT__t2___05Fh45));
    this->__PVT__t5___05Fh48 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__t1___05Fh44))));
    this->__PVT__t8___05Fh51 = ((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                ^ (IData)(this->__PVT__t4___05Fh47));
    this->__PVT__t7___05Fh50 = (1U & (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                         ^ (IData)(this->__PVT__t6___05Fh49))));
    this->__PVT__t10___05Fh53 = ((IData)(this->__PVT__t3___05Fh46) 
                                 ^ (IData)(this->__PVT__t5___05Fh48));
    this->getbyte = ((0x80U & ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                    ? (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                          ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821)))
                                    : (IData)(this->__PVT__t4___05Fh47))) 
                               << 7U)) | (0x7fU & (~ 
                                                   ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                                     ? 
                                                    ((((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                                       ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                      << 6U) 
                                                     | ((((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                                          ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                         << 5U) 
                                                        | ((0x10U 
                                                            & ((~ 
                                                                ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                                                 ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))) 
                                                               << 4U)) 
                                                           | ((((IData)(this->__PVT__t8___05Fh51) 
                                                                ^ (IData)(this->__PVT__t9___05Fh52)) 
                                                               << 3U) 
                                                              | ((4U 
                                                                  & ((~ 
                                                                      ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                                                       ^ (IData)(this->__PVT__t7___05Fh50))) 
                                                                     << 2U)) 
                                                                 | (((IData)(this->__PVT__t6___05Fh49) 
                                                                     << 1U) 
                                                                    | (1U 
                                                                       & (~ (IData)(this->__PVT__qq_BIT_2___05F_h3759)))))))))
                                                     : 
                                                    (((IData)(this->__PVT__t1___05Fh44) 
                                                      << 6U) 
                                                     | (((IData)(this->__PVT__t3___05Fh46) 
                                                         << 5U) 
                                                        | (((IData)(this->__PVT__t5___05Fh48) 
                                                            << 4U) 
                                                           | ((((IData)(this->__PVT__t2___05Fh45) 
                                                                ^ (IData)(this->__PVT__t5___05Fh48)) 
                                                               << 3U) 
                                                              | ((((IData)(this->__PVT__t3___05Fh46) 
                                                                   ^ (IData)(this->__PVT__t8___05Fh51)) 
                                                                  << 2U) 
                                                                 | (((IData)(this->__PVT__t7___05Fh50) 
                                                                     << 1U) 
                                                                    | (IData)(this->__PVT__t9___05Fh52)))))))))));
}

VL_INLINE_OPT void VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__9(VmkAES_Wrapper2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__9\n"); );
    VmkAES_Wrapper2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__r6___05Fh32 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__024getbyte_byte_in)));
    this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4 
        = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__024getbyte_byte_in) 
                     >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__024getbyte_byte_in) 
                               >> 4U))));
    this->__PVT__r1___05Fh27 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__024getbyte_byte_in) 
                                       >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__024getbyte_byte_in) 
                                                 >> 5U)));
    this->__PVT__r3___05Fh29 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__024getbyte_byte_in) 
                                       >> 6U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__024getbyte_byte_in)));
    this->__PVT__r7___05Fh33 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__024getbyte_byte_in) 
                                       >> 2U) ^ (IData)(this->__PVT__r1___05Fh27)));
    this->__PVT__r4___05Fh30 = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__024getbyte_byte_in) 
                                          >> 5U) ^ (IData)(this->__PVT__r3___05Fh29))));
    this->__PVT__r8___05Fh34 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__024getbyte_byte_in) 
                                       >> 1U) ^ (IData)(this->__PVT__r3___05Fh29)));
    this->__PVT__r5___05Fh31 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__024getbyte_byte_in) 
                                       >> 4U) ^ (IData)(this->__PVT__r4___05Fh30)));
    this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16 
        = (1U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                  ? (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4)
                  : (~ ((IData)(this->__PVT__r7___05Fh33) 
                        ^ (IData)(this->__PVT__r8___05Fh34)))));
    this->__PVT__r9___05Fh35 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(this->__PVT__r8___05Fh34)));
    this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
            ? ((0x40U & ((0xffffffc0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__024getbyte_byte_in) 
                                         << 2U)) ^ 
                         ((IData)(this->__PVT__r8___05Fh34) 
                          << 6U))) | ((0x20U & ((0x7fffffe0U 
                                                 & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__024getbyte_byte_in) 
                                                    >> 1U)) 
                                                ^ (0xffffffe0U 
                                                   & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__024getbyte_byte_in) 
                                                      << 1U)))) 
                                      | (((IData)(this->__PVT__r9___05Fh35) 
                                          << 4U) | 
                                         ((8U & ((~ 
                                                  (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__024getbyte_byte_in) 
                                                    >> 6U) 
                                                   ^ (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4))) 
                                                 << 3U)) 
                                          | (((IData)(this->__PVT__r7___05Fh33) 
                                              << 2U) 
                                             | ((2U 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__024getbyte_byte_in) 
                                                        >> 3U)) 
                                                    ^ 
                                                    ((IData)(this->__PVT__r6___05Fh32) 
                                                     << 1U))) 
                                                | (1U 
                                                   & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__024getbyte_byte_in) 
                                                       >> 1U) 
                                                      ^ (IData)(this->__PVT__r5___05Fh31)))))))))
            : (((IData)(this->__PVT__r5___05Fh31) << 6U) 
               | ((0x20U & ((0xffffffe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__024getbyte_byte_in) 
                                            << 4U)) 
                            ^ ((IData)(this->__PVT__r4___05Fh30) 
                               << 5U))) | ((0x10U & 
                                            ((~ ((IData)(this->__PVT__r1___05Fh27) 
                                                 ^ (IData)(this->__PVT__r3___05Fh29))) 
                                             << 4U)) 
                                           | ((8U & 
                                               (((0xfffffff8U 
                                                  & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__024getbyte_byte_in) 
                                                     << 2U)) 
                                                 ^ 
                                                 ((IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4) 
                                                  << 3U)) 
                                                ^ ((IData)(this->__PVT__r6___05Fh32) 
                                                   << 3U))) 
                                              | ((4U 
                                                  & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__024getbyte_byte_in)) 
                                                     << 2U)) 
                                                 | (((IData)(this->__PVT__r4___05Fh30) 
                                                     << 1U) 
                                                    | (1U 
                                                       & (~ 
                                                          (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__024getbyte_byte_in) 
                                                            >> 2U) 
                                                           ^ (IData)(this->__PVT__r9___05Fh35)))))))))));
    this->__PVT__al___05Fh193 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 5U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 4U))));
    this->__PVT__bl___05Fh196 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 1U)) 
                                       ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__ah___05Fh194 = (1U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U))));
    this->__PVT__bh___05Fh197 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 3U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 2U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49 
        = (3U & (((2U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                         << 1U)) | (1U & (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U)))) 
                 ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                       >> 4U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53 
        = (3U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                     >> 2U)) ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__x___05Fh1386 = ((IData)(this->__PVT__ah___05Fh194) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__aaa___05Fh195 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                         >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49)));
    this->__PVT__x___05Fh1688 = (1U & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                       & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__bb___05Fh198 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                        >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__y___05Fh2027 = (1U & ((((~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                              | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                             >> 1U)) 
                                         ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 6U)) 
                                               & (~ 
                                                  ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 2U))))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__y___05Fh2082 = (1U & ((((~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                 >> 4U)) 
                                             | (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                         ^ (~ ((IData)(this->__PVT__al___05Fh193) 
                                               & (IData)(this->__PVT__bl___05Fh196)))) 
                                        ^ (~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                              >> 1U))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__x___05Fh1488 = ((IData)(this->__PVT__aaa___05Fh195) 
                                 & (IData)(this->__PVT__bb___05Fh198));
    this->__PVT__x___05Fh390 = (1U & ((((~ ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                            | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53))) 
                                        ^ (~ ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 3U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__y___05Fh328 = (1U & ((((~ ((IData)(this->__PVT__al___05Fh193) 
                                            | (IData)(this->__PVT__bl___05Fh196))) 
                                        ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 5U)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 1U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__sa___05Fh299 = ((IData)(this->__PVT__x___05Fh390) 
                                 ^ (IData)(this->__PVT__y___05Fh2027));
    this->__PVT__sb___05Fh300 = ((IData)(this->__PVT__y___05Fh328) 
                                 ^ (IData)(this->__PVT__y___05Fh2082));
    this->__PVT__x___05Fh327 = (1U & ((~ ((IData)(this->__PVT__sa___05Fh299) 
                                          | (IData)(this->__PVT__sb___05Fh300))) 
                                      ^ (~ ((IData)(this->__PVT__y___05Fh2027) 
                                            & (IData)(this->__PVT__y___05Fh2082)))));
    this->__PVT__y___05Fh2237 = (1U & ((~ ((IData)(this->__PVT__x___05Fh390) 
                                           | (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ ((IData)(this->__PVT__sa___05Fh299) 
                                             & (IData)(this->__PVT__sb___05Fh300)))));
    this->__PVT__sd___05Fh303 = ((IData)(this->__PVT__x___05Fh327) 
                                 ^ (IData)(this->__PVT__y___05Fh2237));
    this->__PVT__x___05Fh2409 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sa___05Fh299));
    this->__PVT__x___05Fh2223 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sb___05Fh300));
    this->__PVT__x___05Fh2968 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__x___05Fh390))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__y___05Fh2969 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2027))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__x___05Fh2522 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__y___05Fh2523 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2082))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__dl___05Fh205 = ((IData)(this->__PVT__x___05Fh2968) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh2642 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__x___05Fh2968));
    this->__PVT__dh___05Fh206 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__y___05Fh2523));
    this->__PVT__y___05Fh2643 = ((IData)(this->__PVT__y___05Fh2523) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh3512 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__al___05Fh193));
    this->__PVT__x___05Fh2965 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__bl___05Fh196));
    this->__PVT__x___05Fh3203 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__ah___05Fh194));
    this->__PVT__x___05Fh2519 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__x___05Fh3291 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49));
    this->__PVT__x___05Fh2744 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53));
    this->__PVT__dd___05Fh207 = ((IData)(this->__PVT__x___05Fh2642) 
                                 ^ (IData)(this->__PVT__y___05Fh2643));
    this->__PVT__qq___05Fh3263 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__qq___05Fh2624 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__p___05Fh3262 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__aaa___05Fh195))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__p___05Fh2623 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__bb___05Fh198))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__qq_BIT_2___05F_h3759 = (1U & (((~ 
                                                 ((IData)(this->__PVT__y___05Fh2523) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 6U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__qq___05Fh3263)));
    this->__PVT__p_BIT_0___05F_h3739 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                                   & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__p_BIT_2___05F_h3656 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2523) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 2U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__qq_BIT_1___05F_h3821 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2968) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 5U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__qq_BIT_3___05F_h3591 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2522) 
                                                  & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__p_BIT_3___05F_h3614 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2522) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 3U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__p_BIT_1___05F_h3571 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2968) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 1U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__t2___05Fh45 = ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                ^ (IData)(this->__PVT__p_BIT_0___05F_h3739));
    this->__PVT__t3___05Fh46 = (1U & ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                      ^ (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 4U)))) 
                                          ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                         ^ (IData)(this->__PVT__qq___05Fh3263))));
    this->__PVT__t1___05Fh44 = ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591));
    this->__PVT__t4___05Fh47 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591))));
    this->__PVT__t6___05Fh49 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))));
    this->__PVT__t9___05Fh52 = ((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                ^ (IData)(this->__PVT__t2___05Fh45));
    this->__PVT__t5___05Fh48 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__t1___05Fh44))));
    this->__PVT__t8___05Fh51 = ((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                ^ (IData)(this->__PVT__t4___05Fh47));
    this->__PVT__t7___05Fh50 = (1U & (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                         ^ (IData)(this->__PVT__t6___05Fh49))));
    this->__PVT__t10___05Fh53 = ((IData)(this->__PVT__t3___05Fh46) 
                                 ^ (IData)(this->__PVT__t5___05Fh48));
    this->getbyte = ((0x80U & ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                    ? (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                          ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821)))
                                    : (IData)(this->__PVT__t4___05Fh47))) 
                               << 7U)) | (0x7fU & (~ 
                                                   ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                                     ? 
                                                    ((((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                                       ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                      << 6U) 
                                                     | ((((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                                          ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                         << 5U) 
                                                        | ((0x10U 
                                                            & ((~ 
                                                                ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                                                 ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))) 
                                                               << 4U)) 
                                                           | ((((IData)(this->__PVT__t8___05Fh51) 
                                                                ^ (IData)(this->__PVT__t9___05Fh52)) 
                                                               << 3U) 
                                                              | ((4U 
                                                                  & ((~ 
                                                                      ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                                                       ^ (IData)(this->__PVT__t7___05Fh50))) 
                                                                     << 2U)) 
                                                                 | (((IData)(this->__PVT__t6___05Fh49) 
                                                                     << 1U) 
                                                                    | (1U 
                                                                       & (~ (IData)(this->__PVT__qq_BIT_2___05F_h3759)))))))))
                                                     : 
                                                    (((IData)(this->__PVT__t1___05Fh44) 
                                                      << 6U) 
                                                     | (((IData)(this->__PVT__t3___05Fh46) 
                                                         << 5U) 
                                                        | (((IData)(this->__PVT__t5___05Fh48) 
                                                            << 4U) 
                                                           | ((((IData)(this->__PVT__t2___05Fh45) 
                                                                ^ (IData)(this->__PVT__t5___05Fh48)) 
                                                               << 3U) 
                                                              | ((((IData)(this->__PVT__t3___05Fh46) 
                                                                   ^ (IData)(this->__PVT__t8___05Fh51)) 
                                                                  << 2U) 
                                                                 | (((IData)(this->__PVT__t7___05Fh50) 
                                                                     << 1U) 
                                                                    | (IData)(this->__PVT__t9___05Fh52)))))))))));
}

VL_INLINE_OPT void VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__10(VmkAES_Wrapper2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__10\n"); );
    VmkAES_Wrapper2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__r6___05Fh32 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__024getbyte_byte_in)));
    this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4 
        = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__024getbyte_byte_in) 
                     >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__024getbyte_byte_in) 
                               >> 4U))));
    this->__PVT__r1___05Fh27 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__024getbyte_byte_in) 
                                       >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__024getbyte_byte_in) 
                                                 >> 5U)));
    this->__PVT__r3___05Fh29 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__024getbyte_byte_in) 
                                       >> 6U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__024getbyte_byte_in)));
    this->__PVT__r7___05Fh33 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__024getbyte_byte_in) 
                                       >> 2U) ^ (IData)(this->__PVT__r1___05Fh27)));
    this->__PVT__r4___05Fh30 = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__024getbyte_byte_in) 
                                          >> 5U) ^ (IData)(this->__PVT__r3___05Fh29))));
    this->__PVT__r8___05Fh34 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__024getbyte_byte_in) 
                                       >> 1U) ^ (IData)(this->__PVT__r3___05Fh29)));
    this->__PVT__r5___05Fh31 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__024getbyte_byte_in) 
                                       >> 4U) ^ (IData)(this->__PVT__r4___05Fh30)));
    this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16 
        = (1U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                  ? (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4)
                  : (~ ((IData)(this->__PVT__r7___05Fh33) 
                        ^ (IData)(this->__PVT__r8___05Fh34)))));
    this->__PVT__r9___05Fh35 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(this->__PVT__r8___05Fh34)));
    this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
            ? ((0x40U & ((0xffffffc0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__024getbyte_byte_in) 
                                         << 2U)) ^ 
                         ((IData)(this->__PVT__r8___05Fh34) 
                          << 6U))) | ((0x20U & ((0x7fffffe0U 
                                                 & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__024getbyte_byte_in) 
                                                    >> 1U)) 
                                                ^ (0xffffffe0U 
                                                   & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__024getbyte_byte_in) 
                                                      << 1U)))) 
                                      | (((IData)(this->__PVT__r9___05Fh35) 
                                          << 4U) | 
                                         ((8U & ((~ 
                                                  (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__024getbyte_byte_in) 
                                                    >> 6U) 
                                                   ^ (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4))) 
                                                 << 3U)) 
                                          | (((IData)(this->__PVT__r7___05Fh33) 
                                              << 2U) 
                                             | ((2U 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__024getbyte_byte_in) 
                                                        >> 3U)) 
                                                    ^ 
                                                    ((IData)(this->__PVT__r6___05Fh32) 
                                                     << 1U))) 
                                                | (1U 
                                                   & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__024getbyte_byte_in) 
                                                       >> 1U) 
                                                      ^ (IData)(this->__PVT__r5___05Fh31)))))))))
            : (((IData)(this->__PVT__r5___05Fh31) << 6U) 
               | ((0x20U & ((0xffffffe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__024getbyte_byte_in) 
                                            << 4U)) 
                            ^ ((IData)(this->__PVT__r4___05Fh30) 
                               << 5U))) | ((0x10U & 
                                            ((~ ((IData)(this->__PVT__r1___05Fh27) 
                                                 ^ (IData)(this->__PVT__r3___05Fh29))) 
                                             << 4U)) 
                                           | ((8U & 
                                               (((0xfffffff8U 
                                                  & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__024getbyte_byte_in) 
                                                     << 2U)) 
                                                 ^ 
                                                 ((IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4) 
                                                  << 3U)) 
                                                ^ ((IData)(this->__PVT__r6___05Fh32) 
                                                   << 3U))) 
                                              | ((4U 
                                                  & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__024getbyte_byte_in)) 
                                                     << 2U)) 
                                                 | (((IData)(this->__PVT__r4___05Fh30) 
                                                     << 1U) 
                                                    | (1U 
                                                       & (~ 
                                                          (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__024getbyte_byte_in) 
                                                            >> 2U) 
                                                           ^ (IData)(this->__PVT__r9___05Fh35)))))))))));
    this->__PVT__al___05Fh193 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 5U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 4U))));
    this->__PVT__bl___05Fh196 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 1U)) 
                                       ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__ah___05Fh194 = (1U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U))));
    this->__PVT__bh___05Fh197 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 3U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 2U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49 
        = (3U & (((2U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                         << 1U)) | (1U & (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U)))) 
                 ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                       >> 4U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53 
        = (3U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                     >> 2U)) ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__x___05Fh1386 = ((IData)(this->__PVT__ah___05Fh194) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__aaa___05Fh195 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                         >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49)));
    this->__PVT__x___05Fh1688 = (1U & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                       & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__bb___05Fh198 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                        >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__y___05Fh2027 = (1U & ((((~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                              | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                             >> 1U)) 
                                         ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 6U)) 
                                               & (~ 
                                                  ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 2U))))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__y___05Fh2082 = (1U & ((((~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                 >> 4U)) 
                                             | (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                         ^ (~ ((IData)(this->__PVT__al___05Fh193) 
                                               & (IData)(this->__PVT__bl___05Fh196)))) 
                                        ^ (~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                              >> 1U))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__x___05Fh1488 = ((IData)(this->__PVT__aaa___05Fh195) 
                                 & (IData)(this->__PVT__bb___05Fh198));
    this->__PVT__x___05Fh390 = (1U & ((((~ ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                            | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53))) 
                                        ^ (~ ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 3U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__y___05Fh328 = (1U & ((((~ ((IData)(this->__PVT__al___05Fh193) 
                                            | (IData)(this->__PVT__bl___05Fh196))) 
                                        ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 5U)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 1U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__sa___05Fh299 = ((IData)(this->__PVT__x___05Fh390) 
                                 ^ (IData)(this->__PVT__y___05Fh2027));
    this->__PVT__sb___05Fh300 = ((IData)(this->__PVT__y___05Fh328) 
                                 ^ (IData)(this->__PVT__y___05Fh2082));
    this->__PVT__x___05Fh327 = (1U & ((~ ((IData)(this->__PVT__sa___05Fh299) 
                                          | (IData)(this->__PVT__sb___05Fh300))) 
                                      ^ (~ ((IData)(this->__PVT__y___05Fh2027) 
                                            & (IData)(this->__PVT__y___05Fh2082)))));
    this->__PVT__y___05Fh2237 = (1U & ((~ ((IData)(this->__PVT__x___05Fh390) 
                                           | (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ ((IData)(this->__PVT__sa___05Fh299) 
                                             & (IData)(this->__PVT__sb___05Fh300)))));
    this->__PVT__sd___05Fh303 = ((IData)(this->__PVT__x___05Fh327) 
                                 ^ (IData)(this->__PVT__y___05Fh2237));
    this->__PVT__x___05Fh2409 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sa___05Fh299));
    this->__PVT__x___05Fh2223 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sb___05Fh300));
    this->__PVT__x___05Fh2968 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__x___05Fh390))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__y___05Fh2969 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2027))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__x___05Fh2522 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__y___05Fh2523 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2082))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__dl___05Fh205 = ((IData)(this->__PVT__x___05Fh2968) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh2642 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__x___05Fh2968));
    this->__PVT__dh___05Fh206 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__y___05Fh2523));
    this->__PVT__y___05Fh2643 = ((IData)(this->__PVT__y___05Fh2523) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh3512 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__al___05Fh193));
    this->__PVT__x___05Fh2965 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__bl___05Fh196));
    this->__PVT__x___05Fh3203 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__ah___05Fh194));
    this->__PVT__x___05Fh2519 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__x___05Fh3291 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49));
    this->__PVT__x___05Fh2744 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53));
    this->__PVT__dd___05Fh207 = ((IData)(this->__PVT__x___05Fh2642) 
                                 ^ (IData)(this->__PVT__y___05Fh2643));
    this->__PVT__qq___05Fh3263 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__qq___05Fh2624 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__p___05Fh3262 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__aaa___05Fh195))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__p___05Fh2623 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__bb___05Fh198))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__qq_BIT_2___05F_h3759 = (1U & (((~ 
                                                 ((IData)(this->__PVT__y___05Fh2523) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 6U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__qq___05Fh3263)));
    this->__PVT__p_BIT_0___05F_h3739 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                                   & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__p_BIT_2___05F_h3656 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2523) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 2U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__qq_BIT_1___05F_h3821 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2968) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 5U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__qq_BIT_3___05F_h3591 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2522) 
                                                  & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__p_BIT_3___05F_h3614 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2522) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 3U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__p_BIT_1___05F_h3571 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2968) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 1U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__t2___05Fh45 = ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                ^ (IData)(this->__PVT__p_BIT_0___05F_h3739));
    this->__PVT__t3___05Fh46 = (1U & ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                      ^ (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 4U)))) 
                                          ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                         ^ (IData)(this->__PVT__qq___05Fh3263))));
    this->__PVT__t1___05Fh44 = ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591));
    this->__PVT__t4___05Fh47 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591))));
    this->__PVT__t6___05Fh49 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))));
    this->__PVT__t9___05Fh52 = ((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                ^ (IData)(this->__PVT__t2___05Fh45));
    this->__PVT__t5___05Fh48 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__t1___05Fh44))));
    this->__PVT__t8___05Fh51 = ((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                ^ (IData)(this->__PVT__t4___05Fh47));
    this->__PVT__t7___05Fh50 = (1U & (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                         ^ (IData)(this->__PVT__t6___05Fh49))));
    this->__PVT__t10___05Fh53 = ((IData)(this->__PVT__t3___05Fh46) 
                                 ^ (IData)(this->__PVT__t5___05Fh48));
    this->getbyte = ((0x80U & ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                    ? (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                          ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821)))
                                    : (IData)(this->__PVT__t4___05Fh47))) 
                               << 7U)) | (0x7fU & (~ 
                                                   ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                                     ? 
                                                    ((((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                                       ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                      << 6U) 
                                                     | ((((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                                          ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                         << 5U) 
                                                        | ((0x10U 
                                                            & ((~ 
                                                                ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                                                 ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))) 
                                                               << 4U)) 
                                                           | ((((IData)(this->__PVT__t8___05Fh51) 
                                                                ^ (IData)(this->__PVT__t9___05Fh52)) 
                                                               << 3U) 
                                                              | ((4U 
                                                                  & ((~ 
                                                                      ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                                                       ^ (IData)(this->__PVT__t7___05Fh50))) 
                                                                     << 2U)) 
                                                                 | (((IData)(this->__PVT__t6___05Fh49) 
                                                                     << 1U) 
                                                                    | (1U 
                                                                       & (~ (IData)(this->__PVT__qq_BIT_2___05F_h3759)))))))))
                                                     : 
                                                    (((IData)(this->__PVT__t1___05Fh44) 
                                                      << 6U) 
                                                     | (((IData)(this->__PVT__t3___05Fh46) 
                                                         << 5U) 
                                                        | (((IData)(this->__PVT__t5___05Fh48) 
                                                            << 4U) 
                                                           | ((((IData)(this->__PVT__t2___05Fh45) 
                                                                ^ (IData)(this->__PVT__t5___05Fh48)) 
                                                               << 3U) 
                                                              | ((((IData)(this->__PVT__t3___05Fh46) 
                                                                   ^ (IData)(this->__PVT__t8___05Fh51)) 
                                                                  << 2U) 
                                                                 | (((IData)(this->__PVT__t7___05Fh50) 
                                                                     << 1U) 
                                                                    | (IData)(this->__PVT__t9___05Fh52)))))))))));
}

VL_INLINE_OPT void VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__11(VmkAES_Wrapper2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__11\n"); );
    VmkAES_Wrapper2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__r6___05Fh32 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__024getbyte_byte_in)));
    this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4 
        = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__024getbyte_byte_in) 
                     >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__024getbyte_byte_in) 
                               >> 4U))));
    this->__PVT__r1___05Fh27 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__024getbyte_byte_in) 
                                       >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__024getbyte_byte_in) 
                                                 >> 5U)));
    this->__PVT__r3___05Fh29 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__024getbyte_byte_in) 
                                       >> 6U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__024getbyte_byte_in)));
    this->__PVT__r7___05Fh33 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__024getbyte_byte_in) 
                                       >> 2U) ^ (IData)(this->__PVT__r1___05Fh27)));
    this->__PVT__r4___05Fh30 = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__024getbyte_byte_in) 
                                          >> 5U) ^ (IData)(this->__PVT__r3___05Fh29))));
    this->__PVT__r8___05Fh34 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__024getbyte_byte_in) 
                                       >> 1U) ^ (IData)(this->__PVT__r3___05Fh29)));
    this->__PVT__r5___05Fh31 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__024getbyte_byte_in) 
                                       >> 4U) ^ (IData)(this->__PVT__r4___05Fh30)));
    this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16 
        = (1U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                  ? (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4)
                  : (~ ((IData)(this->__PVT__r7___05Fh33) 
                        ^ (IData)(this->__PVT__r8___05Fh34)))));
    this->__PVT__r9___05Fh35 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(this->__PVT__r8___05Fh34)));
    this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
            ? ((0x40U & ((0xffffffc0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__024getbyte_byte_in) 
                                         << 2U)) ^ 
                         ((IData)(this->__PVT__r8___05Fh34) 
                          << 6U))) | ((0x20U & ((0x7fffffe0U 
                                                 & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__024getbyte_byte_in) 
                                                    >> 1U)) 
                                                ^ (0xffffffe0U 
                                                   & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__024getbyte_byte_in) 
                                                      << 1U)))) 
                                      | (((IData)(this->__PVT__r9___05Fh35) 
                                          << 4U) | 
                                         ((8U & ((~ 
                                                  (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__024getbyte_byte_in) 
                                                    >> 6U) 
                                                   ^ (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4))) 
                                                 << 3U)) 
                                          | (((IData)(this->__PVT__r7___05Fh33) 
                                              << 2U) 
                                             | ((2U 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__024getbyte_byte_in) 
                                                        >> 3U)) 
                                                    ^ 
                                                    ((IData)(this->__PVT__r6___05Fh32) 
                                                     << 1U))) 
                                                | (1U 
                                                   & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__024getbyte_byte_in) 
                                                       >> 1U) 
                                                      ^ (IData)(this->__PVT__r5___05Fh31)))))))))
            : (((IData)(this->__PVT__r5___05Fh31) << 6U) 
               | ((0x20U & ((0xffffffe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__024getbyte_byte_in) 
                                            << 4U)) 
                            ^ ((IData)(this->__PVT__r4___05Fh30) 
                               << 5U))) | ((0x10U & 
                                            ((~ ((IData)(this->__PVT__r1___05Fh27) 
                                                 ^ (IData)(this->__PVT__r3___05Fh29))) 
                                             << 4U)) 
                                           | ((8U & 
                                               (((0xfffffff8U 
                                                  & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__024getbyte_byte_in) 
                                                     << 2U)) 
                                                 ^ 
                                                 ((IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4) 
                                                  << 3U)) 
                                                ^ ((IData)(this->__PVT__r6___05Fh32) 
                                                   << 3U))) 
                                              | ((4U 
                                                  & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__024getbyte_byte_in)) 
                                                     << 2U)) 
                                                 | (((IData)(this->__PVT__r4___05Fh30) 
                                                     << 1U) 
                                                    | (1U 
                                                       & (~ 
                                                          (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__024getbyte_byte_in) 
                                                            >> 2U) 
                                                           ^ (IData)(this->__PVT__r9___05Fh35)))))))))));
    this->__PVT__al___05Fh193 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 5U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 4U))));
    this->__PVT__bl___05Fh196 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 1U)) 
                                       ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__ah___05Fh194 = (1U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U))));
    this->__PVT__bh___05Fh197 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 3U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 2U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49 
        = (3U & (((2U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                         << 1U)) | (1U & (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U)))) 
                 ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                       >> 4U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53 
        = (3U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                     >> 2U)) ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__x___05Fh1386 = ((IData)(this->__PVT__ah___05Fh194) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__aaa___05Fh195 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                         >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49)));
    this->__PVT__x___05Fh1688 = (1U & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                       & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__bb___05Fh198 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                        >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__y___05Fh2027 = (1U & ((((~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                              | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                             >> 1U)) 
                                         ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 6U)) 
                                               & (~ 
                                                  ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 2U))))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__y___05Fh2082 = (1U & ((((~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                 >> 4U)) 
                                             | (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                         ^ (~ ((IData)(this->__PVT__al___05Fh193) 
                                               & (IData)(this->__PVT__bl___05Fh196)))) 
                                        ^ (~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                              >> 1U))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__x___05Fh1488 = ((IData)(this->__PVT__aaa___05Fh195) 
                                 & (IData)(this->__PVT__bb___05Fh198));
    this->__PVT__x___05Fh390 = (1U & ((((~ ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                            | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53))) 
                                        ^ (~ ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 3U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__y___05Fh328 = (1U & ((((~ ((IData)(this->__PVT__al___05Fh193) 
                                            | (IData)(this->__PVT__bl___05Fh196))) 
                                        ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 5U)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 1U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__sa___05Fh299 = ((IData)(this->__PVT__x___05Fh390) 
                                 ^ (IData)(this->__PVT__y___05Fh2027));
    this->__PVT__sb___05Fh300 = ((IData)(this->__PVT__y___05Fh328) 
                                 ^ (IData)(this->__PVT__y___05Fh2082));
    this->__PVT__x___05Fh327 = (1U & ((~ ((IData)(this->__PVT__sa___05Fh299) 
                                          | (IData)(this->__PVT__sb___05Fh300))) 
                                      ^ (~ ((IData)(this->__PVT__y___05Fh2027) 
                                            & (IData)(this->__PVT__y___05Fh2082)))));
    this->__PVT__y___05Fh2237 = (1U & ((~ ((IData)(this->__PVT__x___05Fh390) 
                                           | (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ ((IData)(this->__PVT__sa___05Fh299) 
                                             & (IData)(this->__PVT__sb___05Fh300)))));
    this->__PVT__sd___05Fh303 = ((IData)(this->__PVT__x___05Fh327) 
                                 ^ (IData)(this->__PVT__y___05Fh2237));
    this->__PVT__x___05Fh2409 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sa___05Fh299));
    this->__PVT__x___05Fh2223 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sb___05Fh300));
    this->__PVT__x___05Fh2968 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__x___05Fh390))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__y___05Fh2969 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2027))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__x___05Fh2522 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__y___05Fh2523 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2082))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__dl___05Fh205 = ((IData)(this->__PVT__x___05Fh2968) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh2642 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__x___05Fh2968));
    this->__PVT__dh___05Fh206 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__y___05Fh2523));
    this->__PVT__y___05Fh2643 = ((IData)(this->__PVT__y___05Fh2523) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh3512 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__al___05Fh193));
    this->__PVT__x___05Fh2965 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__bl___05Fh196));
    this->__PVT__x___05Fh3203 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__ah___05Fh194));
    this->__PVT__x___05Fh2519 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__x___05Fh3291 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49));
    this->__PVT__x___05Fh2744 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53));
    this->__PVT__dd___05Fh207 = ((IData)(this->__PVT__x___05Fh2642) 
                                 ^ (IData)(this->__PVT__y___05Fh2643));
    this->__PVT__qq___05Fh3263 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__qq___05Fh2624 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__p___05Fh3262 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__aaa___05Fh195))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__p___05Fh2623 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__bb___05Fh198))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__qq_BIT_2___05F_h3759 = (1U & (((~ 
                                                 ((IData)(this->__PVT__y___05Fh2523) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 6U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__qq___05Fh3263)));
    this->__PVT__p_BIT_0___05F_h3739 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                                   & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__p_BIT_2___05F_h3656 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2523) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 2U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__qq_BIT_1___05F_h3821 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2968) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 5U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__qq_BIT_3___05F_h3591 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2522) 
                                                  & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__p_BIT_3___05F_h3614 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2522) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 3U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__p_BIT_1___05F_h3571 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2968) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 1U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__t2___05Fh45 = ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                ^ (IData)(this->__PVT__p_BIT_0___05F_h3739));
    this->__PVT__t3___05Fh46 = (1U & ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                      ^ (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 4U)))) 
                                          ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                         ^ (IData)(this->__PVT__qq___05Fh3263))));
    this->__PVT__t1___05Fh44 = ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591));
    this->__PVT__t4___05Fh47 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591))));
    this->__PVT__t6___05Fh49 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))));
    this->__PVT__t9___05Fh52 = ((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                ^ (IData)(this->__PVT__t2___05Fh45));
    this->__PVT__t5___05Fh48 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__t1___05Fh44))));
    this->__PVT__t8___05Fh51 = ((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                ^ (IData)(this->__PVT__t4___05Fh47));
    this->__PVT__t7___05Fh50 = (1U & (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                         ^ (IData)(this->__PVT__t6___05Fh49))));
    this->__PVT__t10___05Fh53 = ((IData)(this->__PVT__t3___05Fh46) 
                                 ^ (IData)(this->__PVT__t5___05Fh48));
    this->getbyte = ((0x80U & ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                    ? (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                          ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821)))
                                    : (IData)(this->__PVT__t4___05Fh47))) 
                               << 7U)) | (0x7fU & (~ 
                                                   ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                                     ? 
                                                    ((((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                                       ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                      << 6U) 
                                                     | ((((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                                          ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                         << 5U) 
                                                        | ((0x10U 
                                                            & ((~ 
                                                                ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                                                 ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))) 
                                                               << 4U)) 
                                                           | ((((IData)(this->__PVT__t8___05Fh51) 
                                                                ^ (IData)(this->__PVT__t9___05Fh52)) 
                                                               << 3U) 
                                                              | ((4U 
                                                                  & ((~ 
                                                                      ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                                                       ^ (IData)(this->__PVT__t7___05Fh50))) 
                                                                     << 2U)) 
                                                                 | (((IData)(this->__PVT__t6___05Fh49) 
                                                                     << 1U) 
                                                                    | (1U 
                                                                       & (~ (IData)(this->__PVT__qq_BIT_2___05F_h3759)))))))))
                                                     : 
                                                    (((IData)(this->__PVT__t1___05Fh44) 
                                                      << 6U) 
                                                     | (((IData)(this->__PVT__t3___05Fh46) 
                                                         << 5U) 
                                                        | (((IData)(this->__PVT__t5___05Fh48) 
                                                            << 4U) 
                                                           | ((((IData)(this->__PVT__t2___05Fh45) 
                                                                ^ (IData)(this->__PVT__t5___05Fh48)) 
                                                               << 3U) 
                                                              | ((((IData)(this->__PVT__t3___05Fh46) 
                                                                   ^ (IData)(this->__PVT__t8___05Fh51)) 
                                                                  << 2U) 
                                                                 | (((IData)(this->__PVT__t7___05Fh50) 
                                                                     << 1U) 
                                                                    | (IData)(this->__PVT__t9___05Fh52)))))))))));
}

VL_INLINE_OPT void VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__12(VmkAES_Wrapper2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__12\n"); );
    VmkAES_Wrapper2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__r6___05Fh32 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__024getbyte_byte_in)));
    this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4 
        = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__024getbyte_byte_in) 
                     >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__024getbyte_byte_in) 
                               >> 4U))));
    this->__PVT__r1___05Fh27 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__024getbyte_byte_in) 
                                       >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__024getbyte_byte_in) 
                                                 >> 5U)));
    this->__PVT__r3___05Fh29 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__024getbyte_byte_in) 
                                       >> 6U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__024getbyte_byte_in)));
    this->__PVT__r7___05Fh33 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__024getbyte_byte_in) 
                                       >> 2U) ^ (IData)(this->__PVT__r1___05Fh27)));
    this->__PVT__r4___05Fh30 = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__024getbyte_byte_in) 
                                          >> 5U) ^ (IData)(this->__PVT__r3___05Fh29))));
    this->__PVT__r8___05Fh34 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__024getbyte_byte_in) 
                                       >> 1U) ^ (IData)(this->__PVT__r3___05Fh29)));
    this->__PVT__r5___05Fh31 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__024getbyte_byte_in) 
                                       >> 4U) ^ (IData)(this->__PVT__r4___05Fh30)));
    this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16 
        = (1U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                  ? (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4)
                  : (~ ((IData)(this->__PVT__r7___05Fh33) 
                        ^ (IData)(this->__PVT__r8___05Fh34)))));
    this->__PVT__r9___05Fh35 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(this->__PVT__r8___05Fh34)));
    this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
            ? ((0x40U & ((0xffffffc0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__024getbyte_byte_in) 
                                         << 2U)) ^ 
                         ((IData)(this->__PVT__r8___05Fh34) 
                          << 6U))) | ((0x20U & ((0x7fffffe0U 
                                                 & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__024getbyte_byte_in) 
                                                    >> 1U)) 
                                                ^ (0xffffffe0U 
                                                   & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__024getbyte_byte_in) 
                                                      << 1U)))) 
                                      | (((IData)(this->__PVT__r9___05Fh35) 
                                          << 4U) | 
                                         ((8U & ((~ 
                                                  (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__024getbyte_byte_in) 
                                                    >> 6U) 
                                                   ^ (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4))) 
                                                 << 3U)) 
                                          | (((IData)(this->__PVT__r7___05Fh33) 
                                              << 2U) 
                                             | ((2U 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__024getbyte_byte_in) 
                                                        >> 3U)) 
                                                    ^ 
                                                    ((IData)(this->__PVT__r6___05Fh32) 
                                                     << 1U))) 
                                                | (1U 
                                                   & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__024getbyte_byte_in) 
                                                       >> 1U) 
                                                      ^ (IData)(this->__PVT__r5___05Fh31)))))))))
            : (((IData)(this->__PVT__r5___05Fh31) << 6U) 
               | ((0x20U & ((0xffffffe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__024getbyte_byte_in) 
                                            << 4U)) 
                            ^ ((IData)(this->__PVT__r4___05Fh30) 
                               << 5U))) | ((0x10U & 
                                            ((~ ((IData)(this->__PVT__r1___05Fh27) 
                                                 ^ (IData)(this->__PVT__r3___05Fh29))) 
                                             << 4U)) 
                                           | ((8U & 
                                               (((0xfffffff8U 
                                                  & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__024getbyte_byte_in) 
                                                     << 2U)) 
                                                 ^ 
                                                 ((IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4) 
                                                  << 3U)) 
                                                ^ ((IData)(this->__PVT__r6___05Fh32) 
                                                   << 3U))) 
                                              | ((4U 
                                                  & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__024getbyte_byte_in)) 
                                                     << 2U)) 
                                                 | (((IData)(this->__PVT__r4___05Fh30) 
                                                     << 1U) 
                                                    | (1U 
                                                       & (~ 
                                                          (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__024getbyte_byte_in) 
                                                            >> 2U) 
                                                           ^ (IData)(this->__PVT__r9___05Fh35)))))))))));
    this->__PVT__al___05Fh193 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 5U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 4U))));
    this->__PVT__bl___05Fh196 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 1U)) 
                                       ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__ah___05Fh194 = (1U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U))));
    this->__PVT__bh___05Fh197 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 3U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 2U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49 
        = (3U & (((2U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                         << 1U)) | (1U & (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U)))) 
                 ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                       >> 4U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53 
        = (3U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                     >> 2U)) ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__x___05Fh1386 = ((IData)(this->__PVT__ah___05Fh194) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__aaa___05Fh195 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                         >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49)));
    this->__PVT__x___05Fh1688 = (1U & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                       & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__bb___05Fh198 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                        >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__y___05Fh2027 = (1U & ((((~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                              | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                             >> 1U)) 
                                         ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 6U)) 
                                               & (~ 
                                                  ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 2U))))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__y___05Fh2082 = (1U & ((((~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                 >> 4U)) 
                                             | (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                         ^ (~ ((IData)(this->__PVT__al___05Fh193) 
                                               & (IData)(this->__PVT__bl___05Fh196)))) 
                                        ^ (~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                              >> 1U))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__x___05Fh1488 = ((IData)(this->__PVT__aaa___05Fh195) 
                                 & (IData)(this->__PVT__bb___05Fh198));
    this->__PVT__x___05Fh390 = (1U & ((((~ ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                            | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53))) 
                                        ^ (~ ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 3U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__y___05Fh328 = (1U & ((((~ ((IData)(this->__PVT__al___05Fh193) 
                                            | (IData)(this->__PVT__bl___05Fh196))) 
                                        ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 5U)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 1U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__sa___05Fh299 = ((IData)(this->__PVT__x___05Fh390) 
                                 ^ (IData)(this->__PVT__y___05Fh2027));
    this->__PVT__sb___05Fh300 = ((IData)(this->__PVT__y___05Fh328) 
                                 ^ (IData)(this->__PVT__y___05Fh2082));
    this->__PVT__x___05Fh327 = (1U & ((~ ((IData)(this->__PVT__sa___05Fh299) 
                                          | (IData)(this->__PVT__sb___05Fh300))) 
                                      ^ (~ ((IData)(this->__PVT__y___05Fh2027) 
                                            & (IData)(this->__PVT__y___05Fh2082)))));
    this->__PVT__y___05Fh2237 = (1U & ((~ ((IData)(this->__PVT__x___05Fh390) 
                                           | (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ ((IData)(this->__PVT__sa___05Fh299) 
                                             & (IData)(this->__PVT__sb___05Fh300)))));
    this->__PVT__sd___05Fh303 = ((IData)(this->__PVT__x___05Fh327) 
                                 ^ (IData)(this->__PVT__y___05Fh2237));
    this->__PVT__x___05Fh2409 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sa___05Fh299));
    this->__PVT__x___05Fh2223 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sb___05Fh300));
    this->__PVT__x___05Fh2968 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__x___05Fh390))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__y___05Fh2969 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2027))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__x___05Fh2522 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__y___05Fh2523 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2082))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__dl___05Fh205 = ((IData)(this->__PVT__x___05Fh2968) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh2642 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__x___05Fh2968));
    this->__PVT__dh___05Fh206 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__y___05Fh2523));
    this->__PVT__y___05Fh2643 = ((IData)(this->__PVT__y___05Fh2523) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh3512 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__al___05Fh193));
    this->__PVT__x___05Fh2965 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__bl___05Fh196));
    this->__PVT__x___05Fh3203 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__ah___05Fh194));
    this->__PVT__x___05Fh2519 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__x___05Fh3291 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49));
    this->__PVT__x___05Fh2744 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53));
    this->__PVT__dd___05Fh207 = ((IData)(this->__PVT__x___05Fh2642) 
                                 ^ (IData)(this->__PVT__y___05Fh2643));
    this->__PVT__qq___05Fh3263 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__qq___05Fh2624 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__p___05Fh3262 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__aaa___05Fh195))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__p___05Fh2623 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__bb___05Fh198))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__qq_BIT_2___05F_h3759 = (1U & (((~ 
                                                 ((IData)(this->__PVT__y___05Fh2523) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 6U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__qq___05Fh3263)));
    this->__PVT__p_BIT_0___05F_h3739 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                                   & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__p_BIT_2___05F_h3656 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2523) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 2U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__qq_BIT_1___05F_h3821 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2968) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 5U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__qq_BIT_3___05F_h3591 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2522) 
                                                  & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__p_BIT_3___05F_h3614 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2522) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 3U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__p_BIT_1___05F_h3571 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2968) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 1U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__t2___05Fh45 = ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                ^ (IData)(this->__PVT__p_BIT_0___05F_h3739));
    this->__PVT__t3___05Fh46 = (1U & ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                      ^ (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 4U)))) 
                                          ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                         ^ (IData)(this->__PVT__qq___05Fh3263))));
    this->__PVT__t1___05Fh44 = ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591));
    this->__PVT__t4___05Fh47 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591))));
    this->__PVT__t6___05Fh49 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))));
    this->__PVT__t9___05Fh52 = ((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                ^ (IData)(this->__PVT__t2___05Fh45));
    this->__PVT__t5___05Fh48 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__t1___05Fh44))));
    this->__PVT__t8___05Fh51 = ((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                ^ (IData)(this->__PVT__t4___05Fh47));
    this->__PVT__t7___05Fh50 = (1U & (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                         ^ (IData)(this->__PVT__t6___05Fh49))));
    this->__PVT__t10___05Fh53 = ((IData)(this->__PVT__t3___05Fh46) 
                                 ^ (IData)(this->__PVT__t5___05Fh48));
    this->getbyte = ((0x80U & ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                    ? (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                          ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821)))
                                    : (IData)(this->__PVT__t4___05Fh47))) 
                               << 7U)) | (0x7fU & (~ 
                                                   ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                                     ? 
                                                    ((((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                                       ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                      << 6U) 
                                                     | ((((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                                          ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                         << 5U) 
                                                        | ((0x10U 
                                                            & ((~ 
                                                                ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                                                 ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))) 
                                                               << 4U)) 
                                                           | ((((IData)(this->__PVT__t8___05Fh51) 
                                                                ^ (IData)(this->__PVT__t9___05Fh52)) 
                                                               << 3U) 
                                                              | ((4U 
                                                                  & ((~ 
                                                                      ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                                                       ^ (IData)(this->__PVT__t7___05Fh50))) 
                                                                     << 2U)) 
                                                                 | (((IData)(this->__PVT__t6___05Fh49) 
                                                                     << 1U) 
                                                                    | (1U 
                                                                       & (~ (IData)(this->__PVT__qq_BIT_2___05F_h3759)))))))))
                                                     : 
                                                    (((IData)(this->__PVT__t1___05Fh44) 
                                                      << 6U) 
                                                     | (((IData)(this->__PVT__t3___05Fh46) 
                                                         << 5U) 
                                                        | (((IData)(this->__PVT__t5___05Fh48) 
                                                            << 4U) 
                                                           | ((((IData)(this->__PVT__t2___05Fh45) 
                                                                ^ (IData)(this->__PVT__t5___05Fh48)) 
                                                               << 3U) 
                                                              | ((((IData)(this->__PVT__t3___05Fh46) 
                                                                   ^ (IData)(this->__PVT__t8___05Fh51)) 
                                                                  << 2U) 
                                                                 | (((IData)(this->__PVT__t7___05Fh50) 
                                                                     << 1U) 
                                                                    | (IData)(this->__PVT__t9___05Fh52)))))))))));
}

VL_INLINE_OPT void VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__13(VmkAES_Wrapper2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__13\n"); );
    VmkAES_Wrapper2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__r6___05Fh32 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__024getbyte_byte_in)));
    this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4 
        = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__024getbyte_byte_in) 
                     >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__024getbyte_byte_in) 
                               >> 4U))));
    this->__PVT__r1___05Fh27 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__024getbyte_byte_in) 
                                       >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__024getbyte_byte_in) 
                                                 >> 5U)));
    this->__PVT__r3___05Fh29 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__024getbyte_byte_in) 
                                       >> 6U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__024getbyte_byte_in)));
    this->__PVT__r7___05Fh33 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__024getbyte_byte_in) 
                                       >> 2U) ^ (IData)(this->__PVT__r1___05Fh27)));
    this->__PVT__r4___05Fh30 = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__024getbyte_byte_in) 
                                          >> 5U) ^ (IData)(this->__PVT__r3___05Fh29))));
    this->__PVT__r8___05Fh34 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__024getbyte_byte_in) 
                                       >> 1U) ^ (IData)(this->__PVT__r3___05Fh29)));
    this->__PVT__r5___05Fh31 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__024getbyte_byte_in) 
                                       >> 4U) ^ (IData)(this->__PVT__r4___05Fh30)));
    this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16 
        = (1U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                  ? (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4)
                  : (~ ((IData)(this->__PVT__r7___05Fh33) 
                        ^ (IData)(this->__PVT__r8___05Fh34)))));
    this->__PVT__r9___05Fh35 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(this->__PVT__r8___05Fh34)));
    this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
            ? ((0x40U & ((0xffffffc0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__024getbyte_byte_in) 
                                         << 2U)) ^ 
                         ((IData)(this->__PVT__r8___05Fh34) 
                          << 6U))) | ((0x20U & ((0x7fffffe0U 
                                                 & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__024getbyte_byte_in) 
                                                    >> 1U)) 
                                                ^ (0xffffffe0U 
                                                   & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__024getbyte_byte_in) 
                                                      << 1U)))) 
                                      | (((IData)(this->__PVT__r9___05Fh35) 
                                          << 4U) | 
                                         ((8U & ((~ 
                                                  (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__024getbyte_byte_in) 
                                                    >> 6U) 
                                                   ^ (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4))) 
                                                 << 3U)) 
                                          | (((IData)(this->__PVT__r7___05Fh33) 
                                              << 2U) 
                                             | ((2U 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__024getbyte_byte_in) 
                                                        >> 3U)) 
                                                    ^ 
                                                    ((IData)(this->__PVT__r6___05Fh32) 
                                                     << 1U))) 
                                                | (1U 
                                                   & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__024getbyte_byte_in) 
                                                       >> 1U) 
                                                      ^ (IData)(this->__PVT__r5___05Fh31)))))))))
            : (((IData)(this->__PVT__r5___05Fh31) << 6U) 
               | ((0x20U & ((0xffffffe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__024getbyte_byte_in) 
                                            << 4U)) 
                            ^ ((IData)(this->__PVT__r4___05Fh30) 
                               << 5U))) | ((0x10U & 
                                            ((~ ((IData)(this->__PVT__r1___05Fh27) 
                                                 ^ (IData)(this->__PVT__r3___05Fh29))) 
                                             << 4U)) 
                                           | ((8U & 
                                               (((0xfffffff8U 
                                                  & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__024getbyte_byte_in) 
                                                     << 2U)) 
                                                 ^ 
                                                 ((IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4) 
                                                  << 3U)) 
                                                ^ ((IData)(this->__PVT__r6___05Fh32) 
                                                   << 3U))) 
                                              | ((4U 
                                                  & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__024getbyte_byte_in)) 
                                                     << 2U)) 
                                                 | (((IData)(this->__PVT__r4___05Fh30) 
                                                     << 1U) 
                                                    | (1U 
                                                       & (~ 
                                                          (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__024getbyte_byte_in) 
                                                            >> 2U) 
                                                           ^ (IData)(this->__PVT__r9___05Fh35)))))))))));
    this->__PVT__al___05Fh193 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 5U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 4U))));
    this->__PVT__bl___05Fh196 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 1U)) 
                                       ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__ah___05Fh194 = (1U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U))));
    this->__PVT__bh___05Fh197 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 3U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 2U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49 
        = (3U & (((2U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                         << 1U)) | (1U & (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U)))) 
                 ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                       >> 4U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53 
        = (3U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                     >> 2U)) ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__x___05Fh1386 = ((IData)(this->__PVT__ah___05Fh194) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__aaa___05Fh195 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                         >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49)));
    this->__PVT__x___05Fh1688 = (1U & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                       & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__bb___05Fh198 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                        >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__y___05Fh2027 = (1U & ((((~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                              | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                             >> 1U)) 
                                         ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 6U)) 
                                               & (~ 
                                                  ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 2U))))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__y___05Fh2082 = (1U & ((((~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                 >> 4U)) 
                                             | (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                         ^ (~ ((IData)(this->__PVT__al___05Fh193) 
                                               & (IData)(this->__PVT__bl___05Fh196)))) 
                                        ^ (~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                              >> 1U))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__x___05Fh1488 = ((IData)(this->__PVT__aaa___05Fh195) 
                                 & (IData)(this->__PVT__bb___05Fh198));
    this->__PVT__x___05Fh390 = (1U & ((((~ ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                            | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53))) 
                                        ^ (~ ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 3U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__y___05Fh328 = (1U & ((((~ ((IData)(this->__PVT__al___05Fh193) 
                                            | (IData)(this->__PVT__bl___05Fh196))) 
                                        ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 5U)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 1U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__sa___05Fh299 = ((IData)(this->__PVT__x___05Fh390) 
                                 ^ (IData)(this->__PVT__y___05Fh2027));
    this->__PVT__sb___05Fh300 = ((IData)(this->__PVT__y___05Fh328) 
                                 ^ (IData)(this->__PVT__y___05Fh2082));
    this->__PVT__x___05Fh327 = (1U & ((~ ((IData)(this->__PVT__sa___05Fh299) 
                                          | (IData)(this->__PVT__sb___05Fh300))) 
                                      ^ (~ ((IData)(this->__PVT__y___05Fh2027) 
                                            & (IData)(this->__PVT__y___05Fh2082)))));
    this->__PVT__y___05Fh2237 = (1U & ((~ ((IData)(this->__PVT__x___05Fh390) 
                                           | (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ ((IData)(this->__PVT__sa___05Fh299) 
                                             & (IData)(this->__PVT__sb___05Fh300)))));
    this->__PVT__sd___05Fh303 = ((IData)(this->__PVT__x___05Fh327) 
                                 ^ (IData)(this->__PVT__y___05Fh2237));
    this->__PVT__x___05Fh2409 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sa___05Fh299));
    this->__PVT__x___05Fh2223 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sb___05Fh300));
    this->__PVT__x___05Fh2968 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__x___05Fh390))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__y___05Fh2969 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2027))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__x___05Fh2522 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__y___05Fh2523 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2082))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__dl___05Fh205 = ((IData)(this->__PVT__x___05Fh2968) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh2642 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__x___05Fh2968));
    this->__PVT__dh___05Fh206 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__y___05Fh2523));
    this->__PVT__y___05Fh2643 = ((IData)(this->__PVT__y___05Fh2523) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh3512 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__al___05Fh193));
    this->__PVT__x___05Fh2965 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__bl___05Fh196));
    this->__PVT__x___05Fh3203 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__ah___05Fh194));
    this->__PVT__x___05Fh2519 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__x___05Fh3291 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49));
    this->__PVT__x___05Fh2744 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53));
    this->__PVT__dd___05Fh207 = ((IData)(this->__PVT__x___05Fh2642) 
                                 ^ (IData)(this->__PVT__y___05Fh2643));
    this->__PVT__qq___05Fh3263 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__qq___05Fh2624 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__p___05Fh3262 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__aaa___05Fh195))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__p___05Fh2623 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__bb___05Fh198))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__qq_BIT_2___05F_h3759 = (1U & (((~ 
                                                 ((IData)(this->__PVT__y___05Fh2523) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 6U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__qq___05Fh3263)));
    this->__PVT__p_BIT_0___05F_h3739 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                                   & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__p_BIT_2___05F_h3656 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2523) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 2U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__qq_BIT_1___05F_h3821 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2968) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 5U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__qq_BIT_3___05F_h3591 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2522) 
                                                  & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__p_BIT_3___05F_h3614 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2522) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 3U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__p_BIT_1___05F_h3571 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2968) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 1U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__t2___05Fh45 = ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                ^ (IData)(this->__PVT__p_BIT_0___05F_h3739));
    this->__PVT__t3___05Fh46 = (1U & ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                      ^ (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 4U)))) 
                                          ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                         ^ (IData)(this->__PVT__qq___05Fh3263))));
    this->__PVT__t1___05Fh44 = ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591));
    this->__PVT__t4___05Fh47 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591))));
    this->__PVT__t6___05Fh49 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))));
    this->__PVT__t9___05Fh52 = ((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                ^ (IData)(this->__PVT__t2___05Fh45));
    this->__PVT__t5___05Fh48 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__t1___05Fh44))));
    this->__PVT__t8___05Fh51 = ((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                ^ (IData)(this->__PVT__t4___05Fh47));
    this->__PVT__t7___05Fh50 = (1U & (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                         ^ (IData)(this->__PVT__t6___05Fh49))));
    this->__PVT__t10___05Fh53 = ((IData)(this->__PVT__t3___05Fh46) 
                                 ^ (IData)(this->__PVT__t5___05Fh48));
    this->getbyte = ((0x80U & ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                    ? (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                          ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821)))
                                    : (IData)(this->__PVT__t4___05Fh47))) 
                               << 7U)) | (0x7fU & (~ 
                                                   ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                                     ? 
                                                    ((((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                                       ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                      << 6U) 
                                                     | ((((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                                          ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                         << 5U) 
                                                        | ((0x10U 
                                                            & ((~ 
                                                                ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                                                 ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))) 
                                                               << 4U)) 
                                                           | ((((IData)(this->__PVT__t8___05Fh51) 
                                                                ^ (IData)(this->__PVT__t9___05Fh52)) 
                                                               << 3U) 
                                                              | ((4U 
                                                                  & ((~ 
                                                                      ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                                                       ^ (IData)(this->__PVT__t7___05Fh50))) 
                                                                     << 2U)) 
                                                                 | (((IData)(this->__PVT__t6___05Fh49) 
                                                                     << 1U) 
                                                                    | (1U 
                                                                       & (~ (IData)(this->__PVT__qq_BIT_2___05F_h3759)))))))))
                                                     : 
                                                    (((IData)(this->__PVT__t1___05Fh44) 
                                                      << 6U) 
                                                     | (((IData)(this->__PVT__t3___05Fh46) 
                                                         << 5U) 
                                                        | (((IData)(this->__PVT__t5___05Fh48) 
                                                            << 4U) 
                                                           | ((((IData)(this->__PVT__t2___05Fh45) 
                                                                ^ (IData)(this->__PVT__t5___05Fh48)) 
                                                               << 3U) 
                                                              | ((((IData)(this->__PVT__t3___05Fh46) 
                                                                   ^ (IData)(this->__PVT__t8___05Fh51)) 
                                                                  << 2U) 
                                                                 | (((IData)(this->__PVT__t7___05Fh50) 
                                                                     << 1U) 
                                                                    | (IData)(this->__PVT__t9___05Fh52)))))))))));
}

VL_INLINE_OPT void VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__14(VmkAES_Wrapper2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__14\n"); );
    VmkAES_Wrapper2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__r6___05Fh32 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__024getbyte_byte_in)));
    this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4 
        = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__024getbyte_byte_in) 
                     >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__024getbyte_byte_in) 
                               >> 4U))));
    this->__PVT__r1___05Fh27 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__024getbyte_byte_in) 
                                       >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__024getbyte_byte_in) 
                                                 >> 5U)));
    this->__PVT__r3___05Fh29 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__024getbyte_byte_in) 
                                       >> 6U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__024getbyte_byte_in)));
    this->__PVT__r7___05Fh33 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__024getbyte_byte_in) 
                                       >> 2U) ^ (IData)(this->__PVT__r1___05Fh27)));
    this->__PVT__r4___05Fh30 = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__024getbyte_byte_in) 
                                          >> 5U) ^ (IData)(this->__PVT__r3___05Fh29))));
    this->__PVT__r8___05Fh34 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__024getbyte_byte_in) 
                                       >> 1U) ^ (IData)(this->__PVT__r3___05Fh29)));
    this->__PVT__r5___05Fh31 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__024getbyte_byte_in) 
                                       >> 4U) ^ (IData)(this->__PVT__r4___05Fh30)));
    this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16 
        = (1U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                  ? (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4)
                  : (~ ((IData)(this->__PVT__r7___05Fh33) 
                        ^ (IData)(this->__PVT__r8___05Fh34)))));
    this->__PVT__r9___05Fh35 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(this->__PVT__r8___05Fh34)));
    this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
            ? ((0x40U & ((0xffffffc0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__024getbyte_byte_in) 
                                         << 2U)) ^ 
                         ((IData)(this->__PVT__r8___05Fh34) 
                          << 6U))) | ((0x20U & ((0x7fffffe0U 
                                                 & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__024getbyte_byte_in) 
                                                    >> 1U)) 
                                                ^ (0xffffffe0U 
                                                   & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__024getbyte_byte_in) 
                                                      << 1U)))) 
                                      | (((IData)(this->__PVT__r9___05Fh35) 
                                          << 4U) | 
                                         ((8U & ((~ 
                                                  (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__024getbyte_byte_in) 
                                                    >> 6U) 
                                                   ^ (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4))) 
                                                 << 3U)) 
                                          | (((IData)(this->__PVT__r7___05Fh33) 
                                              << 2U) 
                                             | ((2U 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__024getbyte_byte_in) 
                                                        >> 3U)) 
                                                    ^ 
                                                    ((IData)(this->__PVT__r6___05Fh32) 
                                                     << 1U))) 
                                                | (1U 
                                                   & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__024getbyte_byte_in) 
                                                       >> 1U) 
                                                      ^ (IData)(this->__PVT__r5___05Fh31)))))))))
            : (((IData)(this->__PVT__r5___05Fh31) << 6U) 
               | ((0x20U & ((0xffffffe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__024getbyte_byte_in) 
                                            << 4U)) 
                            ^ ((IData)(this->__PVT__r4___05Fh30) 
                               << 5U))) | ((0x10U & 
                                            ((~ ((IData)(this->__PVT__r1___05Fh27) 
                                                 ^ (IData)(this->__PVT__r3___05Fh29))) 
                                             << 4U)) 
                                           | ((8U & 
                                               (((0xfffffff8U 
                                                  & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__024getbyte_byte_in) 
                                                     << 2U)) 
                                                 ^ 
                                                 ((IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4) 
                                                  << 3U)) 
                                                ^ ((IData)(this->__PVT__r6___05Fh32) 
                                                   << 3U))) 
                                              | ((4U 
                                                  & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__024getbyte_byte_in)) 
                                                     << 2U)) 
                                                 | (((IData)(this->__PVT__r4___05Fh30) 
                                                     << 1U) 
                                                    | (1U 
                                                       & (~ 
                                                          (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__024getbyte_byte_in) 
                                                            >> 2U) 
                                                           ^ (IData)(this->__PVT__r9___05Fh35)))))))))));
    this->__PVT__al___05Fh193 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 5U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 4U))));
    this->__PVT__bl___05Fh196 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 1U)) 
                                       ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__ah___05Fh194 = (1U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U))));
    this->__PVT__bh___05Fh197 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 3U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 2U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49 
        = (3U & (((2U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                         << 1U)) | (1U & (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U)))) 
                 ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                       >> 4U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53 
        = (3U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                     >> 2U)) ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__x___05Fh1386 = ((IData)(this->__PVT__ah___05Fh194) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__aaa___05Fh195 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                         >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49)));
    this->__PVT__x___05Fh1688 = (1U & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                       & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__bb___05Fh198 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                        >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__y___05Fh2027 = (1U & ((((~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                              | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                             >> 1U)) 
                                         ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 6U)) 
                                               & (~ 
                                                  ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 2U))))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__y___05Fh2082 = (1U & ((((~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                 >> 4U)) 
                                             | (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                         ^ (~ ((IData)(this->__PVT__al___05Fh193) 
                                               & (IData)(this->__PVT__bl___05Fh196)))) 
                                        ^ (~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                              >> 1U))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__x___05Fh1488 = ((IData)(this->__PVT__aaa___05Fh195) 
                                 & (IData)(this->__PVT__bb___05Fh198));
    this->__PVT__x___05Fh390 = (1U & ((((~ ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                            | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53))) 
                                        ^ (~ ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 3U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__y___05Fh328 = (1U & ((((~ ((IData)(this->__PVT__al___05Fh193) 
                                            | (IData)(this->__PVT__bl___05Fh196))) 
                                        ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 5U)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 1U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__sa___05Fh299 = ((IData)(this->__PVT__x___05Fh390) 
                                 ^ (IData)(this->__PVT__y___05Fh2027));
    this->__PVT__sb___05Fh300 = ((IData)(this->__PVT__y___05Fh328) 
                                 ^ (IData)(this->__PVT__y___05Fh2082));
    this->__PVT__x___05Fh327 = (1U & ((~ ((IData)(this->__PVT__sa___05Fh299) 
                                          | (IData)(this->__PVT__sb___05Fh300))) 
                                      ^ (~ ((IData)(this->__PVT__y___05Fh2027) 
                                            & (IData)(this->__PVT__y___05Fh2082)))));
    this->__PVT__y___05Fh2237 = (1U & ((~ ((IData)(this->__PVT__x___05Fh390) 
                                           | (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ ((IData)(this->__PVT__sa___05Fh299) 
                                             & (IData)(this->__PVT__sb___05Fh300)))));
    this->__PVT__sd___05Fh303 = ((IData)(this->__PVT__x___05Fh327) 
                                 ^ (IData)(this->__PVT__y___05Fh2237));
    this->__PVT__x___05Fh2409 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sa___05Fh299));
    this->__PVT__x___05Fh2223 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sb___05Fh300));
    this->__PVT__x___05Fh2968 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__x___05Fh390))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__y___05Fh2969 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2027))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__x___05Fh2522 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__y___05Fh2523 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2082))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__dl___05Fh205 = ((IData)(this->__PVT__x___05Fh2968) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh2642 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__x___05Fh2968));
    this->__PVT__dh___05Fh206 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__y___05Fh2523));
    this->__PVT__y___05Fh2643 = ((IData)(this->__PVT__y___05Fh2523) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh3512 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__al___05Fh193));
    this->__PVT__x___05Fh2965 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__bl___05Fh196));
    this->__PVT__x___05Fh3203 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__ah___05Fh194));
    this->__PVT__x___05Fh2519 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__x___05Fh3291 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49));
    this->__PVT__x___05Fh2744 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53));
    this->__PVT__dd___05Fh207 = ((IData)(this->__PVT__x___05Fh2642) 
                                 ^ (IData)(this->__PVT__y___05Fh2643));
    this->__PVT__qq___05Fh3263 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__qq___05Fh2624 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__p___05Fh3262 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__aaa___05Fh195))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__p___05Fh2623 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__bb___05Fh198))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__qq_BIT_2___05F_h3759 = (1U & (((~ 
                                                 ((IData)(this->__PVT__y___05Fh2523) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 6U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__qq___05Fh3263)));
    this->__PVT__p_BIT_0___05F_h3739 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                                   & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__p_BIT_2___05F_h3656 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2523) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 2U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__qq_BIT_1___05F_h3821 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2968) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 5U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__qq_BIT_3___05F_h3591 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2522) 
                                                  & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__p_BIT_3___05F_h3614 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2522) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 3U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__p_BIT_1___05F_h3571 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2968) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 1U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__t2___05Fh45 = ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                ^ (IData)(this->__PVT__p_BIT_0___05F_h3739));
    this->__PVT__t3___05Fh46 = (1U & ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                      ^ (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 4U)))) 
                                          ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                         ^ (IData)(this->__PVT__qq___05Fh3263))));
    this->__PVT__t1___05Fh44 = ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591));
    this->__PVT__t4___05Fh47 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591))));
    this->__PVT__t6___05Fh49 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))));
    this->__PVT__t9___05Fh52 = ((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                ^ (IData)(this->__PVT__t2___05Fh45));
    this->__PVT__t5___05Fh48 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__t1___05Fh44))));
    this->__PVT__t8___05Fh51 = ((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                ^ (IData)(this->__PVT__t4___05Fh47));
    this->__PVT__t7___05Fh50 = (1U & (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                         ^ (IData)(this->__PVT__t6___05Fh49))));
    this->__PVT__t10___05Fh53 = ((IData)(this->__PVT__t3___05Fh46) 
                                 ^ (IData)(this->__PVT__t5___05Fh48));
    this->getbyte = ((0x80U & ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                    ? (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                          ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821)))
                                    : (IData)(this->__PVT__t4___05Fh47))) 
                               << 7U)) | (0x7fU & (~ 
                                                   ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                                     ? 
                                                    ((((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                                       ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                      << 6U) 
                                                     | ((((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                                          ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                         << 5U) 
                                                        | ((0x10U 
                                                            & ((~ 
                                                                ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                                                 ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))) 
                                                               << 4U)) 
                                                           | ((((IData)(this->__PVT__t8___05Fh51) 
                                                                ^ (IData)(this->__PVT__t9___05Fh52)) 
                                                               << 3U) 
                                                              | ((4U 
                                                                  & ((~ 
                                                                      ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                                                       ^ (IData)(this->__PVT__t7___05Fh50))) 
                                                                     << 2U)) 
                                                                 | (((IData)(this->__PVT__t6___05Fh49) 
                                                                     << 1U) 
                                                                    | (1U 
                                                                       & (~ (IData)(this->__PVT__qq_BIT_2___05F_h3759)))))))))
                                                     : 
                                                    (((IData)(this->__PVT__t1___05Fh44) 
                                                      << 6U) 
                                                     | (((IData)(this->__PVT__t3___05Fh46) 
                                                         << 5U) 
                                                        | (((IData)(this->__PVT__t5___05Fh48) 
                                                            << 4U) 
                                                           | ((((IData)(this->__PVT__t2___05Fh45) 
                                                                ^ (IData)(this->__PVT__t5___05Fh48)) 
                                                               << 3U) 
                                                              | ((((IData)(this->__PVT__t3___05Fh46) 
                                                                   ^ (IData)(this->__PVT__t8___05Fh51)) 
                                                                  << 2U) 
                                                                 | (((IData)(this->__PVT__t7___05Fh50) 
                                                                     << 1U) 
                                                                    | (IData)(this->__PVT__t9___05Fh52)))))))))));
}

VL_INLINE_OPT void VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__15(VmkAES_Wrapper2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VmkAES_Wrapper2_mkSbox2::_sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__15\n"); );
    VmkAES_Wrapper2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__r6___05Fh32 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__024getbyte_byte_in)));
    this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4 
        = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__024getbyte_byte_in) 
                     >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__024getbyte_byte_in) 
                               >> 4U))));
    this->__PVT__r1___05Fh27 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__024getbyte_byte_in) 
                                       >> 7U) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__024getbyte_byte_in) 
                                                 >> 5U)));
    this->__PVT__r3___05Fh29 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__024getbyte_byte_in) 
                                       >> 6U) ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__024getbyte_byte_in)));
    this->__PVT__r7___05Fh33 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__024getbyte_byte_in) 
                                       >> 2U) ^ (IData)(this->__PVT__r1___05Fh27)));
    this->__PVT__r4___05Fh30 = (1U & (~ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__024getbyte_byte_in) 
                                          >> 5U) ^ (IData)(this->__PVT__r3___05Fh29))));
    this->__PVT__r8___05Fh34 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__024getbyte_byte_in) 
                                       >> 1U) ^ (IData)(this->__PVT__r3___05Fh29)));
    this->__PVT__r5___05Fh31 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__024getbyte_byte_in) 
                                       >> 4U) ^ (IData)(this->__PVT__r4___05Fh30)));
    this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16 
        = (1U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                  ? (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4)
                  : (~ ((IData)(this->__PVT__r7___05Fh33) 
                        ^ (IData)(this->__PVT__r8___05Fh34)))));
    this->__PVT__r9___05Fh35 = (1U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__024getbyte_byte_in) 
                                       >> 3U) ^ (IData)(this->__PVT__r8___05Fh34)));
    this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
            ? ((0x40U & ((0xffffffc0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__024getbyte_byte_in) 
                                         << 2U)) ^ 
                         ((IData)(this->__PVT__r8___05Fh34) 
                          << 6U))) | ((0x20U & ((0x7fffffe0U 
                                                 & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__024getbyte_byte_in) 
                                                    >> 1U)) 
                                                ^ (0xffffffe0U 
                                                   & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__024getbyte_byte_in) 
                                                      << 1U)))) 
                                      | (((IData)(this->__PVT__r9___05Fh35) 
                                          << 4U) | 
                                         ((8U & ((~ 
                                                  (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__024getbyte_byte_in) 
                                                    >> 6U) 
                                                   ^ (IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4))) 
                                                 << 3U)) 
                                          | (((IData)(this->__PVT__r7___05Fh33) 
                                              << 2U) 
                                             | ((2U 
                                                 & ((0x1ffffffeU 
                                                     & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__024getbyte_byte_in) 
                                                        >> 3U)) 
                                                    ^ 
                                                    ((IData)(this->__PVT__r6___05Fh32) 
                                                     << 1U))) 
                                                | (1U 
                                                   & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__024getbyte_byte_in) 
                                                       >> 1U) 
                                                      ^ (IData)(this->__PVT__r5___05Fh31)))))))))
            : (((IData)(this->__PVT__r5___05Fh31) << 6U) 
               | ((0x20U & ((0xffffffe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__024getbyte_byte_in) 
                                            << 4U)) 
                            ^ ((IData)(this->__PVT__r4___05Fh30) 
                               << 5U))) | ((0x10U & 
                                            ((~ ((IData)(this->__PVT__r1___05Fh27) 
                                                 ^ (IData)(this->__PVT__r3___05Fh29))) 
                                             << 4U)) 
                                           | ((8U & 
                                               (((0xfffffff8U 
                                                  & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__024getbyte_byte_in) 
                                                     << 2U)) 
                                                 ^ 
                                                 ((IData)(this->__PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4) 
                                                  << 3U)) 
                                                ^ ((IData)(this->__PVT__r6___05Fh32) 
                                                   << 3U))) 
                                              | ((4U 
                                                  & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__024getbyte_byte_in)) 
                                                     << 2U)) 
                                                 | (((IData)(this->__PVT__r4___05Fh30) 
                                                     << 1U) 
                                                    | (1U 
                                                       & (~ 
                                                          (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__024getbyte_byte_in) 
                                                            >> 2U) 
                                                           ^ (IData)(this->__PVT__r9___05Fh35)))))))))));
    this->__PVT__al___05Fh193 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 5U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 4U))));
    this->__PVT__bl___05Fh196 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 1U)) 
                                       ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__ah___05Fh194 = (1U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U))));
    this->__PVT__bh___05Fh197 = (1U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                           >> 3U)) 
                                       ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 2U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49 
        = (3U & (((2U & ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                         << 1U)) | (1U & (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                             >> 6U)))) 
                 ^ (~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                       >> 4U))));
    this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53 
        = (3U & ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                     >> 2U)) ^ (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44))));
    this->__PVT__x___05Fh1386 = ((IData)(this->__PVT__ah___05Fh194) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__aaa___05Fh195 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                         >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49)));
    this->__PVT__x___05Fh1688 = (1U & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                       & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__bb___05Fh198 = (1U & (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                        >> 1U) ^ (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)));
    this->__PVT__y___05Fh2027 = (1U & ((((~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                              | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                             >> 1U)) 
                                         ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 6U)) 
                                               & (~ 
                                                  ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                   >> 2U))))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__y___05Fh2082 = (1U & ((((~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                 >> 4U)) 
                                             | (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                         ^ (~ ((IData)(this->__PVT__al___05Fh193) 
                                               & (IData)(this->__PVT__bl___05Fh196)))) 
                                        ^ (~ (((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53)) 
                                              >> 1U))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))));
    this->__PVT__x___05Fh1488 = ((IData)(this->__PVT__aaa___05Fh195) 
                                 & (IData)(this->__PVT__bb___05Fh198));
    this->__PVT__x___05Fh390 = (1U & ((((~ ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                            | (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53))) 
                                        ^ (~ ((~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 3U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1386))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__y___05Fh328 = (1U & ((((~ ((IData)(this->__PVT__al___05Fh193) 
                                            | (IData)(this->__PVT__bl___05Fh196))) 
                                        ^ (~ ((~ ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 5U)) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 1U))))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh1688))) 
                                      ^ (~ (IData)(this->__PVT__x___05Fh1488))));
    this->__PVT__sa___05Fh299 = ((IData)(this->__PVT__x___05Fh390) 
                                 ^ (IData)(this->__PVT__y___05Fh2027));
    this->__PVT__sb___05Fh300 = ((IData)(this->__PVT__y___05Fh328) 
                                 ^ (IData)(this->__PVT__y___05Fh2082));
    this->__PVT__x___05Fh327 = (1U & ((~ ((IData)(this->__PVT__sa___05Fh299) 
                                          | (IData)(this->__PVT__sb___05Fh300))) 
                                      ^ (~ ((IData)(this->__PVT__y___05Fh2027) 
                                            & (IData)(this->__PVT__y___05Fh2082)))));
    this->__PVT__y___05Fh2237 = (1U & ((~ ((IData)(this->__PVT__x___05Fh390) 
                                           | (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ ((IData)(this->__PVT__sa___05Fh299) 
                                             & (IData)(this->__PVT__sb___05Fh300)))));
    this->__PVT__sd___05Fh303 = ((IData)(this->__PVT__x___05Fh327) 
                                 ^ (IData)(this->__PVT__y___05Fh2237));
    this->__PVT__x___05Fh2409 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sa___05Fh299));
    this->__PVT__x___05Fh2223 = ((IData)(this->__PVT__sd___05Fh303) 
                                 & (IData)(this->__PVT__sb___05Fh300));
    this->__PVT__x___05Fh2968 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__x___05Fh390))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__y___05Fh2969 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2027))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2409))));
    this->__PVT__x___05Fh2522 = (1U & ((~ ((IData)(this->__PVT__x___05Fh327) 
                                           & (IData)(this->__PVT__y___05Fh328))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__y___05Fh2523 = (1U & ((~ ((IData)(this->__PVT__y___05Fh2237) 
                                           & (IData)(this->__PVT__y___05Fh2082))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2223))));
    this->__PVT__dl___05Fh205 = ((IData)(this->__PVT__x___05Fh2968) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh2642 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__x___05Fh2968));
    this->__PVT__dh___05Fh206 = ((IData)(this->__PVT__x___05Fh2522) 
                                 ^ (IData)(this->__PVT__y___05Fh2523));
    this->__PVT__y___05Fh2643 = ((IData)(this->__PVT__y___05Fh2523) 
                                 ^ (IData)(this->__PVT__y___05Fh2969));
    this->__PVT__x___05Fh3512 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__al___05Fh193));
    this->__PVT__x___05Fh2965 = ((IData)(this->__PVT__dl___05Fh205) 
                                 & (IData)(this->__PVT__bl___05Fh196));
    this->__PVT__x___05Fh3203 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__ah___05Fh194));
    this->__PVT__x___05Fh2519 = ((IData)(this->__PVT__dh___05Fh206) 
                                 & (IData)(this->__PVT__bh___05Fh197));
    this->__PVT__x___05Fh3291 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49));
    this->__PVT__x___05Fh2744 = ((IData)(this->__PVT__y___05Fh2643) 
                                 & (IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53));
    this->__PVT__dd___05Fh207 = ((IData)(this->__PVT__x___05Fh2642) 
                                 ^ (IData)(this->__PVT__y___05Fh2643));
    this->__PVT__qq___05Fh3263 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__qq___05Fh2624 = (1U & ((~ ((IData)(this->__PVT__x___05Fh2642) 
                                            & ((IData)(this->__PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53) 
                                               >> 1U))) 
                                        ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__p___05Fh3262 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__aaa___05Fh195))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh3291))));
    this->__PVT__p___05Fh2623 = (1U & ((~ ((IData)(this->__PVT__dd___05Fh207) 
                                           & (IData)(this->__PVT__bb___05Fh198))) 
                                       ^ (~ (IData)(this->__PVT__x___05Fh2744))));
    this->__PVT__qq_BIT_2___05F_h3759 = (1U & (((~ 
                                                 ((IData)(this->__PVT__y___05Fh2523) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 6U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__qq___05Fh3263)));
    this->__PVT__p_BIT_0___05F_h3739 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                                   & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__p_BIT_2___05F_h3656 = (1U & (((~ ((IData)(this->__PVT__y___05Fh2523) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 2U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__qq___05Fh2624)));
    this->__PVT__qq_BIT_1___05F_h3821 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2968) 
                                                  & (~ 
                                                     ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                      >> 5U)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__qq_BIT_3___05F_h3591 = (1U & (((~ 
                                                 ((IData)(this->__PVT__x___05Fh2522) 
                                                  & (~ (IData)(this->__PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16)))) 
                                                ^ (~ (IData)(this->__PVT__x___05Fh3203))) 
                                               ^ (IData)(this->__PVT__p___05Fh3262)));
    this->__PVT__p_BIT_3___05F_h3614 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2522) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 3U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2519))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__p_BIT_1___05F_h3571 = (1U & (((~ ((IData)(this->__PVT__x___05Fh2968) 
                                                   & (~ 
                                                      ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                       >> 1U)))) 
                                               ^ (~ (IData)(this->__PVT__x___05Fh2965))) 
                                              ^ (IData)(this->__PVT__p___05Fh2623)));
    this->__PVT__t2___05Fh45 = ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                ^ (IData)(this->__PVT__p_BIT_0___05F_h3739));
    this->__PVT__t3___05Fh46 = (1U & ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                      ^ (((~ ((IData)(this->__PVT__y___05Fh2969) 
                                              & (~ 
                                                 ((IData)(this->__PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44) 
                                                  >> 4U)))) 
                                          ^ (~ (IData)(this->__PVT__x___05Fh3512))) 
                                         ^ (IData)(this->__PVT__qq___05Fh3263))));
    this->__PVT__t1___05Fh44 = ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591));
    this->__PVT__t4___05Fh47 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_3___05F_h3591))));
    this->__PVT__t6___05Fh49 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))));
    this->__PVT__t9___05Fh52 = ((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                ^ (IData)(this->__PVT__t2___05Fh45));
    this->__PVT__t5___05Fh48 = (1U & (~ ((IData)(this->__PVT__p_BIT_1___05F_h3571) 
                                         ^ (IData)(this->__PVT__t1___05Fh44))));
    this->__PVT__t8___05Fh51 = ((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                ^ (IData)(this->__PVT__t4___05Fh47));
    this->__PVT__t7___05Fh50 = (1U & (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                         ^ (IData)(this->__PVT__t6___05Fh49))));
    this->__PVT__t10___05Fh53 = ((IData)(this->__PVT__t3___05Fh46) 
                                 ^ (IData)(this->__PVT__t5___05Fh48));
    this->getbyte = ((0x80U & ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                    ? (~ ((IData)(this->__PVT__p_BIT_0___05F_h3739) 
                                          ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821)))
                                    : (IData)(this->__PVT__t4___05Fh47))) 
                               << 7U)) | (0x7fU & (~ 
                                                   ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                                     ? 
                                                    ((((IData)(this->__PVT__qq_BIT_1___05F_h3821) 
                                                       ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                      << 6U) 
                                                     | ((((IData)(this->__PVT__qq_BIT_2___05F_h3759) 
                                                          ^ (IData)(this->__PVT__t10___05Fh53)) 
                                                         << 5U) 
                                                        | ((0x10U 
                                                            & ((~ 
                                                                ((IData)(this->__PVT__p_BIT_2___05F_h3656) 
                                                                 ^ (IData)(this->__PVT__qq_BIT_1___05F_h3821))) 
                                                               << 4U)) 
                                                           | ((((IData)(this->__PVT__t8___05Fh51) 
                                                                ^ (IData)(this->__PVT__t9___05Fh52)) 
                                                               << 3U) 
                                                              | ((4U 
                                                                  & ((~ 
                                                                      ((IData)(this->__PVT__p_BIT_3___05F_h3614) 
                                                                       ^ (IData)(this->__PVT__t7___05Fh50))) 
                                                                     << 2U)) 
                                                                 | (((IData)(this->__PVT__t6___05Fh49) 
                                                                     << 1U) 
                                                                    | (1U 
                                                                       & (~ (IData)(this->__PVT__qq_BIT_2___05F_h3759)))))))))
                                                     : 
                                                    (((IData)(this->__PVT__t1___05Fh44) 
                                                      << 6U) 
                                                     | (((IData)(this->__PVT__t3___05Fh46) 
                                                         << 5U) 
                                                        | (((IData)(this->__PVT__t5___05Fh48) 
                                                            << 4U) 
                                                           | ((((IData)(this->__PVT__t2___05Fh45) 
                                                                ^ (IData)(this->__PVT__t5___05Fh48)) 
                                                               << 3U) 
                                                              | ((((IData)(this->__PVT__t3___05Fh46) 
                                                                   ^ (IData)(this->__PVT__t8___05Fh51)) 
                                                                  << 2U) 
                                                                 | (((IData)(this->__PVT__t7___05Fh50) 
                                                                     << 1U) 
                                                                    | (IData)(this->__PVT__t9___05Fh52)))))))))));
}
