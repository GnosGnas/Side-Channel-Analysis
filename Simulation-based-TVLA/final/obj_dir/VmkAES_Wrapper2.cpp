// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkAES_Wrapper2.h for the primary calling header

#include "VmkAES_Wrapper2.h"
#include "VmkAES_Wrapper2__Syms.h"

//==========

void VmkAES_Wrapper2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VmkAES_Wrapper2::eval\n"); );
    VmkAES_Wrapper2__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VmkAES_Wrapper2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("verilog_files/mkAES_Wrapper2.v", 37, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VmkAES_Wrapper2::_eval_initial_loop(VmkAES_Wrapper2__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("verilog_files/mkAES_Wrapper2.v", 37, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VmkAES_Wrapper2::_sequent__TOP__2(VmkAES_Wrapper2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkAES_Wrapper2::_sequent__TOP__2\n"); );
    VmkAES_Wrapper2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdlyvdim0__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__DOT__RAM__v0;
    CData/*0:0*/ __Vdlyvset__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__DOT__RAM__v0;
    CData/*3:0*/ __Vdlyvdim0__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__DOT__RAM__v0;
    CData/*0:0*/ __Vdlyvset__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__DOT__RAM__v0;
    CData/*3:0*/ __Vdlyvdim0__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__DOT__RAM__v0;
    CData/*0:0*/ __Vdlyvset__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__DOT__RAM__v0;
    CData/*3:0*/ __Vdlyvdim0__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__DOT__RAM__v0;
    CData/*0:0*/ __Vdlyvset__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__DOT__RAM__v0;
    IData/*31:0*/ __Vdlyvval__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__DOT__RAM__v0;
    IData/*31:0*/ __Vdlyvval__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__DOT__RAM__v0;
    IData/*31:0*/ __Vdlyvval__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__DOT__RAM__v0;
    IData/*31:0*/ __Vdlyvval__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__DOT__RAM__v0;
    // Body
    __Vdlyvset__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__DOT__RAM__v0 = 0U;
    __Vdlyvset__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__DOT__RAM__v0 = 0U;
    __Vdlyvset__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__DOT__RAM__v0 = 0U;
    __Vdlyvset__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__DOT__RAM__v0 = 0U;
    if (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__024EN) {
        if (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__024WE) {
            __Vdlyvval__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__DOT__RAM__v0 
                = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__024DI;
            __Vdlyvset__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__DOT__RAM__v0 = 1U;
            __Vdlyvdim0__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__DOT__RAM__v0 
                = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__024ADDR;
        }
    }
    if (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__024EN) {
        if (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__024WE) {
            __Vdlyvval__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__DOT__RAM__v0 
                = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__024DI;
            __Vdlyvset__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__DOT__RAM__v0 = 1U;
            __Vdlyvdim0__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__DOT__RAM__v0 
                = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__024ADDR;
        }
    }
    if (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__024EN) {
        if (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__024WE) {
            __Vdlyvval__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__DOT__RAM__v0 
                = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__024DI;
            __Vdlyvset__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__DOT__RAM__v0 = 1U;
            __Vdlyvdim0__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__DOT__RAM__v0 
                = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__024ADDR;
        }
    }
    if (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__024EN) {
        if (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__024WE) {
            __Vdlyvval__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__DOT__RAM__v0 
                = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__024DI;
            __Vdlyvset__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__DOT__RAM__v0 = 1U;
            __Vdlyvdim0__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__DOT__RAM__v0 
                = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__024ADDR;
        }
    }
    if (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__024EN) {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__DOT__DO_R 
            = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__024WE)
                ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__024DI
                : vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__DOT__RAM
               [vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__024ADDR]);
    }
    if (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__024EN) {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__DOT__DO_R 
            = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__024WE)
                ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__024DI
                : vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__DOT__RAM
               [vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__024ADDR]);
    }
    if (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__024EN) {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__DOT__DO_R 
            = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__024WE)
                ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__024DI
                : vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__DOT__RAM
               [vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__024ADDR]);
    }
    if (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__024EN) {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__DOT__DO_R 
            = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__024WE)
                ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__024DI
                : vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__DOT__RAM
               [vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__024ADDR]);
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__maxround = 0xaU;
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__maxround = 0xaU;
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
             & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key6 
                = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_prev_key0__024write_1___05FSEL_1)
                    ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key6___05Fh8664
                    : 0x3456789aU);
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key6 = 0x20U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_maxrounds = 0xaU;
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_maxrounds = 0xaU;
    }
    if (vlTOPp->RST_N) {
        if ((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
              | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey)) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_rcon 
                = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_rcongen__024read) 
                   << 0x18U);
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_rcon = 0x20U;
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
             & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key4 
                = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_prev_key0__024write_1___05FSEL_1)
                    ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT___theResult___05F___05Fh8662
                    : 0x23456789U);
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key4 = 0x20U;
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col0 
                = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col0__024D_IN;
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col0 = 0x20U;
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col1 
                = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col1__024D_IN;
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col1 = 0x20U;
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col2 
                = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col2__024D_IN;
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col2 = 0x20U;
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col3 
                = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col3__024D_IN;
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col3 = 0x20U;
    }
    if (vlTOPp->RST_N) {
        if ((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
              & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key2 
                = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_prev_key0__024write_1___05FSEL_1)
                    ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key2___05Fh7797
                    : 0x3456789aU);
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key2 = 0x20U;
    }
    if (vlTOPp->RST_N) {
        if ((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
              & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key1 
                = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_prev_key0__024write_1___05FSEL_1)
                    ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key1___05Fh7796
                    : 0xabcdef01U);
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key1 = 0x20U;
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_encode) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__counter 
                = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__counter__024D_IN;
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__counter = 4U;
    }
    if (vlTOPp->RST_N) {
        if ((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
              & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key0 
                = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_prev_key0__024write_1___05FSEL_1)
                    ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key0___05Fh7795
                    : 0x23456789U);
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key0 = 0x20U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAES_Wrapper2__DOT__trigger__024EN) {
            vlTOPp->mkAES_Wrapper2__DOT__trigger = 
                (1U & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process1_complete)));
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__trigger = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_buffer) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process1_start))) {
            vlTOPp->mkAES_Wrapper2__DOT__block = (1U 
                                                  & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_buffer)));
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__block = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process2_complete) 
              & (0xc34fU == vlTOPp->mkAES_Wrapper2__DOT__counter)) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule))) {
            vlTOPp->mkAES_Wrapper2__DOT__done_reg = 
                ((IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process2_complete) 
                 & (0xc34fU == vlTOPp->mkAES_Wrapper2__DOT__counter));
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__done_reg = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->RST_N)))) {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_rg_state = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__mod_state)) 
              | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process2_complete)) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule))) {
            vlTOPp->mkAES_Wrapper2__DOT__delayer = vlTOPp->mkAES_Wrapper2__DOT__delayer__024D_IN;
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__delayer = 8U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__rg_state2__024EN) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__rg_state2 
                = vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule;
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__rg_state2 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start2) 
                & (((0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)) 
                    | (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                   | (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)))) 
               | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
                  & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2_04_AND_kg_ETC___05F_d189))) 
              | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_subKey) 
                 & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT___dfoo15))) 
             | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_aes256subcol) 
                & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT___dfoo31)))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_sbox_out 
                = vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte;
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_sbox_out = 8U;
    }
    if (vlTOPp->RST_N) {
        if ((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_subKey) 
              & (3U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter))) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_rci 
                = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_rci__024D_IN;
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_rci = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_subKey) 
             & ((((0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter)) 
                  | (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter))) 
                 | (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter))) 
                | (3U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter))))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_last_col_sub_rot 
                = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_last_col_sub_rot__024D_IN;
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_last_col_sub_rot = 0x20U;
    }
    if (vlTOPp->RST_N) {
        if ((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_subKey) 
                & (3U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter))) 
               & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
              & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_EQ_kg_maxrounds_2___05F_d73))) 
             | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_aes256subcol) 
                & ((((4U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter)) 
                     | (5U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter))) 
                    | (6U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter))) 
                   | (7U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter)))))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_aes256_subcol4 
                = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_aes256_subcol4__024D_IN;
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_aes256_subcol4 = 0x20U;
    }
    if (vlTOPp->RST_N) {
        if (((((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_subKey) 
                   & (3U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter))) 
                  | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_aes256subcol) 
                     & (7U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter)))) 
                 | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey) 
                    & ((((0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)) 
                         | (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                        | (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                       | (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104))))) 
                | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
                   & ((((1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)) 
                        | (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                       | (0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                      | (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104))))) 
               | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule)) 
              | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start2)) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_rg_state 
                = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_rci__024write_1___05FSEL_1)
                    ? (((2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)) 
                        & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_EQ_kg_maxrounds_2___05F_d73)))
                        ? 4U : 3U) : (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_aes256subcol) 
                                       & (7U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter)))
                                       ? 3U : (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey) 
                                                & ((((0U 
                                                      == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)) 
                                                     | (1U 
                                                        == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                                                    | (2U 
                                                       == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                                                   | (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104))))
                                                ? ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)
                                                    ? 5U
                                                    : 0U)
                                                : (
                                                   ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
                                                    & ((((1U 
                                                          == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)) 
                                                         | (2U 
                                                            == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                                                        | (0U 
                                                           == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                                                       | (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104))))
                                                    ? 
                                                   ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)
                                                     ? 
                                                    ((1U 
                                                      == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))
                                                      ? 2U
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))
                                                       ? 
                                                      ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_EQ_kg_maxrounds_2___05F_d73)
                                                        ? 0U
                                                        : 2U)
                                                       : 2U))
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule)
                                                     ? 1U
                                                     : 
                                                    ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start2)
                                                      ? 2U
                                                      : 
                                                     ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start)
                                                       ? 6U
                                                       : 2U)))))));
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_rg_state = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_encode) 
                 & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__counter_199_EQ_maxround_19___05F_d1200)) 
                | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor)) 
               | (IData)(vlTOPp->RDY_output_fix)) | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp)) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__rg_state 
                = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX___05Funnamed___024write_1___05FSEL_1)
                    ? 2U : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor)
                             ? ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                 ? 4U : 1U) : ((IData)(vlTOPp->RDY_output_fix)
                                                ? 0U
                                                : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt)
                                                     ? 3U
                                                     : 2U)))));
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__rg_state = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start2) 
              & (((0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)) 
                  | (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                 | (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)))) 
             | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
                & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2_04_AND_kg_ETC___05F_d189)))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_rot_prev_key 
                = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_rot_prev_key__024write_1___05FSEL_1)
                    ? ((0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))
                        ? ((0xffffff00U & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key3 
                                           << 8U)) 
                           | (0xffU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key3 
                                       >> 0x18U))) : 
                       ((1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))
                         ? ((0xffffff00U & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key5 
                                            << 8U)) 
                            | (0xffU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key5 
                                        >> 0x18U)))
                         : ((0xffffff00U & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key7 
                                            << 8U)) 
                            | (0xffU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key7 
                                        >> 0x18U)))))
                    : ((1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))
                        ? ((0xffffff00U & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key5___05Fh8663 
                                           << 8U)) 
                           | (0xffU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key5___05Fh8663 
                                       >> 0x18U))) : 
                       ((2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))
                         ? ((0xffffff00U & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key7___05Fh8665 
                                            << 8U)) 
                            | (0xffU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key7___05Fh8665 
                                        >> 0x18U)))
                         : ((0xffffff00U & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key3___05Fh7798 
                                            << 8U)) 
                            | (0xffU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key3___05Fh7798 
                                        >> 0x18U))))));
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_rot_prev_key = 0x20U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey) 
                 & (0xaU == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number))) 
                & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
               & (0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
              | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
                 & (((((0xaU == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                       & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                      & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                     & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192)) 
                    | (((((0xaU == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                          & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                         & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                        & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                       | (((((0xaU == (0xfU & ((IData)(1U) 
                                               + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                             & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                            & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                           & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                          | ((((0xaU == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                               & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                              & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                             | ((((0xaU == (0xfU & 
                                            ((IData)(1U) 
                                             + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                                  & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                                 & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                                & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_EQ_kg_maxrounds_2___05F_d73))))))))) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_10 
                = (1U & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule)));
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_10 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey) 
                 & (0xbU == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number))) 
                & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
               & (0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
              | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
                 & (((((0xbU == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                       & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                      & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                     & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192)) 
                    | (((((0xbU == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                          & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                         & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                        & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                       | (((((0xbU == (0xfU & ((IData)(1U) 
                                               + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                             & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                            & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                           & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                          | ((((0xbU == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                               & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                              & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                             | ((((0xbU == (0xfU & 
                                            ((IData)(1U) 
                                             + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                                  & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                                 & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                                & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_EQ_kg_maxrounds_2___05F_d73))))))))) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_11 
                = (1U & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule)));
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_11 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey) 
                 & (0xcU == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number))) 
                & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
               & (0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
              | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
                 & (((((0xcU == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                       & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                      & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                     & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192)) 
                    | (((((0xcU == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                          & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                         & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                        & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                       | (((((0xcU == (0xfU & ((IData)(1U) 
                                               + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                             & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                            & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                           & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                          | ((((0xcU == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                               & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                              & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                             | ((((0xcU == (0xfU & 
                                            ((IData)(1U) 
                                             + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                                  & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                                 & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                                & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_EQ_kg_maxrounds_2___05F_d73))))))))) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_12 
                = (1U & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule)));
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_12 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey) 
                 & (0xdU == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number))) 
                & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
               & (0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
              | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
                 & (((((0xdU == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                       & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                      & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                     & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192)) 
                    | (((((0xdU == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                          & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                         & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                        & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                       | (((((0xdU == (0xfU & ((IData)(1U) 
                                               + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                             & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                            & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                           & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                          | ((((0xdU == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                               & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                              & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                             | ((((0xdU == (0xfU & 
                                            ((IData)(1U) 
                                             + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                                  & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                                 & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                                & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_EQ_kg_maxrounds_2___05F_d73))))))))) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_13 
                = (1U & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule)));
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_13 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey) 
                 & (0xeU == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number))) 
                & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
               & (0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
              | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
                 & (((((0xeU == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                       & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                      & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                     & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192)) 
                    | (((((0xeU == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                          & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                         & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                        & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                       | (((((0xeU == (0xfU & ((IData)(1U) 
                                               + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                             & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                            & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                           & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                          | ((((0xeU == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                               & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                              & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                             | ((((0xeU == (0xfU & 
                                            ((IData)(1U) 
                                             + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                                  & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                                 & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                                & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_EQ_kg_maxrounds_2___05F_d73))))))))) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_14 
                = (1U & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule)));
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_14 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey) 
                 & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number))) 
                & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
               & (0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
              | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
                 & (((((2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                       & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                      & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                     & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192)) 
                    | (((((2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                          & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                         & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                        & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                       | (((((2U == (0xfU & ((IData)(1U) 
                                             + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                             & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                            & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                           & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                          | ((((2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                               & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                              & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                             | ((((2U == (0xfU & ((IData)(1U) 
                                                  + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                                  & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                                 & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                                & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_EQ_kg_maxrounds_2___05F_d73))))))))) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_2 
                = (1U & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule)));
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_2 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey) 
                 & (3U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number))) 
                & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
               & (0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
              | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
                 & (((((3U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                       & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                      & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                     & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192)) 
                    | (((((3U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                          & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                         & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                        & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                       | (((((3U == (0xfU & ((IData)(1U) 
                                             + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                             & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                            & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                           & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                          | ((((3U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                               & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                              & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                             | ((((3U == (0xfU & ((IData)(1U) 
                                                  + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                                  & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                                 & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                                & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_EQ_kg_maxrounds_2___05F_d73))))))))) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_3 
                = (1U & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule)));
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_3 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey) 
                 & (4U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number))) 
                & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
               & (0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
              | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
                 & (((((4U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                       & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                      & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                     & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192)) 
                    | (((((4U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                          & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                         & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                        & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                       | (((((4U == (0xfU & ((IData)(1U) 
                                             + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                             & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                            & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                           & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                          | ((((4U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                               & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                              & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                             | ((((4U == (0xfU & ((IData)(1U) 
                                                  + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                                  & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                                 & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                                & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_EQ_kg_maxrounds_2___05F_d73))))))))) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_4 
                = (1U & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule)));
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_4 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey) 
                 & (5U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number))) 
                & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
               & (0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
              | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
                 & (((((5U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                       & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                      & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                     & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192)) 
                    | (((((5U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                          & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                         & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                        & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                       | (((((5U == (0xfU & ((IData)(1U) 
                                             + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                             & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                            & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                           & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                          | ((((5U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                               & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                              & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                             | ((((5U == (0xfU & ((IData)(1U) 
                                                  + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                                  & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                                 & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                                & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_EQ_kg_maxrounds_2___05F_d73))))))))) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_5 
                = (1U & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule)));
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_5 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey) 
                 & (6U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number))) 
                & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
               & (0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
              | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
                 & (((((6U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                       & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                      & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                     & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192)) 
                    | (((((6U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                          & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                         & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                        & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                       | (((((6U == (0xfU & ((IData)(1U) 
                                             + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                             & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                            & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                           & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                          | ((((6U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                               & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                              & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                             | ((((6U == (0xfU & ((IData)(1U) 
                                                  + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                                  & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                                 & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                                & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_EQ_kg_maxrounds_2___05F_d73))))))))) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_6 
                = (1U & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule)));
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_6 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey) 
                 & (7U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number))) 
                & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
               & (0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
              | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
                 & (((((7U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                       & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                      & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                     & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192)) 
                    | (((((7U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                          & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                         & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                        & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                       | (((((7U == (0xfU & ((IData)(1U) 
                                             + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                             & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                            & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                           & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                          | ((((7U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                               & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                              & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                             | ((((7U == (0xfU & ((IData)(1U) 
                                                  + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                                  & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                                 & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                                & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_EQ_kg_maxrounds_2___05F_d73))))))))) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_7 
                = (1U & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule)));
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_7 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey) 
                 & (8U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number))) 
                & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
               & (0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
              | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
                 & (((((8U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                       & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                      & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                     & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192)) 
                    | (((((8U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                          & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                         & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                        & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                       | (((((8U == (0xfU & ((IData)(1U) 
                                             + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                             & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                            & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                           & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                          | ((((8U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                               & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                              & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                             | ((((8U == (0xfU & ((IData)(1U) 
                                                  + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                                  & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                                 & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                                & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_EQ_kg_maxrounds_2___05F_d73))))))))) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_8 
                = (1U & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule)));
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_8 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey) 
                 & (9U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number))) 
                & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
               & (0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
              | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
                 & (((((9U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                       & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                      & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                     & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192)) 
                    | (((((9U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                          & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                         & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                        & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                       | (((((9U == (0xfU & ((IData)(1U) 
                                             + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                             & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                            & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                           & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                          | ((((9U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                               & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                              & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                             | ((((9U == (0xfU & ((IData)(1U) 
                                                  + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                                  & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                                 & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                                & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_EQ_kg_maxrounds_2___05F_d73))))))))) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_9 
                = (1U & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule)));
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_9 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey) 
                  & (0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number))) 
                 & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                & (0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
               | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
                  & (((((0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                        & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                       & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                      & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192)) 
                     | (((((0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                           & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                          & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                         & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                        | (((((0U == (0xfU & ((IData)(1U) 
                                              + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                              & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                             & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                            & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                           | ((((0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                                & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                               & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                              | ((((0U == (0xfU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                                   & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                                  & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                                 & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_EQ_kg_maxrounds_2___05F_d73))))))))) 
              | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule)) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_0 
                = (1U & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule)));
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_0 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start2) 
                & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
               | ((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey) 
                    & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number))) 
                   & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                  & (0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)))) 
              | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
                 & (((((1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                       & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                      & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                     & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192)) 
                    | (((((1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                          & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                         & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                        & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                       | (((((1U == (0xfU & ((IData)(1U) 
                                             + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                             & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                            & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                           & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
                          | ((((1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)) 
                               & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                              & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                             | ((((1U == (0xfU & ((IData)(1U) 
                                                  + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))) 
                                  & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                                 & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                                & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_EQ_kg_maxrounds_2___05F_d73))))))))) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_1 
                = (1U & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule)));
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process2_complete) 
              & (IData)(vlTOPp->mkAES_Wrapper2__DOT__switcher)) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule))) {
            if (((IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process2_complete) 
                 & (IData)(vlTOPp->mkAES_Wrapper2__DOT__switcher))) {
                vlTOPp->mkAES_Wrapper2__DOT__input_text[0U] 
                    = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__ciphertext[0U];
                vlTOPp->mkAES_Wrapper2__DOT__input_text[1U] 
                    = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__ciphertext[1U];
                vlTOPp->mkAES_Wrapper2__DOT__input_text[2U] 
                    = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__ciphertext[2U];
                vlTOPp->mkAES_Wrapper2__DOT__input_text[3U] 
                    = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__ciphertext[3U];
            } else {
                vlTOPp->mkAES_Wrapper2__DOT__input_text[0U] = 0U;
                vlTOPp->mkAES_Wrapper2__DOT__input_text[1U] = 0U;
                vlTOPp->mkAES_Wrapper2__DOT__input_text[2U] = 0U;
                vlTOPp->mkAES_Wrapper2__DOT__input_text[3U] = 0U;
            }
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__input_text[0U] = 0U;
        vlTOPp->mkAES_Wrapper2__DOT__input_text[1U] = 0U;
        vlTOPp->mkAES_Wrapper2__DOT__input_text[2U] = 0U;
        vlTOPp->mkAES_Wrapper2__DOT__input_text[3U] = 0U;
    }
    if (__Vdlyvset__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__DOT__RAM__v0) {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__DOT__RAM[__Vdlyvdim0__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__DOT__RAM__v0] 
            = __Vdlyvval__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__DOT__RAM__v0;
    }
    if (__Vdlyvset__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__DOT__RAM__v0) {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__DOT__RAM[__Vdlyvdim0__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__DOT__RAM__v0] 
            = __Vdlyvval__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__DOT__RAM__v0;
    }
    if (__Vdlyvset__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__DOT__RAM__v0) {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__DOT__RAM[__Vdlyvdim0__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__DOT__RAM__v0] 
            = __Vdlyvval__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__DOT__RAM__v0;
    }
    if (__Vdlyvset__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__DOT__RAM__v0) {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__DOT__RAM[__Vdlyvdim0__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__DOT__RAM__v0] 
            = __Vdlyvval__mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__DOT__RAM__v0;
    }
    vlTOPp->trigger_pin = vlTOPp->mkAES_Wrapper2__DOT__trigger;
    vlTOPp->done_signal = vlTOPp->mkAES_Wrapper2__DOT__done_reg;
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process2_complete) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule))) {
            vlTOPp->mkAES_Wrapper2__DOT__counter = vlTOPp->mkAES_Wrapper2__DOT__counter__024D_IN;
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__counter = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAES_Wrapper2__DOT__mod_state__024EN) {
            vlTOPp->mkAES_Wrapper2__DOT__mod_state 
                = vlTOPp->mkAES_Wrapper2__DOT__mod_state__024D_IN;
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__mod_state = 0U;
    }
    vlTOPp->__Vtableidx1 = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_rci;
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_rcongen__024read 
        = vlTOPp->__Vtable1_mkAES_Wrapper2__DOT__aes___DOT__kg_rcongen__024read
        [vlTOPp->__Vtableidx1];
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh6542 
        = ((0xffffff00U & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_last_col_sub_rot) 
           | (0xffU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_sbox_out) 
                       ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_rcon)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key0___05Fh7795 
        = (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key0 
           ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_last_col_sub_rot);
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key4___05F_1___05Fh8756 
        = (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key4 
           ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_aes256_subcol4);
    if (vlTOPp->RST_N) {
        if ((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_aes256subcol) 
                | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_subKey)) 
               | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2)) 
              | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey)) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter 
                = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter__024D_IN;
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter = 8U;
    }
    vlTOPp->mkAES_Wrapper2__DOT__aes___024RDY_encrypt 
        = ((0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__rg_state)) 
           & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__rg_state2)));
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
             & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key7 
                = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_prev_key0__024write_1___05FSEL_1)
                    ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key7___05Fh8665
                    : 0xbcdef012U);
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key7 = 0x20U;
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
             & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key5 
                = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_prev_key0__024write_1___05FSEL_1)
                    ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key5___05Fh8663
                    : 0xabcdef01U);
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key5 = 0x20U;
    }
    if (vlTOPp->RST_N) {
        if ((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
              & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key3 
                = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_prev_key0__024write_1___05FSEL_1)
                    ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key3___05Fh7798
                    : 0xbcdef012U);
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key3 = 0x20U;
    }
    if (vlTOPp->RST_N) {
        if ((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey) 
                & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
               & (0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
              | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_round_number__024write_1___05FSEL_2)) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number 
                = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number__024D_IN;
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number = 4U;
    }
    if (vlTOPp->RST_N) {
        if ((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start2) 
              & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
             | (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
                 & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192 
                = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192__024D_IN;
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process2_complete) {
            vlTOPp->mkAES_Wrapper2__DOT__switcher = vlTOPp->mkAES_Wrapper2__DOT__switcher__024D_IN;
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__switcher = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX___05Funnamed___024write_1___05FSEL_1) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__ciphertext[0U] 
                = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3;
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__ciphertext[1U] 
                = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2;
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__ciphertext[2U] 
                = (IData)((((QData)((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0)) 
                            << 0x20U) | (QData)((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1))));
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__ciphertext[3U] 
                = (IData)(((((QData)((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0)) 
                             << 0x20U) | (QData)((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1))) 
                           >> 0x20U));
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__ciphertext[0U] = 0x80U;
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__ciphertext[1U] = 0U;
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__ciphertext[2U] = 0U;
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__ciphertext[3U] = 0U;
    }
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key1___05Fh7796 
        = (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key1 
           ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key0___05Fh7795);
    vlTOPp->mkAES_Wrapper2__DOT__delayer__024D_IN = 
        ((1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__mod_state))
          ? ((0x80000003U > (0x80000000U ^ vlTOPp->mkAES_Wrapper2__DOT__delayer))
              ? ((IData)(1U) + vlTOPp->mkAES_Wrapper2__DOT__delayer)
              : 0U) : 0U);
    vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_buffer 
        = (((2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__mod_state)) 
            & (IData)(vlTOPp->mkAES_Wrapper2__DOT__block)) 
           & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__trigger)));
    vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process1_complete 
        = ((((2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__rg_state)) 
             & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__mod_state))) 
            & (IData)(vlTOPp->mkAES_Wrapper2__DOT__block)) 
           & (IData)(vlTOPp->mkAES_Wrapper2__DOT__trigger));
    vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process2_complete 
        = ((2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__rg_state)) 
           & (4U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__mod_state)));
    vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process1_start 
        = ((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024RDY_encrypt) 
             & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__mod_state))) 
            & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__block))) 
           & (IData)(vlTOPp->mkAES_Wrapper2__DOT__trigger));
    vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process2_start 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024RDY_encrypt) 
           & (3U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__mod_state)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key2___05Fh7797 
        = (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key2 
           ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key1___05Fh7796);
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT___dfoo31 
        = (((4U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter)) 
            | (5U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter))) 
           | (6U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_last_col_sub_rot__024D_IN 
        = ((0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter))
            ? ((0xff000000U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_sbox_out) 
                                << 0x18U) ^ (0xff000000U 
                                             & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_rcon))) 
               | (0xffffffU & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_last_col_sub_rot))
            : ((1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter))
                ? ((0xff000000U & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_last_col_sub_rot) 
                   | ((0xff0000U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_sbox_out) 
                                     << 0x10U) ^ (0xffff0000U 
                                                  & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_rcon))) 
                      | (0xffffU & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_last_col_sub_rot)))
                : ((2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter))
                    ? ((0xffff0000U & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_last_col_sub_rot) 
                       | ((0xff00U & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_sbox_out) 
                                       << 8U) ^ (0xffffff00U 
                                                 & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_rcon))) 
                          | (0xffU & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_last_col_sub_rot)))
                    : vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh6542)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__temp_col___05Fh6675 
        = ((((vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key0 
              ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key1) 
             ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key2) 
            ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key3) 
           ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh6542);
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number) 
           <= (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_maxrounds));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_EQ_kg_maxrounds_2___05F_d73 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number) 
           == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_maxrounds));
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length = 0U;
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length = 0U;
    }
    vlTOPp->mkAES_Wrapper2__DOT__switcher__024D_IN 
        = (1U & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__switcher)));
    vlTOPp->output_fix[0U] = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__ciphertext[0U];
    vlTOPp->output_fix[1U] = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__ciphertext[1U];
    vlTOPp->output_fix[2U] = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__ciphertext[2U];
    vlTOPp->output_fix[3U] = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__ciphertext[3U];
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor) 
               & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt))) 
              | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_encode) 
                 & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__counter_199_EQ_maxround_19___05F_d1200)))) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_1)
                    ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh577620
                    : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_2)
                        ? ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                            ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh594044
                            : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__counter_199_EQ_maxround_19_MINUS_1_20___05F_d1212)
                                ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh222687
                                : vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh577620))
                        : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp)
                            ? ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh594044
                                : vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh222687)
                            : 0xaaaaaaaaU)));
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor) 
               & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt))) 
              | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_encode) 
                 & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__counter_199_EQ_maxround_19___05F_d1200)))) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_1)
                    ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh187157
                    : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_2)
                        ? ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                            ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh198026
                            : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__counter_199_EQ_maxround_19_MINUS_1_20___05F_d1212)
                                ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh212904
                                : vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh187157))
                        : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp)
                            ? ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh198026
                                : vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh212904)
                            : 0xaaaaaaaaU)));
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor) 
               & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt))) 
              | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_encode) 
                 & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__counter_199_EQ_maxround_19___05F_d1200)))) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_1)
                    ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh192455
                    : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_2)
                        ? ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                            ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh198093
                            : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__counter_199_EQ_maxround_19_MINUS_1_20___05F_d1212)
                                ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh212990
                                : vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh192455))
                        : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp)
                            ? ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh198093
                                : vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh212990)
                            : 0xaaaaaaaaU)));
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor) 
               & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt))) 
              | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_encode) 
                 & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__counter_199_EQ_maxround_19___05F_d1200)))) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp))) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_1)
                    ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh197744
                    : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_2)
                        ? ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                            ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh198151
                            : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__counter_199_EQ_maxround_19_MINUS_1_20___05F_d1212)
                                ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh213067
                                : vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh197744))
                        : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp)
                            ? ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh198151
                                : vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh213067)
                            : 0xaaaaaaaaU)));
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 = 0U;
    }
    vlTOPp->mkAES_Wrapper2__DOT__trigger__024EN = (
                                                   (((1U 
                                                      == (IData)(vlTOPp->mkAES_Wrapper2__DOT__mod_state)) 
                                                     & (0x80000003U 
                                                        <= 
                                                        (0x80000000U 
                                                         ^ vlTOPp->mkAES_Wrapper2__DOT__delayer))) 
                                                    | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process1_complete)) 
                                                   | (((2U 
                                                        == (IData)(vlTOPp->mkAES_Wrapper2__DOT__mod_state)) 
                                                       & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__block))) 
                                                      & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__trigger))));
    vlTOPp->RDY_output_fix = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process2_complete) 
                              | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process1_complete));
    vlTOPp->mkAES_Wrapper2__DOT__counter__024D_IN = 
        ((IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process2_complete)
          ? ((IData)(1U) + vlTOPp->mkAES_Wrapper2__DOT__counter)
          : 0U);
    if (vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process2_start) {
        vlTOPp->mkAES_Wrapper2__DOT__aes___024encrypt_plaintexttt[0U] 
            = vlTOPp->mkAES_Wrapper2__DOT__input_text[0U];
        vlTOPp->mkAES_Wrapper2__DOT__aes___024encrypt_plaintexttt[1U] 
            = vlTOPp->mkAES_Wrapper2__DOT__input_text[1U];
        vlTOPp->mkAES_Wrapper2__DOT__aes___024encrypt_plaintexttt[2U] 
            = vlTOPp->mkAES_Wrapper2__DOT__input_text[2U];
        vlTOPp->mkAES_Wrapper2__DOT__aes___024encrypt_plaintexttt[3U] 
            = vlTOPp->mkAES_Wrapper2__DOT__input_text[3U];
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___024encrypt_plaintexttt[0U] 
            = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__switcher)
                ? vlTOPp->mkAES_Wrapper2__DOT__input_text[0U]
                : 0x95601890U);
        vlTOPp->mkAES_Wrapper2__DOT__aes___024encrypt_plaintexttt[1U] 
            = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__switcher)
                ? vlTOPp->mkAES_Wrapper2__DOT__input_text[1U]
                : 0x3255bfefU);
        vlTOPp->mkAES_Wrapper2__DOT__aes___024encrypt_plaintexttt[2U] 
            = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__switcher)
                ? vlTOPp->mkAES_Wrapper2__DOT__input_text[2U]
                : 0x5e6b4b0dU);
        vlTOPp->mkAES_Wrapper2__DOT__aes___024encrypt_plaintexttt[3U] 
            = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__switcher)
                ? vlTOPp->mkAES_Wrapper2__DOT__input_text[3U]
                : 0xda39a3eeU);
    }
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key3___05Fh7798 
        = (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key3 
           ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key2___05Fh7797);
    vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule 
        = (((0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_rg_state)) 
            & (0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__rg_state))) 
           & (0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__mod_state)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__counter_199_EQ_maxround_19_MINUS_1_20___05F_d1212 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__counter) 
           == (0xfU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__maxround) 
                       - (IData)(1U))));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__counter_199_EQ_maxround_19___05F_d1200 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__counter) 
           == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__maxround));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_encode 
        = ((0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_rg_state)) 
           & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__rg_state)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp 
        = ((0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_rg_state)) 
           & (4U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__rg_state)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key4___05Fh8661 
        = (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key4 
           ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key3___05Fh7798);
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__rg_state2__024EN 
        = (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__rg_state2) 
            & ((8U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__maxround))
                ? ((4U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__maxround))
                    ? ((2U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__maxround))
                        ? ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__maxround)) 
                           & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_14))
                        : ((1U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__maxround))
                            ? (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_13)
                            : (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_12)))
                    : ((2U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__maxround))
                        ? ((1U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__maxround))
                            ? (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_11)
                            : (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_10))
                        : ((1U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__maxround))
                            ? (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_9)
                            : (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_8))))
                : ((4U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__maxround))
                    ? ((2U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__maxround))
                        ? ((1U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__maxround))
                            ? (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_7)
                            : (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_6))
                        : ((1U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__maxround))
                            ? (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_5)
                            : (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_4)))
                    : ((2U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__maxround))
                        ? ((1U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__maxround))
                            ? (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_3)
                            : (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_2))
                        : ((1U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__maxround))
                            ? (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_1)
                            : (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_key_done_0)))))) 
           | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule));
    vlTOPp->mkAES_Wrapper2__DOT__mod_state__024D_IN 
        = ((((IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process2_complete) 
             & (0xc34fU != vlTOPp->mkAES_Wrapper2__DOT__counter)) 
            | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule))
            ? 1U : (((1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__mod_state)) 
                     & (0x80000003U <= (0x80000000U 
                                        ^ vlTOPp->mkAES_Wrapper2__DOT__delayer)))
                     ? 2U : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_buffer)
                              ? 3U : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process2_start)
                                       ? 4U : 2U))));
    vlTOPp->mkAES_Wrapper2__DOT__mod_state__024EN = 
        ((((((1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__mod_state)) 
             & (0x80000003U <= (0x80000000U ^ vlTOPp->mkAES_Wrapper2__DOT__delayer))) 
            | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process2_complete) 
               & (0xc34fU != vlTOPp->mkAES_Wrapper2__DOT__counter))) 
           | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule)) 
          | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_buffer)) 
         | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process2_start));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2_04_AND_kg_ETC___05F_d112 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104) 
           & (((0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)) 
               | ((1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)) 
                  & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
              | (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2_04_AND_kg_ETC___05F_d182 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104) 
           & (((1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)) 
               & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))) 
              | ((2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)) 
                 & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_EQ_kg_maxrounds_2___05F_d73)))));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2_04_AND_kg_ETC___05F_d189 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104) 
           & (((1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)) 
               | ((2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)) 
                  & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_EQ_kg_maxrounds_2___05F_d73)))) 
              | (0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT___dfoo15 
        = ((((0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter)) 
             | (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter))) 
            | (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter))) 
           | (((3U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter)) 
               & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
              & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_EQ_kg_maxrounds_2___05F_d73))));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh568860 
        = ((0x800000U & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0)
            ? (1U | ((0xe0U & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                               >> 0xfU)) | ((0x18U 
                                             & ((~ 
                                                 (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                                                  >> 0x12U)) 
                                                << 3U)) 
                                            | ((4U 
                                                & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                                                   >> 0xfU)) 
                                               | (2U 
                                                  & ((~ 
                                                      (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                                                       >> 0x10U)) 
                                                     << 1U))))))
            : (0xfeU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                        >> 0xfU)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh569501 
        = ((0x8000U & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0)
            ? (1U | ((0xe0U & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                               >> 7U)) | ((0x18U & 
                                           ((~ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                                                >> 0xaU)) 
                                            << 3U)) 
                                          | ((4U & 
                                              (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                                               >> 7U)) 
                                             | (2U 
                                                & ((~ 
                                                    (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                                                     >> 8U)) 
                                                   << 1U))))))
            : (0xfeU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                        >> 7U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh569788 
        = ((0x80000000U & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0)
            ? (1U | ((0xe0U & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                               >> 0x17U)) | ((0x18U 
                                              & ((~ 
                                                  (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                                                   >> 0x1aU)) 
                                                 << 3U)) 
                                             | ((4U 
                                                 & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                                                    >> 0x17U)) 
                                                | (2U 
                                                   & ((~ 
                                                       (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                                                        >> 0x18U)) 
                                                      << 1U))))))
            : (0xfeU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                        >> 0x17U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh570142 
        = ((0x80U & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0)
            ? (1U | ((0xe0U & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                               << 1U)) | ((0x18U & 
                                           ((~ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0) 
                                                   << 1U))))))
            : (0xfeU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229071 
        = ((0x80000000U & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1)
            ? (1U | ((0xe0U & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                               >> 0x17U)) | ((0x18U 
                                              & ((~ 
                                                  (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                                                   >> 0x1aU)) 
                                                 << 3U)) 
                                             | ((4U 
                                                 & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                                                    >> 0x17U)) 
                                                | (2U 
                                                   & ((~ 
                                                       (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                                                        >> 0x18U)) 
                                                      << 1U))))))
            : (0xfeU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                        >> 0x17U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229227 
        = ((0x800000U & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1)
            ? (1U | ((0xe0U & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                               >> 0xfU)) | ((0x18U 
                                             & ((~ 
                                                 (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                                                  >> 0x12U)) 
                                                << 3U)) 
                                            | ((4U 
                                                & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                                                   >> 0xfU)) 
                                               | (2U 
                                                  & ((~ 
                                                      (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                                                       >> 0x10U)) 
                                                     << 1U))))))
            : (0xfeU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                        >> 0xfU)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229849 
        = ((0x8000U & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1)
            ? (1U | ((0xe0U & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                               >> 7U)) | ((0x18U & 
                                           ((~ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                                                >> 0xaU)) 
                                            << 3U)) 
                                          | ((4U & 
                                              (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                                               >> 7U)) 
                                             | (2U 
                                                & ((~ 
                                                    (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                                                     >> 8U)) 
                                                   << 1U))))))
            : (0xfeU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                        >> 7U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh230485 
        = ((0x80U & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1)
            ? (1U | ((0xe0U & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                               << 1U)) | ((0x18U & 
                                           ((~ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1) 
                                                   << 1U))))))
            : (0xfeU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh231510 
        = ((0x80000000U & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2)
            ? (1U | ((0xe0U & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                               >> 0x17U)) | ((0x18U 
                                              & ((~ 
                                                  (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                                                   >> 0x1aU)) 
                                                 << 3U)) 
                                             | ((4U 
                                                 & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                                                    >> 0x17U)) 
                                                | (2U 
                                                   & ((~ 
                                                       (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                                                        >> 0x18U)) 
                                                      << 1U))))))
            : (0xfeU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                        >> 0x17U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh231666 
        = ((0x800000U & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2)
            ? (1U | ((0xe0U & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                               >> 0xfU)) | ((0x18U 
                                             & ((~ 
                                                 (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                                                  >> 0x12U)) 
                                                << 3U)) 
                                            | ((4U 
                                                & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                                                   >> 0xfU)) 
                                               | (2U 
                                                  & ((~ 
                                                      (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                                                       >> 0x10U)) 
                                                     << 1U))))))
            : (0xfeU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                        >> 0xfU)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh232288 
        = ((0x8000U & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2)
            ? (1U | ((0xe0U & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                               >> 7U)) | ((0x18U & 
                                           ((~ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                                                >> 0xaU)) 
                                            << 3U)) 
                                          | ((4U & 
                                              (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                                               >> 7U)) 
                                             | (2U 
                                                & ((~ 
                                                    (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                                                     >> 8U)) 
                                                   << 1U))))))
            : (0xfeU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                        >> 7U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh232924 
        = ((0x80U & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2)
            ? (1U | ((0xe0U & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                               << 1U)) | ((0x18U & 
                                           ((~ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2) 
                                                   << 1U))))))
            : (0xfeU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh234727 
        = ((0x8000U & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3)
            ? (1U | ((0xe0U & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                               >> 7U)) | ((0x18U & 
                                           ((~ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                                                >> 0xaU)) 
                                            << 3U)) 
                                          | ((4U & 
                                              (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                                               >> 7U)) 
                                             | (2U 
                                                & ((~ 
                                                    (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                                                     >> 8U)) 
                                                   << 1U))))))
            : (0xfeU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                        >> 7U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh233949 
        = ((0x80000000U & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3)
            ? (1U | ((0xe0U & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                               >> 0x17U)) | ((0x18U 
                                              & ((~ 
                                                  (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                                                   >> 0x1aU)) 
                                                 << 3U)) 
                                             | ((4U 
                                                 & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                                                    >> 0x17U)) 
                                                | (2U 
                                                   & ((~ 
                                                       (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                                                        >> 0x18U)) 
                                                      << 1U))))))
            : (0xfeU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                        >> 0x17U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh234105 
        = ((0x800000U & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3)
            ? (1U | ((0xe0U & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                               >> 0xfU)) | ((0x18U 
                                             & ((~ 
                                                 (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                                                  >> 0x12U)) 
                                                << 3U)) 
                                            | ((4U 
                                                & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                                                   >> 0xfU)) 
                                               | (2U 
                                                  & ((~ 
                                                      (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                                                       >> 0x10U)) 
                                                     << 1U))))))
            : (0xfeU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                        >> 0xfU)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh235363 
        = ((0x80U & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3)
            ? (1U | ((0xe0U & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                               << 1U)) | ((0x18U & 
                                           ((~ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3) 
                                                   << 1U))))))
            : (0xfeU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                        << 1U)));
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt) {
            vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt = 0U;
        }
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt = 0U;
    }
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX___05Funnamed___024write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_encode) 
           & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__counter_199_EQ_maxround_19___05F_d1200));
    if (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_encode) {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__counter__024D_IN 
            = (0xfU & ((IData)(1U) + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__counter)));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_2 
            = ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__counter_199_EQ_maxround_19___05F_d1200)) 
               & 1U);
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__counter__024D_IN = 1U;
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_2 = 0U;
    }
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_aes256subcol 
        = (((4U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_rg_state)) 
            & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_encode))) 
           & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_subKey 
        = (((2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_rg_state)) 
            & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_encode))) 
           & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT___theResult___05F___05Fh8662 
        = ((2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))
            ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key4___05F_1___05Fh8756
            : vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key4___05Fh8661);
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh569911 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh568860))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh568860) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh568860) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh568860) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh568860)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh568860) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh569502 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh569501))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh569501) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh569501) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh569501) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh569501)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh569501) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh569270 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh569788))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh569788) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh569788) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh569788) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh569788)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh569788) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh570143 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh570142))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh570142) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh570142) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh570142) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh570142)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh570142) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229072 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229071))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229071) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229071) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229071) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229071)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229071) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229729 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229227))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229227) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229227) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229227) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229227)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229227) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229349 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229849))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229849) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229849) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229849) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229849)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229849) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229971 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh230485))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh230485) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh230485) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh230485) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh230485)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh230485) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh231511 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh231510))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh231510) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh231510) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh231510) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh231510)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh231510) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh232168 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh231666))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh231666) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh231666) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh231666) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh231666)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh231666) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh231788 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh232288))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh232288) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh232288) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh232288) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh232288)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh232288) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh232410 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh232924))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh232924) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh232924) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh232924) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh232924)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh232924) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh234227 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh234727))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh234727) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh234727) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh234727) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh234727)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh234727) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh233950 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh233949))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh233949) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh233949) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh233949) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh233949)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh233949) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh234607 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh234105))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh234105) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh234105) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh234105) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh234105)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh234105) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh234849 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh235363))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh235363) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh235363) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh235363) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh235363)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh235363) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process2_start) 
           | (IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process1_start));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter__024D_IN 
        = (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_aes256subcol) 
            | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_subKey))
            ? (0xfU & ((IData)(1U) + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter)))
            : 0U);
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_aes256_subcol4__024D_IN 
        = (((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_subKey) 
              & (3U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter))) 
             & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
            & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_EQ_kg_maxrounds_2___05F_d73)))
            ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__temp_col___05Fh6675
            : ((4U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter))
                ? (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_sbox_out) 
                    << 0x18U) | (0xffffffU & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_aes256_subcol4))
                : ((5U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter))
                    ? ((0xff000000U & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_aes256_subcol4) 
                       | (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_sbox_out) 
                           << 0x10U) | (0xffffU & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_aes256_subcol4)))
                    : ((6U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter))
                        ? ((0xffff0000U & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_aes256_subcol4) 
                           | (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_sbox_out) 
                               << 8U) | (0xffU & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_aes256_subcol4)))
                        : ((0xffffff00U & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_aes256_subcol4) 
                           | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_sbox_out))))));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_rci__024write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_subKey) 
           & (3U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_sboxes_0__024getbyte_1___05FSEL_5 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_subKey) 
           & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT___dfoo15));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key5___05Fh8663 
        = (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key5 
           ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT___theResult___05F___05Fh8662);
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh569912 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh569911))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh569911) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh569911) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh569911) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh569911)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh569911) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh570033 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh569502))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh569502) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh569502) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh569502) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh569502)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh569502) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh569790 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh569270))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh569270) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh569270) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh569270) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh569270)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh569270) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh570144 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh570143))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh570143) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh570143) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh570143) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh570143)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh570143) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh229073 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229072))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229072) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229072) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229072) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229072)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229072) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh229229 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229729))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229729) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229729) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229729) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229729)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229729) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh229350 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229349))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229349) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229349) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229349) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229349)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229349) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh229470 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229971))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229971) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229971) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229971) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229971)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229971) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh231512 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh231511))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh231511) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh231511) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh231511) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh231511)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh231511) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh231668 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh232168))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh232168) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh232168) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh232168) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh232168)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh232168) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh231789 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh231788))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh231788) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh231788) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh231788) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh231788)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh231788) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh231909 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh232410))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh232410) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh232410) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh232410) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh232410)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh232410) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh234228 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh234227))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh234227) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh234227) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh234227) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh234227)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh234227) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh233951 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh233950))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh233950) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh233950) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh233950) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh233950)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh233950) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh234107 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh234607))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh234607) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh234607) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh234607) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh234607)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh234607) 
                        << 1U)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh234348 
        = ((0x80U & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh234849))
            ? (1U | ((0xe0U & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh234849) 
                               << 1U)) | ((0x18U & 
                                           ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh234849) 
                                                >> 2U)) 
                                            << 3U)) 
                                          | ((4U & 
                                              ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh234849) 
                                               << 1U)) 
                                             | (2U 
                                                & ((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh234849)) 
                                                   << 1U))))))
            : (0xfeU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh234849) 
                        << 1U)));
    if (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt) {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key0__024put_2___05FVAL_6 
            = (0xfU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__maxround) 
                       - (IData)(1U)));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key0__024put_2___05FVAL_4 
            = (0xfU & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__maxround) 
                        - (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__counter)) 
                       - (IData)(2U)));
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key0__024put_2___05FVAL_6 = 2U;
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key0__024put_2___05FVAL_4 
            = (0xfU & ((IData)(2U) + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__counter)));
    }
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start 
        = ((((1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_rg_state)) 
             & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_encode))) 
            & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp))) 
           & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start2 
        = ((((6U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_rg_state)) 
             & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_encode))) 
            & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp))) 
           & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_rci__024D_IN 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_rci__024write_1___05FSEL_1)
            ? (0xfU & ((IData)(1U) + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_rci)))
            : 0U);
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key6___05Fh8664 
        = (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key6 
           ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key5___05Fh8663);
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh569923 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh569912) 
           ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh569911));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh569514 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh570033) 
           ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh569502));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh569282 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh569790) 
           ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh569270));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh570155 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh570144) 
           ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh570143));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh229084 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh229073) 
           ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229072));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh229741 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh229229) 
           ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229729));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh229361 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh229350) 
           ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229349));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh229983 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh229470) 
           ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh229971));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh231523 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh231512) 
           ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh231511));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh232180 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh231668) 
           ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh232168));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh231800 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh231789) 
           ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh231788));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh232422 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh231909) 
           ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh232410));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh234239 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh234228) 
           ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh234227));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh233962 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh233951) 
           ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh233950));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh234619 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh234107) 
           ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh234607));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh234861 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh234348) 
           ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__four___05Fh234849));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192__024D_IN 
        = (1U & ((~ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start2) 
                     & (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)))) 
                 & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192))));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_round_key_done_1__024write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start2) 
           & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key0__024put_1___05FSEL_1 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start2) 
           & ((1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)) 
              | (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_rot_prev_key__024write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start2) 
           & (((0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)) 
               | (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
              | (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor 
        = ((((((0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_rg_state)) 
               & (3U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__rg_state))) 
              & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_aes256subcol))) 
             & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_subKey))) 
            & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start2))) 
           & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key7___05Fh8665 
        = (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key7 
           ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key6___05Fh8664);
    if (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor) {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col0__024D_IN 
            = (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col0 
               ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__DOT__DO_R);
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col1__024D_IN 
            = (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col1 
               ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__DOT__DO_R);
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col2__024D_IN 
            = (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col2 
               ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__DOT__DO_R);
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col3__024D_IN 
            = (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col3 
               ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__DOT__DO_R);
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col0__024D_IN 
            = (0x23456789U ^ vlTOPp->mkAES_Wrapper2__DOT__aes___024encrypt_plaintexttt[3U]);
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col1__024D_IN 
            = (0xabcdef01U ^ vlTOPp->mkAES_Wrapper2__DOT__aes___024encrypt_plaintexttt[2U]);
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col2__024D_IN 
            = (0x3456789aU ^ vlTOPp->mkAES_Wrapper2__DOT__aes___024encrypt_plaintexttt[1U]);
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col3__024D_IN 
            = (0xbcdef012U ^ vlTOPp->mkAES_Wrapper2__DOT__aes___024encrypt_plaintexttt[0U]);
    }
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__024WE 
        = (1U & ((((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_2)) 
                   & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp))) 
                  & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor))) 
                 & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt))));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__024WE 
        = (1U & ((((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_2)) 
                   & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp))) 
                  & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor))) 
                 & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt))));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__024WE 
        = (1U & ((((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_2)) 
                   & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp))) 
                  & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor))) 
                 & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt))));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__024WE 
        = (1U & ((((~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_2)) 
                   & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp))) 
                  & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor))) 
                 & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt))));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey 
        = (((((3U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_rg_state)) 
              & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor))) 
             & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_encode))) 
            & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp))) 
           & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2 
        = (((((5U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_rg_state)) 
              & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor))) 
             & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_encode))) 
            & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp))) 
           & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor) 
           & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key0__024put_1___05FSEL_2 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey) 
           & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2_04_AND_kg_ETC___05F_d112));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key2__024put_1___05FSEL_2 
        = (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey) 
            & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
           & (((0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)) 
               | (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
              | (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_prev_key0__024write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
           & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__024EN 
        = (((((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start2) 
                  & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                 | (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey) 
                     & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                    & (((0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)) 
                        | (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                       | (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))))) 
                | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
                   & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2_04_AND_kg_ETC___05F_d182))) 
               | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_encode) 
                  & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__counter_199_EQ_maxround_19___05F_d1200)))) 
              | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp)) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor)) 
            | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt)) 
           | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__024EN 
        = (((((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start2) 
                  & (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                 | (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey) 
                     & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                    & (((0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)) 
                        | (1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))) 
                       | (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))))) 
                | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
                   & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2_04_AND_kg_ETC___05F_d182))) 
               | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_encode) 
                  & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__counter_199_EQ_maxround_19___05F_d1200)))) 
              | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp)) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor)) 
            | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt)) 
           | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key2__024put_1___05FSEL_3 
        = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
           & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2_04_AND_kg_ETC___05F_d182));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_round_number__024write_1___05FSEL_2 
        = (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
            & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
           & ((1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)) 
              | ((2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)) 
                 & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_EQ_kg_maxrounds_2___05F_d73)))));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_decrypt_ 
        = ((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_1) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_2)) 
            | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp)) 
           & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt));
    if (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_1) 
         | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp))) {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__024getbyte_byte_in 
            = (0xffU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col3 
                        >> 8U));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__024getbyte_byte_in 
            = (0xffU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col1 
                        >> 0x10U));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__024getbyte_byte_in 
            = (0xffU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col1 
                        >> 0x18U));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__024getbyte_byte_in 
            = (0xffU & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col0);
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__024getbyte_byte_in 
            = (0xffU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col0 
                        >> 8U));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__024getbyte_byte_in 
            = (0xffU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col0 
                        >> 0x10U));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__024getbyte_byte_in 
            = (0xffU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col0 
                        >> 0x18U));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__024getbyte_byte_in 
            = (0xffU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col3 
                        >> 0x10U));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__024getbyte_byte_in 
            = (0xffU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col3 
                        >> 0x18U));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__024getbyte_byte_in 
            = (0xffU & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col2);
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__024getbyte_byte_in 
            = (0xffU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col2 
                        >> 8U));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__024getbyte_byte_in 
            = (0xffU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col2 
                        >> 0x10U));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__024getbyte_byte_in 
            = (0xffU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col2 
                        >> 0x18U));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__024getbyte_byte_in 
            = (0xffU & vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col1);
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__024getbyte_byte_in 
            = (0xffU & (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col1 
                        >> 8U));
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__024getbyte_byte_in 
            = (0xffU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                         ? (((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh233962) 
                               ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                                  >> 0x18U)) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh234107) 
                                                ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                                                   >> 0x10U))) 
                             ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh234239) 
                                ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh234727))) 
                            ^ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh234348) 
                                ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh235363)) 
                               ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3))
                         : (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                            >> 8U)));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__024getbyte_byte_in 
            = (0xffU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                         ? (((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh229073) 
                               ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                                  >> 0x18U)) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh229741) 
                                                ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229227))) 
                             ^ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh229350) 
                                 ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229849)) 
                                ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                                   >> 8U))) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh229983) 
                                               ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1))
                         : (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                            >> 0x10U)));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__024getbyte_byte_in 
            = (0xffU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                         ? (((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh229084) 
                               ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229071)) 
                              ^ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh229229) 
                                  ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229227)) 
                                 ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                                    >> 0x10U))) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh229361) 
                                                   ^ 
                                                   (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                                                    >> 8U))) 
                            ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh229470) 
                               ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1))
                         : (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                            >> 0x18U)));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__024getbyte_byte_in 
            = (0xffU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                         ? ((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh569790) 
                                ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh569788)) 
                               ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                                  >> 0x18U)) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh569923) 
                                                ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                                                   >> 0x10U))) 
                             ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh570033) 
                                ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                                   >> 8U))) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh570155) 
                                               ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh570142)))
                         : vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__024getbyte_byte_in 
            = (0xffU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                         ? (((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh569282) 
                               ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                                  >> 0x18U)) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh569912) 
                                                ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                                                   >> 0x10U))) 
                             ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh569514) 
                                ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh569501))) 
                            ^ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh570144) 
                                ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh570142)) 
                               ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0))
                         : (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                            >> 8U)));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__024getbyte_byte_in 
            = (0xffU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                         ? (((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh569790) 
                               ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                                  >> 0x18U)) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh569923) 
                                                ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh568860))) 
                             ^ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh570033) 
                                 ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh569501)) 
                                ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                                   >> 8U))) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh570155) 
                                               ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0))
                         : (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                            >> 0x10U)));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__024getbyte_byte_in 
            = (0xffU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                         ? (((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh569282) 
                               ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh569788)) 
                              ^ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh569912) 
                                  ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh568860)) 
                                 ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                                    >> 0x10U))) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh569514) 
                                                   ^ 
                                                   (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                                                    >> 8U))) 
                            ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh570144) 
                               ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0))
                         : (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout0 
                            >> 0x18U)));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__024getbyte_byte_in 
            = (0xffU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                         ? (((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh233951) 
                               ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                                  >> 0x18U)) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh234619) 
                                                ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh234105))) 
                             ^ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh234228) 
                                 ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh234727)) 
                                ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                                   >> 8U))) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh234861) 
                                               ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3))
                         : (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                            >> 0x10U)));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__024getbyte_byte_in 
            = (0xffU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                         ? (((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh233962) 
                               ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh233949)) 
                              ^ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh234107) 
                                  ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh234105)) 
                                 ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                                    >> 0x10U))) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh234239) 
                                                   ^ 
                                                   (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                                                    >> 8U))) 
                            ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh234348) 
                               ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3))
                         : (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                            >> 0x18U)));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__024getbyte_byte_in 
            = (0xffU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                         ? ((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh231512) 
                                ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh231510)) 
                               ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                                  >> 0x18U)) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh232180) 
                                                ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                                                   >> 0x10U))) 
                             ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh231789) 
                                ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                                   >> 8U))) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh232422) 
                                               ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh232924)))
                         : vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__024getbyte_byte_in 
            = (0xffU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                         ? (((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh231523) 
                               ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                                  >> 0x18U)) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh231668) 
                                                ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                                                   >> 0x10U))) 
                             ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh231800) 
                                ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh232288))) 
                            ^ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh231909) 
                                ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh232924)) 
                               ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2))
                         : (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                            >> 8U)));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__024getbyte_byte_in 
            = (0xffU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                         ? (((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh231512) 
                               ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                                  >> 0x18U)) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh232180) 
                                                ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh231666))) 
                             ^ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh231789) 
                                 ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh232288)) 
                                ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                                   >> 8U))) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh232422) 
                                               ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2))
                         : (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                            >> 0x10U)));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__024getbyte_byte_in 
            = (0xffU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                         ? (((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh231523) 
                               ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh231510)) 
                              ^ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh231668) 
                                  ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh231666)) 
                                 ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                                    >> 0x10U))) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh231800) 
                                                   ^ 
                                                   (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                                                    >> 8U))) 
                            ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh231909) 
                               ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2))
                         : (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout2 
                            >> 0x18U)));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__024getbyte_byte_in 
            = (0xffU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                         ? ((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh229073) 
                                ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229071)) 
                               ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                                  >> 0x18U)) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh229741) 
                                                ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                                                   >> 0x10U))) 
                             ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh229350) 
                                ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                                   >> 8U))) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh229983) 
                                               ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh230485)))
                         : vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__024getbyte_byte_in 
            = (0xffU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                         ? (((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh229084) 
                               ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                                  >> 0x18U)) ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh229229) 
                                                ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                                                   >> 0x10U))) 
                             ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh229361) 
                                ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh229849))) 
                            ^ (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh229470) 
                                ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh230485)) 
                               ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1))
                         : (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout1 
                            >> 8U)));
    }
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__024getbyte_byte_in 
        = (0xffU & (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_1) 
                     | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp))
                     ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__col3
                     : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_rot_prev_key__024write_1___05FSEL_1)
                         ? ((0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))
                             ? (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key3 
                                >> 0x10U) : ((1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))
                                              ? (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key5 
                                                 >> 0x10U)
                                              : (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key7 
                                                 >> 0x10U)))
                         : (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey2) 
                             & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2_04_AND_kg_ETC___05F_d189))
                             ? ((1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))
                                 ? (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key5___05Fh8663 
                                    >> 0x18U) : ((2U 
                                                  == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))
                                                  ? 
                                                 (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key7___05Fh8665 
                                                  >> 0x10U)
                                                  : 
                                                 (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key3___05Fh7798 
                                                  >> 0x10U)))
                             : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_2)
                                 ? ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__decrypt)
                                     ? ((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh233951) 
                                            ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh233949)) 
                                           ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                                              >> 0x18U)) 
                                          ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh234619) 
                                             ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                                                >> 0x10U))) 
                                         ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__eight___05Fh234228) 
                                            ^ (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3 
                                               >> 8U))) 
                                        ^ ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh234861) 
                                           ^ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__two___05Fh235363)))
                                     : vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__dr_colout3)
                                 : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_sboxes_0__024getbyte_1___05FSEL_5)
                                     ? ((0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter))
                                         ? (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_rot_prev_key 
                                            >> 0x10U)
                                         : ((1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter))
                                             ? (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_rot_prev_key 
                                                >> 8U)
                                             : ((2U 
                                                 == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter))
                                                 ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_rot_prev_key
                                                 : 
                                                (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__temp_col___05Fh6675 
                                                 >> 0x18U))))
                                     : (((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_aes256subcol) 
                                         & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT___dfoo31))
                                         ? ((4U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter))
                                             ? (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_aes256_subcol4 
                                                >> 0x10U)
                                             : ((5U 
                                                 == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_counter))
                                                 ? 
                                                (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_aes256_subcol4 
                                                 >> 8U)
                                                 : vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_aes256_subcol4))
                                         : 0xaaU)))))));
    if (((((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_round_key_done_1__024write_1___05FSEL_1) 
               | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key2__024put_1___05FSEL_2)) 
              | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key2__024put_1___05FSEL_3)) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_2)) 
            | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp)) 
           | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor)) 
          | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt)) 
         | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start))) {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__024ADDR 
            = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_round_key_done_1__024write_1___05FSEL_1)
                ? 1U : (0xfU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key2__024put_1___05FSEL_2)
                                 ? (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)
                                 : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key2__024put_1___05FSEL_3)
                                     ? ((IData)(1U) 
                                        + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number))
                                     : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_2)
                                         ? (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key0__024put_2___05FVAL_4)
                                         : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp)
                                             ? ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__maxround) 
                                                - (IData)(2U))
                                             : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor)
                                                 ? (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key0__024put_2___05FVAL_6)
                                                 : 
                                                ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt)
                                                  ? 1U
                                                  : 0U))))))));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__024ADDR 
            = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_round_key_done_1__024write_1___05FSEL_1)
                ? 1U : (0xfU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key2__024put_1___05FSEL_2)
                                 ? (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)
                                 : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key2__024put_1___05FSEL_3)
                                     ? ((IData)(1U) 
                                        + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number))
                                     : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_2)
                                         ? (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key0__024put_2___05FVAL_4)
                                         : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp)
                                             ? ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__maxround) 
                                                - (IData)(2U))
                                             : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor)
                                                 ? (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key0__024put_2___05FVAL_6)
                                                 : 
                                                ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt)
                                                  ? 1U
                                                  : 0U))))))));
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__024ADDR = 0xaU;
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__024ADDR = 0xaU;
    }
    if (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start) {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__024DI 
            = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key2;
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__024DI 
            = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key3;
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__024DI 
            = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_round_key_done_1__024write_1___05FSEL_1)
                ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key6
                : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key2__024put_1___05FSEL_2)
                    ? ((0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))
                        ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key2___05Fh7797
                        : ((1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))
                            ? ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192)
                                ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key2___05Fh7797
                                : vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key0___05Fh7795)
                            : vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key2___05Fh7797))
                    : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key2__024put_1___05FSEL_3)
                        ? ((1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))
                            ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT___theResult___05F___05Fh8662
                            : vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key6___05Fh8664)
                        : (((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_2) 
                              | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp)) 
                             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor)) 
                            | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt))
                            ? 0U : 0xaaaaaaaaU))));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__024DI 
            = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_round_key_done_1__024write_1___05FSEL_1)
                ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key7
                : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key2__024put_1___05FSEL_2)
                    ? ((0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))
                        ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key3___05Fh7798
                        : ((1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))
                            ? ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192)
                                ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key3___05Fh7798
                                : vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key1___05Fh7796)
                            : vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key3___05Fh7798))
                    : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key2__024put_1___05FSEL_3)
                        ? ((1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))
                            ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key5___05Fh8663
                            : vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key7___05Fh8665)
                        : (((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_2) 
                              | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp)) 
                             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor)) 
                            | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt))
                            ? 0U : 0xaaaaaaaaU))));
    }
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number__024D_IN 
        = (0xfU & ((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey) 
                     & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2___05F_d104)) 
                    & (0U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)))
                    ? ((IData)(1U) + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number))
                    : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_round_number__024write_1___05FSEL_2)
                        ? ((1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))
                            ? ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192)
                                ? ((IData)(1U) + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number))
                                : ((IData)(2U) + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))
                            : ((IData)(2U) + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)))
                        : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule)
                            ? 1U : 0xaU))));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__024EN 
        = (((((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start2) 
                  & ((1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)) 
                     | (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)))) 
                 | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey) 
                    & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2_04_AND_kg_ETC___05F_d112))) 
                | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_round_number__024write_1___05FSEL_2)) 
               | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_encode) 
                  & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__counter_199_EQ_maxround_19___05F_d1200)))) 
              | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp)) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor)) 
            | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt)) 
           | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start));
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__024EN 
        = (((((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start2) 
                  & ((1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)) 
                     | (2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length)))) 
                 | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_roundKey) 
                    & (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number_1_ULE_kg_maxrounds_2_04_AND_kg_ETC___05F_d112))) 
                | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_round_number__024write_1___05FSEL_2)) 
               | ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_encode) 
                  & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__counter_199_EQ_maxround_19___05F_d1200)))) 
              | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp)) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor)) 
            | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt)) 
           | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start));
    if (((((((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key0__024put_1___05FSEL_1) 
               | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key0__024put_1___05FSEL_2)) 
              | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_round_number__024write_1___05FSEL_2)) 
             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_2)) 
            | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp)) 
           | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor)) 
          | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt)) 
         | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start))) {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__024ADDR 
            = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key0__024put_1___05FSEL_1)
                ? 1U : (0xfU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key0__024put_1___05FSEL_2)
                                 ? (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)
                                 : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_round_number__024write_1___05FSEL_2)
                                     ? ((IData)(1U) 
                                        + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number))
                                     : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_2)
                                         ? (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key0__024put_2___05FVAL_4)
                                         : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp)
                                             ? ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__maxround) 
                                                - (IData)(2U))
                                             : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor)
                                                 ? (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key0__024put_2___05FVAL_6)
                                                 : 
                                                ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt)
                                                  ? 1U
                                                  : 0U))))))));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__024ADDR 
            = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key0__024put_1___05FSEL_1)
                ? 1U : (0xfU & ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key0__024put_1___05FSEL_2)
                                 ? (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number)
                                 : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_round_number__024write_1___05FSEL_2)
                                     ? ((IData)(1U) 
                                        + (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_number))
                                     : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_2)
                                         ? (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key0__024put_2___05FVAL_4)
                                         : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp)
                                             ? ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__maxround) 
                                                - (IData)(2U))
                                             : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor)
                                                 ? (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key0__024put_2___05FVAL_6)
                                                 : 
                                                ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt)
                                                  ? 1U
                                                  : 0U))))))));
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__024ADDR = 0xaU;
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__024ADDR = 0xaU;
    }
    if (vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_kg_round_start) {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__024DI 
            = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key1;
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__024DI 
            = vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key0;
    } else {
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__024DI 
            = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key0__024put_1___05FSEL_1)
                ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key5
                : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key0__024put_1___05FSEL_2)
                    ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key1___05Fh7796
                    : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_round_number__024write_1___05FSEL_2)
                        ? ((1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))
                            ? ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192)
                                ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key5___05Fh8663
                                : vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key3___05Fh7798)
                            : vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key5___05Fh8663)
                        : (((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_2) 
                              | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp)) 
                             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor)) 
                            | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt))
                            ? 0U : 0xaaaaaaaaU))));
        vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__024DI 
            = ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key0__024put_1___05FSEL_1)
                ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_prev_key4
                : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_save_key0__024put_1___05FSEL_2)
                    ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key0___05Fh7795
                    : ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_kg_round_number__024write_1___05FSEL_2)
                        ? ((1U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))
                            ? ((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_round_toggle_192)
                                ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT___theResult___05F___05Fh8662
                                : vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key2___05Fh7797)
                            : ((2U == (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_key_length))
                                ? vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key4___05F_1___05Fh8756
                                : vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__key4___05Fh8661))
                        : (((((IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__MUX_dr_colout0__024write_1___05FSEL_2) 
                              | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_rl_temp)) 
                             | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__WILL_FIRE_RL_initial_xor)) 
                            | (IData)(vlTOPp->mkAES_Wrapper2__DOT__aes___024EN_encrypt))
                            ? 0U : 0xaaaaaaaaU))));
    }
}

