// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTbSoc.h for the primary calling header

#include "VmkTbSoc.h"
#include "VmkTbSoc__Syms.h"

VL_INLINE_OPT void VmkTbSoc::_sequent__TOP__65(VmkTbSoc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_sequent__TOP__65\n"); );
    VmkTbSoc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_read_synced_response_from_dm 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sync_response_from_dm__DOT__dEnqToggle) 
            != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sync_response_from_dm__DOT__dDeqToggle)) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_from_DM__DOT__empty_reg)));
}

VL_INLINE_OPT void VmkTbSoc::_sequent__TOP__66(VmkTbSoc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_sequent__TOP__66\n"); );
    VmkTbSoc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->mkTbSoc__DOT__trst__DOT__rst) {
        if (((0xaU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
             | (0xbU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction_shiftreg 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction_shiftreg_D_IN;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction_shiftreg = 0U;
    }
    if (vlTOPp->mkTbSoc__DOT__trst__DOT__rst) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_connect_tap_request_to_syncfifo) 
             & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__sEnqToggle) 
                == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__sDeqToggle)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__sEnqToggle 
                = (1U & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__sEnqToggle)));
            vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__request_to_DM_D_OUT;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__sEnqToggle = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data = 0ULL;
    }
    if (vlTOPp->mkTbSoc__DOT__trst__DOT__rst) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate_EN) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate_D_IN;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate = 0U;
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dtm_putCommand_put_BITS_1_TO_0_44_EQ_0b10_22_A_ETC___05F_d540 
        = ((((2U == (3U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data))) 
             & ((4U > (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                        >> 0x22U)))) 
                | (0xfU < (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                            >> 0x22U)))))) 
            & (0x20U <= (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                          >> 0x22U))))) 
           & (0x2fU >= (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                         >> 0x22U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dtm_putCommand_put_BITS_40_TO_34_43_EQ_16_47_O_ETC___05F_d737 
        = ((((((((((((((((((((((((((((0x10U == (0x7fU 
                                                & (IData)(
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                           >> 0x22U)))) 
                                     | (0x11U == (0x7fU 
                                                  & (IData)(
                                                            (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                             >> 0x22U))))) 
                                    | (0x12U == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                            >> 0x22U))))) 
                                   | (0x13U == (0x7fU 
                                                & (IData)(
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                           >> 0x22U))))) 
                                  | (0x14U == (0x7fU 
                                               & (IData)(
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                          >> 0x22U))))) 
                                 | (0x15U == (0x7fU 
                                              & (IData)(
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                         >> 0x22U))))) 
                                | (0x16U == (0x7fU 
                                             & (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                        >> 0x22U))))) 
                               | (0x17U == (0x7fU & (IData)(
                                                            (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                             >> 0x22U))))) 
                              | (0x18U == (0x7fU & (IData)(
                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                            >> 0x22U))))) 
                             | (0x19U == (0x7fU & (IData)(
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                           >> 0x22U))))) 
                            | (0x1aU == (0x7fU & (IData)(
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                          >> 0x22U))))) 
                           | (0x1bU == (0x7fU & (IData)(
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                         >> 0x22U))))) 
                          | (0x1cU == (0x7fU & (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                        >> 0x22U))))) 
                         | (0x1dU == (0x7fU & (IData)(
                                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                       >> 0x22U))))) 
                        | (0x30U == (0x7fU & (IData)(
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                      >> 0x22U))))) 
                       | (0x34U == (0x7fU & (IData)(
                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                     >> 0x22U))))) 
                      | (0x35U == (0x7fU & (IData)(
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                    >> 0x22U))))) 
                     | (0x36U == (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                   >> 0x22U))))) 
                    | (0x38U == (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                  >> 0x22U))))) 
                   | (0x39U == (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                 >> 0x22U))))) 
                  | (0x3aU == (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                >> 0x22U))))) 
                 | (0x3cU == (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                               >> 0x22U))))) 
                | (0x3dU == (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                              >> 0x22U))))) 
               | (0x3eU == (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                             >> 0x22U))))) 
              | (0x3fU == (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                            >> 0x22U))))) 
             | (0x40U == (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                           >> 0x22U))))) 
            | ((4U <= (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                        >> 0x22U)))) 
               & (0xfU >= (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                            >> 0x22U)))))) 
           | ((0x20U <= (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                          >> 0x22U)))) 
              & (0x2fU >= (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                            >> 0x22U))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v___05Fh13906 
        = ((((((((((((((((((((0x10U == (0x7fU & (IData)(
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                         >> 0x22U)))) 
                             | (0x11U == (0x7fU & (IData)(
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                           >> 0x22U))))) 
                            | (0x12U == (0x7fU & (IData)(
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                          >> 0x22U))))) 
                           | (0x14U == (0x7fU & (IData)(
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                         >> 0x22U))))) 
                          | (0x15U == (0x7fU & (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                        >> 0x22U))))) 
                         | (0x16U == (0x7fU & (IData)(
                                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                       >> 0x22U))))) 
                        | (0x17U == (0x7fU & (IData)(
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                      >> 0x22U))))) 
                       | (0x18U == (0x7fU & (IData)(
                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                     >> 0x22U))))) 
                      | (0x30U == (0x7fU & (IData)(
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                    >> 0x22U))))) 
                     | (0x36U == (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                   >> 0x22U))))) 
                    | (0x38U == (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                  >> 0x22U))))) 
                   | (0x39U == (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                 >> 0x22U))))) 
                  | (0x3aU == (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                >> 0x22U))))) 
                 | (0x3cU == (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                               >> 0x22U))))) 
                | (0x3dU == (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                              >> 0x22U))))) 
               | (0x3eU == (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                             >> 0x22U))))) 
              | (0x3fU == (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                            >> 0x22U))))) 
             | ((4U <= (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                         >> 0x22U)))) 
                & (0xfU >= (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                             >> 0x22U)))))) 
            | ((0x20U <= (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                           >> 0x22U)))) 
               & (0x2fU >= (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                             >> 0x22U))))))
            ? 0U : 2U);
    vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__sDeqToggle 
        = (1U & ((~ (IData)(vlTOPp->mkTbSoc__DOT__trst__DOT__rst)) 
                 | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__sSyncReg1)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_connect_tap_request_to_syncfifo 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__sEnqToggle) 
            == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__sDeqToggle)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__request_to_DM__DOT__empty_reg));
    vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__sSyncReg1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__trst__DOT__rst) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__dDeqToggle));
}

