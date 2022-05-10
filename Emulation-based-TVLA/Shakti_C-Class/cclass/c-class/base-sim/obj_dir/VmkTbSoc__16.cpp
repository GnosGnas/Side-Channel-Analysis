// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTbSoc.h for the primary calling header

#include "VmkTbSoc.h"
#include "VmkTbSoc__Syms.h"

VL_INLINE_OPT void VmkTbSoc::_sequent__TOP__25(VmkTbSoc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_sequent__TOP__25\n"); );
    VmkTbSoc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__mkTbSoc__DOT__soc__DOT__sync_response_from_dm__DOT__sEnqToggle 
        = vlTOPp->mkTbSoc__DOT__soc__DOT__sync_response_from_dm__DOT__sEnqToggle;
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__rg_initial) {
            vlTOPp->mkTbSoc__DOT__tck_clk__DOT__current_clk 
                = (1U & ((IData)(vlTOPp->mkTbSoc__DOT__delayed_actor2) 
                         >> 2U));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__tck_clk__DOT__current_clk = 1U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_fbfillenable 
                = ((0xfffcU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT___theResult___05F___05F_2___05Fh31006) 
                               << 2U)) | (3U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT___theResult___05F___05F_2___05Fh31006) 
                                                >> 0xeU)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_fbfillenable = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbfillenable 
                = ((0xfeU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___theResult___05F___05F_6___05Fh314134) 
                             << 1U)) | (1U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___theResult___05F___05F_6___05Fh314134) 
                                              >> 7U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbfillenable = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_store_valid_1_1_write_1___05FSEL_2) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__store_fbindex_1 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh296902;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__store_fbindex_1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_store_valid_0_1_write_1___05FSEL_2) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__store_fbindex_0 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh296902;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__store_fbindex_0 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_store_valid_1_1_write_1___05FSEL_2) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__store_data_1 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__x___05Fh296924;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__store_data_1 = 0ULL;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_store_valid_0_1_write_1___05FSEL_2) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__store_data_0 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__x___05Fh296924;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__store_data_0 = 0ULL;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_store_valid_1_1_write_1___05FSEL_2) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__store_io_1 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_ff_from_tlb_rv_port1___05Fwrite_1___05FSEL_1) 
                   | (0U == ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_nc_read_response_rv_port1___05Fread[2U])
                              ? 0U : 2U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__store_io_1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_store_valid_0_1_write_1___05FSEL_2) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__store_io_0 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_ff_from_tlb_rv_port1___05Fwrite_1___05FSEL_1) 
                   | (0U == ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_nc_read_response_rv_port1___05Fread[2U])
                              ? 0U : 2U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__store_io_0 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_fb_enables_0_write_1___05FSEL_1) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[0U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[0U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[1U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[1U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[2U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[2U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[3U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[3U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[4U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[4U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[5U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[5U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[6U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[6U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[7U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[7U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[8U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[8U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[9U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[9U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[0xaU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[0xaU];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[0xbU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[0xbU];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[0xcU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[0xcU];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[0xdU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[0xdU];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[0xeU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[0xeU];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[0xfU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[0xfU];
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[0U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[1U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[2U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[3U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[4U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[5U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[6U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[7U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[8U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[9U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[0xaU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[0xbU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[0xcU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[0xdU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[0xeU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0[0xfU] = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_fb_enables_3_write_1___05FSEL_1) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[0U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[0U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[1U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[1U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[2U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[2U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[3U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[3U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[4U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[4U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[5U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[5U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[6U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[6U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[7U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[7U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[8U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[8U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[9U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[9U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[0xaU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[0xaU];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[0xbU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[0xbU];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[0xcU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[0xcU];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[0xdU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[0xdU];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[0xeU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[0xeU];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[0xfU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[0xfU];
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[0U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[1U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[2U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[3U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[4U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[5U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[6U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[7U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[8U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[9U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[0xaU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[0xbU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[0xcU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[0xdU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[0xeU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_3[0xfU] = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_fb_enables_1_write_1___05FSEL_1) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[0U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[0U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[1U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[1U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[2U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[2U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[3U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[3U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[4U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[4U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[5U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[5U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[6U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[6U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[7U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[7U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[8U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[8U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[9U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[9U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[0xaU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[0xaU];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[0xbU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[0xbU];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[0xcU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[0xcU];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[0xdU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[0xdU];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[0xeU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[0xeU];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[0xfU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[0xfU];
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[0U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[1U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[2U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[3U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[4U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[5U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[6U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[7U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[8U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[9U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[0xaU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[0xbU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[0xcU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[0xdU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[0xeU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_1[0xfU] = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_fb_enables_2_write_1___05FSEL_1) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[0U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[0U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[1U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[1U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[2U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[2U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[3U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[3U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[4U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[4U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[5U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[5U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[6U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[6U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[7U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[7U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[8U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[8U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[9U] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[9U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[0xaU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[0xaU];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[0xbU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[0xbU];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[0xcU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[0xcU];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[0xdU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[0xdU];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[0xeU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[0xeU];
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[0xfU] 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_0_D_IN[0xfU];
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[0U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[1U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[2U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[3U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[4U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[5U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[6U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[7U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[8U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[9U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[0xaU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[0xbU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[0xcU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[0xdU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[0xeU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_dataline_2[0xfU] = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_fb_enables_2_write_1___05FSEL_1) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_err_2 
                = (1U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_read_mem_response_rv_port1___05Fread[0U]);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_err_2 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_fb_enables_1_write_1___05FSEL_1) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_err_1 
                = (1U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_read_mem_response_rv_port1___05Fread[0U]);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_err_1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_fb_enables_0_write_1___05FSEL_1) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_err_0 
                = (1U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_read_mem_response_rv_port1___05Fread[0U]);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_err_0 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_fb_enables_3_write_1___05FSEL_1) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_err_3 
                = (1U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_read_mem_response_rv_port1___05Fread[0U]);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_err_3 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fence_pending_EN) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fence_pending 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_ff_write_mem_request_enq_1___05FSEL_1;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fence_pending = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((((IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_transmit_wait_for_start_command) 
                   | (IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_transmit_send_start_bit)) 
                  | (IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_transmit_wait_1_bit_cell_time)) 
                 | (IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_transmit_send_parity_bit)) 
                | (IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_transmit_send_stop_bit)) 
               | (IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_transmit_send_stop_bit1_5)) 
              | (IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_transmit_send_stop_bit2)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_transmit_shift_next_bit))) {
            vlTOPp->mkTbSoc__DOT__uart_uart_rXmitState 
                = (((((((((IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_transmit_wait_for_start_command) 
                          | (IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_transmit_send_start_bit)) 
                         | (IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_transmit_wait_1_bit_cell_time)) 
                        | (IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_transmit_send_parity_bit)) 
                       | (IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_transmit_send_stop_bit)) 
                      | (IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_transmit_send_stop_bit1_5)) 
                     | (IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_transmit_send_stop_bit2)) 
                    | (IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_transmit_shift_next_bit))
                    ? ((IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_transmit_wait_for_start_command)
                        ? ((IData)(vlTOPp->mkTbSoc__DOT__uart_uart_fifoXmit__DOT__hasodata)
                            ? 1U : 0U) : ((IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_transmit_send_start_bit)
                                           ? ((0xfU 
                                               == (IData)(vlTOPp->mkTbSoc__DOT__uart_uart_rXmitCellCount))
                                               ? 2U
                                               : 1U)
                                           : ((IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_transmit_wait_1_bit_cell_time)
                                               ? ((0xfU 
                                                   == (IData)(vlTOPp->mkTbSoc__DOT__uart_uart_rXmitCellCount))
                                                   ? 
                                                  ((7U 
                                                    == (IData)(vlTOPp->mkTbSoc__DOT__uart_uart_rXmitBitCount))
                                                    ? 4U
                                                    : 3U)
                                                   : 2U)
                                               : ((IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_transmit_send_parity_bit)
                                                   ? 
                                                  ((0xfU 
                                                    == (IData)(vlTOPp->mkTbSoc__DOT__uart_uart_rXmitCellCount))
                                                    ? 4U
                                                    : 7U)
                                                   : 
                                                  ((IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_transmit_send_stop_bit)
                                                    ? 
                                                   ((0xfU 
                                                     == (IData)(vlTOPp->mkTbSoc__DOT__uart_uart_rXmitCellCount))
                                                     ? 0U
                                                     : 4U)
                                                    : 
                                                   ((IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_transmit_send_stop_bit1_5)
                                                     ? 
                                                    ((7U 
                                                      == (IData)(vlTOPp->mkTbSoc__DOT__uart_uart_rXmitCellCount))
                                                      ? 0U
                                                      : 5U)
                                                     : 
                                                    ((IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_transmit_send_stop_bit2)
                                                      ? 
                                                     ((0xfU 
                                                       == (IData)(vlTOPp->mkTbSoc__DOT__uart_uart_rXmitCellCount))
                                                       ? 0U
                                                       : 6U)
                                                      : 2U)))))))
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__uart_uart_rXmitState = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_miss_ongoing_write_1___05FSEL_1) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_miss_ongoing 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_miss_ongoing_write_1___05FSEL_1;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_miss_ongoing = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache_EN_core_req_put))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fence_stall 
                = (1U & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)) 
                         & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache_core_req_put[2U] 
                            >> 0xcU)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fence_stall = 0U;
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dm_reset__DOT__rst 
        = (1U & ((~ (IData)(vlTOPp->RST_N)) | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dmActive)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage0__DOT__bpu__DOT__ras_stack_top_index 
        = ((IData)(vlTOPp->RST_N) ? (7U & (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage0__DOT__bpu_EN_mav_prediction_response) 
                                              & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                                                 >> 2U)) 
                                             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage0__DOT__bpu__DOT__NOT_v_reg_btb_tag_31_7_BITS_62_TO_1_8_EQ_mav_p_ETC___05F_d7060)) 
                                            | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage0__DOT__bpu__DOT__rg_initialize))
                                            ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage0__DOT__bpu__DOT__MUX_ras_stack_top_index_port1___05Fwrite_1___05FSEL_1)
                                                ? ((IData)(1U) 
                                                   + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage0__DOT__bpu__DOT__i___05Fh411249))
                                                : 0U)
                                            : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage0__DOT__bpu__DOT__i___05Fh411249)))
            : 0U);
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x2aU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_42 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x2aU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_42 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x29U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_41 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x29U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_41 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x28U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_40 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x28U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_40 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (4U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                  >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_4 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (4U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                        >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_4 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x27U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_39 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x27U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_39 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x26U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_38 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x26U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_38 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x25U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_37 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x25U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_37 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x24U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_36 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x24U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_36 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x23U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_35 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x23U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_35 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x22U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_34 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x22U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_34 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x21U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_33 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x21U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_33 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x20U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_32 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x20U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_32 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x1fU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_31 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x1fU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_31 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x1eU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_30 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x1eU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_30 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (3U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                  >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_3 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (3U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                        >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_3 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x1dU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_29 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x1dU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_29 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x1cU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_28 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x1cU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_28 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x1bU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_27 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x1bU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_27 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x39U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_57 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x39U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_57 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x1aU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_26 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x1aU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_26 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x38U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_56 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x38U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_56 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x19U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_25 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x19U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_25 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x37U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_55 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x37U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_55 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x18U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_24 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x18U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_24 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x36U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_54 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x36U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_54 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x17U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_23 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x17U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_23 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x35U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_53 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x35U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_53 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x16U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_22 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x16U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_22 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x3dU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_61 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x3dU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_61 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x2eU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_46 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x2eU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_46 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0xfU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                    >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_15 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0xfU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                          >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_15 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (6U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                  >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_6 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (6U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                        >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_6 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x34U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_52 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x34U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_52 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x15U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_21 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x15U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_21 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x2dU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_45 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x2dU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_45 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0xeU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                    >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_14 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0xeU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                          >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_14 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x2bU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_43 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x2bU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_43 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0xcU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                    >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_12 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0xcU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                          >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_12 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x3cU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_60 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x3cU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_60 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x3bU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_59 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x3bU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_59 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x33U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_51 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x33U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_51 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x14U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_20 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x14U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_20 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x2fU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_47 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x2fU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_47 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x10U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_16 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x10U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_16 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x3aU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_58 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x3aU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_58 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x32U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_50 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x32U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_50 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (2U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                  >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_2 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (2U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                        >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_2 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x2cU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_44 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x2cU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_44 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0xdU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                    >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_13 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0xdU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                          >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_13 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x30U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_48 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x30U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_48 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x11U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_17 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x11U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_17 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x3eU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_62 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x3eU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_62 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x31U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_49 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x31U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_49 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x12U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_18 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x12U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_18 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x3fU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_63 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x3fU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_63 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (5U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                  >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_5 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (5U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                        >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_5 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0x13U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                     >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_19 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0x13U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                           >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_19 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (7U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                  >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_7 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (7U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                        >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_7 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (8U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                  >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_8 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (8U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                        >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_8 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (9U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                  >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_9 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (9U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                        >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_9 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                  >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_0 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                        >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_0 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (1U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                  >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_1 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (1U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                        >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0xaU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                    >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_10 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0xaU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                          >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_10 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
               & (0xbU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                    >> 6U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_fence_operation))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_11 
                = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__WILL_FIRE_RL_release_from_FB) 
                     & (0xbU == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_fb_addr_0_16_fb_addr_1_10_fb_addr_2_04_ETC___05F_d1090 
                                          >> 6U)))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_NOT_fb_err_0_75_112_NOT_fb_err_1_74_11_ETC___05F_d1117))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_rg_valid_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_11 = 0U;
    }
    if (vlTOPp->RST_N) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage4__DOT__ff_memory_response_rv[0U] 
            = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage4__DOT__CAN_FIRE_RL_check_instruction) 
                 & (0U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe3type__DOT__data0_reg[2U] 
                                 >> 0x11U)))) & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[2U] 
                                                 >> 8U))
                ? 0U : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage4__DOT__ff_memory_response_rv[1U] 
            = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage4__DOT__CAN_FIRE_RL_check_instruction) 
                 & (0U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe3type__DOT__data0_reg[2U] 
                                 >> 0x11U)))) & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[2U] 
                                                 >> 8U))
                ? 0U : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[1U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage4__DOT__ff_memory_response_rv[2U] 
            = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage4__DOT__CAN_FIRE_RL_check_instruction) 
                 & (0U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe3type__DOT__data0_reg[2U] 
                                 >> 0x11U)))) & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[2U] 
                                                 >> 8U))
                ? 0U : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[2U]);
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage4__DOT__ff_memory_response_rv[0U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage4__DOT__ff_memory_response_rv[1U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage4__DOT__ff_memory_response_rv[2U] = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_fb_enables_2_write_1___05FSEL_2) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_addr_2 
                = (0xfffffff8U & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_from_tlb_rv_port1___05Fread 
                                           >> 0xaU)) 
                                  << 3U));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_addr_2 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_fb_enables_1_write_1___05FSEL_2) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_addr_1 
                = (0xfffffff8U & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_from_tlb_rv_port1___05Fread 
                                           >> 0xaU)) 
                                  << 3U));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_addr_1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_fb_enables_0_write_1___05FSEL_2) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_addr_0 
                = (0xfffffff8U & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_from_tlb_rv_port1___05Fread 
                                           >> 0xaU)) 
                                  << 3U));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_addr_0 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_store_valid_1_1_write_1___05FSEL_2) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__store_epoch_1 
                = (1U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                         >> 0xbU));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__store_epoch_1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_store_valid_0_1_write_1___05FSEL_2) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__store_epoch_0 
                = (1U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                         >> 0xbU));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__store_epoch_0 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x18U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2796)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_24 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_24_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_24_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_24 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x17U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2794)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_23 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_23_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_23_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_23 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x16U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2792)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_22 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_22_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_22_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_22 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x15U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2790)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_21 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_21_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_21_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_21 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x14U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2788)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_20 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_20_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_20_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_20 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (2U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                       << 0xdU) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                   >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2752)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_2 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_2_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_2_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_2 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x13U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2786)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_19 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_19_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_19_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_19 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x12U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2784)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_18 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_18_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_18_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_18 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x11U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2782)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_17 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_17_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_17_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_17 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x10U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2780)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_16 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_16_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_16_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_16 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0xfU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                         << 0xdU) | 
                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                         >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2778)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_15 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_15_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_15_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_15 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0xeU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                         << 0xdU) | 
                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                         >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2776)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_14 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_14_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_14_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_14 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0xdU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                         << 0xdU) | 
                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                         >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2774)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_13 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_13_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_13_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_13 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0xcU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                         << 0xdU) | 
                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                         >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2772)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_12 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_12_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_12_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_12 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0xbU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                         << 0xdU) | 
                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                         >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2770)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_11 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_11_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_11_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_11 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0xaU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                         << 0xdU) | 
                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                         >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2768)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_10 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_10_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_10_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_10 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (1U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                       << 0xdU) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                   >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2750)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_1 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_1_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_1_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                       << 0xdU) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                   >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2746)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_0 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_0 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x27U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2826)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_39 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_39_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_39_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_39 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x26U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2824)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_38 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_38_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_38_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_38 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x25U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2822)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_37 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_37_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_37_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_37 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x24U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2820)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_36 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_36_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_36_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_36 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x23U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2818)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_35 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_35_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_35_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_35 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x2bU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2834)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_43 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_43_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_43_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_43 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x1cU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2804)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_28 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_28_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_28_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_28 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x29U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2830)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_41 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_41_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_41_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_41 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x22U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2816)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_34 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_34_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_34_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_34 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x1bU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2802)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_27 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_27_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_27_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_27 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x19U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2798)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_25 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_25_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_25_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_25 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x2aU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2832)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_42 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_42_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_42_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_42 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x36U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2856)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_54 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_54_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_54_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_54 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x28U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2828)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_40 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_40_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_40_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_40 = 0U;
    }
}

VL_INLINE_OPT void VmkTbSoc::_sequent__TOP__26(VmkTbSoc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_sequent__TOP__26\n"); );
    VmkTbSoc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x21U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2814)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_33 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_33_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_33_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_33 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x1dU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2806)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_29 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_29_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_29_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_29 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (4U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                       << 0xdU) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                   >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2756)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_4 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_4_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_4_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_4 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x20U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2812)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_32 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_32_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_32_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_32 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x1aU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2800)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_26 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_26_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_26_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_26 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (3U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                       << 0xdU) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                   >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2754)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_3 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_3_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_3_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_3 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x2cU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2836)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_44 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_44_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_44_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_44 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x1eU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2808)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_30 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_30_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_30_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_30 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x2dU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2838)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_45 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_45_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_45_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_45 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x1fU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2810)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_31 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_31_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_31_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_31 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x2eU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2840)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_46 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_46_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_46_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_46 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x2fU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2842)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_47 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_47_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_47_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_47 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x30U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2844)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_48 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_48_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_48_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_48 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x31U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2846)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_49 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_49_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_49_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_49 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (5U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                       << 0xdU) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                   >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2758)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_5 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_5_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_5_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_5 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x32U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2848)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_50 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_50_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_50_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_50 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x33U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2850)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_51 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_51_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_51_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_51 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x34U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2852)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_52 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_52_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_52_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_52 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x35U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2854)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_53 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_53_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_53_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_53 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x37U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2858)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_55 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_55_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_55_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_55 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x38U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2860)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_56 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_56_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_56_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_56 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x39U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2862)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_57 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_57_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_57_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_57 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x3aU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2864)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_58 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_58_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_58_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_58 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x3bU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2866)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_59 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_59_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_59_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_59 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (6U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                       << 0xdU) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                   >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2760)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_6 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_6_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_6_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_6 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x3cU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2868)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_60 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_60_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_60_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_60 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x3dU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2870)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_61 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_61_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_61_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_61 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x3eU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2872)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_62 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_62_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_62_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_62 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x3fU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2874)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_63 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_63_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_63_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_63 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (7U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                       << 0xdU) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                   >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2762)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_7 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_7_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_7_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_7 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (8U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                       << 0xdU) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                   >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2764)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_8 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_8_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_8_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_8 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (9U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                       << 0xdU) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                   >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2766)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_9 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_9_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_9_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_dirty_9 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_store_valid_0_1_write_1___05FSEL_2) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__store_size_0 
                = (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                          << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                       >> 6U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__store_size_0 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_store_valid_1_1_write_1___05FSEL_2) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__store_size_1 
                = (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                          << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                       >> 6U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__store_size_1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (9U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                       << 0xdU) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                   >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2766)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_9 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_9_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_9_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_9 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (8U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                       << 0xdU) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                   >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2764)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_8 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_8_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_8_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_8 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (7U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                       << 0xdU) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                   >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2762)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_7 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_7_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_7_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_7 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x3fU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2874)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_63 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_63_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_63_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_63 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x3eU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2872)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_62 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_62_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_62_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_62 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x3dU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2870)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_61 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_61_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_61_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_61 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x1fU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2810)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_31 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_31_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_31_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_31 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x1eU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2808)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_30 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_30_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_30_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_30 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (3U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                       << 0xdU) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                   >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2754)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_3 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_3_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_3_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_3 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x1dU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2806)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_29 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_29_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_29_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_29 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x1cU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2804)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_28 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_28_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_28_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_28 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x24U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2820)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_36 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_36_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_36_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_36 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x14U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2788)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_20 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_20_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_20_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_20 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x22U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2816)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_34 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_34_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_34_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_34 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x1bU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2802)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_27 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_27_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_27_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_27 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (2U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                       << 0xdU) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                   >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2752)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_2 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_2_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_2_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_2 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x12U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2784)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_18 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_18_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_18_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_18 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x23U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2818)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_35 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_35_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_35_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_35 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x2fU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2842)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_47 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_47_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_47_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_47 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x21U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2814)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_33 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_33_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_33_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_33 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x1aU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2800)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_26 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_26_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_26_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_26 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x15U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2790)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_21 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_21_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_21_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_21 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x20U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2812)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_32 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_32_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_32_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_32 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x19U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2798)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_25 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_25_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_25_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_25 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x13U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2786)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_19 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_19_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_19_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_19 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x16U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2792)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_22 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_22_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_22_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_22 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x25U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2822)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_37 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_37_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_37_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_37 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x17U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2794)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_23 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_23_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_23_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_23 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x26U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2824)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_38 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_38_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_38_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_38 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x18U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2796)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_24 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_24_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_24_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_24 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x27U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2826)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_39 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_39_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_39_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_39 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (4U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                       << 0xdU) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                   >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2756)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_4 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_4_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_4_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_4 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x28U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2828)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_40 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_40_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_40_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_40 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x29U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2830)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_41 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_41_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_41_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_41 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x2aU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2832)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_42 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_42_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_42_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_42 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x2bU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2834)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_43 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_43_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_43_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_43 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x2cU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2836)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_44 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_44_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_44_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_44 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x2dU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2838)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_45 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_45_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_45_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_45 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x2eU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2840)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_46 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_46_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_46_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_46 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x30U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2844)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_48 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_48_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_48_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_48 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x31U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2846)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_49 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_49_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_49_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_49 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (5U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                       << 0xdU) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                   >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2758)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_5 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_5_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_5_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_5 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x32U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2848)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_50 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_50_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_50_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_50 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x33U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2850)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_51 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_51_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_51_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_51 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x34U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2852)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_52 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_52_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_52_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_52 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x35U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2854)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_53 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_53_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_53_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_53 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x36U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2856)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_54 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_54_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_54_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_54 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x37U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2858)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_55 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_55_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_55_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_55 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x38U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2860)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_56 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_56_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_56_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_56 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x39U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2862)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_57 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_57_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_57_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_57 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x3aU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2864)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_58 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_58_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_58_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_58 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x3bU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2866)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_59 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_59_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_59_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_59 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (6U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                       << 0xdU) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                   >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2760)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_6 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_6_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_6_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_6 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x3cU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2868)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_60 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_60_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_60_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_60 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                       << 0xdU) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                   >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2746)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_0 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_0_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_0 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (1U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                       << 0xdU) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                   >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2750)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_1 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_1_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_1_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0xaU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                         << 0xdU) | 
                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                         >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2768)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_10 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_10_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_10_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_10 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0xbU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                         << 0xdU) | 
                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                         >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2770)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_11 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_11_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_11_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_11 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0xcU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                         << 0xdU) | 
                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                         >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2772)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_12 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_12_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_12_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_12 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0xdU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                         << 0xdU) | 
                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                         >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2774)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_13 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_13_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_13_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_13 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0xeU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                         << 0xdU) | 
                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                         >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2776)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_14 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_14_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_14_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_14 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0xfU == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                         << 0xdU) | 
                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                         >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2778)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_15 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_15_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_15_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_15 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x10U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2780)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_16 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_16_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_16_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_16 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                   & (0x11U == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0xdU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 0x13U))))) 
                  & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U))))) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_release_from_FB) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_fb_addr_0_read___05F315_fb_addr_1_read___05F31_ETC___05F_d2782)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_17 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_17_write_1___05FSEL_2)
                             ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_0_write_1___05FVAL_2)
                             : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_dirty_17_write_1___05FSEL_3)
                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_rg_valid_1_write_1___05FVAL_3)
                                 : 0U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_valid_17 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_store_valid_1_1_write_1___05FSEL_2) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__store_addr_1 
                = (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                           >> 8U));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__store_addr_1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_store_valid_0_1_write_1___05FSEL_2) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__store_addr_0 
                = (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                           >> 8U));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__store_addr_0 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_request_to_memory) 
                & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_fbmissallocate))) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable)) 
              & (0x80000000U <= (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_from_tlb_rv_port1___05Fread 
                                         >> 7U)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) 
                & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_fb_fillindex__DOT__data0_reg))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_enables_3 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_fb_enables_3_write_1___05FSEL_1)
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_fb_enables_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_enables_3 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_request_to_memory) 
                & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_fbmissallocate))) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable)) 
              & (0x80000000U <= (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_from_tlb_rv_port1___05Fread 
                                         >> 7U)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) 
                & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_fb_fillindex__DOT__data0_reg))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_enables_2 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_fb_enables_2_write_1___05FSEL_1)
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_fb_enables_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_enables_2 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_request_to_memory) 
                & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_fbmissallocate))) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable)) 
              & (0x80000000U <= (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_from_tlb_rv_port1___05Fread 
                                         >> 7U)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) 
                & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_fb_fillindex__DOT__data0_reg))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_enables_0 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_fb_enables_0_write_1___05FSEL_1)
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_fb_enables_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_enables_0 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_request_to_memory) 
                & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_fbmissallocate))) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable)) 
              & (0x80000000U <= (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_from_tlb_rv_port1___05Fread 
                                         >> 7U)))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) 
                & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_fb_fillindex__DOT__data0_reg))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_enables_1 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_fb_enables_1_write_1___05FSEL_1)
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_fb_enables_0_write_1___05FVAL_1)
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_enables_1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                 & (6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                 << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                              >> 9U))))) 
               & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
              | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) 
                 & (6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_fb_fillindex__DOT__data0_reg)))) 
             | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                  & (6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__NOT_SEL_ARR_store_io_0_104_store_io_1_105_106___05FETC___05F_d3162)))) {
            if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                   & (6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__NOT_SEL_ARR_store_io_0_104_store_io_1_105_106___05FETC___05F_d3162))) {
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[0U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[1U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[1U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[2U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[2U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[3U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[3U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[4U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[4U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[5U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[5U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[6U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[6U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[7U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[7U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[8U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[8U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[9U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[9U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[0xaU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xaU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[0xbU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xbU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[0xcU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xcU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[0xdU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xdU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[0xeU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xeU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[0xfU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xfU];
            } else {
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[0U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_6_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_6_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[1U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_6_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[1U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_6_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[1U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[2U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_6_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[2U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_6_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[2U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[3U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_6_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[3U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_6_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[3U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[4U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_6_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[4U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_6_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[4U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[5U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_6_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[5U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_6_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[5U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[6U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_6_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[6U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_6_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[6U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[7U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_6_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[7U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_6_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[7U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[8U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_6_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[8U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_6_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[8U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[9U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_6_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[9U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_6_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[9U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[0xaU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_6_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xaU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_6_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xaU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[0xbU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_6_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xbU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_6_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xbU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[0xcU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_6_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xcU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_6_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xcU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[0xdU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_6_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xdU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_6_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xdU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[0xeU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_6_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xeU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_6_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xeU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[0xfU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_6_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xfU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_6_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xfU]
                            : 0U));
            }
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[0U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[1U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[2U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[3U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[4U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[5U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[6U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[7U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[8U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[9U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[0xaU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[0xbU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[0xcU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[0xdU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[0xeU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_6[0xfU] = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                 & (5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                 << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                              >> 9U))))) 
               & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
              | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) 
                 & (5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_fb_fillindex__DOT__data0_reg)))) 
             | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                  & (5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__NOT_SEL_ARR_store_io_0_104_store_io_1_105_106___05FETC___05F_d3162)))) {
            if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                   & (5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__NOT_SEL_ARR_store_io_0_104_store_io_1_105_106___05FETC___05F_d3162))) {
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[0U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[1U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[1U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[2U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[2U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[3U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[3U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[4U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[4U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[5U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[5U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[6U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[6U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[7U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[7U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[8U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[8U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[9U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[9U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[0xaU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xaU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[0xbU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xbU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[0xcU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xcU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[0xdU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xdU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[0xeU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xeU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[0xfU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xfU];
            } else {
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[0U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_5_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_5_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[1U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_5_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[1U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_5_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[1U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[2U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_5_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[2U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_5_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[2U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[3U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_5_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[3U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_5_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[3U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[4U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_5_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[4U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_5_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[4U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[5U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_5_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[5U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_5_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[5U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[6U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_5_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[6U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_5_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[6U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[7U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_5_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[7U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_5_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[7U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[8U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_5_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[8U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_5_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[8U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[9U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_5_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[9U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_5_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[9U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[0xaU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_5_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xaU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_5_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xaU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[0xbU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_5_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xbU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_5_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xbU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[0xcU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_5_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xcU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_5_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xcU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[0xdU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_5_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xdU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_5_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xdU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[0xeU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_5_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xeU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_5_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xeU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[0xfU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_5_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xfU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_5_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xfU]
                            : 0U));
            }
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[0U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[1U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[2U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[3U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[4U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[5U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[6U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[7U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[8U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[9U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[0xaU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[0xbU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[0xcU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[0xdU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[0xeU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_5[0xfU] = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                 & (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                 << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                              >> 9U))))) 
               & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
              | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) 
                 & (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_fb_fillindex__DOT__data0_reg)))) 
             | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                  & (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__NOT_SEL_ARR_store_io_0_104_store_io_1_105_106___05FETC___05F_d3162)))) {
            if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                   & (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__NOT_SEL_ARR_store_io_0_104_store_io_1_105_106___05FETC___05F_d3162))) {
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[0U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[1U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[1U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[2U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[2U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[3U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[3U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[4U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[4U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[5U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[5U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[6U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[6U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[7U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[7U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[8U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[8U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[9U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[9U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[0xaU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xaU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[0xbU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xbU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[0xcU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xcU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[0xdU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xdU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[0xeU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xeU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[0xfU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xfU];
            } else {
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[0U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_4_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_4_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[1U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_4_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[1U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_4_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[1U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[2U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_4_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[2U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_4_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[2U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[3U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_4_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[3U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_4_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[3U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[4U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_4_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[4U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_4_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[4U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[5U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_4_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[5U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_4_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[5U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[6U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_4_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[6U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_4_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[6U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[7U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_4_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[7U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_4_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[7U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[8U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_4_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[8U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_4_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[8U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[9U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_4_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[9U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_4_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[9U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[0xaU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_4_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xaU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_4_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xaU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[0xbU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_4_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xbU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_4_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xbU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[0xcU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_4_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xcU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_4_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xcU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[0xdU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_4_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xdU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_4_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xdU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[0xeU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_4_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xeU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_4_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xeU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[0xfU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_4_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xfU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_4_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xfU]
                            : 0U));
            }
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[0U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[1U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[2U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[3U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[4U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[5U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[6U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[7U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[8U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[9U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[0xaU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[0xbU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[0xcU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[0xdU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[0xeU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_4[0xfU] = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                 & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                 << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                              >> 9U))))) 
               & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
              | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) 
                 & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_fb_fillindex__DOT__data0_reg)))) 
             | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                  & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__NOT_SEL_ARR_store_io_0_104_store_io_1_105_106___05FETC___05F_d3162)))) {
            if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                   & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__NOT_SEL_ARR_store_io_0_104_store_io_1_105_106___05FETC___05F_d3162))) {
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[0U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[1U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[1U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[2U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[2U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[3U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[3U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[4U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[4U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[5U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[5U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[6U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[6U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[7U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[7U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[8U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[8U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[9U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[9U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[0xaU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xaU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[0xbU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xbU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[0xcU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xcU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[0xdU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xdU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[0xeU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xeU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[0xfU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xfU];
            } else {
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[0U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_3_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_3_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[1U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_3_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[1U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_3_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[1U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[2U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_3_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[2U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_3_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[2U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[3U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_3_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[3U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_3_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[3U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[4U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_3_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[4U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_3_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[4U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[5U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_3_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[5U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_3_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[5U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[6U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_3_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[6U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_3_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[6U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[7U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_3_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[7U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_3_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[7U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[8U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_3_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[8U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_3_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[8U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[9U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_3_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[9U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_3_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[9U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[0xaU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_3_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xaU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_3_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xaU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[0xbU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_3_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xbU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_3_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xbU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[0xcU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_3_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xcU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_3_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xcU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[0xdU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_3_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xdU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_3_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xdU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[0xeU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_3_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xeU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_3_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xeU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[0xfU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_3_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xfU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_3_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xfU]
                            : 0U));
            }
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[0U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[1U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[2U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[3U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[4U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[5U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[6U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[7U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[8U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[9U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[0xaU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[0xbU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[0xcU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[0xdU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[0xeU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_3[0xfU] = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                 & (7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                 << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                              >> 9U))))) 
               & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
              | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) 
                 & (7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_fb_fillindex__DOT__data0_reg)))) 
             | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                  & (7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__NOT_SEL_ARR_store_io_0_104_store_io_1_105_106___05FETC___05F_d3162)))) {
            if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                   & (7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__NOT_SEL_ARR_store_io_0_104_store_io_1_105_106___05FETC___05F_d3162))) {
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[0U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[1U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[1U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[2U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[2U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[3U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[3U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[4U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[4U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[5U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[5U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[6U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[6U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[7U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[7U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[8U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[8U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[9U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[9U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[0xaU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xaU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[0xbU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xbU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[0xcU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xcU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[0xdU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xdU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[0xeU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xeU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[0xfU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xfU];
            } else {
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[0U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_7_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_7_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[1U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_7_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[1U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_7_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[1U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[2U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_7_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[2U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_7_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[2U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[3U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_7_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[3U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_7_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[3U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[4U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_7_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[4U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_7_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[4U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[5U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_7_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[5U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_7_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[5U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[6U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_7_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[6U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_7_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[6U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[7U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_7_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[7U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_7_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[7U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[8U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_7_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[8U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_7_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[8U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[9U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_7_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[9U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_7_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[9U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[0xaU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_7_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xaU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_7_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xaU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[0xbU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_7_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xbU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_7_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xbU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[0xcU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_7_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xcU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_7_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xcU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[0xdU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_7_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xdU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_7_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xdU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[0xeU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_7_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xeU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_7_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xeU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[0xfU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_7_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xfU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_7_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xfU]
                            : 0U));
            }
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[0U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[1U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[2U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[3U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[4U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[5U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[6U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[7U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[8U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[9U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[0xaU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[0xbU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[0xcU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[0xdU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[0xeU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_7[0xfU] = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                 << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                              >> 9U))))) 
               & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
              | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_fb_fillindex__DOT__data0_reg)))) 
             | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                  & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__NOT_SEL_ARR_store_io_0_104_store_io_1_105_106___05FETC___05F_d3162)))) {
            if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                   & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__NOT_SEL_ARR_store_io_0_104_store_io_1_105_106___05FETC___05F_d3162))) {
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[0U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[1U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[1U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[2U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[2U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[3U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[3U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[4U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[4U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[5U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[5U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[6U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[6U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[7U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[7U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[8U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[8U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[9U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[9U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[0xaU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xaU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[0xbU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xbU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[0xcU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xcU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[0xdU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xdU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[0xeU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xeU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[0xfU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xfU];
            } else {
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[0U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_0_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[1U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_0_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[1U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[1U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[2U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_0_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[2U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[2U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[3U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_0_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[3U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[3U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[4U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_0_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[4U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[4U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[5U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_0_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[5U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[5U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[6U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_0_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[6U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[6U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[7U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_0_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[7U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[7U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[8U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_0_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[8U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[8U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[9U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_0_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[9U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[9U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[0xaU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_0_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xaU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xaU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[0xbU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_0_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xbU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xbU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[0xcU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_0_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xcU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xcU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[0xdU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_0_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xdU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xdU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[0xeU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_0_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xeU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xeU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[0xfU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_0_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xfU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xfU]
                            : 0U));
            }
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[0U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[1U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[2U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[3U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[4U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[5U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[6U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[7U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[8U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[9U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[0xaU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[0xbU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[0xcU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[0xdU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[0xeU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_0[0xfU] = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                 & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                 << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                              >> 9U))))) 
               & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
              | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) 
                 & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_fb_fillindex__DOT__data0_reg)))) 
             | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                  & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__NOT_SEL_ARR_store_io_0_104_store_io_1_105_106___05FETC___05F_d3162)))) {
            if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                   & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__NOT_SEL_ARR_store_io_0_104_store_io_1_105_106___05FETC___05F_d3162))) {
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[0U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[1U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[1U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[2U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[2U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[3U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[3U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[4U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[4U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[5U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[5U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[6U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[6U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[7U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[7U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[8U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[8U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[9U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[9U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[0xaU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xaU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[0xbU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xbU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[0xcU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xcU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[0xdU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xdU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[0xeU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xeU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[0xfU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xfU];
            } else {
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[0U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_1_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_1_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[1U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_1_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[1U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_1_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[1U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[2U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_1_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[2U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_1_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[2U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[3U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_1_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[3U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_1_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[3U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[4U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_1_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[4U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_1_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[4U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[5U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_1_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[5U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_1_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[5U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[6U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_1_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[6U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_1_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[6U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[7U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_1_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[7U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_1_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[7U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[8U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_1_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[8U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_1_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[8U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[9U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_1_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[9U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_1_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[9U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[0xaU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_1_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xaU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_1_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xaU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[0xbU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_1_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xbU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_1_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xbU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[0xcU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_1_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xcU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_1_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xcU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[0xdU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_1_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xdU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_1_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xdU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[0xeU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_1_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xeU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_1_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xeU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[0xfU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_1_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xfU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_1_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xfU]
                            : 0U));
            }
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[0U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[1U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[2U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[3U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[4U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[5U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[6U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[7U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[8U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[9U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[0xaU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[0xbU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[0xcU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[0xdU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[0xeU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_1[0xfU] = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                 & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                 << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                              >> 9U))))) 
               & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
              | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) 
                 & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_fb_fillindex__DOT__data0_reg)))) 
             | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                  & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__NOT_SEL_ARR_store_io_0_104_store_io_1_105_106___05FETC___05F_d3162)))) {
            if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                   & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__NOT_SEL_ARR_store_io_0_104_store_io_1_105_106___05FETC___05F_d3162))) {
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[0U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[1U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[1U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[2U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[2U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[3U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[3U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[4U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[4U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[5U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[5U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[6U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[6U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[7U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[7U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[8U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[8U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[9U] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[9U];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[0xaU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xaU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[0xbU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xbU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[0xcU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xcU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[0xdU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xdU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[0xeU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xeU];
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[0xfU] 
                    = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_1[0xfU];
            } else {
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[0U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_2_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_2_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[1U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_2_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[1U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_2_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[1U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[2U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_2_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[2U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_2_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[2U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[3U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_2_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[3U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_2_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[3U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[4U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_2_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[4U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_2_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[4U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[5U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_2_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[5U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_2_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[5U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[6U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_2_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[6U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_2_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[6U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[7U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_2_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[7U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_2_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[7U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[8U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_2_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[8U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_2_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[8U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[9U] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_2_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[9U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_2_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[9U]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[0xaU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_2_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xaU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_2_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xaU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[0xbU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_2_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xbU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_2_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xbU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[0xcU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_2_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xcU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_2_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xcU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[0xdU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_2_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xdU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_2_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xdU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[0xeU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_2_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xeU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_2_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xeU]
                            : 0U));
                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[0xfU] 
                    = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_2_write_1___05FSEL_1)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_2[0xfU]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_2_write_1___05FSEL_3)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FVAL_3[0xfU]
                            : 0U));
            }
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[0U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[1U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[2U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[3U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[4U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[5U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[6U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[7U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[8U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[9U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[0xaU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[0xbU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[0xcU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[0xdU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[0xeU] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dataline_2[0xfU] = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                 & (6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                 << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                              >> 9U))))) 
               & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                   & (6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                     >> 1U)) & (0x80000000U <= (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                        >> 8U))))) 
             | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                  & (6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_io_0_104_store_io_1_105_106_rg_s_ETC___05F_d3107))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dirty_6 
                = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                      & (6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                     & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                    & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_io_0_104_store_io_1_105_106_rg_s_ETC___05F_d3107))) 
                   | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_6_write_1___05FSEL_2)) 
                      & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_6_write_1___05FSEL_1) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dirty_0_write_1___05FVAL_3))));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dirty_6 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                 & (5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                 << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                              >> 9U))))) 
               & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                   & (5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                     >> 1U)) & (0x80000000U <= (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                        >> 8U))))) 
             | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                  & (5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_io_0_104_store_io_1_105_106_rg_s_ETC___05F_d3107))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dirty_5 
                = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                      & (5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                     & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                    & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_io_0_104_store_io_1_105_106_rg_s_ETC___05F_d3107))) 
                   | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_5_write_1___05FSEL_2)) 
                      & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_5_write_1___05FSEL_1) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dirty_0_write_1___05FVAL_3))));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dirty_5 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                 & (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                 << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                              >> 9U))))) 
               & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                   & (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                     >> 1U)) & (0x80000000U <= (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                        >> 8U))))) 
             | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                  & (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_io_0_104_store_io_1_105_106_rg_s_ETC___05F_d3107))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dirty_4 
                = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                      & (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                     & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                    & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_io_0_104_store_io_1_105_106_rg_s_ETC___05F_d3107))) 
                   | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_4_write_1___05FSEL_2)) 
                      & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_4_write_1___05FSEL_1) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dirty_0_write_1___05FVAL_3))));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dirty_4 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                 & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                 << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                              >> 9U))))) 
               & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                   & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                     >> 1U)) & (0x80000000U <= (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                        >> 8U))))) 
             | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                  & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_io_0_104_store_io_1_105_106_rg_s_ETC___05F_d3107))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dirty_3 
                = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                      & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                     & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                    & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_io_0_104_store_io_1_105_106_rg_s_ETC___05F_d3107))) 
                   | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_3_write_1___05FSEL_2)) 
                      & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_3_write_1___05FSEL_1) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dirty_0_write_1___05FVAL_3))));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dirty_3 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                 & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                 << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                              >> 9U))))) 
               & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                   & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                     >> 1U)) & (0x80000000U <= (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                        >> 8U))))) 
             | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                  & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_io_0_104_store_io_1_105_106_rg_s_ETC___05F_d3107))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dirty_2 
                = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                      & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                     & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                    & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_io_0_104_store_io_1_105_106_rg_s_ETC___05F_d3107))) 
                   | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_2_write_1___05FSEL_2)) 
                      & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_2_write_1___05FSEL_1) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dirty_0_write_1___05FVAL_3))));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dirty_2 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                 & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                 << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                              >> 9U))))) 
               & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                   & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                     >> 1U)) & (0x80000000U <= (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                        >> 8U))))) 
             | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                  & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_io_0_104_store_io_1_105_106_rg_s_ETC___05F_d3107))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dirty_1 
                = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                      & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                     & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                    & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_io_0_104_store_io_1_105_106_rg_s_ETC___05F_d3107))) 
                   | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_1_write_1___05FSEL_2)) 
                      & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_1_write_1___05FSEL_1) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dirty_0_write_1___05FVAL_3))));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dirty_1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                 << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                              >> 9U))))) 
               & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                   & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                     >> 1U)) & (0x80000000U <= (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                        >> 8U))))) 
             | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                  & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_io_0_104_store_io_1_105_106_rg_s_ETC___05F_d3107))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dirty_0 
                = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                      & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                     & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                    & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_io_0_104_store_io_1_105_106_rg_s_ETC___05F_d3107))) 
                   | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_0_write_1___05FSEL_2)) 
                      & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_0_write_1___05FSEL_1) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dirty_0_write_1___05FVAL_3))));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dirty_0 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                 & (7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                 << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                              >> 9U))))) 
               & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                   & (7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                     >> 1U)) & (0x80000000U <= (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                        >> 8U))))) 
             | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                  & (7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_io_0_104_store_io_1_105_106_rg_s_ETC___05F_d3107))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dirty_7 
                = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_cclass_initiate_store) 
                      & (7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbindex___05Fh403346))) 
                     & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_epoch_0_099_store_epoch_1_100_10_ETC___05F_d3103)) 
                    & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__SEL_ARR_store_io_0_104_store_io_1_105_106_rg_s_ETC___05F_d3107))) 
                   | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_7_write_1___05FSEL_2)) 
                      & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_7_write_1___05FSEL_1) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dirty_0_write_1___05FVAL_3))));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_dirty_7 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                 & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                 << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                              >> 9U))))) 
               & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                   & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                     >> 1U)) & (0x80000000U <= (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                        >> 8U))))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) 
                & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_fb_fillindex__DOT__data0_reg))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_err_3 
                = (1U & (((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_3_write_1___05FSEL_2)) 
                          & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_3_write_1___05FSEL_1))) 
                         & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_read_mem_response_rv_port1___05Fread[0U]));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_err_3 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                 & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                 << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                              >> 9U))))) 
               & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                   & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                     >> 1U)) & (0x80000000U <= (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                        >> 8U))))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) 
                & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_fb_fillindex__DOT__data0_reg))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_err_2 
                = (1U & (((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_2_write_1___05FSEL_2)) 
                          & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_2_write_1___05FSEL_1))) 
                         & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_read_mem_response_rv_port1___05Fread[0U]));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_err_2 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                 & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                 << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                              >> 9U))))) 
               & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                   & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                     >> 1U)) & (0x80000000U <= (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                        >> 8U))))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) 
                & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_fb_fillindex__DOT__data0_reg))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_err_0 
                = (1U & (((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_0_write_1___05FSEL_2)) 
                          & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_0_write_1___05FSEL_1))) 
                         & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_read_mem_response_rv_port1___05Fread[0U]));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_err_0 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                 & (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                 << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                              >> 9U))))) 
               & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                   & (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                     >> 1U)) & (0x80000000U <= (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                        >> 8U))))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) 
                & (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_fb_fillindex__DOT__data0_reg))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_err_4 
                = (1U & (((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_4_write_1___05FSEL_2)) 
                          & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_4_write_1___05FSEL_1))) 
                         & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_read_mem_response_rv_port1___05Fread[0U]));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_err_4 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                 & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                 << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                              >> 9U))))) 
               & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                   & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                     >> 1U)) & (0x80000000U <= (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                        >> 8U))))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) 
                & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_fb_fillindex__DOT__data0_reg))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_err_1 
                = (1U & (((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_1_write_1___05FSEL_2)) 
                          & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_1_write_1___05FSEL_1))) 
                         & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_read_mem_response_rv_port1___05Fread[0U]));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_err_1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                 & (5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                 << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                              >> 9U))))) 
               & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                   & (5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                     >> 1U)) & (0x80000000U <= (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                        >> 8U))))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) 
                & (5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_fb_fillindex__DOT__data0_reg))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_err_5 
                = (1U & (((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_5_write_1___05FSEL_2)) 
                          & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_5_write_1___05FSEL_1))) 
                         & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_read_mem_response_rv_port1___05Fread[0U]));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_err_5 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                 & (6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                 << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                              >> 9U))))) 
               & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                   & (6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                     >> 1U)) & (0x80000000U <= (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                        >> 8U))))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) 
                & (6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_fb_fillindex__DOT__data0_reg))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_err_6 
                = (1U & (((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_6_write_1___05FSEL_2)) 
                          & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_6_write_1___05FSEL_1))) 
                         & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_read_mem_response_rv_port1___05Fread[0U]));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_err_6 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                 & (7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                 << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                              >> 9U))))) 
               & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                   & (7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                     >> 1U)) & (0x80000000U <= (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                        >> 8U))))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) 
                & (7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_fb_fillindex__DOT__data0_reg))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_err_7 
                = (1U & (((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_7_write_1___05FSEL_2)) 
                          & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_7_write_1___05FSEL_1))) 
                         & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_read_mem_response_rv_port1___05Fread[0U]));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_err_7 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
               | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                    & (7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                   & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                    << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                 >> 9U))))) 
                  & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                   & (7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                     >> 1U)) & (0x80000000U <= (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                        >> 8U))))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) 
                & (7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_fb_fillindex__DOT__data0_reg))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_enables_7 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_7_write_1___05FSEL_2)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_7_write_1___05FSEL_1)
                             ? 0xffU : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                                         ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_7_write_1___05FSEL_3)
                                                  ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FVAL_4)
                                                  : 0U))));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_enables_7 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
               | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                    & (6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                   & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                    << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                 >> 9U))))) 
                  & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                   & (6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                     >> 1U)) & (0x80000000U <= (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                        >> 8U))))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) 
                & (6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_fb_fillindex__DOT__data0_reg))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_enables_6 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_6_write_1___05FSEL_2)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_6_write_1___05FSEL_1)
                             ? 0xffU : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                                         ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_6_write_1___05FSEL_3)
                                                  ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FVAL_4)
                                                  : 0U))));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_enables_6 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                & (6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
               & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                             >> 9U))))) 
              & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
             | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                  & (6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                 & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                    >> 1U)) & (0x80000000U <= (IData)(
                                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                       >> 8U)))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_addr_6 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_6_write_1___05FSEL_1)
                    ? (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                               >> 8U)) : (0xfffffff8U 
                                          & ((IData)(
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                      >> 0xbU)) 
                                             << 3U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_addr_6 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
               | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                    & (5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                   & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                    << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                 >> 9U))))) 
                  & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                   & (5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                     >> 1U)) & (0x80000000U <= (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                        >> 8U))))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) 
                & (5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_fb_fillindex__DOT__data0_reg))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_enables_5 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_5_write_1___05FSEL_2)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_5_write_1___05FSEL_1)
                             ? 0xffU : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                                         ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_5_write_1___05FSEL_3)
                                                  ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FVAL_4)
                                                  : 0U))));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_enables_5 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                & (5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
               & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                             >> 9U))))) 
              & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
             | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                  & (5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                 & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                    >> 1U)) & (0x80000000U <= (IData)(
                                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                       >> 8U)))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_addr_5 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_5_write_1___05FSEL_1)
                    ? (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                               >> 8U)) : (0xfffffff8U 
                                          & ((IData)(
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                      >> 0xbU)) 
                                             << 3U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_addr_5 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
               | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                    & (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                   & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                    << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                 >> 9U))))) 
                  & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                   & (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                     >> 1U)) & (0x80000000U <= (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                        >> 8U))))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) 
                & (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_fb_fillindex__DOT__data0_reg))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_enables_4 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_4_write_1___05FSEL_2)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_4_write_1___05FSEL_1)
                             ? 0xffU : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                                         ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_4_write_1___05FSEL_3)
                                                  ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FVAL_4)
                                                  : 0U))));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_enables_4 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                & (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
               & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                             >> 9U))))) 
              & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
             | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                  & (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                 & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                    >> 1U)) & (0x80000000U <= (IData)(
                                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                       >> 8U)))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_addr_4 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_4_write_1___05FSEL_1)
                    ? (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                               >> 8U)) : (0xfffffff8U 
                                          & ((IData)(
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                      >> 0xbU)) 
                                             << 3U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_addr_4 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
               | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                    & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                   & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                    << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                 >> 9U))))) 
                  & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                   & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                     >> 1U)) & (0x80000000U <= (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                        >> 8U))))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) 
                & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_fb_fillindex__DOT__data0_reg))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_enables_3 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_3_write_1___05FSEL_2)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_3_write_1___05FSEL_1)
                             ? 0xffU : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                                         ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_3_write_1___05FSEL_3)
                                                  ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FVAL_4)
                                                  : 0U))));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_enables_3 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
               & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                             >> 9U))))) 
              & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
             | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                  & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                 & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                    >> 1U)) & (0x80000000U <= (IData)(
                                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                       >> 8U)))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_addr_3 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_3_write_1___05FSEL_1)
                    ? (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                               >> 8U)) : (0xfffffff8U 
                                          & ((IData)(
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                      >> 0xbU)) 
                                             << 3U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_addr_3 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
               | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                    & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                   & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                    << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                 >> 9U))))) 
                  & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                   & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                     >> 1U)) & (0x80000000U <= (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                        >> 8U))))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) 
                & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_fb_fillindex__DOT__data0_reg))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_enables_2 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_2_write_1___05FSEL_2)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_2_write_1___05FSEL_1)
                             ? 0xffU : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                                         ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_2_write_1___05FSEL_3)
                                                  ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FVAL_4)
                                                  : 0U))));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_enables_2 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
               & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                             >> 9U))))) 
              & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
             | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                  & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                 & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                    >> 1U)) & (0x80000000U <= (IData)(
                                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                       >> 8U)))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_addr_2 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_2_write_1___05FSEL_1)
                    ? (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                               >> 8U)) : (0xfffffff8U 
                                          & ((IData)(
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                      >> 0xbU)) 
                                             << 3U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_addr_2 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
               | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                    & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                   & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                    << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                 >> 9U))))) 
                  & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                   & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                     >> 1U)) & (0x80000000U <= (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                        >> 8U))))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) 
                & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_fb_fillindex__DOT__data0_reg))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_enables_0 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_0_write_1___05FSEL_2)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_0_write_1___05FSEL_1)
                             ? 0xffU : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                                         ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_0_write_1___05FSEL_3)
                                                  ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FVAL_4)
                                                  : 0U))));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_enables_0 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_fence_operation) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT___0b0_CONCAT_rg_set_select_66_305_EQ_63_336_AND___05FETC___05F_d1339)) 
               | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                    & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                   & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                    << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                 >> 9U))))) 
                  & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730)))) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                   & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                     >> 1U)) & (0x80000000U <= (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                        >> 8U))))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_update_fb_with_memory_response) 
                & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_fb_fillindex__DOT__data0_reg))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_enables_1 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_1_write_1___05FSEL_2)
                    ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_1_write_1___05FSEL_1)
                             ? 0xffU : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FSEL_3)
                                         ? 0U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_dataline_1_write_1___05FSEL_3)
                                                  ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_enables_0_write_1___05FVAL_4)
                                                  : 0U))));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_enables_1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
               & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                             >> 9U))))) 
              & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
             | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                  & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                 & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                    >> 1U)) & (0x80000000U <= (IData)(
                                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                       >> 8U)))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_addr_1 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_1_write_1___05FSEL_1)
                    ? (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                               >> 8U)) : (0xfffffff8U 
                                          & ((IData)(
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                      >> 0xbU)) 
                                             << 3U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_addr_1 = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->RST_N)))) {
        vlTOPp->mkTbSoc__DOT__tck_clk__DOT__new_gate = 1U;
    }
    if (vlTOPp->RST_N) {
        if ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
               & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                             >> 9U))))) 
              & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
             | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                  & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                 & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                    >> 1U)) & (0x80000000U <= (IData)(
                                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                       >> 8U)))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_addr_0 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_0_write_1___05FSEL_1)
                    ? (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                               >> 8U)) : (0xfffffff8U 
                                          & ((IData)(
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                      >> 0xbU)) 
                                             << 3U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_addr_0 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__CAN_FIRE_RL_check_fb_for_corerequest) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_polling 
                = ((0U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fbhit___05Fh28168)) 
                   & ((((0x3ffffffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_addr_3 
                                       >> 6U)) == (0x3ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                              >> 0xdU)))) 
                       & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_valid_3))
                       ? ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_enables_3_01_BIT_ff_core_request_first___05F3_B_ETC___05F_d303)) 
                          & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__IF_fb_addr_2_04_BITS_31_TO_6_05_EQ_ff_from_tlb_ETC___05F_d358))
                       : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__IF_fb_addr_2_04_BITS_31_TO_6_05_EQ_ff_from_tlb_ETC___05F_d358)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_polling = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__CAN_FIRE_RL_check_fb_for_corerequest) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_polling 
                = ((0U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fbhit___05Fh293293)) 
                   & ((((0x3ffffffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_addr_7 
                                       >> 6U)) == (0x3ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                              >> 0xeU)))) 
                       & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_valid_7))
                       ? ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_enables_7_read___05F490_BIT_ff_core_request_fir_ETC___05F_d1492)) 
                          & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_fb_addr_6_read___05F321_BITS_31_TO_6_493_EQ_ff___05FETC___05F_d1600))
                       : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_fb_addr_6_read___05F321_BITS_31_TO_6_493_EQ_ff___05FETC___05F_d1600)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_polling = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_transmit_wait_for_start_command) 
                   | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_transmit_send_start_bit)) 
                  | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_transmit_wait_1_bit_cell_time)) 
                 | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_transmit_send_parity_bit)) 
                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_transmit_send_stop_bit)) 
               | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_transmit_send_stop_bit1_5)) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_transmit_send_stop_bit2)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_transmit_shift_next_bit))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rXmitState 
                = (((((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_transmit_wait_for_start_command) 
                          | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_transmit_send_start_bit)) 
                         | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_transmit_wait_1_bit_cell_time)) 
                        | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_transmit_send_parity_bit)) 
                       | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_transmit_send_stop_bit)) 
                      | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_transmit_send_stop_bit1_5)) 
                     | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_transmit_send_stop_bit2)) 
                    | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_transmit_shift_next_bit))
                    ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_transmit_wait_for_start_command)
                        ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_fifoXmit__DOT__hasodata)
                            ? 1U : 0U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_transmit_send_start_bit)
                                           ? ((0xfU 
                                               == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rXmitCellCount))
                                               ? 2U
                                               : 1U)
                                           : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_transmit_wait_1_bit_cell_time)
                                               ? ((0xfU 
                                                   == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rXmitCellCount))
                                                   ? 
                                                  ((7U 
                                                    == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rXmitBitCount))
                                                    ? 4U
                                                    : 3U)
                                                   : 2U)
                                               : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_transmit_send_parity_bit)
                                                   ? 
                                                  ((0xfU 
                                                    == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rXmitCellCount))
                                                    ? 4U
                                                    : 7U)
                                                   : 
                                                  ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_transmit_send_stop_bit)
                                                    ? 
                                                   ((0xfU 
                                                     == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rXmitCellCount))
                                                     ? 0U
                                                     : 4U)
                                                    : 
                                                   ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_transmit_send_stop_bit1_5)
                                                     ? 
                                                    ((7U 
                                                      == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rXmitCellCount))
                                                      ? 0U
                                                      : 5U)
                                                     : 
                                                    ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_transmit_send_stop_bit2)
                                                      ? 
                                                     ((0xfU 
                                                       == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rXmitCellCount))
                                                       ? 0U
                                                       : 6U)
                                                      : 2U)))))))
                    : 0U);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rXmitState = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_receive_wait_for_start_bit) 
                  | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_receive_find_center_of_bit_cell)) 
                 | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_receive_wait_bit_cell_time_for_sample)) 
                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_receive_stop_first_bit)) 
               | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_receive_stop_last_bit)) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_receive_parity_bit)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_receive_buffer_shift))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rRecvState 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_receive_wait_for_start_bit)
                    ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rRecvData)
                        ? 0U : 1U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_receive_find_center_of_bit_cell)
                                       ? ((4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rRecvCellCount))
                                           ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rRecvData)
                                               ? 0U
                                               : 2U)
                                           : 1U) : 
                                      ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_receive_wait_bit_cell_time_for_sample)
                                        ? ((((8U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rRecvBitCount)) 
                                             | (9U 
                                                == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rRecvBitCount))) 
                                            | (0xaU 
                                               == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rRecvBitCount)))
                                            ? 6U : 3U)
                                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_receive_stop_first_bit)
                                            ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rRecvData)
                                                ? 2U
                                                : 0U)
                                            : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_receive_stop_last_bit)
                                                ? 0U
                                                : (
                                                   ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_receive_parity_bit) 
                                                    | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_receive_buffer_shift))
                                                    ? 2U
                                                    : 0U))))));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rRecvState = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((((((IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_receive_wait_for_start_bit) 
                  | (IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_receive_find_center_of_bit_cell)) 
                 | (IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_receive_wait_bit_cell_time_for_sample)) 
                | (IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_receive_stop_first_bit)) 
               | (IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_receive_stop_last_bit)) 
              | (IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_receive_parity_bit)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_receive_buffer_shift))) {
            vlTOPp->mkTbSoc__DOT__uart_uart_rRecvState 
                = ((IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_receive_wait_for_start_bit)
                    ? ((IData)(vlTOPp->mkTbSoc__DOT__uart_uart_rRecvData)
                        ? 0U : 1U) : ((IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_receive_find_center_of_bit_cell)
                                       ? ((4U == (IData)(vlTOPp->mkTbSoc__DOT__uart_uart_rRecvCellCount))
                                           ? ((IData)(vlTOPp->mkTbSoc__DOT__uart_uart_rRecvData)
                                               ? 0U
                                               : 2U)
                                           : 1U) : 
                                      ((IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_receive_wait_bit_cell_time_for_sample)
                                        ? ((((8U == (IData)(vlTOPp->mkTbSoc__DOT__uart_uart_rRecvBitCount)) 
                                             | (9U 
                                                == (IData)(vlTOPp->mkTbSoc__DOT__uart_uart_rRecvBitCount))) 
                                            | (0xaU 
                                               == (IData)(vlTOPp->mkTbSoc__DOT__uart_uart_rRecvBitCount)))
                                            ? 6U : 3U)
                                        : ((IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_receive_stop_first_bit)
                                            ? ((IData)(vlTOPp->mkTbSoc__DOT__uart_uart_rRecvData)
                                                ? 2U
                                                : 0U)
                                            : ((IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_receive_stop_last_bit)
                                                ? 0U
                                                : (
                                                   ((IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_receive_parity_bit) 
                                                    | (IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_receive_buffer_shift))
                                                    ? 2U
                                                    : 0U))))));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__uart_uart_rRecvState = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__uart_uart_rXmitBitCount_EN) {
            vlTOPp->mkTbSoc__DOT__uart_uart_rXmitBitCount 
                = vlTOPp->mkTbSoc__DOT__uart_uart_rXmitBitCount_D_IN;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__uart_uart_rXmitBitCount = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((1U & (~ (IData)(vlTOPp->mkTbSoc__DOT__uart_uart_baudGen_rBaudCounter_value_PLUS_1_8___05FETC___05F_d30)))) {
            vlTOPp->mkTbSoc__DOT__uart_uart_rXmitCellCount 
                = vlTOPp->mkTbSoc__DOT__uart_uart_rXmitCellCount_D_IN;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__uart_uart_rXmitCellCount = 0U;
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__SEL_ARR_rg_valid_0_36_rg_valid_1_37_rg_valid_2_ETC___05F_d202 
        = ((0x8000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
            ? ((0x4000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                ? ((0x2000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                    ? ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                        ? ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_63)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_62))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_61)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_60)))
                        : ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_59)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_58))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_57)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_56))))
                    : ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                        ? ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_55)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_54))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_53)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_52)))
                        : ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_51)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_50))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_49)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_48)))))
                : ((0x2000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                    ? ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                        ? ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_47)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_46))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_45)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_44)))
                        : ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_43)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_42))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_41)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_40))))
                    : ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                        ? ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_39)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_38))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_37)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_36)))
                        : ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_35)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_34))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_33)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_32))))))
            : ((0x4000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                ? ((0x2000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                    ? ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                        ? ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_31)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_30))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_29)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_28)))
                        : ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_27)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_26))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_25)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_24))))
                    : ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                        ? ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_23)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_22))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_21)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_20)))
                        : ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_19)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_18))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_17)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_16)))))
                : ((0x2000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                    ? ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                        ? ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_15)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_14))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_13)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_12)))
                        : ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_11)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_10))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_9)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_8))))
                    : ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                        ? ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_7)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_6))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_5)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_4)))
                        : ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_3)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_2))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_1)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__rg_valid_0)))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_enables_3_01_BIT_ff_core_request_first___05F3_B_ETC___05F_d303 
        = (1U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_enables_3) 
                 >> (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[1U] 
                              << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                           >> 6U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_enables_2_08_BIT_ff_core_request_first___05F3_B_ETC___05F_d309 
        = (1U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_enables_2) 
                 >> (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[1U] 
                              << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                           >> 6U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_enables_0_20_BIT_ff_core_request_first___05F3_B_ETC___05F_d321 
        = (1U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_enables_0) 
                 >> (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[1U] 
                              << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                           >> 6U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_enables_1_14_BIT_ff_core_request_first___05F3_B_ETC___05F_d315 
        = (1U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_enables_1) 
                 >> (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[1U] 
                              << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                           >> 6U)))));
    if ((1U & (~ (IData)(vlTOPp->mkTbSoc__DOT__tck_clk__DOT__current_clk)))) {
        vlTOPp->mkTbSoc__DOT__tck_clk__DOT__current_gate 
            = vlTOPp->mkTbSoc__DOT__tck_clk__DOT__new_gate;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__MUX_fb_enables_3_write_1___05FSEL_2) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_addr_3 
                = (0xfffffff8U & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__ff_from_tlb_rv_port1___05Fread 
                                           >> 0xaU)) 
                                  << 3U));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_imem__DOT__icache__DOT__fb_addr_3 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_respond_to_core) 
                & (7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
               & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                             >> 9U))))) 
              & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__IF_wr_cache_response_whas___05F728_THEN_wr_cache_r_ETC___05F_d1730))) 
             | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__WILL_FIRE_RL_request_to_memory) 
                  & (7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__rg_fbmissallocate))) 
                 & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_cacheenable) 
                    >> 1U)) & (0x80000000U <= (IData)(
                                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                       >> 8U)))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_addr_7 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__MUX_fb_addr_7_write_1___05FSEL_1)
                    ? (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                               >> 8U)) : (0xfffffff8U 
                                          & ((IData)(
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                      >> 0xbU)) 
                                             << 3U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_dmem__DOT__dcache__DOT__fb_addr_7 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rXmitBitCount_EN) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rXmitBitCount 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rXmitBitCount_D_IN;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rXmitBitCount = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((1U & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_baudGen_rBaudCounter_value___05FETC___05F_d11316)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rXmitCellCount 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rXmitCellCount_D_IN;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rXmitCellCount = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_pwRecvResetBitCount_whas) 
             | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_receive_stop_first_bit) 
                 | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_receive_parity_bit)) 
                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_uart_user_ifc_uart_receive_buffer_shift)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rRecvBitCount 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rRecvBitCount_D_IN;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rRecvBitCount = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((1U & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_baudGen_rBaudCounter_value___05FETC___05F_d11316)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rRecvCellCount 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rRecvCellCount_D_IN;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_rRecvCellCount = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__uart_uart_pwRecvResetBitCount_whas) 
             | (((IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_receive_stop_first_bit) 
                 | (IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_receive_parity_bit)) 
                | (IData)(vlTOPp->mkTbSoc__DOT__CAN_FIRE_RL_uart_uart_receive_buffer_shift)))) {
            vlTOPp->mkTbSoc__DOT__uart_uart_rRecvBitCount 
                = vlTOPp->mkTbSoc__DOT__uart_uart_rRecvBitCount_D_IN;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__uart_uart_rRecvBitCount = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((1U & (~ (IData)(vlTOPp->mkTbSoc__DOT__uart_uart_baudGen_rBaudCounter_value_PLUS_1_8___05FETC___05F_d30)))) {
            vlTOPp->mkTbSoc__DOT__uart_uart_rRecvCellCount 
                = vlTOPp->mkTbSoc__DOT__uart_uart_rRecvCellCount_D_IN;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__uart_uart_rRecvCellCount = 0U;
    }
    vlTOPp->mkTbSoc__DOT__tck_clk_CLK_OUT = ((IData)(vlTOPp->mkTbSoc__DOT__tck_clk__DOT__current_clk) 
                                             & (IData)(vlTOPp->mkTbSoc__DOT__tck_clk__DOT__current_gate));
}