VL_INLINE_OPT void VmkAES_Wrapper2::_sequent__TOP__3(VmkAES_Wrapper2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkAES_Wrapper2::_sequent__TOP__3\n"); );
    VmkAES_Wrapper2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh198026 
        = ((((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
             << 0x18U) | (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                           << 0x10U) | (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                         << 8U) | (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte)))) 
           ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__DOT__DO_R);
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh187157 
        = ((((0x80000000U & ((((0x80000000U & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                                ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte)) 
                                               << 0x19U)) 
                               ^ (0x80000000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                                 << 0x18U))) 
                              ^ (0x80000000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                                << 0x18U))) 
                             ^ (0x80000000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                               << 0x18U)))) 
             | ((0x40000000U & ((((0xc0000000U & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                                   ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte)) 
                                                  << 0x19U)) 
                                  ^ (0xc0000000U & 
                                     ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                      << 0x18U))) ^ 
                                 (0xc0000000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                                 << 0x18U))) 
                                ^ (0xc0000000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                  << 0x18U)))) 
                | ((0x20000000U & ((((0xe0000000U & 
                                      (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                        ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte)) 
                                       << 0x19U)) ^ 
                                     (0xe0000000U & 
                                      ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                       << 0x18U))) 
                                    ^ (0xe0000000U 
                                       & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                          << 0x18U))) 
                                   ^ (0xe0000000U & 
                                      ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                       << 0x18U)))) 
                   | ((0x10000000U & (((((((0xf0000000U 
                                            & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                               << 0x19U)) 
                                           ^ (0xf0000000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                                 << 0x15U))) 
                                          ^ (0xf0000000U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                                << 0x19U))) 
                                         ^ (0xf0000000U 
                                            & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                               << 0x18U))) 
                                        ^ (0xf0000000U 
                                           & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                              << 0x15U))) 
                                       ^ (0xf0000000U 
                                          & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                             << 0x18U))) 
                                      ^ (0xf0000000U 
                                         & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                            << 0x18U)))) 
                      | ((0x8000000U & (((((((0xf8000000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                                 << 0x19U)) 
                                             ^ (0xf8000000U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                                   << 0x14U))) 
                                            ^ (0xf8000000U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                                  << 0x19U))) 
                                           ^ (0xf8000000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                                 << 0x18U))) 
                                          ^ (0xf8000000U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                                << 0x14U))) 
                                         ^ (0xf8000000U 
                                            & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                               << 0x18U))) 
                                        ^ (0xf8000000U 
                                           & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                              << 0x18U)))) 
                         | ((0x4000000U & ((((0xfc000000U 
                                              & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                                  ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte)) 
                                                 << 0x19U)) 
                                             ^ (0xfc000000U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                                   << 0x18U))) 
                                            ^ (0xfc000000U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                                  << 0x18U))) 
                                           ^ (0xfc000000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                 << 0x18U)))) 
                            | ((0x2000000U & ((((((
                                                   ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                                    << 0x19U) 
                                                   ^ 
                                                   (0xfe000000U 
                                                    & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                                       << 0x12U))) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                                   << 0x19U)) 
                                                 ^ 
                                                 (0xfe000000U 
                                                  & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                                     << 0x18U))) 
                                                ^ (0xfe000000U 
                                                   & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                                      << 0x12U))) 
                                               ^ (0xfe000000U 
                                                  & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                                     << 0x18U))) 
                                              ^ (0xfe000000U 
                                                 & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                    << 0x18U)))) 
                               | (0x1000000U & ((((0xff000000U 
                                                   & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                                       ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte)) 
                                                      << 0x11U)) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                                   << 0x18U)) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                                  << 0x18U)) 
                                                ^ ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                   << 0x18U)))))))))) 
            | (((0x800000U & ((((0xff800000U & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                                 ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte)) 
                                                << 0x11U)) 
                                ^ (0xff800000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                                  << 0x10U))) 
                               ^ (0xff800000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                 << 0x10U))) 
                              ^ (0xff800000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                                << 0x10U)))) 
                | ((0x400000U & ((((0xffc00000U & (
                                                   ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                                    ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte)) 
                                                   << 0x11U)) 
                                   ^ (0xffc00000U & 
                                      ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                       << 0x10U))) 
                                  ^ (0xffc00000U & 
                                     ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                      << 0x10U))) ^ 
                                 (0xffc00000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                                 << 0x10U)))) 
                   | ((0x200000U & ((((0xffe00000U 
                                       & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                           ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte)) 
                                          << 0x11U)) 
                                      ^ (0xffe00000U 
                                         & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                            << 0x10U))) 
                                     ^ (0xffe00000U 
                                        & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                           << 0x10U))) 
                                    ^ (0xffe00000U 
                                       & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                          << 0x10U)))) 
                      | ((0x100000U & (((((((0xfff00000U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                                << 0x11U)) 
                                            ^ (0xfff00000U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                                  << 0xdU))) 
                                           ^ (0xfff00000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                                 << 0x11U))) 
                                          ^ (0xfff00000U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                                << 0x10U))) 
                                         ^ (0xfff00000U 
                                            & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                               << 0xdU))) 
                                        ^ (0xfff00000U 
                                           & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                              << 0x10U))) 
                                       ^ (0xfff00000U 
                                          & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                             << 0x10U)))) 
                         | ((0x80000U & (((((((0xfff80000U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                                  << 0x11U)) 
                                              ^ (0xfff80000U 
                                                 & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                                    << 0xcU))) 
                                             ^ (0xfff80000U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                                   << 0x11U))) 
                                            ^ (0xfff80000U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                                  << 0x10U))) 
                                           ^ (0xfff80000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                                 << 0xcU))) 
                                          ^ (0xfff80000U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                << 0x10U))) 
                                         ^ (0xfff80000U 
                                            & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                               << 0x10U)))) 
                            | ((0x40000U & ((((0xfffc0000U 
                                               & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                                   ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte)) 
                                                  << 0x11U)) 
                                              ^ (0xfffc0000U 
                                                 & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                                    << 0x10U))) 
                                             ^ (0xfffc0000U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                   << 0x10U))) 
                                            ^ (0xfffc0000U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                                  << 0x10U)))) 
                               | ((0x20000U & (((((
                                                   (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                                     << 0x11U) 
                                                    ^ 
                                                    (0xfffe0000U 
                                                     & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                                        << 0xaU))) 
                                                   ^ 
                                                   ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                                    << 0x11U)) 
                                                  ^ 
                                                  (0xfffe0000U 
                                                   & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                                      << 0x10U))) 
                                                 ^ 
                                                 (0xfffe0000U 
                                                  & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                                     << 0xaU))) 
                                                ^ (0xfffe0000U 
                                                   & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                      << 0x10U))) 
                                               ^ (0xfffe0000U 
                                                  & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                                     << 0x10U)))) 
                                  | (0x10000U & (((
                                                   (0xffff0000U 
                                                    & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                                        ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte)) 
                                                       << 9U)) 
                                                   ^ 
                                                   ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                                    << 0x10U)) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                   << 0x10U)) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                                  << 0x10U)))))))))) 
               | (((0x8000U & ((((0xffff8000U & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                                  ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte)) 
                                                 << 9U)) 
                                 ^ (0xffff8000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                   << 8U))) 
                                ^ (0xffff8000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                                  << 8U))) 
                               ^ (0xffff8000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                                 << 8U)))) 
                   | ((0x4000U & ((((0xffffc000U & 
                                     (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                       ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte)) 
                                      << 9U)) ^ (0xffffc000U 
                                                 & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                    << 8U))) 
                                   ^ (0xffffc000U & 
                                      ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                       << 8U))) ^ (0xffffc000U 
                                                   & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                                      << 8U)))) 
                      | ((0x2000U & ((((0xffffe000U 
                                        & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                            ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte)) 
                                           << 9U)) 
                                       ^ (0xffffe000U 
                                          & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                             << 8U))) 
                                      ^ (0xffffe000U 
                                         & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                            << 8U))) 
                                     ^ (0xffffe000U 
                                        & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                           << 8U)))) 
                         | ((0x1000U & (((((((0xfffff000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                                 << 9U)) 
                                             ^ (0xfffff000U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                                   << 5U))) 
                                            ^ (0xfffff000U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                  << 9U))) 
                                           ^ (0xfffff000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                 << 8U))) 
                                          ^ (0xfffff000U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                << 5U))) 
                                         ^ (0xfffff000U 
                                            & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                               << 8U))) 
                                        ^ (0xfffff000U 
                                           & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                              << 8U)))) 
                            | ((0x800U & (((((((0xfffff800U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                                   << 9U)) 
                                               ^ (0xfffff800U 
                                                  & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                                     << 4U))) 
                                              ^ (0xfffff800U 
                                                 & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                    << 9U))) 
                                             ^ (0xfffff800U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                   << 8U))) 
                                            ^ (0xfffff800U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                  << 4U))) 
                                           ^ (0xfffff800U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                                 << 8U))) 
                                          ^ (0xfffff800U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                                << 8U)))) 
                               | ((0x400U & ((((0xfffffc00U 
                                                & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                                    ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte)) 
                                                   << 9U)) 
                                               ^ (0xfffffc00U 
                                                  & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                     << 8U))) 
                                              ^ (0xfffffc00U 
                                                 & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                                    << 8U))) 
                                             ^ (0xfffffc00U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                                   << 8U)))) 
                                  | ((0x200U & ((((
                                                   ((((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                                      << 9U) 
                                                     ^ 
                                                     (0xfffffe00U 
                                                      & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                                         << 2U))) 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                     << 9U)) 
                                                   ^ 
                                                   (0xfffffe00U 
                                                    & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                       << 8U))) 
                                                  ^ 
                                                  (0xfffffe00U 
                                                   & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                      << 2U))) 
                                                 ^ 
                                                 (0xfffffe00U 
                                                  & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                                     << 8U))) 
                                                ^ (0xfffffe00U 
                                                   & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                                      << 8U)))) 
                                     | (0x100U & ((
                                                   ((0xffffff00U 
                                                     & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                                         ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte)) 
                                                        << 1U)) 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                     << 8U)) 
                                                   ^ 
                                                   ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                                    << 8U)) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                                                   << 8U)))))))))) 
                  | ((0x80U & ((((0xffffff80U & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                  ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte)) 
                                                 << 1U)) 
                                 ^ (0xffffff80U & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte))) 
                                ^ (0xffffff80U & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte))) 
                               ^ (0xffffff80U & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte)))) 
                     | ((0x40U & ((((0xffffffc0U & 
                                     (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                       ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte)) 
                                      << 1U)) ^ (0xffffffc0U 
                                                 & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte))) 
                                   ^ (0xffffffc0U & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte))) 
                                  ^ (0xffffffc0U & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte)))) 
                        | ((0x20U & ((((0xffffffe0U 
                                        & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                            ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte)) 
                                           << 1U)) 
                                       ^ (0xffffffe0U 
                                          & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte))) 
                                      ^ (0xffffffe0U 
                                         & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte))) 
                                     ^ (0xffffffe0U 
                                        & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte)))) 
                           | ((0x10U & (((((((0xfffffff0U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                 << 1U)) 
                                             ^ (0x1ffffff0U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                   >> 3U))) 
                                            ^ (0xfffffff0U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                                  << 1U))) 
                                           ^ (0xfffffff0U 
                                              & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte))) 
                                          ^ (0x1ffffff0U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                                >> 3U))) 
                                         ^ (0xfffffff0U 
                                            & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte))) 
                                        ^ (0xfffffff0U 
                                           & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte)))) 
                              | ((8U & (((((((0xfffffff8U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                 << 1U)) 
                                             ^ (0xffffff8U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                   >> 4U))) 
                                            ^ (0xfffffff8U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                                  << 1U))) 
                                           ^ (0xfffffff8U 
                                              & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte))) 
                                          ^ (0xffffff8U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                                >> 4U))) 
                                         ^ (0xfffffff8U 
                                            & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte))) 
                                        ^ (0xfffffff8U 
                                           & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte)))) 
                                 | ((4U & ((((0xfffffffcU 
                                              & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                  ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte)) 
                                                 << 1U)) 
                                             ^ (0xfffffffcU 
                                                & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte))) 
                                            ^ (0xfffffffcU 
                                               & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte))) 
                                           ^ (0xfffffffcU 
                                              & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte)))) 
                                    | ((2U & ((((((
                                                   ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                    << 1U) 
                                                   ^ 
                                                   (0x3fffffeU 
                                                    & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                       >> 6U))) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                                   << 1U)) 
                                                 ^ 
                                                 (0xfffffffeU 
                                                  & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte))) 
                                                ^ (0x3fffffeU 
                                                   & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
                                                      >> 6U))) 
                                               ^ (0xfffffffeU 
                                                  & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte))) 
                                              ^ (0xfffffffeU 
                                                 & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte)))) 
                                       | (1U & ((((
                                                   ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte) 
                                                    ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte)) 
                                                   >> 7U) 
                                                  ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte)) 
                                                 ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte)) 
                                                ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte))))))))))))) 
           ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__DOT__DO_R);
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh212904 
        = ((((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11.getbyte) 
             << 0x18U) | (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                           << 0x10U) | (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1.getbyte) 
                                         << 8U) | (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte)))) 
           ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key1__DOT__DO_R);
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh192455 
        = ((((0x80000000U & ((((0x80000000U & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                                ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte)) 
                                               << 0x19U)) 
                               ^ (0x80000000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                                 << 0x18U))) 
                              ^ (0x80000000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                                << 0x18U))) 
                             ^ (0x80000000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                               << 0x18U)))) 
             | ((0x40000000U & ((((0xc0000000U & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                                   ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte)) 
                                                  << 0x19U)) 
                                  ^ (0xc0000000U & 
                                     ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                      << 0x18U))) ^ 
                                 (0xc0000000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                                 << 0x18U))) 
                                ^ (0xc0000000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                  << 0x18U)))) 
                | ((0x20000000U & ((((0xe0000000U & 
                                      (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                        ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte)) 
                                       << 0x19U)) ^ 
                                     (0xe0000000U & 
                                      ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                       << 0x18U))) 
                                    ^ (0xe0000000U 
                                       & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                          << 0x18U))) 
                                   ^ (0xe0000000U & 
                                      ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                       << 0x18U)))) 
                   | ((0x10000000U & (((((((0xf0000000U 
                                            & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                               << 0x19U)) 
                                           ^ (0xf0000000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                                 << 0x15U))) 
                                          ^ (0xf0000000U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                                << 0x19U))) 
                                         ^ (0xf0000000U 
                                            & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                               << 0x18U))) 
                                        ^ (0xf0000000U 
                                           & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                              << 0x15U))) 
                                       ^ (0xf0000000U 
                                          & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                             << 0x18U))) 
                                      ^ (0xf0000000U 
                                         & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                            << 0x18U)))) 
                      | ((0x8000000U & (((((((0xf8000000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                                 << 0x19U)) 
                                             ^ (0xf8000000U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                                   << 0x14U))) 
                                            ^ (0xf8000000U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                                  << 0x19U))) 
                                           ^ (0xf8000000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                                 << 0x18U))) 
                                          ^ (0xf8000000U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                                << 0x14U))) 
                                         ^ (0xf8000000U 
                                            & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                               << 0x18U))) 
                                        ^ (0xf8000000U 
                                           & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                              << 0x18U)))) 
                         | ((0x4000000U & ((((0xfc000000U 
                                              & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                                  ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte)) 
                                                 << 0x19U)) 
                                             ^ (0xfc000000U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                                   << 0x18U))) 
                                            ^ (0xfc000000U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                                  << 0x18U))) 
                                           ^ (0xfc000000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                 << 0x18U)))) 
                            | ((0x2000000U & ((((((
                                                   ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                                    << 0x19U) 
                                                   ^ 
                                                   (0xfe000000U 
                                                    & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                                       << 0x12U))) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                                   << 0x19U)) 
                                                 ^ 
                                                 (0xfe000000U 
                                                  & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                                     << 0x18U))) 
                                                ^ (0xfe000000U 
                                                   & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                                      << 0x12U))) 
                                               ^ (0xfe000000U 
                                                  & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                                     << 0x18U))) 
                                              ^ (0xfe000000U 
                                                 & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                    << 0x18U)))) 
                               | (0x1000000U & ((((0xff000000U 
                                                   & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                                       ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte)) 
                                                      << 0x11U)) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                                   << 0x18U)) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                                  << 0x18U)) 
                                                ^ ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                   << 0x18U)))))))))) 
            | (((0x800000U & ((((0xff800000U & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                                 ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte)) 
                                                << 0x11U)) 
                                ^ (0xff800000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                                  << 0x10U))) 
                               ^ (0xff800000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                 << 0x10U))) 
                              ^ (0xff800000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                                << 0x10U)))) 
                | ((0x400000U & ((((0xffc00000U & (
                                                   ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                                    ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte)) 
                                                   << 0x11U)) 
                                   ^ (0xffc00000U & 
                                      ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                       << 0x10U))) 
                                  ^ (0xffc00000U & 
                                     ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                      << 0x10U))) ^ 
                                 (0xffc00000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                                 << 0x10U)))) 
                   | ((0x200000U & ((((0xffe00000U 
                                       & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                           ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte)) 
                                          << 0x11U)) 
                                      ^ (0xffe00000U 
                                         & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                            << 0x10U))) 
                                     ^ (0xffe00000U 
                                        & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                           << 0x10U))) 
                                    ^ (0xffe00000U 
                                       & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                          << 0x10U)))) 
                      | ((0x100000U & (((((((0xfff00000U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                                << 0x11U)) 
                                            ^ (0xfff00000U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                                  << 0xdU))) 
                                           ^ (0xfff00000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                                 << 0x11U))) 
                                          ^ (0xfff00000U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                                << 0x10U))) 
                                         ^ (0xfff00000U 
                                            & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                               << 0xdU))) 
                                        ^ (0xfff00000U 
                                           & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                              << 0x10U))) 
                                       ^ (0xfff00000U 
                                          & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                             << 0x10U)))) 
                         | ((0x80000U & (((((((0xfff80000U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                                  << 0x11U)) 
                                              ^ (0xfff80000U 
                                                 & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                                    << 0xcU))) 
                                             ^ (0xfff80000U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                                   << 0x11U))) 
                                            ^ (0xfff80000U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                                  << 0x10U))) 
                                           ^ (0xfff80000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                                 << 0xcU))) 
                                          ^ (0xfff80000U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                << 0x10U))) 
                                         ^ (0xfff80000U 
                                            & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                               << 0x10U)))) 
                            | ((0x40000U & ((((0xfffc0000U 
                                               & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                                   ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte)) 
                                                  << 0x11U)) 
                                              ^ (0xfffc0000U 
                                                 & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                                    << 0x10U))) 
                                             ^ (0xfffc0000U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                   << 0x10U))) 
                                            ^ (0xfffc0000U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                                  << 0x10U)))) 
                               | ((0x20000U & (((((
                                                   (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                                     << 0x11U) 
                                                    ^ 
                                                    (0xfffe0000U 
                                                     & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                                        << 0xaU))) 
                                                   ^ 
                                                   ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                                    << 0x11U)) 
                                                  ^ 
                                                  (0xfffe0000U 
                                                   & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                                      << 0x10U))) 
                                                 ^ 
                                                 (0xfffe0000U 
                                                  & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                                     << 0xaU))) 
                                                ^ (0xfffe0000U 
                                                   & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                      << 0x10U))) 
                                               ^ (0xfffe0000U 
                                                  & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                                     << 0x10U)))) 
                                  | (0x10000U & (((
                                                   (0xffff0000U 
                                                    & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                                        ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte)) 
                                                       << 9U)) 
                                                   ^ 
                                                   ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                                    << 0x10U)) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                   << 0x10U)) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                                  << 0x10U)))))))))) 
               | (((0x8000U & ((((0xffff8000U & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                                  ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte)) 
                                                 << 9U)) 
                                 ^ (0xffff8000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                   << 8U))) 
                                ^ (0xffff8000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                                  << 8U))) 
                               ^ (0xffff8000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                                 << 8U)))) 
                   | ((0x4000U & ((((0xffffc000U & 
                                     (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                       ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte)) 
                                      << 9U)) ^ (0xffffc000U 
                                                 & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                    << 8U))) 
                                   ^ (0xffffc000U & 
                                      ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                       << 8U))) ^ (0xffffc000U 
                                                   & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                                      << 8U)))) 
                      | ((0x2000U & ((((0xffffe000U 
                                        & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                            ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte)) 
                                           << 9U)) 
                                       ^ (0xffffe000U 
                                          & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                             << 8U))) 
                                      ^ (0xffffe000U 
                                         & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                            << 8U))) 
                                     ^ (0xffffe000U 
                                        & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                           << 8U)))) 
                         | ((0x1000U & (((((((0xfffff000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                                 << 9U)) 
                                             ^ (0xfffff000U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                                   << 5U))) 
                                            ^ (0xfffff000U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                  << 9U))) 
                                           ^ (0xfffff000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                 << 8U))) 
                                          ^ (0xfffff000U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                << 5U))) 
                                         ^ (0xfffff000U 
                                            & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                               << 8U))) 
                                        ^ (0xfffff000U 
                                           & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                              << 8U)))) 
                            | ((0x800U & (((((((0xfffff800U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                                   << 9U)) 
                                               ^ (0xfffff800U 
                                                  & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                                     << 4U))) 
                                              ^ (0xfffff800U 
                                                 & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                    << 9U))) 
                                             ^ (0xfffff800U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                   << 8U))) 
                                            ^ (0xfffff800U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                  << 4U))) 
                                           ^ (0xfffff800U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                                 << 8U))) 
                                          ^ (0xfffff800U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                                << 8U)))) 
                               | ((0x400U & ((((0xfffffc00U 
                                                & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                                    ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte)) 
                                                   << 9U)) 
                                               ^ (0xfffffc00U 
                                                  & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                     << 8U))) 
                                              ^ (0xfffffc00U 
                                                 & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                                    << 8U))) 
                                             ^ (0xfffffc00U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                                   << 8U)))) 
                                  | ((0x200U & ((((
                                                   ((((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                                      << 9U) 
                                                     ^ 
                                                     (0xfffffe00U 
                                                      & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                                         << 2U))) 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                     << 9U)) 
                                                   ^ 
                                                   (0xfffffe00U 
                                                    & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                       << 8U))) 
                                                  ^ 
                                                  (0xfffffe00U 
                                                   & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                      << 2U))) 
                                                 ^ 
                                                 (0xfffffe00U 
                                                  & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                                     << 8U))) 
                                                ^ (0xfffffe00U 
                                                   & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                                      << 8U)))) 
                                     | (0x100U & ((
                                                   ((0xffffff00U 
                                                     & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                                         ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte)) 
                                                        << 1U)) 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                     << 8U)) 
                                                   ^ 
                                                   ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                                    << 8U)) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                                                   << 8U)))))))))) 
                  | ((0x80U & ((((0xffffff80U & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                  ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte)) 
                                                 << 1U)) 
                                 ^ (0xffffff80U & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte))) 
                                ^ (0xffffff80U & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte))) 
                               ^ (0xffffff80U & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte)))) 
                     | ((0x40U & ((((0xffffffc0U & 
                                     (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                       ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte)) 
                                      << 1U)) ^ (0xffffffc0U 
                                                 & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte))) 
                                   ^ (0xffffffc0U & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte))) 
                                  ^ (0xffffffc0U & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte)))) 
                        | ((0x20U & ((((0xffffffe0U 
                                        & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                            ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte)) 
                                           << 1U)) 
                                       ^ (0xffffffe0U 
                                          & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte))) 
                                      ^ (0xffffffe0U 
                                         & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte))) 
                                     ^ (0xffffffe0U 
                                        & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte)))) 
                           | ((0x10U & (((((((0xfffffff0U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                 << 1U)) 
                                             ^ (0x1ffffff0U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                   >> 3U))) 
                                            ^ (0xfffffff0U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                                  << 1U))) 
                                           ^ (0xfffffff0U 
                                              & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte))) 
                                          ^ (0x1ffffff0U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                                >> 3U))) 
                                         ^ (0xfffffff0U 
                                            & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte))) 
                                        ^ (0xfffffff0U 
                                           & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte)))) 
                              | ((8U & (((((((0xfffffff8U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                 << 1U)) 
                                             ^ (0xffffff8U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                   >> 4U))) 
                                            ^ (0xfffffff8U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                                  << 1U))) 
                                           ^ (0xfffffff8U 
                                              & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte))) 
                                          ^ (0xffffff8U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                                >> 4U))) 
                                         ^ (0xfffffff8U 
                                            & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte))) 
                                        ^ (0xfffffff8U 
                                           & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte)))) 
                                 | ((4U & ((((0xfffffffcU 
                                              & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                  ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte)) 
                                                 << 1U)) 
                                             ^ (0xfffffffcU 
                                                & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte))) 
                                            ^ (0xfffffffcU 
                                               & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte))) 
                                           ^ (0xfffffffcU 
                                              & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte)))) 
                                    | ((2U & ((((((
                                                   ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                    << 1U) 
                                                   ^ 
                                                   (0x3fffffeU 
                                                    & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                       >> 6U))) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                                   << 1U)) 
                                                 ^ 
                                                 (0xfffffffeU 
                                                  & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte))) 
                                                ^ (0x3fffffeU 
                                                   & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
                                                      >> 6U))) 
                                               ^ (0xfffffffeU 
                                                  & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte))) 
                                              ^ (0xfffffffeU 
                                                 & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte)))) 
                                       | (1U & ((((
                                                   ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte) 
                                                    ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte)) 
                                                   >> 7U) 
                                                  ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte)) 
                                                 ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte)) 
                                                ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte))))))))))))) 
           ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__DOT__DO_R);
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh212990 
        = ((((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
             << 0x18U) | (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                           << 0x10U) | (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                         << 8U) | (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte)))) 
           ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__DOT__DO_R);
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh594044 
        = ((((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
             << 0x18U) | (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2.getbyte) 
                           << 0x10U) | (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                         << 8U) | (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8.getbyte)))) 
           ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__DOT__DO_R);
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh197744 
        = ((((0x80000000U & ((((0x80000000U & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                                ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte)) 
                                               << 0x19U)) 
                               ^ (0x80000000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                                 << 0x18U))) 
                              ^ (0x80000000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                                << 0x18U))) 
                             ^ (0x80000000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                               << 0x18U)))) 
             | ((0x40000000U & ((((0xc0000000U & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                                   ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte)) 
                                                  << 0x19U)) 
                                  ^ (0xc0000000U & 
                                     ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                      << 0x18U))) ^ 
                                 (0xc0000000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                                 << 0x18U))) 
                                ^ (0xc0000000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                  << 0x18U)))) 
                | ((0x20000000U & ((((0xe0000000U & 
                                      (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                        ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte)) 
                                       << 0x19U)) ^ 
                                     (0xe0000000U & 
                                      ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                       << 0x18U))) 
                                    ^ (0xe0000000U 
                                       & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                          << 0x18U))) 
                                   ^ (0xe0000000U & 
                                      ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                       << 0x18U)))) 
                   | ((0x10000000U & (((((((0xf0000000U 
                                            & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                               << 0x19U)) 
                                           ^ (0xf0000000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                                 << 0x15U))) 
                                          ^ (0xf0000000U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                                << 0x19U))) 
                                         ^ (0xf0000000U 
                                            & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                               << 0x18U))) 
                                        ^ (0xf0000000U 
                                           & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                              << 0x15U))) 
                                       ^ (0xf0000000U 
                                          & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                             << 0x18U))) 
                                      ^ (0xf0000000U 
                                         & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                            << 0x18U)))) 
                      | ((0x8000000U & (((((((0xf8000000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                                 << 0x19U)) 
                                             ^ (0xf8000000U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                                   << 0x14U))) 
                                            ^ (0xf8000000U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                                  << 0x19U))) 
                                           ^ (0xf8000000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                                 << 0x18U))) 
                                          ^ (0xf8000000U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                                << 0x14U))) 
                                         ^ (0xf8000000U 
                                            & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                               << 0x18U))) 
                                        ^ (0xf8000000U 
                                           & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                              << 0x18U)))) 
                         | ((0x4000000U & ((((0xfc000000U 
                                              & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                                  ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte)) 
                                                 << 0x19U)) 
                                             ^ (0xfc000000U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                                   << 0x18U))) 
                                            ^ (0xfc000000U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                                  << 0x18U))) 
                                           ^ (0xfc000000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                 << 0x18U)))) 
                            | ((0x2000000U & ((((((
                                                   ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                                    << 0x19U) 
                                                   ^ 
                                                   (0xfe000000U 
                                                    & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                                       << 0x12U))) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                                   << 0x19U)) 
                                                 ^ 
                                                 (0xfe000000U 
                                                  & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                                     << 0x18U))) 
                                                ^ (0xfe000000U 
                                                   & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                                      << 0x12U))) 
                                               ^ (0xfe000000U 
                                                  & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                                     << 0x18U))) 
                                              ^ (0xfe000000U 
                                                 & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                    << 0x18U)))) 
                               | (0x1000000U & ((((0xff000000U 
                                                   & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                                       ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte)) 
                                                      << 0x11U)) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                                   << 0x18U)) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                                  << 0x18U)) 
                                                ^ ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                   << 0x18U)))))))))) 
            | (((0x800000U & ((((0xff800000U & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                                 ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte)) 
                                                << 0x11U)) 
                                ^ (0xff800000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                                  << 0x10U))) 
                               ^ (0xff800000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                 << 0x10U))) 
                              ^ (0xff800000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                                << 0x10U)))) 
                | ((0x400000U & ((((0xffc00000U & (
                                                   ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                                    ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte)) 
                                                   << 0x11U)) 
                                   ^ (0xffc00000U & 
                                      ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                       << 0x10U))) 
                                  ^ (0xffc00000U & 
                                     ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                      << 0x10U))) ^ 
                                 (0xffc00000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                                 << 0x10U)))) 
                   | ((0x200000U & ((((0xffe00000U 
                                       & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                           ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte)) 
                                          << 0x11U)) 
                                      ^ (0xffe00000U 
                                         & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                            << 0x10U))) 
                                     ^ (0xffe00000U 
                                        & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                           << 0x10U))) 
                                    ^ (0xffe00000U 
                                       & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                          << 0x10U)))) 
                      | ((0x100000U & (((((((0xfff00000U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                                << 0x11U)) 
                                            ^ (0xfff00000U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                                  << 0xdU))) 
                                           ^ (0xfff00000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                                 << 0x11U))) 
                                          ^ (0xfff00000U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                                << 0x10U))) 
                                         ^ (0xfff00000U 
                                            & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                               << 0xdU))) 
                                        ^ (0xfff00000U 
                                           & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                              << 0x10U))) 
                                       ^ (0xfff00000U 
                                          & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                             << 0x10U)))) 
                         | ((0x80000U & (((((((0xfff80000U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                                  << 0x11U)) 
                                              ^ (0xfff80000U 
                                                 & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                                    << 0xcU))) 
                                             ^ (0xfff80000U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                                   << 0x11U))) 
                                            ^ (0xfff80000U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                                  << 0x10U))) 
                                           ^ (0xfff80000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                                 << 0xcU))) 
                                          ^ (0xfff80000U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                << 0x10U))) 
                                         ^ (0xfff80000U 
                                            & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                               << 0x10U)))) 
                            | ((0x40000U & ((((0xfffc0000U 
                                               & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                                   ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte)) 
                                                  << 0x11U)) 
                                              ^ (0xfffc0000U 
                                                 & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                                    << 0x10U))) 
                                             ^ (0xfffc0000U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                   << 0x10U))) 
                                            ^ (0xfffc0000U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                                  << 0x10U)))) 
                               | ((0x20000U & (((((
                                                   (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                                     << 0x11U) 
                                                    ^ 
                                                    (0xfffe0000U 
                                                     & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                                        << 0xaU))) 
                                                   ^ 
                                                   ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                                    << 0x11U)) 
                                                  ^ 
                                                  (0xfffe0000U 
                                                   & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                                      << 0x10U))) 
                                                 ^ 
                                                 (0xfffe0000U 
                                                  & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                                     << 0xaU))) 
                                                ^ (0xfffe0000U 
                                                   & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                      << 0x10U))) 
                                               ^ (0xfffe0000U 
                                                  & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                                     << 0x10U)))) 
                                  | (0x10000U & (((
                                                   (0xffff0000U 
                                                    & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                                        ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte)) 
                                                       << 9U)) 
                                                   ^ 
                                                   ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                                    << 0x10U)) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                   << 0x10U)) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                                  << 0x10U)))))))))) 
               | (((0x8000U & ((((0xffff8000U & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                                  ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte)) 
                                                 << 9U)) 
                                 ^ (0xffff8000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                   << 8U))) 
                                ^ (0xffff8000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                                  << 8U))) 
                               ^ (0xffff8000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                                 << 8U)))) 
                   | ((0x4000U & ((((0xffffc000U & 
                                     (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                       ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte)) 
                                      << 9U)) ^ (0xffffc000U 
                                                 & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                    << 8U))) 
                                   ^ (0xffffc000U & 
                                      ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                       << 8U))) ^ (0xffffc000U 
                                                   & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                                      << 8U)))) 
                      | ((0x2000U & ((((0xffffe000U 
                                        & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                            ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte)) 
                                           << 9U)) 
                                       ^ (0xffffe000U 
                                          & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                             << 8U))) 
                                      ^ (0xffffe000U 
                                         & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                            << 8U))) 
                                     ^ (0xffffe000U 
                                        & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                           << 8U)))) 
                         | ((0x1000U & (((((((0xfffff000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                                 << 9U)) 
                                             ^ (0xfffff000U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                                   << 5U))) 
                                            ^ (0xfffff000U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                  << 9U))) 
                                           ^ (0xfffff000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                 << 8U))) 
                                          ^ (0xfffff000U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                << 5U))) 
                                         ^ (0xfffff000U 
                                            & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                               << 8U))) 
                                        ^ (0xfffff000U 
                                           & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                              << 8U)))) 
                            | ((0x800U & (((((((0xfffff800U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                                   << 9U)) 
                                               ^ (0xfffff800U 
                                                  & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                                     << 4U))) 
                                              ^ (0xfffff800U 
                                                 & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                    << 9U))) 
                                             ^ (0xfffff800U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                   << 8U))) 
                                            ^ (0xfffff800U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                  << 4U))) 
                                           ^ (0xfffff800U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                                 << 8U))) 
                                          ^ (0xfffff800U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                                << 8U)))) 
                               | ((0x400U & ((((0xfffffc00U 
                                                & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                                    ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte)) 
                                                   << 9U)) 
                                               ^ (0xfffffc00U 
                                                  & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                     << 8U))) 
                                              ^ (0xfffffc00U 
                                                 & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                                    << 8U))) 
                                             ^ (0xfffffc00U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                                   << 8U)))) 
                                  | ((0x200U & ((((
                                                   ((((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                                      << 9U) 
                                                     ^ 
                                                     (0xfffffe00U 
                                                      & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                                         << 2U))) 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                     << 9U)) 
                                                   ^ 
                                                   (0xfffffe00U 
                                                    & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                       << 8U))) 
                                                  ^ 
                                                  (0xfffffe00U 
                                                   & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                      << 2U))) 
                                                 ^ 
                                                 (0xfffffe00U 
                                                  & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                                     << 8U))) 
                                                ^ (0xfffffe00U 
                                                   & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                                      << 8U)))) 
                                     | (0x100U & ((
                                                   ((0xffffff00U 
                                                     & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                                         ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte)) 
                                                        << 1U)) 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                     << 8U)) 
                                                   ^ 
                                                   ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                                    << 8U)) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                                                   << 8U)))))))))) 
                  | ((0x80U & ((((0xffffff80U & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                  ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte)) 
                                                 << 1U)) 
                                 ^ (0xffffff80U & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte))) 
                                ^ (0xffffff80U & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte))) 
                               ^ (0xffffff80U & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte)))) 
                     | ((0x40U & ((((0xffffffc0U & 
                                     (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                       ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte)) 
                                      << 1U)) ^ (0xffffffc0U 
                                                 & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte))) 
                                   ^ (0xffffffc0U & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte))) 
                                  ^ (0xffffffc0U & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte)))) 
                        | ((0x20U & ((((0xffffffe0U 
                                        & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                            ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte)) 
                                           << 1U)) 
                                       ^ (0xffffffe0U 
                                          & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte))) 
                                      ^ (0xffffffe0U 
                                         & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte))) 
                                     ^ (0xffffffe0U 
                                        & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte)))) 
                           | ((0x10U & (((((((0xfffffff0U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                 << 1U)) 
                                             ^ (0x1ffffff0U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                   >> 3U))) 
                                            ^ (0xfffffff0U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                                  << 1U))) 
                                           ^ (0xfffffff0U 
                                              & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte))) 
                                          ^ (0x1ffffff0U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                                >> 3U))) 
                                         ^ (0xfffffff0U 
                                            & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte))) 
                                        ^ (0xfffffff0U 
                                           & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte)))) 
                              | ((8U & (((((((0xfffffff8U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                 << 1U)) 
                                             ^ (0xffffff8U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                   >> 4U))) 
                                            ^ (0xfffffff8U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                                  << 1U))) 
                                           ^ (0xfffffff8U 
                                              & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte))) 
                                          ^ (0xffffff8U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                                >> 4U))) 
                                         ^ (0xfffffff8U 
                                            & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte))) 
                                        ^ (0xfffffff8U 
                                           & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte)))) 
                                 | ((4U & ((((0xfffffffcU 
                                              & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                  ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte)) 
                                                 << 1U)) 
                                             ^ (0xfffffffcU 
                                                & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte))) 
                                            ^ (0xfffffffcU 
                                               & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte))) 
                                           ^ (0xfffffffcU 
                                              & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte)))) 
                                    | ((2U & ((((((
                                                   ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                    << 1U) 
                                                   ^ 
                                                   (0x3fffffeU 
                                                    & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                       >> 6U))) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                                   << 1U)) 
                                                 ^ 
                                                 (0xfffffffeU 
                                                  & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte))) 
                                                ^ (0x3fffffeU 
                                                   & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
                                                      >> 6U))) 
                                               ^ (0xfffffffeU 
                                                  & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte))) 
                                              ^ (0xfffffffeU 
                                                 & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte)))) 
                                       | (1U & ((((
                                                   ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte) 
                                                    ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte)) 
                                                   >> 7U) 
                                                  ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte)) 
                                                 ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte)) 
                                                ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte))))))))))))) 
           ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__DOT__DO_R);
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh198151 
        = ((((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
             << 0x18U) | (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6.getbyte) 
                           << 0x10U) | (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                         << 8U) | (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12.getbyte)))) 
           ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__DOT__DO_R);
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh213067 
        = ((((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3.getbyte) 
             << 0x18U) | (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14.getbyte) 
                           << 0x10U) | (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9.getbyte) 
                                         << 8U) | (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4.getbyte)))) 
           ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key3__DOT__DO_R);
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh198093 
        = ((((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7.getbyte) 
             << 0x18U) | (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                           << 0x10U) | (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13.getbyte) 
                                         << 8U) | (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte)))) 
           ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key2__DOT__DO_R);
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh222687 
        = ((((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
             << 0x18U) | (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                           << 0x10U) | (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                         << 8U) | (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte)))) 
           ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__DOT__DO_R);
    vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__x___05Fh577620 
        = ((((0x80000000U & ((((0x80000000U & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                                ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte)) 
                                               << 0x19U)) 
                               ^ (0x80000000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                                 << 0x18U))) 
                              ^ (0x80000000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                                << 0x18U))) 
                             ^ (0x80000000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                               << 0x18U)))) 
             | ((0x40000000U & ((((0xc0000000U & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                                   ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte)) 
                                                  << 0x19U)) 
                                  ^ (0xc0000000U & 
                                     ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                      << 0x18U))) ^ 
                                 (0xc0000000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                                 << 0x18U))) 
                                ^ (0xc0000000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                  << 0x18U)))) 
                | ((0x20000000U & ((((0xe0000000U & 
                                      (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                        ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte)) 
                                       << 0x19U)) ^ 
                                     (0xe0000000U & 
                                      ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                       << 0x18U))) 
                                    ^ (0xe0000000U 
                                       & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                          << 0x18U))) 
                                   ^ (0xe0000000U & 
                                      ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                       << 0x18U)))) 
                   | ((0x10000000U & (((((((0xf0000000U 
                                            & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                               << 0x19U)) 
                                           ^ (0xf0000000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                                 << 0x15U))) 
                                          ^ (0xf0000000U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                                << 0x19U))) 
                                         ^ (0xf0000000U 
                                            & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                               << 0x18U))) 
                                        ^ (0xf0000000U 
                                           & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                              << 0x15U))) 
                                       ^ (0xf0000000U 
                                          & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                             << 0x18U))) 
                                      ^ (0xf0000000U 
                                         & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                            << 0x18U)))) 
                      | ((0x8000000U & (((((((0xf8000000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                                 << 0x19U)) 
                                             ^ (0xf8000000U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                                   << 0x14U))) 
                                            ^ (0xf8000000U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                                  << 0x19U))) 
                                           ^ (0xf8000000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                                 << 0x18U))) 
                                          ^ (0xf8000000U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                                << 0x14U))) 
                                         ^ (0xf8000000U 
                                            & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                               << 0x18U))) 
                                        ^ (0xf8000000U 
                                           & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                              << 0x18U)))) 
                         | ((0x4000000U & ((((0xfc000000U 
                                              & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                                  ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte)) 
                                                 << 0x19U)) 
                                             ^ (0xfc000000U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                                   << 0x18U))) 
                                            ^ (0xfc000000U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                                  << 0x18U))) 
                                           ^ (0xfc000000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                 << 0x18U)))) 
                            | ((0x2000000U & ((((((
                                                   ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                                    << 0x19U) 
                                                   ^ 
                                                   (0xfe000000U 
                                                    & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                                       << 0x12U))) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                                   << 0x19U)) 
                                                 ^ 
                                                 (0xfe000000U 
                                                  & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                                     << 0x18U))) 
                                                ^ (0xfe000000U 
                                                   & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                                      << 0x12U))) 
                                               ^ (0xfe000000U 
                                                  & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                                     << 0x18U))) 
                                              ^ (0xfe000000U 
                                                 & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                    << 0x18U)))) 
                               | (0x1000000U & ((((0xff000000U 
                                                   & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                                       ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte)) 
                                                      << 0x11U)) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                                   << 0x18U)) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                                  << 0x18U)) 
                                                ^ ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                   << 0x18U)))))))))) 
            | (((0x800000U & ((((0xff800000U & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                                 ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte)) 
                                                << 0x11U)) 
                                ^ (0xff800000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                                  << 0x10U))) 
                               ^ (0xff800000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                 << 0x10U))) 
                              ^ (0xff800000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                                << 0x10U)))) 
                | ((0x400000U & ((((0xffc00000U & (
                                                   ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                                    ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte)) 
                                                   << 0x11U)) 
                                   ^ (0xffc00000U & 
                                      ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                       << 0x10U))) 
                                  ^ (0xffc00000U & 
                                     ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                      << 0x10U))) ^ 
                                 (0xffc00000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                                 << 0x10U)))) 
                   | ((0x200000U & ((((0xffe00000U 
                                       & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                           ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte)) 
                                          << 0x11U)) 
                                      ^ (0xffe00000U 
                                         & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                            << 0x10U))) 
                                     ^ (0xffe00000U 
                                        & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                           << 0x10U))) 
                                    ^ (0xffe00000U 
                                       & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                          << 0x10U)))) 
                      | ((0x100000U & (((((((0xfff00000U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                                << 0x11U)) 
                                            ^ (0xfff00000U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                                  << 0xdU))) 
                                           ^ (0xfff00000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                                 << 0x11U))) 
                                          ^ (0xfff00000U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                                << 0x10U))) 
                                         ^ (0xfff00000U 
                                            & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                               << 0xdU))) 
                                        ^ (0xfff00000U 
                                           & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                              << 0x10U))) 
                                       ^ (0xfff00000U 
                                          & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                             << 0x10U)))) 
                         | ((0x80000U & (((((((0xfff80000U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                                  << 0x11U)) 
                                              ^ (0xfff80000U 
                                                 & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                                    << 0xcU))) 
                                             ^ (0xfff80000U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                                   << 0x11U))) 
                                            ^ (0xfff80000U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                                  << 0x10U))) 
                                           ^ (0xfff80000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                                 << 0xcU))) 
                                          ^ (0xfff80000U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                << 0x10U))) 
                                         ^ (0xfff80000U 
                                            & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                               << 0x10U)))) 
                            | ((0x40000U & ((((0xfffc0000U 
                                               & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                                   ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte)) 
                                                  << 0x11U)) 
                                              ^ (0xfffc0000U 
                                                 & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                                    << 0x10U))) 
                                             ^ (0xfffc0000U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                   << 0x10U))) 
                                            ^ (0xfffc0000U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                                  << 0x10U)))) 
                               | ((0x20000U & (((((
                                                   (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                                     << 0x11U) 
                                                    ^ 
                                                    (0xfffe0000U 
                                                     & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                                        << 0xaU))) 
                                                   ^ 
                                                   ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                                    << 0x11U)) 
                                                  ^ 
                                                  (0xfffe0000U 
                                                   & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                                      << 0x10U))) 
                                                 ^ 
                                                 (0xfffe0000U 
                                                  & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                                     << 0xaU))) 
                                                ^ (0xfffe0000U 
                                                   & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                      << 0x10U))) 
                                               ^ (0xfffe0000U 
                                                  & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                                     << 0x10U)))) 
                                  | (0x10000U & (((
                                                   (0xffff0000U 
                                                    & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                                        ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte)) 
                                                       << 9U)) 
                                                   ^ 
                                                   ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                                    << 0x10U)) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                   << 0x10U)) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                                  << 0x10U)))))))))) 
               | (((0x8000U & ((((0xffff8000U & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                                  ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte)) 
                                                 << 9U)) 
                                 ^ (0xffff8000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                   << 8U))) 
                                ^ (0xffff8000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                                  << 8U))) 
                               ^ (0xffff8000U & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                                 << 8U)))) 
                   | ((0x4000U & ((((0xffffc000U & 
                                     (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                       ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte)) 
                                      << 9U)) ^ (0xffffc000U 
                                                 & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                    << 8U))) 
                                   ^ (0xffffc000U & 
                                      ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                       << 8U))) ^ (0xffffc000U 
                                                   & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                                      << 8U)))) 
                      | ((0x2000U & ((((0xffffe000U 
                                        & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                            ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte)) 
                                           << 9U)) 
                                       ^ (0xffffe000U 
                                          & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                             << 8U))) 
                                      ^ (0xffffe000U 
                                         & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                            << 8U))) 
                                     ^ (0xffffe000U 
                                        & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                           << 8U)))) 
                         | ((0x1000U & (((((((0xfffff000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                                 << 9U)) 
                                             ^ (0xfffff000U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                                   << 5U))) 
                                            ^ (0xfffff000U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                  << 9U))) 
                                           ^ (0xfffff000U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                 << 8U))) 
                                          ^ (0xfffff000U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                << 5U))) 
                                         ^ (0xfffff000U 
                                            & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                               << 8U))) 
                                        ^ (0xfffff000U 
                                           & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                              << 8U)))) 
                            | ((0x800U & (((((((0xfffff800U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                                   << 9U)) 
                                               ^ (0xfffff800U 
                                                  & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                                     << 4U))) 
                                              ^ (0xfffff800U 
                                                 & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                    << 9U))) 
                                             ^ (0xfffff800U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                   << 8U))) 
                                            ^ (0xfffff800U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                  << 4U))) 
                                           ^ (0xfffff800U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                                 << 8U))) 
                                          ^ (0xfffff800U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                                << 8U)))) 
                               | ((0x400U & ((((0xfffffc00U 
                                                & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                                    ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte)) 
                                                   << 9U)) 
                                               ^ (0xfffffc00U 
                                                  & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                     << 8U))) 
                                              ^ (0xfffffc00U 
                                                 & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                                    << 8U))) 
                                             ^ (0xfffffc00U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                                   << 8U)))) 
                                  | ((0x200U & ((((
                                                   ((((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                                      << 9U) 
                                                     ^ 
                                                     (0xfffffe00U 
                                                      & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                                         << 2U))) 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                     << 9U)) 
                                                   ^ 
                                                   (0xfffffe00U 
                                                    & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                       << 8U))) 
                                                  ^ 
                                                  (0xfffffe00U 
                                                   & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                      << 2U))) 
                                                 ^ 
                                                 (0xfffffe00U 
                                                  & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                                     << 8U))) 
                                                ^ (0xfffffe00U 
                                                   & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                                      << 8U)))) 
                                     | (0x100U & ((
                                                   ((0xffffff00U 
                                                     & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte) 
                                                         ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte)) 
                                                        << 1U)) 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                     << 8U)) 
                                                   ^ 
                                                   ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                                    << 8U)) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte) 
                                                   << 8U)))))))))) 
                  | ((0x80U & ((((0xffffff80U & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                  ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte)) 
                                                 << 1U)) 
                                 ^ (0xffffff80U & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte))) 
                                ^ (0xffffff80U & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte))) 
                               ^ (0xffffff80U & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte)))) 
                     | ((0x40U & ((((0xffffffc0U & 
                                     (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                       ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte)) 
                                      << 1U)) ^ (0xffffffc0U 
                                                 & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte))) 
                                   ^ (0xffffffc0U & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte))) 
                                  ^ (0xffffffc0U & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte)))) 
                        | ((0x20U & ((((0xffffffe0U 
                                        & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                            ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte)) 
                                           << 1U)) 
                                       ^ (0xffffffe0U 
                                          & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte))) 
                                      ^ (0xffffffe0U 
                                         & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte))) 
                                     ^ (0xffffffe0U 
                                        & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte)))) 
                           | ((0x10U & (((((((0xfffffff0U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                 << 1U)) 
                                             ^ (0x1ffffff0U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                   >> 3U))) 
                                            ^ (0xfffffff0U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                                  << 1U))) 
                                           ^ (0xfffffff0U 
                                              & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte))) 
                                          ^ (0x1ffffff0U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                                >> 3U))) 
                                         ^ (0xfffffff0U 
                                            & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte))) 
                                        ^ (0xfffffff0U 
                                           & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte)))) 
                              | ((8U & (((((((0xfffffff8U 
                                              & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                 << 1U)) 
                                             ^ (0xffffff8U 
                                                & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                   >> 4U))) 
                                            ^ (0xfffffff8U 
                                               & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                                  << 1U))) 
                                           ^ (0xfffffff8U 
                                              & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte))) 
                                          ^ (0xffffff8U 
                                             & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                                >> 4U))) 
                                         ^ (0xfffffff8U 
                                            & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte))) 
                                        ^ (0xfffffff8U 
                                           & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte)))) 
                                 | ((4U & ((((0xfffffffcU 
                                              & (((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                  ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte)) 
                                                 << 1U)) 
                                             ^ (0xfffffffcU 
                                                & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte))) 
                                            ^ (0xfffffffcU 
                                               & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte))) 
                                           ^ (0xfffffffcU 
                                              & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte)))) 
                                    | ((2U & ((((((
                                                   ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                    << 1U) 
                                                   ^ 
                                                   (0x3fffffeU 
                                                    & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                       >> 6U))) 
                                                  ^ 
                                                  ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                                   << 1U)) 
                                                 ^ 
                                                 (0xfffffffeU 
                                                  & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte))) 
                                                ^ (0x3fffffeU 
                                                   & ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte) 
                                                      >> 6U))) 
                                               ^ (0xfffffffeU 
                                                  & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte))) 
                                              ^ (0xfffffffeU 
                                                 & (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte)))) 
                                       | (1U & ((((
                                                   ((IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0.getbyte) 
                                                    ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte)) 
                                                   >> 7U) 
                                                  ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15.getbyte)) 
                                                 ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10.getbyte)) 
                                                ^ (IData)(vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5.getbyte))))))))))))) 
           ^ vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__kg_save_key0__DOT__DO_R);
}