VL_INLINE_OPT void VmkTbSoc::_multiclk__TOP__67(VmkTbSoc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_multiclk__TOP__67\n"); );
    VmkTbSoc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_from_DM_ENQ 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_read_synced_response_from_dm) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__capture_repsonse_from_dm));
}

VL_INLINE_OPT void VmkTbSoc::_sequent__TOP__68(VmkTbSoc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_sequent__TOP__68\n"); );
    VmkTbSoc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->mkTbSoc__DOT__trst__DOT__rst) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__request_to_DM_ENQ) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__request_to_DM_D_OUT 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__request_to_DM_D_OUT = 0ULL;
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg 
        = ((IData)(vlTOPp->mkTbSoc__DOT__trst__DOT__rst)
            ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__wr_dmireset_generated_whas)
                ? (0xfffffffffcULL & vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg_port1___05Fread)
                : vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg_port1___05Fread)
            : 2ULL);
}

VL_INLINE_OPT void VmkTbSoc::_multiclk__TOP__69(VmkTbSoc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_multiclk__TOP__69\n"); );
    VmkTbSoc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dtm_putCommand_put_BITS_1_TO_0_44_EQ_0b10_22_A_ETC___05F_d408 
        = (((((((((((((((((((((2U == (3U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data))) 
                              & (0x10U != (0x7fU & (IData)(
                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                            >> 0x22U))))) 
                             & (0x11U != (0x7fU & (IData)(
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                           >> 0x22U))))) 
                            & (0x12U != (0x7fU & (IData)(
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                          >> 0x22U))))) 
                           & (0x14U != (0x7fU & (IData)(
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                         >> 0x22U))))) 
                          & (0x15U != (0x7fU & (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                        >> 0x22U))))) 
                         & (0x16U != (0x7fU & (IData)(
                                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                       >> 0x22U))))) 
                        & (0x17U != (0x7fU & (IData)(
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                      >> 0x22U))))) 
                       & (0x18U != (0x7fU & (IData)(
                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                     >> 0x22U))))) 
                      & (0x30U != (0x7fU & (IData)(
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                    >> 0x22U))))) 
                     & (0x36U != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                   >> 0x22U))))) 
                    & (0x38U != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                  >> 0x22U))))) 
                   & (0x39U != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                 >> 0x22U))))) 
                  & (0x3aU != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                >> 0x22U))))) 
                 & (0x3cU != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                               >> 0x22U))))) 
                & (0x3dU != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                              >> 0x22U))))) 
               & (0x3eU != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                             >> 0x22U))))) 
              & (0x3fU != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                            >> 0x22U))))) 
             & (4U <= (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                        >> 0x22U))))) 
            & (0xfU >= (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                         >> 0x22U))))) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_busy));
    vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dtm_putCommand_put_BITS_1_TO_0_44_EQ_0b10_22_A_ETC___05F_d469 
        = ((((2U == (3U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data))) 
             & (0x38U == (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                           >> 0x22U))))) 
            & (7U == (7U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                    >> 0xeU))))) & 
           (0U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbError)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dtm_putCommand_put_BITS_1_TO_0_44_EQ_0b10_22_A_ETC___05F_d493 
        = (((((((((((((((((((((2U == (3U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data))) 
                              & (0x10U != (0x7fU & (IData)(
                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                            >> 0x22U))))) 
                             & (0x11U != (0x7fU & (IData)(
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                           >> 0x22U))))) 
                            & (0x12U != (0x7fU & (IData)(
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                          >> 0x22U))))) 
                           & (0x14U != (0x7fU & (IData)(
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                         >> 0x22U))))) 
                          & (0x15U != (0x7fU & (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                        >> 0x22U))))) 
                         & (0x16U != (0x7fU & (IData)(
                                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                       >> 0x22U))))) 
                        & (0x17U != (0x7fU & (IData)(
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                      >> 0x22U))))) 
                       & (0x18U != (0x7fU & (IData)(
                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                     >> 0x22U))))) 
                      & (0x30U != (0x7fU & (IData)(
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                    >> 0x22U))))) 
                     & (0x36U != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                   >> 0x22U))))) 
                    & (0x38U != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                  >> 0x22U))))) 
                   & (0x39U != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                 >> 0x22U))))) 
                  & (0x3aU != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                >> 0x22U))))) 
                 & (0x3cU != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                               >> 0x22U))))) 
                & (0x3dU != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                              >> 0x22U))))) 
               & (0x3eU != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                             >> 0x22U))))) 
              & (0x3fU != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                            >> 0x22U))))) 
             & (4U <= (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                        >> 0x22U))))) 
            & (0xfU >= (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                         >> 0x22U))))) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_busy)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dtm_putCommand_put_BITS_1_TO_0_44_EQ_0b1_46_AN_ETC___05F_d393 
        = ((((((((((((((((((((((((((((((1U == (3U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data))) 
                                       & (0x10U != 
                                          (0x7fU & (IData)(
                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                            >> 0x22U))))) 
                                      & (0x11U != (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U))))) 
                                     & (0x12U != (0x7fU 
                                                  & (IData)(
                                                            (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                             >> 0x22U))))) 
                                    & (0x13U != (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                            >> 0x22U))))) 
                                   & (0x14U != (0x7fU 
                                                & (IData)(
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                           >> 0x22U))))) 
                                  & (0x15U != (0x7fU 
                                               & (IData)(
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                          >> 0x22U))))) 
                                 & (0x16U != (0x7fU 
                                              & (IData)(
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                         >> 0x22U))))) 
                                & (0x17U != (0x7fU 
                                             & (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                        >> 0x22U))))) 
                               & (0x18U != (0x7fU & (IData)(
                                                            (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                             >> 0x22U))))) 
                              & (0x19U != (0x7fU & (IData)(
                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                            >> 0x22U))))) 
                             & (0x1aU != (0x7fU & (IData)(
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                           >> 0x22U))))) 
                            & (0x1bU != (0x7fU & (IData)(
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                          >> 0x22U))))) 
                           & (0x1cU != (0x7fU & (IData)(
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                         >> 0x22U))))) 
                          & (0x1dU != (0x7fU & (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                        >> 0x22U))))) 
                         & (0x30U != (0x7fU & (IData)(
                                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                       >> 0x22U))))) 
                        & (0x34U != (0x7fU & (IData)(
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                      >> 0x22U))))) 
                       & (0x35U != (0x7fU & (IData)(
                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                     >> 0x22U))))) 
                      & (0x36U != (0x7fU & (IData)(
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                    >> 0x22U))))) 
                     & (0x38U != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                   >> 0x22U))))) 
                    & (0x39U != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                  >> 0x22U))))) 
                   & (0x3aU != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                 >> 0x22U))))) 
                  & (0x3cU != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                >> 0x22U))))) 
                 & (0x3dU != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                               >> 0x22U))))) 
                & (0x3eU != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                              >> 0x22U))))) 
               & (0x3fU != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                             >> 0x22U))))) 
              & (0x40U != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                            >> 0x22U))))) 
             & (4U <= (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                        >> 0x22U))))) 
            & (0xfU >= (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                         >> 0x22U))))) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_busy));
    vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__NOT_dtm_putCommand_put_BITS_40_TO_34_43_ULT_4___05FETC___05F_d416 
        = ((((4U <= (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                      >> 0x22U)))) 
             & (0xfU >= (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                          >> 0x22U))))) 
            & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_busy))) 
           & ((0xbU >= (0xfU & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                         >> 0x22U)) 
                                - (IData)(4U)))) & 
              ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__autoExecData) 
               >> (0xfU & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                    >> 0x22U)) - (IData)(4U))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v___05Fh13161 
        = ((0x40U & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                              >> 0x22U)) - (IData)(4U)))
            ? 0U : ((0x20U & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                       >> 0x22U)) - (IData)(4U)))
                     ? 0U : ((0x10U & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                >> 0x22U)) 
                                       - (IData)(4U)))
                              ? 0U : ((8U & ((IData)(
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                      >> 0x22U)) 
                                             - (IData)(4U)))
                                       ? ((4U & ((IData)(
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                          >> 0x22U)) 
                                                 - (IData)(4U)))
                                           ? 0U : (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                >> 0x22U)) 
                                                       - (IData)(4U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                >> 0x22U)))
                                                     ? vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_data_11
                                                     : vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_data_10)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                >> 0x22U)))
                                                     ? vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_data_9
                                                     : vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_data_8)))
                                       : ((4U & ((IData)(
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                          >> 0x22U)) 
                                                 - (IData)(4U)))
                                           ? ((2U & 
                                               ((IData)(
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                         >> 0x22U)) 
                                                - (IData)(4U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U)))
                                                   ? vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_data_7
                                                   : vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_data_6)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U)))
                                                   ? vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_data_5
                                                   : vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_data_4))
                                           : ((2U & 
                                               ((IData)(
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                         >> 0x22U)) 
                                                - (IData)(4U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U)))
                                                   ? vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_data_3
                                                   : vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_data_2)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U)))
                                                   ? vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_data_1
                                                   : vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_data_0)))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dmi_response_data___05F_1___05Fh19762 
        = ((0x40U & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                              >> 0x22U)) - (IData)(0x20U)))
            ? 0U : ((0x20U & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                       >> 0x22U)) - (IData)(0x20U)))
                     ? 0U : ((0x10U & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                >> 0x22U)) 
                                       - (IData)(0x20U)))
                              ? 0U : ((8U & ((IData)(
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                      >> 0x22U)) 
                                             - (IData)(0x20U)))
                                       ? ((4U & ((IData)(
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                          >> 0x22U)) 
                                                 - (IData)(0x20U)))
                                           ? ((2U & 
                                               ((IData)(
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                         >> 0x22U)) 
                                                - (IData)(0x20U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U)))
                                                   ? vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__progbuf_15
                                                   : vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__progbuf_14)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U)))
                                                   ? vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__progbuf_13
                                                   : vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__progbuf_12))
                                           : ((2U & 
                                               ((IData)(
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                         >> 0x22U)) 
                                                - (IData)(0x20U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U)))
                                                   ? vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__progbuf_11
                                                   : vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__progbuf_10)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U)))
                                                   ? vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__progbuf_9
                                                   : vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__progbuf_8)))
                                       : ((4U & ((IData)(
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                          >> 0x22U)) 
                                                 - (IData)(0x20U)))
                                           ? ((2U & 
                                               ((IData)(
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                         >> 0x22U)) 
                                                - (IData)(0x20U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U)))
                                                   ? vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__progbuf_7
                                                   : vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__progbuf_6)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U)))
                                                   ? vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__progbuf_5
                                                   : vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__progbuf_4))
                                           : ((2U & 
                                               ((IData)(
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                         >> 0x22U)) 
                                                - (IData)(0x20U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U)))
                                                   ? vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__progbuf_3
                                                   : vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__progbuf_2)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U)))
                                                   ? vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__progbuf_1
                                                   : vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__progbuf_0)))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate_EN 
        = (((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
            & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__tms))) 
           | ((0U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
              & (((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__tms)) 
                 | ((1U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
                    & (((4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
                        & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__tms)) 
                       | ((4U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
                          & (((6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
                              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__tms)) 
                             | ((6U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
                                & (((0xbU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
                                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__tms)) 
                                   | ((0xbU != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
                                      & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__tms) 
                                         | (0xdU != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)))))))))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction_shiftreg_D_IN 
        = ((0xaU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate))
            ? 0x15U : (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__tdi) 
                        << 4U) | (0xfU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction_shiftreg) 
                                          >> 1U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dtmcontrol_shiftreg_D_IN 
        = ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate))
            ? (0x7061U | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__rg_dmihardreset) 
                            << 0x11U) | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__rg_dmireset) 
                                         << 0x10U)) 
                          | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmistat) 
                             << 0xaU))) : (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__tdi) 
                                            << 0x1fU) 
                                           | (0x7fffffffU 
                                              & (vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dtmcontrol_shiftreg 
                                                 >> 1U))));
    vlTOPp->__Vtableidx21 = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__tms) 
                              << 8U) | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__tms)
                                           ? 2U : 1U) 
                                         << 4U) | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate_D_IN 
        = vlTOPp->__Vtable21_mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate_D_IN
        [vlTOPp->__Vtableidx21];
    vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dtm_putCommand_put_BITS_1_TO_0_44_EQ_0b10_22_A_ETC___05F_d436 
        = ((((((((2U == (3U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data))) 
                 & (0x10U != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                               >> 0x22U))))) 
                & (0x11U != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                              >> 0x22U))))) 
               & (0x12U != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                             >> 0x22U))))) 
              & (0x14U != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                            >> 0x22U))))) 
             & (0x15U != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                           >> 0x22U))))) 
            & (0x16U != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                          >> 0x22U))))) 
           & ((0x17U == (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                          >> 0x22U)))) 
              | (((((((((((0x18U != (0x7fU & (IData)(
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                      >> 0x22U)))) 
                          & (0x30U != (0x7fU & (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                        >> 0x22U))))) 
                         & (0x36U != (0x7fU & (IData)(
                                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                       >> 0x22U))))) 
                        & (0x38U != (0x7fU & (IData)(
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                      >> 0x22U))))) 
                       & (0x39U != (0x7fU & (IData)(
                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                     >> 0x22U))))) 
                      & (0x3aU != (0x7fU & (IData)(
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                    >> 0x22U))))) 
                     & (0x3cU != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                   >> 0x22U))))) 
                    & (0x3dU != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                  >> 0x22U))))) 
                   & (0x3eU != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                 >> 0x22U))))) 
                  & (0x3fU != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                >> 0x22U))))) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__NOT_dtm_putCommand_put_BITS_40_TO_34_43_ULT_4___05FETC___05F_d416))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dtm_putCommand_put_BITS_1_TO_0_44_EQ_0b1_46_AN_ETC___05F_d421 
        = ((((((((((((((((((((((((((((1U == (3U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data))) 
                                     & (0x10U != (0x7fU 
                                                  & (IData)(
                                                            (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                             >> 0x22U))))) 
                                    & (0x11U != (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                            >> 0x22U))))) 
                                   & (0x12U != (0x7fU 
                                                & (IData)(
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                           >> 0x22U))))) 
                                  & (0x13U != (0x7fU 
                                               & (IData)(
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                          >> 0x22U))))) 
                                 & (0x14U != (0x7fU 
                                              & (IData)(
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                         >> 0x22U))))) 
                                & (0x15U != (0x7fU 
                                             & (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                        >> 0x22U))))) 
                               & (0x16U != (0x7fU & (IData)(
                                                            (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                             >> 0x22U))))) 
                              & (0x17U != (0x7fU & (IData)(
                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                            >> 0x22U))))) 
                             & (0x18U != (0x7fU & (IData)(
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                           >> 0x22U))))) 
                            & (0x19U != (0x7fU & (IData)(
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                          >> 0x22U))))) 
                           & (0x1aU != (0x7fU & (IData)(
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                         >> 0x22U))))) 
                          & (0x1bU != (0x7fU & (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                        >> 0x22U))))) 
                         & (0x1cU != (0x7fU & (IData)(
                                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                       >> 0x22U))))) 
                        & (0x1dU != (0x7fU & (IData)(
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                      >> 0x22U))))) 
                       & (0x30U != (0x7fU & (IData)(
                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                     >> 0x22U))))) 
                      & (0x34U != (0x7fU & (IData)(
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                    >> 0x22U))))) 
                     & (0x35U != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                   >> 0x22U))))) 
                    & (0x36U != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                  >> 0x22U))))) 
                   & (0x38U != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                 >> 0x22U))))) 
                  & (0x39U != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                >> 0x22U))))) 
                 & (0x3aU != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                               >> 0x22U))))) 
                & (0x3cU != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                              >> 0x22U))))) 
               & (0x3dU != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                             >> 0x22U))))) 
              & (0x3eU != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                            >> 0x22U))))) 
             & (0x3fU != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                           >> 0x22U))))) 
            & (0x40U != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                          >> 0x22U))))) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__NOT_dtm_putCommand_put_BITS_40_TO_34_43_ULT_4___05FETC___05F_d416));
    vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh13801 
        = (((4U <= (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                     >> 0x22U)))) & 
            (0xfU >= (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                       >> 0x22U)))))
            ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_busy)
                ? 0U : vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v___05Fh13161)
            : (((0x20U <= (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                            >> 0x22U)))) 
                & (0x2fU >= (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                              >> 0x22U)))))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dmi_response_data___05F_1___05Fh19762
                : 0U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh19650 
        = ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                          >> 0x28U))) ? ((1U & (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                        >> 0x27U)))
                                          ? vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh13801
                                          : ((1U & (IData)(
                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                            >> 0x26U)))
                                              ? vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh13801
                                              : ((1U 
                                                  & (IData)(
                                                            (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                             >> 0x25U)))
                                                  ? vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh13801
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x24U)))
                                                   ? vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh13801
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                               >> 0x23U)))
                                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh13801
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                >> 0x22U)))
                                                     ? vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh13801
                                                     : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__vrg_halted_0)))))))
            : ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                              >> 0x27U))) ? ((1U & (IData)(
                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                            >> 0x26U)))
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                             >> 0x25U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x24U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                               >> 0x23U)))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                >> 0x22U)))
                                                     ? vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbData1
                                                     : vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbData0))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                               >> 0x23U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                >> 0x22U)))
                                                     ? vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh13801
                                                     : vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbAddress1)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                >> 0x22U)))
                                                     ? vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbAddress0
                                                     : 
                                                    (0x2000040fU 
                                                     | ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbBusyError) 
                                                            << 0x16U) 
                                                           | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbBusy) 
                                                              << 0x15U)) 
                                                          | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbReadOnAddr) 
                                                              << 0x14U) 
                                                             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbAccess) 
                                                                << 0x11U))) 
                                                         | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbAutoIncrement) 
                                                             << 0x10U) 
                                                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbReadOnData) 
                                                               << 0xfU))) 
                                                        | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbError) 
                                                           << 0xcU))))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x24U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                               >> 0x23U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                >> 0x22U)))
                                                     ? vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh13801
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                               >> 0x23U)))
                                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh13801
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                >> 0x22U)))
                                                     ? vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh13801
                                                     : vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__auth_data))))
                                              : vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh13801)
                : ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                  >> 0x26U))) ? ((1U 
                                                  & (IData)(
                                                            (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                             >> 0x25U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x24U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                               >> 0x23U)))
                                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh13801
                                                    : 0U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                               >> 0x23U)))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                >> 0x22U)))
                                                     ? 0U
                                                     : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__autoExecData))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x24U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                               >> 0x23U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                >> 0x22U)))
                                                     ? 
                                                    (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_ar_cmdType) 
                                                        << 0x18U) 
                                                       | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_ar_aarSize) 
                                                          << 0x14U)) 
                                                      | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_ar_aarPostIncrement) 
                                                          << 0x13U) 
                                                         | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_ar_transfer) 
                                                            << 0x11U))) 
                                                     | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_ar_write) 
                                                         << 0x10U) 
                                                        | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_ar_regno)))
                                                     : 
                                                    (0xcU 
                                                     | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_busy) 
                                                         << 0xcU) 
                                                        | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_cmderr) 
                                                           << 8U))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                >> 0x22U)))
                                                     ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__maskData)
                                                     : 0U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                               >> 0x23U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                >> 0x22U)))
                                                     ? 0U
                                                     : 0xc7c0U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                >> 0x22U)))
                                                     ? 
                                                    (0x32U 
                                                     | (((((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__allHaveReset) 
                                                               << 0x13U) 
                                                              | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__anyHaveReset) 
                                                                  << 0x12U) 
                                                                 | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__allResumeAck) 
                                                                    << 0x11U))) 
                                                             | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__anyResumeAck) 
                                                                 << 0x10U) 
                                                                | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__allNonExistent) 
                                                                   << 0xfU))) 
                                                            | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__anyNonExistent) 
                                                                << 0xeU) 
                                                               | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__allUnAvail) 
                                                                  << 0xdU))) 
                                                           | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__anyUnAvail) 
                                                               << 0xcU) 
                                                              | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__allRunning) 
                                                                 << 0xbU))) 
                                                          | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__anyRunning) 
                                                              << 0xaU) 
                                                             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__allHalted) 
                                                                << 9U))) 
                                                         | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__anyHalted) 
                                                             << 8U) 
                                                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__authenticated) 
                                                               << 7U))) 
                                                        | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__authbusy) 
                                                           << 6U)))
                                                     : 
                                                    ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__haltReq) 
                                                         << 0x1fU) 
                                                        | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__resumeReq) 
                                                           << 0x1eU)) 
                                                       | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__hartReset) 
                                                           << 0x1dU) 
                                                          | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__ackHaveReset) 
                                                             << 0x1cU))) 
                                                      | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__setResetHaltRequest) 
                                                          << 3U) 
                                                         | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__clrResetHaltReq) 
                                                            << 2U))) 
                                                     | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__nDMReset) 
                                                         << 1U) 
                                                        | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dmActive)))))))
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh13801)));
}

