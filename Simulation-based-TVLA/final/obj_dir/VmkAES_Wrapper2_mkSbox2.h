// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VmkAES_Wrapper2.h for the primary calling header

#ifndef _VMKAES_WRAPPER2_MKSBOX2_H_
#define _VMKAES_WRAPPER2_MKSBOX2_H_  // guard

#include "verilated_heavy.h"

//==========

class VmkAES_Wrapper2__Syms;

//----------

VL_MODULE(VmkAES_Wrapper2_mkSbox2) {
  public:
    
    // PORTS
    VL_IN8(CLK,0,0);
    VL_IN8(getbyte_byte_in,7,0);
    VL_IN8(getbyte_decrypt_,0,0);
    VL_IN8(EN_getbyte,0,0);
    VL_OUT8(getbyte,7,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*6:0*/ __PVT__IF_getbyte_decrypt_THEN_getbyte_byte_in_BIT_4___05FETC___05F_d44;
        CData/*1:0*/ __PVT__INV_IF_getbyte_decrypt_THEN_INV_getbyte_byte_i_ETC___05F_d49;
        CData/*1:0*/ __PVT__INV_IF_getbyte_decrypt_THEN_getbyte_byte_in_BI_ETC___05F_d53;
        CData/*0:0*/ __PVT__IF_getbyte_decrypt_THEN_INV_getbyte_byte_in_BI_ETC___05F_d16;
        CData/*0:0*/ __PVT__INV_getbyte_byte_in_BIT_7_XOR_getbyte_byte_in___05FETC___05F_d4;
        CData/*0:0*/ __PVT__aaa___05Fh195;
        CData/*0:0*/ __PVT__ah___05Fh194;
        CData/*0:0*/ __PVT__al___05Fh193;
        CData/*0:0*/ __PVT__bb___05Fh198;
        CData/*0:0*/ __PVT__bh___05Fh197;
        CData/*0:0*/ __PVT__bl___05Fh196;
        CData/*0:0*/ __PVT__dd___05Fh207;
        CData/*0:0*/ __PVT__dh___05Fh206;
        CData/*0:0*/ __PVT__dl___05Fh205;
        CData/*0:0*/ __PVT__p_BIT_0___05F_h3739;
        CData/*0:0*/ __PVT__p_BIT_1___05F_h3571;
        CData/*0:0*/ __PVT__p_BIT_2___05F_h3656;
        CData/*0:0*/ __PVT__p_BIT_3___05F_h3614;
        CData/*0:0*/ __PVT__p___05Fh2623;
        CData/*0:0*/ __PVT__p___05Fh3262;
        CData/*0:0*/ __PVT__qq_BIT_1___05F_h3821;
        CData/*0:0*/ __PVT__qq_BIT_2___05F_h3759;
        CData/*0:0*/ __PVT__qq_BIT_3___05F_h3591;
        CData/*0:0*/ __PVT__qq___05Fh2624;
        CData/*0:0*/ __PVT__qq___05Fh3263;
        CData/*0:0*/ __PVT__r1___05Fh27;
        CData/*0:0*/ __PVT__r3___05Fh29;
        CData/*0:0*/ __PVT__r4___05Fh30;
        CData/*0:0*/ __PVT__r5___05Fh31;
        CData/*0:0*/ __PVT__r6___05Fh32;
        CData/*0:0*/ __PVT__r7___05Fh33;
        CData/*0:0*/ __PVT__r8___05Fh34;
        CData/*0:0*/ __PVT__r9___05Fh35;
        CData/*0:0*/ __PVT__sa___05Fh299;
        CData/*0:0*/ __PVT__sb___05Fh300;
        CData/*0:0*/ __PVT__sd___05Fh303;
        CData/*0:0*/ __PVT__t10___05Fh53;
        CData/*0:0*/ __PVT__t1___05Fh44;
        CData/*0:0*/ __PVT__t2___05Fh45;
        CData/*0:0*/ __PVT__t3___05Fh46;
        CData/*0:0*/ __PVT__t4___05Fh47;
        CData/*0:0*/ __PVT__t5___05Fh48;
        CData/*0:0*/ __PVT__t6___05Fh49;
        CData/*0:0*/ __PVT__t7___05Fh50;
        CData/*0:0*/ __PVT__t8___05Fh51;
        CData/*0:0*/ __PVT__t9___05Fh52;
        CData/*0:0*/ __PVT__x___05Fh1386;
        CData/*0:0*/ __PVT__x___05Fh1488;
        CData/*0:0*/ __PVT__x___05Fh1688;
        CData/*0:0*/ __PVT__x___05Fh2223;
        CData/*0:0*/ __PVT__x___05Fh2409;
        CData/*0:0*/ __PVT__x___05Fh2519;
        CData/*0:0*/ __PVT__x___05Fh2522;
        CData/*0:0*/ __PVT__x___05Fh2642;
        CData/*0:0*/ __PVT__x___05Fh2744;
        CData/*0:0*/ __PVT__x___05Fh2965;
        CData/*0:0*/ __PVT__x___05Fh2968;
        CData/*0:0*/ __PVT__x___05Fh3203;
        CData/*0:0*/ __PVT__x___05Fh327;
        CData/*0:0*/ __PVT__x___05Fh3291;
        CData/*0:0*/ __PVT__x___05Fh3512;
        CData/*0:0*/ __PVT__x___05Fh390;
        CData/*0:0*/ __PVT__y___05Fh2027;
        CData/*0:0*/ __PVT__y___05Fh2082;
    };
    struct {
        CData/*0:0*/ __PVT__y___05Fh2237;
        CData/*0:0*/ __PVT__y___05Fh2523;
        CData/*0:0*/ __PVT__y___05Fh2643;
        CData/*0:0*/ __PVT__y___05Fh2969;
        CData/*0:0*/ __PVT__y___05Fh328;
    };
    
    // INTERNAL VARIABLES
  private:
    VmkAES_Wrapper2__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VmkAES_Wrapper2_mkSbox2);  ///< Copying not allowed
  public:
    VmkAES_Wrapper2_mkSbox2(const char* name = "TOP");
    ~VmkAES_Wrapper2_mkSbox2();
    
    // INTERNAL METHODS
    void __Vconfigure(VmkAES_Wrapper2__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__16(VmkAES_Wrapper2__Syms* __restrict vlSymsp);
    void _sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__2(VmkAES_Wrapper2__Syms* __restrict vlSymsp);
    void _sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__3(VmkAES_Wrapper2__Syms* __restrict vlSymsp);
    void _sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__4(VmkAES_Wrapper2__Syms* __restrict vlSymsp);
    void _sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__5(VmkAES_Wrapper2__Syms* __restrict vlSymsp);
    void _sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__6(VmkAES_Wrapper2__Syms* __restrict vlSymsp);
    void _sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__7(VmkAES_Wrapper2__Syms* __restrict vlSymsp);
    void _sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__1(VmkAES_Wrapper2__Syms* __restrict vlSymsp);
    void _sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__8(VmkAES_Wrapper2__Syms* __restrict vlSymsp);
    void _sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__9(VmkAES_Wrapper2__Syms* __restrict vlSymsp);
    void _sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__10(VmkAES_Wrapper2__Syms* __restrict vlSymsp);
    void _sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__11(VmkAES_Wrapper2__Syms* __restrict vlSymsp);
    void _sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__12(VmkAES_Wrapper2__Syms* __restrict vlSymsp);
    void _sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__13(VmkAES_Wrapper2__Syms* __restrict vlSymsp);
    void _sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__14(VmkAES_Wrapper2__Syms* __restrict vlSymsp);
    void _sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__15(VmkAES_Wrapper2__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