VL_INLINE_OPT void VmkAES_Wrapper2::_sequent__TOP__4(VmkAES_Wrapper2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkAES_Wrapper2::_sequent__TOP__4\n"); );
    VmkAES_Wrapper2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_idle_rule)) {
            VL_WRITEF("Idle\n");
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process1_start) 
             & (IData)(vlTOPp->mkAES_Wrapper2__DOT__switcher))) {
            vlTOPp->mkAES_Wrapper2__DOT__v___05Fh864 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process1_start) 
                         & (IData)(vlTOPp->mkAES_Wrapper2__DOT__switcher)))) {
            VL_WRITEF("%20# Random input %11d: %x \n",
                      64,vlTOPp->mkAES_Wrapper2__DOT__v___05Fh864,
                      32,((IData)(1U) + vlTOPp->mkAES_Wrapper2__DOT__counter),
                      128,vlTOPp->mkAES_Wrapper2__DOT__input_text);
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process1_start) 
             & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__switcher)))) {
            vlTOPp->mkAES_Wrapper2__DOT__v___05Fh960 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process1_start) 
                         & (~ (IData)(vlTOPp->mkAES_Wrapper2__DOT__switcher))))) {
            VL_WRITEF("%20# Fixed input %11d: da39a3ee5e6b4b0d3255bfef95601890\n",
                      64,vlTOPp->mkAES_Wrapper2__DOT__v___05Fh960,
                      32,((IData)(1U) + vlTOPp->mkAES_Wrapper2__DOT__counter));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process1_complete) {
            vlTOPp->mkAES_Wrapper2__DOT__v___05Fh1092 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(vlTOPp->mkAES_Wrapper2__DOT__WILL_FIRE_RL_process1_complete)) {
            VL_WRITEF("%20# Output of encryption: %x\n",
                      64,vlTOPp->mkAES_Wrapper2__DOT__v___05Fh1092,
                      128,vlTOPp->mkAES_Wrapper2__DOT__aes___DOT__ciphertext);
        }
    }
}