VL_INLINE_OPT void VmkTbSoc::_multiclk__TOP__70(VmkTbSoc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_multiclk__TOP__70\n"); );
    VmkTbSoc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__rg_dmireset_1_whas 
        = ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
           | ((8U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
              & (0x10U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__wr_dmihardreset_generated_whas 
        = (((8U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
            & (0x10U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction))) 
           & (vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dtmcontrol_shiftreg 
              >> 0x11U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__wr_dmireset_generated_whas 
        = (((8U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
            & (0x10U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction))) 
           & (vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dtmcontrol_shiftreg 
              >> 0x10U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__crossed_instruction_wget___05F51_EQ_0x11_85_AND_NO_ETC___05F_d267 
        = ((0x11U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction)) 
           & (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__request_to_DM__DOT__empty_reg) 
               | (0U == (3U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg)))) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__capture_repsonse_from_dm)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__crossed_instruction_wget___05F51_EQ_0x11_85_AND_re_ETC___05F_d198 
        = ((((0x11U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction)) 
             & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__request_to_DM__DOT__empty_reg))) 
            & (0U != (3U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg)))) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__capture_repsonse_from_dm)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__WILL_FIRE_RL_dmihardreset_generated 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__wr_dmihardreset_generated_whas) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_connect_tap_request_to_syncfifo)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__request_to_DM_ENQ 
        = (((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__wr_dmihardreset_generated_whas)) 
            & (8U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate))) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__crossed_instruction_wget___05F51_EQ_0x11_85_AND_re_ETC___05F_d198));
    vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate_EQ_3_7_AND_crossed_instruction_wget___05F_ETC___05F_d219 
        = ((((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
             & (0x11U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction))) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_from_DM__DOT__empty_reg)) 
           | ((8U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__crossed_instruction_wget___05F51_EQ_0x11_85_AND_re_ETC___05F_d198)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__request_to_DM_DEQ 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__WILL_FIRE_RL_dmihardreset_generated) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_connect_tap_request_to_syncfifo));
    vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_from_DM_DEQ 
        = (((((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__wr_dmihardreset_generated_whas)) 
              & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate))) 
             & (0x11U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction))) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_from_DM__DOT__empty_reg)) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__WILL_FIRE_RL_dmihardreset_generated));
}

