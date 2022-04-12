// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VmkAES_Wrapper2__Syms.h"
#include "VmkAES_Wrapper2.h"
#include "VmkAES_Wrapper2_mkSbox2.h"



// FUNCTIONS
VmkAES_Wrapper2__Syms::VmkAES_Wrapper2__Syms(VmkAES_Wrapper2* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0(Verilated::catName(topp->name(), "mkAES_Wrapper2.aes_.sboxes_0"))
    , TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1(Verilated::catName(topp->name(), "mkAES_Wrapper2.aes_.sboxes_1"))
    , TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10(Verilated::catName(topp->name(), "mkAES_Wrapper2.aes_.sboxes_10"))
    , TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11(Verilated::catName(topp->name(), "mkAES_Wrapper2.aes_.sboxes_11"))
    , TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12(Verilated::catName(topp->name(), "mkAES_Wrapper2.aes_.sboxes_12"))
    , TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13(Verilated::catName(topp->name(), "mkAES_Wrapper2.aes_.sboxes_13"))
    , TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14(Verilated::catName(topp->name(), "mkAES_Wrapper2.aes_.sboxes_14"))
    , TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15(Verilated::catName(topp->name(), "mkAES_Wrapper2.aes_.sboxes_15"))
    , TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2(Verilated::catName(topp->name(), "mkAES_Wrapper2.aes_.sboxes_2"))
    , TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3(Verilated::catName(topp->name(), "mkAES_Wrapper2.aes_.sboxes_3"))
    , TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4(Verilated::catName(topp->name(), "mkAES_Wrapper2.aes_.sboxes_4"))
    , TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5(Verilated::catName(topp->name(), "mkAES_Wrapper2.aes_.sboxes_5"))
    , TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6(Verilated::catName(topp->name(), "mkAES_Wrapper2.aes_.sboxes_6"))
    , TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7(Verilated::catName(topp->name(), "mkAES_Wrapper2.aes_.sboxes_7"))
    , TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8(Verilated::catName(topp->name(), "mkAES_Wrapper2.aes_.sboxes_8"))
    , TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9(Verilated::catName(topp->name(), "mkAES_Wrapper2.aes_.sboxes_9"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0 = &TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0;
    TOPp->__PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1 = &TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1;
    TOPp->__PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10 = &TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10;
    TOPp->__PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11 = &TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11;
    TOPp->__PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12 = &TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12;
    TOPp->__PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13 = &TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13;
    TOPp->__PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14 = &TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14;
    TOPp->__PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15 = &TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15;
    TOPp->__PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2 = &TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2;
    TOPp->__PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3 = &TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3;
    TOPp->__PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4 = &TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4;
    TOPp->__PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5 = &TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5;
    TOPp->__PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6 = &TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6;
    TOPp->__PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7 = &TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7;
    TOPp->__PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8 = &TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8;
    TOPp->__PVT__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9 = &TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.__Vconfigure(this, true);
    TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.__Vconfigure(this, false);
    TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.__Vconfigure(this, false);
    TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.__Vconfigure(this, false);
    TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.__Vconfigure(this, false);
    TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.__Vconfigure(this, false);
    TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.__Vconfigure(this, false);
    TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.__Vconfigure(this, false);
    TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.__Vconfigure(this, false);
    TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.__Vconfigure(this, false);
    TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.__Vconfigure(this, false);
    TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.__Vconfigure(this, false);
    TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.__Vconfigure(this, false);
    TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.__Vconfigure(this, false);
    TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.__Vconfigure(this, false);
    TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.__Vconfigure(this, false);
}