void VmkAES_Wrapper2::_eval(VmkAES_Wrapper2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkAES_Wrapper2::_eval\n"); );
    VmkAES_Wrapper2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1._sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_1__1(vlSymsp);
        vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10._sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_10__2(vlSymsp);
        vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11._sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_11__3(vlSymsp);
        vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12._sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_12__4(vlSymsp);
        vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13._sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_13__5(vlSymsp);
        vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14._sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_14__6(vlSymsp);
        vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15._sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_15__7(vlSymsp);
        vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2._sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_2__8(vlSymsp);
        vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3._sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_3__9(vlSymsp);
        vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4._sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_4__10(vlSymsp);
        vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5._sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_5__11(vlSymsp);
        vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6._sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_6__12(vlSymsp);
        vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7._sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_7__13(vlSymsp);
        vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8._sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_8__14(vlSymsp);
        vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9._sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_9__15(vlSymsp);
        vlSymsp->TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0._sequent__TOP__mkAES_Wrapper2__DOT__aes___DOT__sboxes_0__16(vlSymsp);
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if (((~ (IData)(vlTOPp->CLK)) & (IData)(vlTOPp->__Vclklast__TOP__CLK))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
}

VL_INLINE_OPT QData VmkAES_Wrapper2::_change_request(VmkAES_Wrapper2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkAES_Wrapper2::_change_request\n"); );
    VmkAES_Wrapper2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VmkAES_Wrapper2::_change_request_1(VmkAES_Wrapper2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkAES_Wrapper2::_change_request_1\n"); );
    VmkAES_Wrapper2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VmkAES_Wrapper2::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkAES_Wrapper2::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((RST_N & 0xfeU))) {
        Verilated::overWidthError("RST_N");}
}
#endif  // VL_DEBUG