VL_INLINE_OPT void VmkTbSoc::_sequent__TOP__71(VmkTbSoc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_sequent__TOP__71\n"); );
    VmkTbSoc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__dDeqToggle 
        = vlTOPp->__Vdly__mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__dDeqToggle;
    vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_read_synced_request_to_dm 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__dEnqToggle) 
            != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__dDeqToggle)) 
           & ((~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dmi_response 
                          >> 0x22U))) & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_command_good))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__WILL_FIRE_RL_response 
        = ((((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_command_good)) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_busy)) 
            & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_rg_abst_response[2U]) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_read_synced_request_to_dm)));
}

VL_INLINE_OPT void VmkTbSoc::_sequent__TOP__72(VmkTbSoc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_sequent__TOP__72\n"); );
    VmkTbSoc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkTbSoc__DOT__trst__DOT__rst = (1U & ((~ (IData)(vlTOPp->RST_N)) 
                                                  | (~ 
                                                     ((IData)(vlTOPp->mkTbSoc__DOT__rg_initial) 
                                                      & ((IData)(vlTOPp->mkTbSoc__DOT__delayed_actor2) 
                                                         >> 4U)))));
}

VL_INLINE_OPT void VmkTbSoc::_multiclk__TOP__73(VmkTbSoc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_multiclk__TOP__73\n"); );
    VmkTbSoc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg_port1___05Fread 
        = (((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__wr_dmihardreset_generated_whas)) 
            & ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
               | (((((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
                     & (0x11U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction))) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_from_DM__DOT__empty_reg)) 
                   | ((4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
                      & (0x11U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction)))) 
                  | ((8U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
                     & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__crossed_instruction_wget___05F51_EQ_0x11_85_AND_re_ETC___05F_d198)))))
            ? ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate))
                ? 0ULL : ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate))
                           ? (((QData)((IData)((0x3fU 
                                                & (IData)(
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg 
                                                           >> 0x22U))))) 
                               << 0x22U) | vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__x___05Fh4715)
                           : ((4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate))
                               ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__tdi)) 
                                   << 0x27U) | (0x7fffffffffULL 
                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg 
                                                   >> 1U)))
                               : (3ULL | (0xfffffffffcULL 
                                          & vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg)))))
            : vlTOPp->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg);
}

