// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VMKAES_WRAPPER2__SYMS_H_
#define _VMKAES_WRAPPER2__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VmkAES_Wrapper2.h"
#include "VmkAES_Wrapper2_mkSbox2.h"

// SYMS CLASS
class VmkAES_Wrapper2__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VmkAES_Wrapper2*               TOPp;
    VmkAES_Wrapper2_mkSbox2        TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0;
    VmkAES_Wrapper2_mkSbox2        TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1;
    VmkAES_Wrapper2_mkSbox2        TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10;
    VmkAES_Wrapper2_mkSbox2        TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11;
    VmkAES_Wrapper2_mkSbox2        TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12;
    VmkAES_Wrapper2_mkSbox2        TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13;
    VmkAES_Wrapper2_mkSbox2        TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14;
    VmkAES_Wrapper2_mkSbox2        TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15;
    VmkAES_Wrapper2_mkSbox2        TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2;
    VmkAES_Wrapper2_mkSbox2        TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3;
    VmkAES_Wrapper2_mkSbox2        TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4;
    VmkAES_Wrapper2_mkSbox2        TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5;
    VmkAES_Wrapper2_mkSbox2        TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6;
    VmkAES_Wrapper2_mkSbox2        TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7;
    VmkAES_Wrapper2_mkSbox2        TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8;
    VmkAES_Wrapper2_mkSbox2        TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9;
    
    // CREATORS
    VmkAES_Wrapper2__Syms(VmkAES_Wrapper2* topp, const char* namep);
    ~VmkAES_Wrapper2__Syms() = default;
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