VL_INLINE_OPT void VmkTbSoc::_multiclk__TOP__74(VmkTbSoc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_multiclk__TOP__74\n"); );
    VmkTbSoc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__MUX_abst_ar_regno_write_1___05FSEL_2 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_read_synced_request_to_dm) 
            & (2U == (3U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data)))) 
           & (0x17U == (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                         >> 0x22U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__ackHaveReset_1_whas 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_read_synced_request_to_dm) 
            & (2U == (3U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data)))) 
           & (0x10U == (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                         >> 0x22U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbBusyError_EN 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_read_synced_request_to_dm) 
           & (((1U == (3U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data))) 
               & (((0x3cU == (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                               >> 0x22U)))) 
                   | (((0x3dU == (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                   >> 0x22U)))) 
                       | (0x3eU == (0x7fU & (IData)(
                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                     >> 0x22U))))) 
                      | (0x3fU == (0x7fU & (IData)(
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                    >> 0x22U)))))) 
                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbBusy))) 
              | ((2U == (3U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data))) 
                 & ((((((((0x36U == (0x7fU & (IData)(
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                      >> 0x22U)))) 
                          & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbBusy)) 
                         | ((0x38U == (0x7fU & (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                        >> 0x22U)))) 
                            & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                       >> 0x18U)))) 
                        | ((0x39U == (0x7fU & (IData)(
                                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                       >> 0x22U)))) 
                           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbBusy))) 
                       | ((0x3aU == (0x7fU & (IData)(
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                      >> 0x22U)))) 
                          & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbBusy))) 
                      | ((0x3cU == (0x7fU & (IData)(
                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                     >> 0x22U)))) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbBusy))) 
                     | ((0x3dU == (0x7fU & (IData)(
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                    >> 0x22U)))) 
                        & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbBusy))) 
                    | (((0x3eU == (0x7fU & (IData)(
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                    >> 0x22U)))) 
                        | (0x3fU == (0x7fU & (IData)(
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                      >> 0x22U))))) 
                       & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbBusy))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__MUX_startSBAccess_write_1___05FSEL_2 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_read_synced_request_to_dm) 
           & ((((((1U == (3U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data))) 
                  & (0x3cU == (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                >> 0x22U))))) 
                 & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbBusy))) 
                & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbBusyError))) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbReadOnData)) 
              | (((((((((((((2U == (3U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data))) 
                            & (0x10U != (0x7fU & (IData)(
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                          >> 0x22U))))) 
                           & (0x11U != (0x7fU & (IData)(
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                         >> 0x22U))))) 
                          & (0x12U != (0x7fU & (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                        >> 0x22U))))) 
                         & (0x14U != (0x7fU & (IData)(
                                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                       >> 0x22U))))) 
                        & (0x15U != (0x7fU & (IData)(
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                      >> 0x22U))))) 
                       & (0x16U != (0x7fU & (IData)(
                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                     >> 0x22U))))) 
                      & (0x17U != (0x7fU & (IData)(
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                    >> 0x22U))))) 
                     & (0x18U != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                   >> 0x22U))))) 
                    & (0x30U != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                  >> 0x22U))))) 
                   & (0x36U != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                 >> 0x22U))))) 
                  & (0x38U != (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                >> 0x22U))))) 
                 & (((((0x39U == (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                   >> 0x22U)))) 
                       & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbBusy))) 
                      & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbBusyError))) 
                     & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbReadOnAddr)) 
                    | (((0x3cU == (0x7fU & (IData)(
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                    >> 0x22U)))) 
                        & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbBusy))) 
                       & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbBusyError)))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_ar_regno_D_IN 
        = (0xffffU & (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__WILL_FIRE_RL_response) 
                       & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_ar_aarPostIncrement))
                       ? ((IData)(1U) + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_ar_regno))
                       : (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                  >> 2U))));
}

VL_INLINE_OPT void VmkTbSoc::_sequent__TOP__75(VmkTbSoc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_sequent__TOP__75\n"); );
    VmkTbSoc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__rg_initial) {
            vlTOPp->mkTbSoc__DOT__delayed_actor2 = vlTOPp->mkTbSoc__DOT__delayed_actor;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__delayed_actor2 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__rg_initial) {
            vlTOPp->mkTbSoc__DOT__delayed_actor = (0x1fU 
                                                   & (IData)(vlTOPp->mkTbSoc__DOT__TASK_get_frame___05F_d244));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__delayed_actor = 0U;
    }
}

VL_INLINE_OPT void VmkTbSoc::_sequent__TOP__76(VmkTbSoc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_sequent__TOP__76\n"); );
    VmkTbSoc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__rg_initial_EN) {
            vlTOPp->mkTbSoc__DOT__rg_initial = 1U;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__rg_initial = 0U;
    }
}

VL_INLINE_OPT void VmkTbSoc::_multiclk__TOP__77(VmkTbSoc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_multiclk__TOP__77\n"); );
    VmkTbSoc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkTbSoc__DOT__rg_initial_EN = ((~ (IData)(vlTOPp->mkTbSoc__DOT__rg_initial)) 
                                           & (0xffffffffU 
                                              != vlTOPp->mkTbSoc__DOT__b___05Fh16357));
}

void VmkTbSoc::_eval(VmkTbSoc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_eval\n"); );
    VmkTbSoc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->_sequent__TOP__7(vlSymsp);
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->_sequent__TOP__9(vlSymsp);
        vlTOPp->_sequent__TOP__10(vlSymsp);
        vlTOPp->_sequent__TOP__11(vlSymsp);
        vlTOPp->_sequent__TOP__12(vlSymsp);
        vlTOPp->_sequent__TOP__13(vlSymsp);
        vlTOPp->_sequent__TOP__14(vlSymsp);
        vlTOPp->_sequent__TOP__15(vlSymsp);
        vlTOPp->_sequent__TOP__16(vlSymsp);
        vlTOPp->_sequent__TOP__17(vlSymsp);
        vlTOPp->_sequent__TOP__18(vlSymsp);
        vlTOPp->_sequent__TOP__19(vlSymsp);
        vlTOPp->_sequent__TOP__20(vlSymsp);
        vlTOPp->_sequent__TOP__21(vlSymsp);
        vlTOPp->_sequent__TOP__22(vlSymsp);
        vlTOPp->_sequent__TOP__23(vlSymsp);
        vlTOPp->_sequent__TOP__24(vlSymsp);
    }
    if ((((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK))) 
         | ((~ (IData)(vlTOPp->RST_N)) & (IData)(vlTOPp->__Vclklast__TOP__RST_N)))) {
        vlTOPp->_sequent__TOP__25(vlSymsp);
        vlTOPp->_sequent__TOP__26(vlSymsp);
    }
    if ((((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__mkTbSoc__DOT__trst__DOT__rst)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__mkTbSoc__DOT__trst__DOT__rst)))) {
        vlTOPp->_sequent__TOP__27(vlSymsp);
    }
    if (((~ (IData)(vlTOPp->CLK)) & (IData)(vlTOPp->__Vclklast__TOP__CLK))) {
        vlTOPp->_sequent__TOP__29(vlSymsp);
        vlTOPp->_sequent__TOP__30(vlSymsp);
    }
    vlTOPp->_combo__TOP__50(vlSymsp);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__51(vlSymsp);
        vlTOPp->_sequent__TOP__52(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->RST_N)) & (IData)(vlTOPp->__Vclklast__TOP__RST_N)) 
         | ((IData)(vlTOPp->mkTbSoc__DOT__tck_clk_CLK_OUT) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__mkTbSoc__DOT__tck_clk_CLK_OUT))))) {
        vlTOPp->_sequent__TOP__53(vlSymsp);
    }
    if (((IData)(vlTOPp->mkTbSoc__DOT__tck_clk_CLK_OUT) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__mkTbSoc__DOT__tck_clk_CLK_OUT)))) {
        vlTOPp->_sequent__TOP__54(vlSymsp);
    }
    if ((((IData)(vlTOPp->mkTbSoc__DOT__tck_clk_CLK_OUT) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__mkTbSoc__DOT__tck_clk_CLK_OUT))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__mkTbSoc__DOT__trst__DOT__rst)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__mkTbSoc__DOT__trst__DOT__rst)))) {
        vlTOPp->_sequent__TOP__55(vlSymsp);
    }
    if (((~ (IData)(vlTOPp->mkTbSoc__DOT__tck_clk_CLK_OUT)) 
         & (IData)(vlTOPp->__Vclklast__TOP__mkTbSoc__DOT__tck_clk_CLK_OUT))) {
        vlTOPp->_sequent__TOP__57(vlSymsp);
    }
    if ((((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK))) 
         | ((~ (IData)(vlTOPp->RST_N)) & (IData)(vlTOPp->__Vclklast__TOP__RST_N)))) {
        vlTOPp->_sequent__TOP__58(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->RST_N)) & (IData)(vlTOPp->__Vclklast__TOP__RST_N)) 
         | ((IData)(vlTOPp->mkTbSoc__DOT__tck_clk_CLK_OUT) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__mkTbSoc__DOT__tck_clk_CLK_OUT))))) {
        vlTOPp->_sequent__TOP__59(vlSymsp);
    }
    if (((IData)(vlTOPp->mkTbSoc__DOT__tck_clk_CLK_OUT) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__mkTbSoc__DOT__tck_clk_CLK_OUT)))) {
        vlTOPp->_sequent__TOP__60(vlSymsp);
    }
    if ((((IData)(vlTOPp->mkTbSoc__DOT__tck_clk_CLK_OUT) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__mkTbSoc__DOT__tck_clk_CLK_OUT))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__mkTbSoc__DOT__trst__DOT__rst)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__mkTbSoc__DOT__trst__DOT__rst)))) {
        vlTOPp->_sequent__TOP__61(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->mkTbSoc__DOT__tck_clk_CLK_OUT)) 
          & (IData)(vlTOPp->__Vclklast__TOP__mkTbSoc__DOT__tck_clk_CLK_OUT)) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__mkTbSoc__DOT__trst__DOT__rst)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__mkTbSoc__DOT__trst__DOT__rst)))) {
        vlTOPp->_sequent__TOP__62(vlSymsp);
    }
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__63(vlSymsp);
    }
    if ((((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK))) 
         | ((~ (IData)(vlTOPp->RST_N)) & (IData)(vlTOPp->__Vclklast__TOP__RST_N)))) {
        vlTOPp->_sequent__TOP__64(vlSymsp);
    }
    if ((((~ (IData)(vlTOPp->RST_N)) & (IData)(vlTOPp->__Vclklast__TOP__RST_N)) 
         | ((IData)(vlTOPp->mkTbSoc__DOT__tck_clk_CLK_OUT) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__mkTbSoc__DOT__tck_clk_CLK_OUT))))) {
        vlTOPp->_sequent__TOP__65(vlSymsp);
    }
    if ((((IData)(vlTOPp->mkTbSoc__DOT__tck_clk_CLK_OUT) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__mkTbSoc__DOT__tck_clk_CLK_OUT))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__mkTbSoc__DOT__trst__DOT__rst)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__mkTbSoc__DOT__trst__DOT__rst)))) {
        vlTOPp->_sequent__TOP__66(vlSymsp);
    }
    if (((((~ (IData)(vlTOPp->RST_N)) & (IData)(vlTOPp->__Vclklast__TOP__RST_N)) 
          | ((IData)(vlTOPp->mkTbSoc__DOT__tck_clk_CLK_OUT) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__mkTbSoc__DOT__tck_clk_CLK_OUT)))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__mkTbSoc__DOT__trst__DOT__rst)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__mkTbSoc__DOT__trst__DOT__rst)))) {
        vlTOPp->_multiclk__TOP__67(vlSymsp);
    }
    if (((IData)(vlTOPp->mkTbSoc__DOT__tck_clk_CLK_OUT) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__mkTbSoc__DOT__tck_clk_CLK_OUT)))) {
        vlTOPp->_sequent__TOP__68(vlSymsp);
    }
    if (((((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK))) 
          | ((IData)(vlTOPp->mkTbSoc__DOT__tck_clk_CLK_OUT) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__mkTbSoc__DOT__tck_clk_CLK_OUT)))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__mkTbSoc__DOT__trst__DOT__rst)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__mkTbSoc__DOT__trst__DOT__rst)))) {
        vlTOPp->_multiclk__TOP__69(vlSymsp);
    }
    if ((((IData)(vlTOPp->mkTbSoc__DOT__tck_clk_CLK_OUT) 
          ^ (IData)(vlTOPp->__Vclklast__TOP__mkTbSoc__DOT__tck_clk_CLK_OUT)) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__mkTbSoc__DOT__trst__DOT__rst)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__mkTbSoc__DOT__trst__DOT__rst)))) {
        vlTOPp->_multiclk__TOP__70(vlSymsp);
    }
    if ((((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__mkTbSoc__DOT__trst__DOT__rst)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__mkTbSoc__DOT__trst__DOT__rst)))) {
        vlTOPp->_sequent__TOP__71(vlSymsp);
    }
    if ((((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK))) 
         | ((~ (IData)(vlTOPp->RST_N)) & (IData)(vlTOPp->__Vclklast__TOP__RST_N)))) {
        vlTOPp->_sequent__TOP__72(vlSymsp);
    }
    if (((((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK))) 
          | ((IData)(vlTOPp->mkTbSoc__DOT__tck_clk_CLK_OUT) 
             ^ (IData)(vlTOPp->__Vclklast__TOP__mkTbSoc__DOT__tck_clk_CLK_OUT))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__mkTbSoc__DOT__trst__DOT__rst)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__mkTbSoc__DOT__trst__DOT__rst)))) {
        vlTOPp->_multiclk__TOP__73(vlSymsp);
    }
    if (((((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK))) 
          | ((IData)(vlTOPp->mkTbSoc__DOT__tck_clk_CLK_OUT) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__mkTbSoc__DOT__tck_clk_CLK_OUT)))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__mkTbSoc__DOT__trst__DOT__rst)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__mkTbSoc__DOT__trst__DOT__rst)))) {
        vlTOPp->_multiclk__TOP__74(vlSymsp);
    }
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__75(vlSymsp);
    }
    if ((((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK))) 
         | ((~ (IData)(vlTOPp->RST_N)) & (IData)(vlTOPp->__Vclklast__TOP__RST_N)))) {
        vlTOPp->_sequent__TOP__76(vlSymsp);
    }
    if ((((IData)(vlTOPp->CLK) ^ (IData)(vlTOPp->__Vclklast__TOP__CLK)) 
         | ((~ (IData)(vlTOPp->RST_N)) & (IData)(vlTOPp->__Vclklast__TOP__RST_N)))) {
        vlTOPp->_multiclk__TOP__77(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
    vlTOPp->__Vclklast__TOP__RST_N = vlTOPp->RST_N;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__mkTbSoc__DOT__trst__DOT__rst 
        = vlTOPp->__VinpClk__TOP__mkTbSoc__DOT__trst__DOT__rst;
    vlTOPp->__Vclklast__TOP__mkTbSoc__DOT__tck_clk_CLK_OUT 
        = vlTOPp->mkTbSoc__DOT__tck_clk_CLK_OUT;
    vlTOPp->__VinpClk__TOP__mkTbSoc__DOT__trst__DOT__rst 
        = vlTOPp->mkTbSoc__DOT__trst__DOT__rst;
}

VL_INLINE_OPT QData VmkTbSoc::_change_request(VmkTbSoc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_change_request\n"); );
    VmkTbSoc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VmkTbSoc::_change_request_1(VmkTbSoc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_change_request_1\n"); );
    VmkTbSoc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->mkTbSoc__DOT__trst__DOT__rst ^ vlTOPp->__Vchglast__TOP__mkTbSoc__DOT__trst__DOT__rst));
    VL_DEBUG_IF( if(__req && ((vlTOPp->mkTbSoc__DOT__trst__DOT__rst ^ vlTOPp->__Vchglast__TOP__mkTbSoc__DOT__trst__DOT__rst))) VL_DBG_MSGF("        CHANGE: verilog//MakeReset0.v:35: mkTbSoc.trst.rst\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__mkTbSoc__DOT__trst__DOT__rst 
        = vlTOPp->mkTbSoc__DOT__trst__DOT__rst;
    return __req;
}

#ifdef VL_DEBUG
void VmkTbSoc::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((RST_N & 0xfeU))) {
        Verilated::overWidthError("RST_N");}
    if (VL_UNLIKELY((correlator_master_AWREADY & 0xfeU))) {
        Verilated::overWidthError("correlator_master_AWREADY");}
    if (VL_UNLIKELY((correlator_master_WREADY & 0xfeU))) {
        Verilated::overWidthError("correlator_master_WREADY");}
    if (VL_UNLIKELY((correlator_master_BVALID & 0xfeU))) {
        Verilated::overWidthError("correlator_master_BVALID");}
    if (VL_UNLIKELY((correlator_master_BRESP & 0xfcU))) {
        Verilated::overWidthError("correlator_master_BRESP");}
    if (VL_UNLIKELY((correlator_master_BID & 0xf0U))) {
        Verilated::overWidthError("correlator_master_BID");}
    if (VL_UNLIKELY((correlator_master_ARREADY & 0xfeU))) {
        Verilated::overWidthError("correlator_master_ARREADY");}
    if (VL_UNLIKELY((correlator_master_RVALID & 0xfeU))) {
        Verilated::overWidthError("correlator_master_RVALID");}
    if (VL_UNLIKELY((correlator_master_RRESP & 0xfcU))) {
        Verilated::overWidthError("correlator_master_RRESP");}
    if (VL_UNLIKELY((correlator_master_RLAST & 0xfeU))) {
        Verilated::overWidthError("correlator_master_RLAST");}
    if (VL_UNLIKELY((correlator_master_RID & 0xf0U))) {
        Verilated::overWidthError("correlator_master_RID");}
    if (VL_UNLIKELY((EN_interrupts & 0xfeU))) {
        Verilated::overWidthError("EN_interrupts");}
    if (VL_UNLIKELY((boot_option_option & 0xfeU))) {
        Verilated::overWidthError("boot_option_option");}
}
#endif  // VL_DEBUG
