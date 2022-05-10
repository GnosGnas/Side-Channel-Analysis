// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTbSoc.h for the primary calling header

#include "VmkTbSoc.h"
#include "VmkTbSoc__Syms.h"

VL_INLINE_OPT void VmkTbSoc::_sequent__TOP__24(VmkTbSoc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_sequent__TOP__24\n"); );
    VmkTbSoc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp3161[3];
    WData/*95:0*/ __Vtemp3162[3];
    WData/*159:0*/ __Vtemp3163[5];
    WData/*95:0*/ __Vtemp3174[3];
    WData/*95:0*/ __Vtemp3177[3];
    WData/*95:0*/ __Vtemp3192[3];
    WData/*95:0*/ __Vtemp3202[3];
    WData/*95:0*/ __Vtemp3207[3];
    WData/*95:0*/ __Vtemp3219[3];
    WData/*95:0*/ __Vtemp3220[3];
    WData/*95:0*/ __Vtemp3221[3];
    WData/*95:0*/ __Vtemp3223[3];
    WData/*95:0*/ __Vtemp3234[3];
    WData/*95:0*/ __Vtemp3250[3];
    WData/*95:0*/ __Vtemp3262[3];
    WData/*95:0*/ __Vtemp3278[3];
    WData/*95:0*/ __Vtemp3284[3];
    WData/*95:0*/ __Vtemp3335[3];
    WData/*95:0*/ __Vtemp3341[3];
    WData/*95:0*/ __Vtemp3360[3];
    WData/*95:0*/ __Vtemp3364[3];
    WData/*95:0*/ __Vtemp3370[3];
    WData/*95:0*/ __Vtemp3373[3];
    WData/*95:0*/ __Vtemp3375[3];
    WData/*95:0*/ __Vtemp3377[3];
    WData/*95:0*/ __Vtemp3380[3];
    WData/*95:0*/ __Vtemp3381[3];
    WData/*95:0*/ __Vtemp3382[3];
    WData/*95:0*/ __Vtemp3399[3];
    WData/*95:0*/ __Vtemp3401[3];
    // Body
    vlTOPp->mkTbSoc__DOT__soc__DOT__IF_aesbuf_aes_aes_b_blockaes_mode___05F8306_EQ_0_8_ETC___05F_d78561 
        = ((4U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_))
            ? vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1771149
            : ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1759673
                : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1753930
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1777347 
        = ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
            ? ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                ? ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                    ? ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x16U : 0xbbU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x54U : 0xb0U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xfU : 0x2dU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x99U : 0x41U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x68U : 0x42U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xe6U : 0xbfU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xdU : 0x89U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xa1U : 0x8cU))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xdfU : 0x28U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x55U : 0xceU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xe9U : 0x87U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x1eU : 0x9bU)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x94U : 0x8eU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xd9U : 0x69U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x11U : 0x98U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xf8U : 0xe1U)))))
                    : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x9eU : 0x1dU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xc1U : 0x86U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xb9U : 0x57U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x35U : 0x61U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xeU : 0xf6U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 3U : 0x48U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x66U : 0xb5U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x3eU : 0x70U))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x8aU : 0x8bU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xbdU : 0x4bU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x1fU : 0x74U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xddU : 0xe8U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xc6U : 0xb4U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xa6U : 0x1cU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x2eU : 0x25U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x78U : 0xbaU))))))
                : ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                    ? ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 8U : 0xaeU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x7aU : 0x65U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xeaU : 0xf4U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x56U : 0x6cU)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xa9U : 0x4eU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xd5U : 0x8dU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x6dU : 0x37U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xc8U : 0xe7U))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x79U : 0xe4U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x95U : 0x91U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x62U : 0xacU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xd3U : 0xc2U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x5cU : 0x24U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 6U : 0x49U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xaU : 0x3aU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x32U : 0xe0U)))))
                    : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xdbU : 0xbU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x5eU : 0xdeU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x14U : 0xb8U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xeeU : 0x46U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x88U : 0x90U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x2aU : 0x22U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xdcU : 0x4fU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x81U : 0x60U))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x73U : 0x19U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x5dU : 0x64U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x3dU : 0x7eU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xa7U : 0xc4U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x17U : 0x44U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x97U : 0x5fU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xecU : 0x13U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xcU : 0xcdU)))))))
            : ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                ? ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                    ? ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xd2U : 0xf3U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xffU : 0x10U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x21U : 0xdaU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xb6U : 0xbcU)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xf5U : 0x38U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x9dU : 0x92U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x8fU : 0x40U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xa3U : 0x51U))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xa8U : 0x9fU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x3cU : 0x50U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x7fU : 2U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xf9U : 0x45U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x85U : 0x33U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x4dU : 0x43U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xfbU : 0xaaU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xefU : 0xd0U)))))
                    : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xcfU : 0x58U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x4cU : 0x4aU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x39U : 0xbeU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xcbU : 0x6aU)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x5bU : 0xb1U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xfcU : 0x20U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xedU : 0U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xd1U : 0x53U))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x84U : 0x2fU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xe3U : 0x29U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xb3U : 0xd6U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x3bU : 0x52U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xa0U : 0x5aU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x6eU : 0x1bU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x1aU : 0x2cU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x83U : 9U))))))
                : ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                    ? ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x75U : 0xb2U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x27U : 0xebU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xe2U : 0x80U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x12U : 7U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x9aU : 5U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x96U : 0x18U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xc3U : 0x23U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xc7U : 4U))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x15U : 0x31U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xd8U : 0x71U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xf1U : 0xe5U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xa5U : 0x34U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xccU : 0xf7U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x3fU : 0x36U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x26U : 0x93U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xfdU : 0xb7U)))))
                    : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xc0U : 0x72U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xa4U : 0x9cU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xafU : 0xa2U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xd4U : 0xadU)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xf0U : 0x47U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x59U : 0xfaU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x7dU : 0xc9U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x82U : 0xcaU))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x76U : 0xabU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xd7U : 0xfeU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x2bU : 0x67U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 1U : 0x30U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0xc5U : 0x6fU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x6bU : 0xf2U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x7bU : 0x77U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1776980)
                                        ? 0x7cU : 0x63U))))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__NOT_aesbuf_aes_aes_b_blockaes_decrypt___05F8316_83_ETC___05F_d78505 
        = ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_decrypt_)) 
           & ((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_)) 
                | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_))) 
               | (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_)) 
                   | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_))) 
                  | (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_)))) 
              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_saved_83_ETC___05F_d78493)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_decrypt___05F8316_AND_ae_ETC___05F_d78498 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_decrypt_) 
           & ((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_)) 
                | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_))) 
               | (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_)) 
                   | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_))) 
                  | (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_)))) 
              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_saved_83_ETC___05F_d78493)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__NOT_aesbuf_aes_aes_b_blockaes_decrypt___05F8316_83_ETC___05F_d78491 
        = ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_decrypt_)) 
           & ((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_)) 
                | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_))) 
               | (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_)) 
                   | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_))) 
                  | (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_)))) 
              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__NOT_aesbuf_aes_aes_b_blockaes_key___05F8381_BITS_1_ETC___05F_d78479)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_decrypt___05F8316_AND_ae_ETC___05F_d78484 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_decrypt_) 
           & ((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_)) 
                | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_))) 
               | (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_)) 
                   | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_))) 
                  | (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_)))) 
              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__NOT_aesbuf_aes_aes_b_blockaes_key___05F8381_BITS_1_ETC___05F_d78479)));
    if ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__v___05Fh1804262[0U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes[0U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes[4U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__v___05Fh1804262[1U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes[1U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes[5U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__v___05Fh1804262[2U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes[2U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes[6U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__v___05Fh1804262[3U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes[3U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes[7U]);
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__v___05Fh1804262[0U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes[2U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes[0U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__v___05Fh1804262[1U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes[3U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes[1U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__v___05Fh1804262[2U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes[4U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes[2U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__v___05Fh1804262[3U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes[5U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes[3U]);
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__NOT_aesbuf_aes_aes_b_key_aes_0761_BITS_191_TO___05FETC___05F_d80882 
        = (1U & ((((((((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_191_TO_160___05FETC___05F_d80808)) 
                       | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_159_TO_128___05FETC___05F_d80810))) 
                      | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_127_TO_96_0_ETC___05F_d80812))) 
                     | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_95_TO_64_07_ETC___05F_d80814))) 
                    | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_63_TO_32_08_ETC___05F_d80816))) 
                   | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_31_TO_0_080_ETC___05F_d80818))) 
                  | (1U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))) 
                 & (((((((((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_255_TO_224___05FETC___05F_d80822)) 
                           | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_223_TO_192___05FETC___05F_d80824))) 
                          | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_191_TO_160___05FETC___05F_d80826))) 
                         | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_159_TO_128___05FETC___05F_d80828))) 
                        | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_127_TO_96_0_ETC___05F_d80830))) 
                       | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_95_TO_64_07_ETC___05F_d80832))) 
                      | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_63_TO_32_08_ETC___05F_d80834))) 
                     | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_31_TO_0_080_ETC___05F_d80836))) 
                    | (2U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen)))));
    if (vlTOPp->RST_N) {
        if ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_capture_write_request) 
              & (0x86U == (0xffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_addr__DOT__data0_reg 
                                            >> 0x14U))))) 
             & (((1U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[1U] 
                                << 0x13U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[0U] 
                                             >> 0xdU)))) 
                 | (2U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[1U] 
                                  << 0x13U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[0U] 
                                               >> 0xdU))))) 
                | (3U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[1U] 
                                 << 0x13U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[0U] 
                                              >> 0xdU))))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_keylen 
                = ((1U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[1U] 
                                  << 0x13U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[0U] 
                                               >> 0xdU))))
                    ? 0U : ((2U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[1U] 
                                           << 0x13U) 
                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[0U] 
                                             >> 0xdU))))
                             ? 1U : 2U));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_keylen = 0U;
    }
    __Vtemp3161[0U] = (IData)((((QData)((IData)((0xfffffffU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh695[1U] 
                                                     << 4U) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh695[0U] 
                                                       >> 0x1cU))))) 
                                << 0x17U) | (QData)((IData)(
                                                            (((((0x280U 
                                                                 >= 
                                                                 (0x3ffU 
                                                                  & (0x200U 
                                                                     ^ 
                                                                     ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                       >> 9U) 
                                                                      - (IData)(0x7fU))))) 
                                                                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__NOT_inst_spfpu_divider_rg_stage2_28_BITS_18_TO_ETC___05F_d246))
                                                                ? 0U
                                                                : 
                                                               (0x3ffU 
                                                                & ((0x280U 
                                                                    >= 
                                                                    (0x3ffU 
                                                                     & (0x200U 
                                                                        ^ 
                                                                        ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                          >> 9U) 
                                                                         - (IData)(0x7fU)))))
                                                                    ? 
                                                                   ((0x169U 
                                                                     > 
                                                                     (0x3ffU 
                                                                      & (0x200U 
                                                                         ^ 
                                                                         ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                           >> 9U) 
                                                                          - (IData)(0x7fU)))))
                                                                     ? 0U
                                                                     : 
                                                                    ((0x200U 
                                                                      >= 
                                                                      (0x3ffU 
                                                                       & (0x200U 
                                                                          ^ 
                                                                          ((IData)(1U) 
                                                                           - 
                                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                            >> 9U)))))
                                                                      ? 
                                                                     ((0x4000000U 
                                                                       & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh695[0U])
                                                                       ? 
                                                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                       >> 9U)
                                                                       : 
                                                                      ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__INV_1_MINUS_inst_spfpu_divider_rg_stage2_28_BI_ETC___05F_d195)
                                                                        ? 
                                                                       ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                         >> 9U) 
                                                                        - 
                                                                        ((IData)(1U) 
                                                                         + 
                                                                         (~ 
                                                                          ((IData)(1U) 
                                                                           - 
                                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                            >> 9U)))))
                                                                        : 
                                                                       ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                         >> 9U) 
                                                                        - (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__msb_zeros___05Fh6861))))
                                                                      : 
                                                                     ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                       >> 9U) 
                                                                      + 
                                                                      ((IData)(1U) 
                                                                       - 
                                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                        >> 9U)))))
                                                                    : 
                                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                    >> 9U)))) 
                                                              << 0xdU) 
                                                             | ((0x1e00U 
                                                                 & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                    << 4U)) 
                                                                | ((((0x280U 
                                                                      >= 
                                                                      (0x3ffU 
                                                                       & (0x200U 
                                                                          ^ 
                                                                          ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                            >> 9U) 
                                                                           - (IData)(0x7fU))))) 
                                                                     & (0x169U 
                                                                        > 
                                                                        (0x3ffU 
                                                                         & (0x200U 
                                                                            ^ 
                                                                            ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                              >> 9U) 
                                                                             - (IData)(0x7fU)))))) 
                                                                    << 8U) 
                                                                   | (((0x280U 
                                                                        < 
                                                                        (0x3ffU 
                                                                         & (0x200U 
                                                                            ^ 
                                                                            ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                              >> 9U) 
                                                                             - (IData)(0x7fU))))) 
                                                                       << 7U) 
                                                                      | ((0x40U 
                                                                          & (((((0x280U 
                                                                                < 
                                                                                (0x3ffU 
                                                                                & (0x200U 
                                                                                ^ 
                                                                                ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                                >> 9U) 
                                                                                - (IData)(0x7fU))))) 
                                                                                | (0x169U 
                                                                                > 
                                                                                (0x3ffU 
                                                                                & (0x200U 
                                                                                ^ 
                                                                                ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                                >> 9U) 
                                                                                - (IData)(0x7fU)))))) 
                                                                               | (0x200U 
                                                                                >= 
                                                                                (0x3ffU 
                                                                                & (0x200U 
                                                                                ^ 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                                >> 9U))))))
                                                                               ? 
                                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh695[0U]
                                                                               : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__lv_sticky___05F_1___05Fh7047)) 
                                                                             << 6U)) 
                                                                         | ((0x3cU 
                                                                             & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                                << 1U)) 
                                                                            | ((((0x280U 
                                                                                >= 
                                                                                (0x3ffU 
                                                                                & (0x200U 
                                                                                ^ 
                                                                                ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                                >> 9U) 
                                                                                - (IData)(0x7fU))))) 
                                                                                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__NOT_inst_spfpu_divider_rg_stage2_28_BITS_18_TO_ETC___05F_d246)) 
                                                                                << 1U) 
                                                                               | (1U 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2))))))))))));
    __Vtemp3161[1U] = ((0xfff80000U & (((0x280U >= 
                                         (0x3ffU & 
                                          (0x200U ^ 
                                           ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                             >> 9U) 
                                            - (IData)(0x7fU)))))
                                         ? ((0x169U 
                                             > (0x3ffU 
                                                & (0x200U 
                                                   ^ 
                                                   ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                     >> 9U) 
                                                    - (IData)(0x7fU)))))
                                             ? 1U : 
                                            ((0x200U 
                                              >= (0x3ffU 
                                                  & (0x200U 
                                                     ^ 
                                                     ((IData)(1U) 
                                                      - 
                                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                       >> 9U)))))
                                              ? ((0x4000000U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh695[0U])
                                                  ? 
                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh695[0U]
                                                  : 
                                                 ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__INV_1_MINUS_inst_spfpu_divider_rg_stage2_28_BI_ETC___05F_d195)
                                                   ? 
                                                  ((0x1aU 
                                                    >= 
                                                    (0x3ffU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                           >> 9U))))))
                                                    ? 
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh695[0U] 
                                                    << 
                                                    (0x3ffU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                           >> 9U))))))
                                                    : 0U)
                                                   : 
                                                  (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh695[0U] 
                                                   << (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__msb_zeros___05Fh6861))))
                                              : ((0x7fffffeU 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_inst_spfpu_divider_int_div_wr_final_out_wha_ETC___05F_d200) 
                                                 | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__lv_sticky___05F_1___05Fh7047))))
                                         : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh695[0U]) 
                                       << 0x13U)) | (IData)(
                                                            ((((QData)((IData)(
                                                                               (0xfffffffU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh695[1U] 
                                                                                << 4U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh695[0U] 
                                                                                >> 0x1cU))))) 
                                                               << 0x17U) 
                                                              | (QData)((IData)(
                                                                                (((((0x280U 
                                                                                >= 
                                                                                (0x3ffU 
                                                                                & (0x200U 
                                                                                ^ 
                                                                                ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                                >> 9U) 
                                                                                - (IData)(0x7fU))))) 
                                                                                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__NOT_inst_spfpu_divider_rg_stage2_28_BITS_18_TO_ETC___05F_d246))
                                                                                 ? 0U
                                                                                 : 
                                                                                (0x3ffU 
                                                                                & ((0x280U 
                                                                                >= 
                                                                                (0x3ffU 
                                                                                & (0x200U 
                                                                                ^ 
                                                                                ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                                >> 9U) 
                                                                                - (IData)(0x7fU)))))
                                                                                 ? 
                                                                                ((0x169U 
                                                                                > 
                                                                                (0x3ffU 
                                                                                & (0x200U 
                                                                                ^ 
                                                                                ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                                >> 9U) 
                                                                                - (IData)(0x7fU)))))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x200U 
                                                                                >= 
                                                                                (0x3ffU 
                                                                                & (0x200U 
                                                                                ^ 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                                >> 9U)))))
                                                                                 ? 
                                                                                ((0x4000000U 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh695[0U])
                                                                                 ? 
                                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                                >> 9U)
                                                                                 : 
                                                                                ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__INV_1_MINUS_inst_spfpu_divider_rg_stage2_28_BI_ETC___05F_d195)
                                                                                 ? 
                                                                                ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                                >> 9U) 
                                                                                - 
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                                >> 9U)))))
                                                                                 : 
                                                                                ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                                >> 9U) 
                                                                                - (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__msb_zeros___05Fh6861))))
                                                                                 : 
                                                                                ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                                >> 9U) 
                                                                                + 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                                >> 9U)))))
                                                                                 : 
                                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                                >> 9U)))) 
                                                                                << 0xdU) 
                                                                                | ((0x1e00U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                                << 4U)) 
                                                                                | ((((0x280U 
                                                                                >= 
                                                                                (0x3ffU 
                                                                                & (0x200U 
                                                                                ^ 
                                                                                ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                                >> 9U) 
                                                                                - (IData)(0x7fU))))) 
                                                                                & (0x169U 
                                                                                > 
                                                                                (0x3ffU 
                                                                                & (0x200U 
                                                                                ^ 
                                                                                ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                                >> 9U) 
                                                                                - (IData)(0x7fU)))))) 
                                                                                << 8U) 
                                                                                | (((0x280U 
                                                                                < 
                                                                                (0x3ffU 
                                                                                & (0x200U 
                                                                                ^ 
                                                                                ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                                >> 9U) 
                                                                                - (IData)(0x7fU))))) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & (((((0x280U 
                                                                                < 
                                                                                (0x3ffU 
                                                                                & (0x200U 
                                                                                ^ 
                                                                                ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                                >> 9U) 
                                                                                - (IData)(0x7fU))))) 
                                                                                | (0x169U 
                                                                                > 
                                                                                (0x3ffU 
                                                                                & (0x200U 
                                                                                ^ 
                                                                                ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                                >> 9U) 
                                                                                - (IData)(0x7fU)))))) 
                                                                                | (0x200U 
                                                                                >= 
                                                                                (0x3ffU 
                                                                                & (0x200U 
                                                                                ^ 
                                                                                ((IData)(1U) 
                                                                                - 
                                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                                >> 9U))))))
                                                                                 ? 
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh695[0U]
                                                                                 : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__lv_sticky___05F_1___05Fh7047)) 
                                                                                << 6U)) 
                                                                                | ((0x3cU 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                                << 1U)) 
                                                                                | ((((0x280U 
                                                                                >= 
                                                                                (0x3ffU 
                                                                                & (0x200U 
                                                                                ^ 
                                                                                ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                                                >> 9U) 
                                                                                - (IData)(0x7fU))))) 
                                                                                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__NOT_inst_spfpu_divider_rg_stage2_28_BITS_18_TO_ETC___05F_d246)) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2))))))))))) 
                                                             >> 0x20U)));
    __Vtemp3161[2U] = (0x3fffU & (((0x280U >= (0x3ffU 
                                               & (0x200U 
                                                  ^ 
                                                  ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                    >> 9U) 
                                                   - (IData)(0x7fU)))))
                                    ? ((0x169U > (0x3ffU 
                                                  & (0x200U 
                                                     ^ 
                                                     ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                       >> 9U) 
                                                      - (IData)(0x7fU)))))
                                        ? 1U : ((0x200U 
                                                 >= 
                                                 (0x3ffU 
                                                  & (0x200U 
                                                     ^ 
                                                     ((IData)(1U) 
                                                      - 
                                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                       >> 9U)))))
                                                 ? 
                                                ((0x4000000U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh695[0U])
                                                  ? 
                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh695[0U]
                                                  : 
                                                 ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__INV_1_MINUS_inst_spfpu_divider_rg_stage2_28_BI_ETC___05F_d195)
                                                   ? 
                                                  ((0x1aU 
                                                    >= 
                                                    (0x3ffU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                           >> 9U))))))
                                                    ? 
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh695[0U] 
                                                    << 
                                                    (0x3ffU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         ((IData)(1U) 
                                                          - 
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage2 
                                                           >> 9U))))))
                                                    : 0U)
                                                   : 
                                                  (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh695[0U] 
                                                   << (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__msb_zeros___05Fh6861))))
                                                 : 
                                                ((0x7fffffeU 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_inst_spfpu_divider_int_div_wr_final_out_wha_ETC___05F_d200) 
                                                 | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__lv_sticky___05F_1___05Fh7047))))
                                    : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh695[0U]) 
                                  >> 0xdU));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage3_D_IN[0U] 
        = __Vtemp3161[0U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage3_D_IN[1U] 
        = __Vtemp3161[1U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_rg_stage3_D_IN[2U] 
        = __Vtemp3161[2U];
    __Vtemp3162[0U] = ((0xfc000000U & ((IData)((0x1ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[3U])) 
                                                    << 0x27U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[2U])) 
                                                       << 7U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[1U])) 
                                                         >> 0x19U))))) 
                                       << 0x1aU)) | 
                       (((((0x1400U >= (0x1fffU & (0x1000U 
                                                   ^ 
                                                   ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                     >> 9U) 
                                                    - (IData)(0x3ffU))))) 
                           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__NOT_inst_dpfpu_divider_rg_stage2_444_BITS_21_T_ETC___05F_d1649))
                           ? 0U : (0x1fffU & ((0x1400U 
                                               >= (0x1fffU 
                                                   & (0x1000U 
                                                      ^ 
                                                      ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                        >> 9U) 
                                                       - (IData)(0x3ffU)))))
                                               ? ((0xbccU 
                                                   > 
                                                   (0x1fffU 
                                                    & (0x1000U 
                                                       ^ 
                                                       ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                         >> 9U) 
                                                        - (IData)(0x3ffU)))))
                                                   ? 0U
                                                   : 
                                                  ((0x1000U 
                                                    >= 
                                                    (0x1fffU 
                                                     & (0x1000U 
                                                        ^ 
                                                        ((IData)(1U) 
                                                         - 
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                          >> 9U)))))
                                                    ? 
                                                   ((0x800000U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[1U])
                                                     ? 
                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                     >> 9U)
                                                     : 
                                                    ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__INV_1_MINUS_inst_dpfpu_divider_rg_stage2_444_B_ETC___05F_d1569)
                                                      ? 
                                                     ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                       >> 9U) 
                                                      - 
                                                      ((IData)(1U) 
                                                       + 
                                                       (~ 
                                                        ((IData)(1U) 
                                                         - 
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                          >> 9U)))))
                                                      : 
                                                     ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                       >> 9U) 
                                                      - (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__msb_zeros___05Fh72898))))
                                                    : 
                                                   ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                     >> 9U) 
                                                    + 
                                                    ((IData)(1U) 
                                                     - 
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                      >> 9U)))))
                                               : (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                  >> 9U)))) 
                         << 0xdU) | ((0x1e00U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                 << 4U)) 
                                     | ((((0x1400U 
                                           >= (0x1fffU 
                                               & (0x1000U 
                                                  ^ 
                                                  ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                    >> 9U) 
                                                   - (IData)(0x3ffU))))) 
                                          & (0xbccU 
                                             > (0x1fffU 
                                                & (0x1000U 
                                                   ^ 
                                                   ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                     >> 9U) 
                                                    - (IData)(0x3ffU)))))) 
                                         << 8U) | (
                                                   ((0x1400U 
                                                     < 
                                                     (0x1fffU 
                                                      & (0x1000U 
                                                         ^ 
                                                         ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                           >> 9U) 
                                                          - (IData)(0x3ffU))))) 
                                                    << 7U) 
                                                   | ((0x40U 
                                                       & (((((0x1400U 
                                                              < 
                                                              (0x1fffU 
                                                               & (0x1000U 
                                                                  ^ 
                                                                  ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                                    >> 9U) 
                                                                   - (IData)(0x3ffU))))) 
                                                             | (0xbccU 
                                                                > 
                                                                (0x1fffU 
                                                                 & (0x1000U 
                                                                    ^ 
                                                                    ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                                      >> 9U) 
                                                                     - (IData)(0x3ffU)))))) 
                                                            | (0x1000U 
                                                               >= 
                                                               (0x1fffU 
                                                                & (0x1000U 
                                                                   ^ 
                                                                   ((IData)(1U) 
                                                                    - 
                                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                                     >> 9U))))))
                                                            ? 
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[0U]
                                                            : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__lv_sticky___05F_1___05Fh73084)) 
                                                          << 6U)) 
                                                      | ((0x3cU 
                                                          & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                             << 1U)) 
                                                         | ((((0x1400U 
                                                               >= 
                                                               (0x1fffU 
                                                                & (0x1000U 
                                                                   ^ 
                                                                   ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                                     >> 9U) 
                                                                    - (IData)(0x3ffU))))) 
                                                              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__NOT_inst_dpfpu_divider_rg_stage2_444_BITS_21_T_ETC___05F_d1649)) 
                                                             << 1U) 
                                                            | (1U 
                                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2)))))))));
    __Vtemp3163[2U] = ((0xfff80000U & ((IData)((0xffffffffffffffULL 
                                                & ((0x1400U 
                                                    >= 
                                                    (0x1fffU 
                                                     & (0x1000U 
                                                        ^ 
                                                        ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                          >> 9U) 
                                                         - (IData)(0x3ffU)))))
                                                    ? 
                                                   ((0xbccU 
                                                     > 
                                                     (0x1fffU 
                                                      & (0x1000U 
                                                         ^ 
                                                         ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                           >> 9U) 
                                                          - (IData)(0x3ffU)))))
                                                     ? 1ULL
                                                     : 
                                                    ((0x1000U 
                                                      >= 
                                                      (0x1fffU 
                                                       & (0x1000U 
                                                          ^ 
                                                          ((IData)(1U) 
                                                           - 
                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                            >> 9U)))))
                                                      ? 
                                                     ((0x800000U 
                                                       & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[1U])
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[0U])))
                                                       : 
                                                      ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__INV_1_MINUS_inst_dpfpu_divider_rg_stage2_444_B_ETC___05F_d1569)
                                                        ? 
                                                       ((0x37U 
                                                         >= 
                                                         (0x1fffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ 
                                                              ((IData)(1U) 
                                                               - 
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                                >> 9U))))))
                                                         ? 
                                                        ((((QData)((IData)(
                                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[0U]))) 
                                                         << 
                                                         (0x1fffU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             (~ 
                                                              ((IData)(1U) 
                                                               - 
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                                >> 9U))))))
                                                         : 0ULL)
                                                        : 
                                                       ((((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[0U]))) 
                                                        << (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__msb_zeros___05Fh72898))))
                                                      : 
                                                     ((0xfffffffffffffeULL 
                                                       & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_inst_dpfpu_divider_int_div_wr_final_out_wha_ETC___05F_d1574) 
                                                      | (QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__lv_sticky___05F_1___05Fh73084)))))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[0U])))))) 
                                       << 0x13U)) | 
                       (0x3ffffffU & ((IData)(((0x1ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[3U])) 
                                                    << 0x27U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[2U])) 
                                                       << 7U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[1U])) 
                                                         >> 0x19U)))) 
                                               >> 0x20U)) 
                                      >> 6U)));
    __Vtemp3163[3U] = ((0x7ffffU & ((IData)((0xffffffffffffffULL 
                                             & ((0x1400U 
                                                 >= 
                                                 (0x1fffU 
                                                  & (0x1000U 
                                                     ^ 
                                                     ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                       >> 9U) 
                                                      - (IData)(0x3ffU)))))
                                                 ? 
                                                ((0xbccU 
                                                  > 
                                                  (0x1fffU 
                                                   & (0x1000U 
                                                      ^ 
                                                      ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                        >> 9U) 
                                                       - (IData)(0x3ffU)))))
                                                  ? 1ULL
                                                  : 
                                                 ((0x1000U 
                                                   >= 
                                                   (0x1fffU 
                                                    & (0x1000U 
                                                       ^ 
                                                       ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                         >> 9U)))))
                                                   ? 
                                                  ((0x800000U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[1U])
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[0U])))
                                                    : 
                                                   ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__INV_1_MINUS_inst_dpfpu_divider_rg_stage2_444_B_ETC___05F_d1569)
                                                     ? 
                                                    ((0x37U 
                                                      >= 
                                                      (0x1fffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (~ 
                                                           ((IData)(1U) 
                                                            - 
                                                            (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                             >> 9U))))))
                                                      ? 
                                                     ((((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[0U]))) 
                                                      << 
                                                      (0x1fffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (~ 
                                                           ((IData)(1U) 
                                                            - 
                                                            (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                             >> 9U))))))
                                                      : 0ULL)
                                                     : 
                                                    ((((QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[0U]))) 
                                                     << (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__msb_zeros___05Fh72898))))
                                                   : 
                                                  ((0xfffffffffffffeULL 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_inst_dpfpu_divider_int_div_wr_final_out_wha_ETC___05F_d1574) 
                                                   | (QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__lv_sticky___05F_1___05Fh73084)))))
                                                 : 
                                                (((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[0U])))))) 
                                    >> 0xdU)) | (0xfff80000U 
                                                 & ((IData)(
                                                            ((0xffffffffffffffULL 
                                                              & ((0x1400U 
                                                                  >= 
                                                                  (0x1fffU 
                                                                   & (0x1000U 
                                                                      ^ 
                                                                      ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                                        >> 9U) 
                                                                       - (IData)(0x3ffU)))))
                                                                  ? 
                                                                 ((0xbccU 
                                                                   > 
                                                                   (0x1fffU 
                                                                    & (0x1000U 
                                                                       ^ 
                                                                       ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                                         >> 9U) 
                                                                        - (IData)(0x3ffU)))))
                                                                   ? 1ULL
                                                                   : 
                                                                  ((0x1000U 
                                                                    >= 
                                                                    (0x1fffU 
                                                                     & (0x1000U 
                                                                        ^ 
                                                                        ((IData)(1U) 
                                                                         - 
                                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                                          >> 9U)))))
                                                                    ? 
                                                                   ((0x800000U 
                                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[1U])
                                                                     ? 
                                                                    (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[1U])) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[0U])))
                                                                     : 
                                                                    ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__INV_1_MINUS_inst_dpfpu_divider_rg_stage2_444_B_ETC___05F_d1569)
                                                                      ? 
                                                                     ((0x37U 
                                                                       >= 
                                                                       (0x1fffU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (~ 
                                                                            ((IData)(1U) 
                                                                             - 
                                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                                              >> 9U))))))
                                                                       ? 
                                                                      ((((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[1U])) 
                                                                         << 0x20U) 
                                                                        | (QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[0U]))) 
                                                                       << 
                                                                       (0x1fffU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (~ 
                                                                            ((IData)(1U) 
                                                                             - 
                                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                                              >> 9U))))))
                                                                       : 0ULL)
                                                                      : 
                                                                     ((((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[1U])) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[0U]))) 
                                                                      << (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__msb_zeros___05Fh72898))))
                                                                    : 
                                                                   ((0xfffffffffffffeULL 
                                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_inst_dpfpu_divider_int_div_wr_final_out_wha_ETC___05F_d1574) 
                                                                    | (QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__lv_sticky___05F_1___05Fh73084)))))
                                                                  : 
                                                                 (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[0U]))))) 
                                                             >> 0x20U)) 
                                                    << 0x13U)));
    __Vtemp3163[4U] = (0x7ffffU & ((IData)(((0xffffffffffffffULL 
                                             & ((0x1400U 
                                                 >= 
                                                 (0x1fffU 
                                                  & (0x1000U 
                                                     ^ 
                                                     ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                       >> 9U) 
                                                      - (IData)(0x3ffU)))))
                                                 ? 
                                                ((0xbccU 
                                                  > 
                                                  (0x1fffU 
                                                   & (0x1000U 
                                                      ^ 
                                                      ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                        >> 9U) 
                                                       - (IData)(0x3ffU)))))
                                                  ? 1ULL
                                                  : 
                                                 ((0x1000U 
                                                   >= 
                                                   (0x1fffU 
                                                    & (0x1000U 
                                                       ^ 
                                                       ((IData)(1U) 
                                                        - 
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                         >> 9U)))))
                                                   ? 
                                                  ((0x800000U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[1U])
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[0U])))
                                                    : 
                                                   ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__INV_1_MINUS_inst_dpfpu_divider_rg_stage2_444_B_ETC___05F_d1569)
                                                     ? 
                                                    ((0x37U 
                                                      >= 
                                                      (0x1fffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (~ 
                                                           ((IData)(1U) 
                                                            - 
                                                            (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                             >> 9U))))))
                                                      ? 
                                                     ((((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[0U]))) 
                                                      << 
                                                      (0x1fffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (~ 
                                                           ((IData)(1U) 
                                                            - 
                                                            (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage2 
                                                             >> 9U))))))
                                                      : 0ULL)
                                                     : 
                                                    ((((QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[0U]))) 
                                                     << (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__msb_zeros___05Fh72898))))
                                                   : 
                                                  ((0xfffffffffffffeULL 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_inst_dpfpu_divider_int_div_wr_final_out_wha_ETC___05F_d1574) 
                                                   | (QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__lv_sticky___05F_1___05Fh73084)))))
                                                 : 
                                                (((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[0U]))))) 
                                            >> 0x20U)) 
                                   >> 0xdU));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage3_D_IN[0U] 
        = __Vtemp3162[0U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage3_D_IN[1U] 
        = ((0x3ffffffU & ((IData)((0x1ffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[3U])) 
                                       << 0x27U) | 
                                      (((QData)((IData)(
                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[2U])) 
                                        << 7U) | ((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[1U])) 
                                                  >> 0x19U))))) 
                          >> 6U)) | (0xfc000000U & 
                                     ((IData)(((0x1ffffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[3U])) 
                                                    << 0x27U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[2U])) 
                                                       << 7U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh66759[1U])) 
                                                         >> 0x19U)))) 
                                               >> 0x20U)) 
                                      << 0x1aU)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage3_D_IN[2U] 
        = __Vtemp3163[2U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage3_D_IN[3U] 
        = __Vtemp3163[3U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_rg_stage3_D_IN[4U] 
        = __Vtemp3163[4U];
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BITS_5_TO_3_318_EQ_0b0___05FETC___05F_d3934) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh248728 
            = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__NOT_ff_input_first___05F309_BIT_2_523_527_AND_NOT___05FETC___05F_d3941)
                ? 0x7fffffffULL : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__NOT_ff_input_first___05F309_BIT_2_523_527_AND_ff_i_ETC___05F_d3948)
                                    ? 0xffffffffffffffffULL
                                    : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_first___05F309_BIT_2_523_AND_NOT_ff_input_ETC___05F_d3955)
                                        ? 0x7fffffffffffffffULL
                                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_first___05F309_BIT_2_523_AND_ff_input_fir_ETC___05F_d3961)
                                            ? 0xffffffffffffffffULL
                                            : ((1U 
                                                & ((~ 
                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                     >> 2U)) 
                                                   & (IData)(
                                                             ((1ULL 
                                                               + vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05Fh248108) 
                                                              >> 0x1fU))))
                                                ? (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (((IData)(1U) 
                                                                                + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05Fh248108)) 
                                                                                >> 0x1fU)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((IData)(1U) 
                                                                      + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05Fh248108)))))
                                                : (1ULL 
                                                   + vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05Fh248108))))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__lv_invalid___05F_2___05Fh248729 
            = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__NOT_ff_input_first___05F309_BIT_2_523_527_AND_NOT___05FETC___05F_d3941) 
                 | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__NOT_ff_input_first___05F309_BIT_2_523_527_AND_ff_i_ETC___05F_d3948)) 
                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_first___05F309_BIT_2_523_AND_NOT_ff_input_ETC___05F_d3955)) 
               | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_first___05F309_BIT_2_523_AND_ff_input_fir_ETC___05F_d3961));
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh248728 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05Fh248108;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__lv_invalid___05F_2___05Fh248729 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__lv_invalid___05Fh248110;
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_NOT_IF_condFlags64_res_whas___05F428_THEN_condF_ETC___05F_d4218 
        = (1U & ((((~ ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__condFlags64_res_wget) 
                       >> 0xdU)) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__NOT_IF_condFlags64_res_whas___05F428_THEN_condFlag_ETC___05F_d4012))
                   ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__sign___05Fh235102)
                       ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__lv_invalid___05F_2___05Fh251804)
                       : (((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                            >> 1U) & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[6U] 
                                      >> 0x10U)) | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__lv_invalid___05F_2___05Fh251804)))
                   : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__lv_invalid___05Fh251182)) 
                 | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__condFlags64_res_wget) 
                    >> 0xbU)));
    if ((0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                       << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                    >> 6U))))) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_0_4_ETC___05F_d548 
            = ((((((2U == (0xfffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                      << 0x12U) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0xeU)))) 
                   & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                       << 0x17U) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                       >> 9U))))) & 
                  (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                    << 0x1fU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 1U))))) 
                 & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[3U] 
                    >> 0x10U)) | (((((0x102U == (0xfffU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                     << 0x12U) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       >> 0xeU)))) 
                                     & (0U == (0x1fU 
                                               & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                   << 0x17U) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                     >> 9U))))) 
                                    & (0U == (0x1fU 
                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                    >> 1U))))) 
                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[3U] 
                                      >> 0x15U)) & 
                                  ((3U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[6U] 
                                                 >> 5U))) 
                                   | ((1U == (3U & 
                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[6U] 
                                               >> 5U))) 
                                      & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[1U] 
                                            >> 0x19U)))))) 
               | ((((0x302U == (0xfffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                           << 0x12U) 
                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                             >> 0xeU)))) 
                    & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                        << 0x17U) | 
                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                        >> 9U))))) 
                   & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                       << 0x1fU) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                       >> 1U))))) & 
                  (3U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[6U] 
                                >> 5U)))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_0_4_ETC___05F_d313 
            = (1U & (((((((2U == (0xfffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0x12U) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 0xeU)))) 
                          & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                              << 0x17U) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 9U))))) 
                         & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0x1fU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 1U))))) 
                        & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[3U] 
                           >> 0x10U)) | (((((0x102U 
                                             == (0xfffU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                     << 0x12U) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       >> 0xeU)))) 
                                            & (0U == 
                                               (0x1fU 
                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                    << 0x17U) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      >> 9U))))) 
                                           & (0U == 
                                              (0x1fU 
                                               & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                   << 0x1fU) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                     >> 1U))))) 
                                          & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[3U] 
                                             >> 0x15U)) 
                                         & ((3U == 
                                             (3U & 
                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[6U] 
                                               >> 5U))) 
                                            | ((1U 
                                                == 
                                                (3U 
                                                 & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[6U] 
                                                    >> 5U))) 
                                               & (~ 
                                                  (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[1U] 
                                                   >> 0x19U)))))) 
                      | ((((0x302U == (0xfffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                  << 0x12U) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                    >> 0xeU)))) 
                           & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                               << 0x17U) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 9U))))) 
                          & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 1U))))) 
                         & (3U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[6U] 
                                         >> 5U))))) 
                     | ((((0x105U == (0xfffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0x12U) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0xeU)))) 
                          & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                              << 0x17U) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 9U))))) 
                         & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0x1fU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 1U)))))
                         ? ((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[1U] 
                                >> 0x18U)) | (3U == 
                                              (3U & 
                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[6U] 
                                                >> 5U))))
                         : (((9U == (0x7fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                               << 0xdU) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 0x13U)))) 
                             & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 1U))))) 
                            & ((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[1U] 
                                   >> 0x17U)) | (3U 
                                                 == 
                                                 (3U 
                                                  & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[6U] 
                                                     >> 5U))))))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_0_4_ETC___05F_d537 
            = (1U & (((((((2U != (0xfffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0x12U) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 0xeU)))) 
                          | (0U != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                              << 0x17U) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 9U))))) 
                         | (0U != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0x1fU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 1U))))) 
                        | (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[3U] 
                              >> 0x10U))) & (((((0x102U 
                                                 != 
                                                 (0xfffU 
                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                      << 0x12U) 
                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                        >> 0xeU)))) 
                                                | (0U 
                                                   != 
                                                   (0x1fU 
                                                    & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                        << 0x17U) 
                                                       | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                          >> 9U))))) 
                                               | (0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                       << 0x1fU) 
                                                      | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                         >> 1U))))) 
                                              | (~ 
                                                 (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[3U] 
                                                  >> 0x15U))) 
                                             | ((3U 
                                                 != 
                                                 (3U 
                                                  & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[6U] 
                                                     >> 5U))) 
                                                & ((1U 
                                                    != 
                                                    (3U 
                                                     & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[6U] 
                                                        >> 5U))) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[1U] 
                                                      >> 0x19U))))) 
                      & ((((0x302U != (0xfffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                  << 0x12U) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                    >> 0xeU)))) 
                           | (0U != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                               << 0x17U) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 9U))))) 
                          | (0U != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 1U))))) 
                         | (3U != (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[6U] 
                                         >> 5U))))) 
                     & ((((0x105U == (0xfffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0x12U) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 0xeU)))) 
                          & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                              << 0x17U) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 9U))))) 
                         & (0U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                             << 0x1fU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 1U)))))
                         ? ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[1U] 
                             >> 0x18U) & (3U != (3U 
                                                 & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[6U] 
                                                    >> 5U))))
                         : (((9U != (0x7fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                               << 0xdU) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 >> 0x13U)))) 
                             | (0U != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 1U))))) 
                            | ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[1U] 
                                >> 0x17U) & (3U != 
                                             (3U & 
                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[6U] 
                                               >> 5U))))))));
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_0_4_ETC___05F_d548 
            = (((4U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                               << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                            >> 6U)))) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__valid_csr_access___05F_d308)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__address_valid___05F_d311));
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_0_4_ETC___05F_d313 
            = (1U & (((4U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                     << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 6U)))) 
                      & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__valid_csr_access___05F_d308)) 
                     & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__address_valid___05F_d311)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_0_4_ETC___05F_d537 
            = (1U & (((4U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                     << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  >> 6U)))) 
                      | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__valid_csr_access___05F_d308))) 
                     | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__address_valid___05F_d311))));
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2__DOT__x___05Fh3659 
        = ((1U == (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2__DOT__csr_op_arg_wget[0U]))
            ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2__DOT__csr_op_arg_wget[4U])) 
                << 0x3eU) | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2__DOT__csr_op_arg_wget[3U])) 
                              << 0x1eU) | ((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2__DOT__csr_op_arg_wget[2U])) 
                                           >> 2U)))
            : ((2U == (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2__DOT__csr_op_arg_wget[0U]))
                ? ((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2__DOT__csr_op_arg_wget[4U])) 
                     << 0x3eU) | (((QData)((IData)(
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2__DOT__csr_op_arg_wget[3U])) 
                                   << 0x1eU) | ((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2__DOT__csr_op_arg_wget[2U])) 
                                                >> 2U))) 
                   | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2__DOT__csr_op_arg_wget[2U])) 
                       << 0x3eU) | (((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2__DOT__csr_op_arg_wget[1U])) 
                                     << 0x1eU) | ((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2__DOT__csr_op_arg_wget[0U])) 
                                                  >> 2U))))
                : ((~ (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2__DOT__csr_op_arg_wget[4U])) 
                        << 0x3eU) | (((QData)((IData)(
                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2__DOT__csr_op_arg_wget[3U])) 
                                      << 0x1eU) | ((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2__DOT__csr_op_arg_wget[2U])) 
                                                   >> 2U)))) 
                   & (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2__DOT__csr_op_arg_wget[2U])) 
                       << 0x3eU) | (((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2__DOT__csr_op_arg_wget[1U])) 
                                     << 0x1eU) | ((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2__DOT__csr_op_arg_wget[0U])) 
                                                  >> 2U))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_core_resp[0U] 
        = (IData)(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__CAN_FIRE_RL_mkConnectionAVtoAf)
                    ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2__DOT__rg_resp_to_core_wget[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2__DOT__rg_resp_to_core_wget[0U])))
                    : 0ULL));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_core_resp[1U] 
        = (IData)((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__CAN_FIRE_RL_mkConnectionAVtoAf)
                     ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2__DOT__rg_resp_to_core_wget[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2__DOT__rg_resp_to_core_wget[0U])))
                     : 0ULL) >> 0x20U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_core_resp[2U] 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__CAN_FIRE_RL_mkConnectionAVtoAf) 
           & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2__DOT__rg_resp_to_core_wget[2U]);
    vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_operation 
        = (((((~ vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_rg_abst_response[2U]) 
              & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_rg_debug_waitcsr))) 
             & ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_command_good)) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module__DOT__abst_busy))) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__ff_fwd_request_FULL_N)) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__registerfile__DOT__initialize)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__CAN_FIRE_RL_instruction_commit 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4__DOT__empty_reg) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4inst__DOT__empty_reg)) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__ff_fwd_request_FULL_N)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__dump_ff_FULL_N));
    vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fkg_round_key_done_0_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_aes_aes_b_blockaes_block_start) 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_decrypt___05F8316_AND_ae_ETC___05F_d78484) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__NOT_aesbuf_aes_aes_b_blockaes_decrypt___05F8316_83_ETC___05F_d78491)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819080 
        = (vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_iv_aes[1U] 
           ^ vlTOPp->mkTbSoc__DOT__soc__DOT__v___05Fh1804262[1U]);
    vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819154 
        = (vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_iv_aes[2U] 
           ^ vlTOPp->mkTbSoc__DOT__soc__DOT__v___05Fh1804262[2U]);
    vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819228 
        = (vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_iv_aes[0U] 
           ^ vlTOPp->mkTbSoc__DOT__soc__DOT__v___05Fh1804262[0U]);
    vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486 
        = (vlTOPp->mkTbSoc__DOT__soc__DOT__temp___05Fh1803882[3U] 
           ^ vlTOPp->mkTbSoc__DOT__soc__DOT__v___05Fh1804262[3U]);
    vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006 
        = (vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_iv_aes[3U] 
           ^ vlTOPp->mkTbSoc__DOT__soc__DOT__v___05Fh1804262[3U]);
    vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266 
        = (vlTOPp->mkTbSoc__DOT__soc__DOT__in___05Fh1809965[3U] 
           ^ vlTOPp->mkTbSoc__DOT__soc__DOT__v___05Fh1804262[3U]);
    vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_capture_write_request 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_addr__DOT__empty_reg) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__empty_reg)) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_resp__DOT__full_reg)) 
           & (((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_input_fifo__DOT__empty_reg)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_blockdone)) 
              & ((0x3fU & ((IData)(0x10U) + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_bram_inp_rRdPtr))) 
                 != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_bram_inp_rWrPtr))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[0U] 
        = vlTOPp->__Vdly__mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[0U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[1U] 
        = vlTOPp->__Vdly__mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[1U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[2U] 
        = vlTOPp->__Vdly__mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[2U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_addr__DOT__data0_reg 
        = vlTOPp->__Vdly__mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_addr__DOT__data0_reg;
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_NOT_IF_condFlags32_res_whas___05F343_THEN_condF_ETC___05F_d4182 
        = (1U & ((((~ ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__condFlags32_res_wget) 
                       >> 0xdU)) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__NOT_IF_condFlags32_res_whas___05F343_THEN_condFlag_ETC___05F_d3844))
                   ? ((1U & ((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                 >> 1U)) & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__setCanonicalNaN_res_wget[2U] 
                                            >> 0x1fU)))
                       ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__lv_invalid___05F_2___05Fh248729)
                       : (((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                            >> 1U) & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__setCanonicalNaN_res_wget[2U] 
                                      >> 0x1fU)) | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__lv_invalid___05F_2___05Fh248729)))
                   : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__lv_invalid___05Fh248110)) 
                 | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__condFlags32_res_wget) 
                    >> 0xbU)));
    if ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U])) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_3_EQ_0b0_4_ETC___05F_d321 
            = ((0x80000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U])
                ? ((3U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                  << 1U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                            >> 0x1fU)))) 
                   & ((0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                     << 4U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                               >> 0x1cU))))
                       ? ((2U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                         << 0x1aU) 
                                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                           >> 6U)))) 
                          & (3U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                           << 0x1aU) 
                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                             >> 6U)))))
                       : ((1U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                         << 4U) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                   >> 0x1cU))))
                           ? (0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x1aU) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 6U))))
                           : ((3U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                             << 4U) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                               >> 0x1cU)))) 
                              | ((4U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                << 4U) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                  >> 0x1cU)))) 
                                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_0_4_ETC___05F_d313))))))
                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_4_TO_2_5_EQ_0b0_6_ETC___05F_d250));
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_3_EQ_0b0_4_ETC___05F_d545 
            = ((0x80000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U])
                ? ((3U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                  << 1U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                            >> 0x1fU)))) 
                   | ((0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                     << 4U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                               >> 0x1cU))))
                       ? ((2U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                         << 0x1aU) 
                                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                           >> 6U)))) 
                          | (3U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                           << 0x1aU) 
                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                             >> 6U)))))
                       : ((1U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                         << 4U) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                   >> 0x1cU))))
                           ? (0U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                            << 0x1aU) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              >> 6U))))
                           : ((3U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                             << 4U) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                               >> 0x1cU)))) 
                              & ((4U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                << 4U) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                  >> 0x1cU)))) 
                                 | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_0_4_ETC___05F_d537))))))
                : ((0x40000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U])
                    ? (((4U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                       << 4U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                 >> 0x1cU)))) 
                        | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__decoder_func_32_inst_BIT_26_93_OR_decoder_func_ETC___05F_d466)) 
                       | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_31_TO_27_9_EQ_0b0_ETC___05F_d488) 
                          & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_31_TO_27_9_EQ_0b1_ETC___05F_d495)))
                    : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__decoder_func_32_inst_BIT_26_93_OR_decoder_func_ETC___05F_d466) 
                       | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_7_7_ETC___05F_d469))));
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_3_EQ_0b0_4_ETC___05F_d321 
            = ((0x80000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U])
                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_4_TO_2_5_EQ_0b0_6_ETC___05F_d187)
                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_4_TO_2_5_EQ_0b0_6_ETC___05F_d134));
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_3_EQ_0b0_4_ETC___05F_d545 
            = ((0x80000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U])
                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_4_TO_2_5_EQ_0b0_6_ETC___05F_d461)
                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__CASE_decoder_func_32_inst_BITS_4_TO_2_0b0_deco_ETC___05Fq5));
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv_EN_debug_access_gprs 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_operation) 
            & (0x1000U <= (0x3fffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[2U] 
                                      >> 1U)))) & (0x1040U 
                                                   > 
                                                   (0x3fffU 
                                                    & (vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[2U] 
                                                       >> 1U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv_EN_ma_debug_access_csrs 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_operation) 
           & (0x1000U > (0x3fffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[2U] 
                                    >> 1U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr_EN_ma_update_fflags 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__CAN_FIRE_RL_instruction_commit) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__rg_epoch_21_EQ_IF_rx_w_data_whas___05F4_THEN_rx_w___05FETC___05F_d124)) 
           & (2U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[4U] 
                           >> 7U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr_EN_take_trap 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__CAN_FIRE_RL_instruction_commit) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__rg_epoch_21_EQ_IF_rx_w_data_whas___05F4_THEN_rx_w___05FETC___05F_d124)) 
           & (((((0U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[4U] 
                               >> 7U))) & (0x17U != 
                                           (0x3fU & 
                                            (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[4U] 
                                             >> 1U)))) 
                & (0x18U != (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[4U] 
                                      >> 1U)))) & (0x19U 
                                                   != 
                                                   (0x3fU 
                                                    & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[4U] 
                                                       >> 1U)))) 
              | ((1U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[4U] 
                               >> 7U))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__rg_store_initiated_7_AND_wr_store_response_wha_ETC___05F_d143))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__wr_flush_whas 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__CAN_FIRE_RL_instruction_commit) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__rg_epoch_21_EQ_IF_rx_w_data_whas___05F4_THEN_rx_w___05FETC___05F_d124));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__wr_initiate_store_whas 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__CAN_FIRE_RL_instruction_commit) 
           & ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__rg_epoch_21_EQ_IF_rx_w_data_whas___05F4_THEN_rx_w___05FETC___05F_d124) 
                & (1U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[4U] 
                                >> 7U)))) & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__rg_store_initiated))) 
              | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__rg_epoch_21_EQ_IF_rx_w_data_whas___05F4_THEN_rx_w___05FETC___05F_d124)) 
                 & (1U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[4U] 
                                 >> 7U))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr_EN_system_instruction 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__CAN_FIRE_RL_instruction_commit) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__rg_epoch_21_EQ_IF_rx_w_data_whas___05F4_THEN_rx_w___05FETC___05F_d124)) 
           & (3U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[4U] 
                           >> 7U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_fifoRecv_D_IN 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_vrRecvBuffer_7) 
            << 7U) | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_vrRecvBuffer_6) 
                       << 6U) | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_vrRecvBuffer_5) 
                                  << 5U) | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_vrRecvBuffer_4) 
                                             << 4U) 
                                            | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_vrRecvBuffer_3) 
                                                << 3U) 
                                               | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_vrRecvBuffer_2) 
                                                   << 2U) 
                                                  | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_vrRecvBuffer_1) 
                                                      << 1U) 
                                                     | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__uart_user_ifc_uart_vrRecvBuffer_0))))))));
    vlTOPp->mkTbSoc__DOT__uart_uart_fifoRecv_D_IN = 
        (((IData)(vlTOPp->mkTbSoc__DOT__uart_uart_vrRecvBuffer_7) 
          << 7U) | (((IData)(vlTOPp->mkTbSoc__DOT__uart_uart_vrRecvBuffer_6) 
                     << 6U) | (((IData)(vlTOPp->mkTbSoc__DOT__uart_uart_vrRecvBuffer_5) 
                                << 5U) | (((IData)(vlTOPp->mkTbSoc__DOT__uart_uart_vrRecvBuffer_4) 
                                           << 4U) | 
                                          (((IData)(vlTOPp->mkTbSoc__DOT__uart_uart_vrRecvBuffer_3) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->mkTbSoc__DOT__uart_uart_vrRecvBuffer_2) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->mkTbSoc__DOT__uart_uart_vrRecvBuffer_1) 
                                                  << 1U) 
                                                 | (IData)(vlTOPp->mkTbSoc__DOT__uart_uart_vrRecvBuffer_0))))))));
    if ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__IF_aesbuf_aes_aes_b_mode_aes_0758_EQ_0_0762_TH_ETC___05F_d80952 
            = (vlTOPp->mkTbSoc__DOT__soc__DOT__temp___05Fh1803882[1U] 
               ^ vlTOPp->mkTbSoc__DOT__soc__DOT__v___05Fh1804262[1U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__IF_aesbuf_aes_aes_b_mode_aes_0758_EQ_0_0762_TH_ETC___05F_d80963 
            = (vlTOPp->mkTbSoc__DOT__soc__DOT__temp___05Fh1803882[2U] 
               ^ vlTOPp->mkTbSoc__DOT__soc__DOT__v___05Fh1804262[2U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__IF_aesbuf_aes_aes_b_mode_aes_0758_EQ_0_0762_TH_ETC___05F_d80974 
            = (vlTOPp->mkTbSoc__DOT__soc__DOT__temp___05Fh1803882[0U] 
               ^ vlTOPp->mkTbSoc__DOT__soc__DOT__v___05Fh1804262[0U]);
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__IF_aesbuf_aes_aes_b_mode_aes_0758_EQ_0_0762_TH_ETC___05F_d80952 
            = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))
                ? (vlTOPp->mkTbSoc__DOT__soc__DOT__in___05Fh1809965[1U] 
                   ^ vlTOPp->mkTbSoc__DOT__soc__DOT__v___05Fh1804262[1U])
                : vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819080);
        vlTOPp->mkTbSoc__DOT__soc__DOT__IF_aesbuf_aes_aes_b_mode_aes_0758_EQ_0_0762_TH_ETC___05F_d80963 
            = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))
                ? (vlTOPp->mkTbSoc__DOT__soc__DOT__in___05Fh1809965[2U] 
                   ^ vlTOPp->mkTbSoc__DOT__soc__DOT__v___05Fh1804262[2U])
                : vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819154);
        vlTOPp->mkTbSoc__DOT__soc__DOT__IF_aesbuf_aes_aes_b_mode_aes_0758_EQ_0_0762_TH_ETC___05F_d80974 
            = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))
                ? (vlTOPp->mkTbSoc__DOT__soc__DOT__in___05Fh1809965[0U] 
                   ^ vlTOPp->mkTbSoc__DOT__soc__DOT__v___05Fh1804262[0U])
                : vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819228);
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807853 
        = ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
            ? ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                ? ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                    ? ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x16U : 0xbbU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x54U : 0xb0U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xfU : 0x2dU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x99U : 0x41U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x68U : 0x42U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xe6U : 0xbfU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xdU : 0x89U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xa1U : 0x8cU))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xdfU : 0x28U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x55U : 0xceU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xe9U : 0x87U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x1eU : 0x9bU)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x94U : 0x8eU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xd9U : 0x69U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x11U : 0x98U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xf8U : 0xe1U)))))
                    : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x9eU : 0x1dU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xc1U : 0x86U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xb9U : 0x57U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x35U : 0x61U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xeU : 0xf6U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 3U : 0x48U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x66U : 0xb5U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x3eU : 0x70U))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x8aU : 0x8bU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xbdU : 0x4bU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x1fU : 0x74U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xddU : 0xe8U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xc6U : 0xb4U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xa6U : 0x1cU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x2eU : 0x25U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x78U : 0xbaU))))))
                : ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                    ? ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 8U : 0xaeU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x7aU : 0x65U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xeaU : 0xf4U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x56U : 0x6cU)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xa9U : 0x4eU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xd5U : 0x8dU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x6dU : 0x37U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xc8U : 0xe7U))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x79U : 0xe4U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x95U : 0x91U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x62U : 0xacU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xd3U : 0xc2U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x5cU : 0x24U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 6U : 0x49U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xaU : 0x3aU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x32U : 0xe0U)))))
                    : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xdbU : 0xbU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x5eU : 0xdeU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x14U : 0xb8U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xeeU : 0x46U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x88U : 0x90U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x2aU : 0x22U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xdcU : 0x4fU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x81U : 0x60U))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x73U : 0x19U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x5dU : 0x64U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x3dU : 0x7eU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xa7U : 0xc4U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x17U : 0x44U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x97U : 0x5fU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xecU : 0x13U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xcU : 0xcdU)))))))
            : ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                ? ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                    ? ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xd2U : 0xf3U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xffU : 0x10U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x21U : 0xdaU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xb6U : 0xbcU)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xf5U : 0x38U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x9dU : 0x92U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x8fU : 0x40U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xa3U : 0x51U))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xa8U : 0x9fU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x3cU : 0x50U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x7fU : 2U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xf9U : 0x45U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x85U : 0x33U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x4dU : 0x43U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xfbU : 0xaaU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xefU : 0xd0U)))))
                    : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xcfU : 0x58U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x4cU : 0x4aU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x39U : 0xbeU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xcbU : 0x6aU)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x5bU : 0xb1U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xfcU : 0x20U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xedU : 0U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xd1U : 0x53U))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x84U : 0x2fU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xe3U : 0x29U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xb3U : 0xd6U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x3bU : 0x52U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xa0U : 0x5aU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x6eU : 0x1bU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x1aU : 0x2cU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x83U : 9U))))))
                : ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                    ? ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x75U : 0xb2U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x27U : 0xebU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xe2U : 0x80U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x12U : 7U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x9aU : 5U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x96U : 0x18U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xc3U : 0x23U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xc7U : 4U))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x15U : 0x31U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xd8U : 0x71U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xf1U : 0xe5U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xa5U : 0x34U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xccU : 0xf7U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x3fU : 0x36U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x26U : 0x93U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xfdU : 0xb7U)))))
                    : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xc0U : 0x72U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xa4U : 0x9cU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xafU : 0xa2U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xd4U : 0xadU)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xf0U : 0x47U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x59U : 0xfaU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x7dU : 0xc9U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x82U : 0xcaU))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x76U : 0xabU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xd7U : 0xfeU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x2bU : 0x67U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 1U : 0x30U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0xc5U : 0x6fU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x6bU : 0xf2U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x7bU : 0x77U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486)
                                        ? 0x7cU : 0x63U))))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819373 
        = ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
            ? ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                ? ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                    ? ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x16U : 0xbbU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x54U : 0xb0U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xfU : 0x2dU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x99U : 0x41U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x68U : 0x42U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xe6U : 0xbfU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xdU : 0x89U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xa1U : 0x8cU))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xdfU : 0x28U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x55U : 0xceU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xe9U : 0x87U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x1eU : 0x9bU)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x94U : 0x8eU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xd9U : 0x69U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x11U : 0x98U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xf8U : 0xe1U)))))
                    : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x9eU : 0x1dU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xc1U : 0x86U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xb9U : 0x57U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x35U : 0x61U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xeU : 0xf6U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 3U : 0x48U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x66U : 0xb5U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x3eU : 0x70U))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x8aU : 0x8bU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xbdU : 0x4bU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x1fU : 0x74U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xddU : 0xe8U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xc6U : 0xb4U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xa6U : 0x1cU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x2eU : 0x25U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x78U : 0xbaU))))))
                : ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                    ? ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 8U : 0xaeU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x7aU : 0x65U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xeaU : 0xf4U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x56U : 0x6cU)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xa9U : 0x4eU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xd5U : 0x8dU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x6dU : 0x37U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xc8U : 0xe7U))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x79U : 0xe4U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x95U : 0x91U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x62U : 0xacU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xd3U : 0xc2U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x5cU : 0x24U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 6U : 0x49U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xaU : 0x3aU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x32U : 0xe0U)))))
                    : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xdbU : 0xbU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x5eU : 0xdeU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x14U : 0xb8U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xeeU : 0x46U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x88U : 0x90U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x2aU : 0x22U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xdcU : 0x4fU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x81U : 0x60U))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x73U : 0x19U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x5dU : 0x64U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x3dU : 0x7eU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xa7U : 0xc4U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x17U : 0x44U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x97U : 0x5fU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xecU : 0x13U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xcU : 0xcdU)))))))
            : ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                ? ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                    ? ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xd2U : 0xf3U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xffU : 0x10U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x21U : 0xdaU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xb6U : 0xbcU)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xf5U : 0x38U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x9dU : 0x92U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x8fU : 0x40U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xa3U : 0x51U))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xa8U : 0x9fU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x3cU : 0x50U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x7fU : 2U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xf9U : 0x45U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x85U : 0x33U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x4dU : 0x43U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xfbU : 0xaaU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xefU : 0xd0U)))))
                    : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xcfU : 0x58U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x4cU : 0x4aU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x39U : 0xbeU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xcbU : 0x6aU)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x5bU : 0xb1U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xfcU : 0x20U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xedU : 0U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xd1U : 0x53U))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x84U : 0x2fU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xe3U : 0x29U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xb3U : 0xd6U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x3bU : 0x52U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xa0U : 0x5aU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x6eU : 0x1bU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x1aU : 0x2cU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x83U : 9U))))))
                : ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                    ? ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x75U : 0xb2U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x27U : 0xebU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xe2U : 0x80U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x12U : 7U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x9aU : 5U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x96U : 0x18U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xc3U : 0x23U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xc7U : 4U))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x15U : 0x31U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xd8U : 0x71U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xf1U : 0xe5U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xa5U : 0x34U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xccU : 0xf7U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x3fU : 0x36U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x26U : 0x93U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xfdU : 0xb7U)))))
                    : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xc0U : 0x72U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xa4U : 0x9cU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xafU : 0xa2U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xd4U : 0xadU)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xf0U : 0x47U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x59U : 0xfaU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x7dU : 0xc9U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x82U : 0xcaU))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x76U : 0xabU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xd7U : 0xfeU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x2bU : 0x67U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 1U : 0x30U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0xc5U : 0x6fU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x6bU : 0xf2U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x7bU : 0x77U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006)
                                        ? 0x7cU : 0x63U))))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__IF_aesbuf_aes_aes_b_mode_aes_0758_EQ_0_0762_TH_ETC___05F_d80941 
        = ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))
            ? vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807486
            : ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266
                : vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819006));
    vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813634 
        = ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
            ? ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                ? ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                    ? ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x16U : 0xbbU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x54U : 0xb0U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xfU : 0x2dU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x99U : 0x41U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x68U : 0x42U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xe6U : 0xbfU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xdU : 0x89U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xa1U : 0x8cU))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xdfU : 0x28U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x55U : 0xceU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xe9U : 0x87U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x1eU : 0x9bU)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x94U : 0x8eU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xd9U : 0x69U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x11U : 0x98U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xf8U : 0xe1U)))))
                    : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x9eU : 0x1dU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xc1U : 0x86U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xb9U : 0x57U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x35U : 0x61U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xeU : 0xf6U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 3U : 0x48U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x66U : 0xb5U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x3eU : 0x70U))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x8aU : 0x8bU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xbdU : 0x4bU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x1fU : 0x74U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xddU : 0xe8U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xc6U : 0xb4U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xa6U : 0x1cU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x2eU : 0x25U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x78U : 0xbaU))))))
                : ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                    ? ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 8U : 0xaeU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x7aU : 0x65U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xeaU : 0xf4U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x56U : 0x6cU)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xa9U : 0x4eU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xd5U : 0x8dU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x6dU : 0x37U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xc8U : 0xe7U))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x79U : 0xe4U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x95U : 0x91U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x62U : 0xacU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xd3U : 0xc2U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x5cU : 0x24U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 6U : 0x49U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xaU : 0x3aU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x32U : 0xe0U)))))
                    : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xdbU : 0xbU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x5eU : 0xdeU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x14U : 0xb8U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xeeU : 0x46U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x88U : 0x90U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x2aU : 0x22U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xdcU : 0x4fU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x81U : 0x60U))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x73U : 0x19U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x5dU : 0x64U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x3dU : 0x7eU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xa7U : 0xc4U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x17U : 0x44U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x97U : 0x5fU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xecU : 0x13U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xcU : 0xcdU)))))))
            : ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                ? ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                    ? ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xd2U : 0xf3U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xffU : 0x10U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x21U : 0xdaU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xb6U : 0xbcU)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xf5U : 0x38U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x9dU : 0x92U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x8fU : 0x40U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xa3U : 0x51U))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xa8U : 0x9fU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x3cU : 0x50U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x7fU : 2U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xf9U : 0x45U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x85U : 0x33U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x4dU : 0x43U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xfbU : 0xaaU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xefU : 0xd0U)))))
                    : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xcfU : 0x58U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x4cU : 0x4aU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x39U : 0xbeU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xcbU : 0x6aU)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x5bU : 0xb1U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xfcU : 0x20U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xedU : 0U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xd1U : 0x53U))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x84U : 0x2fU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xe3U : 0x29U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xb3U : 0xd6U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x3bU : 0x52U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xa0U : 0x5aU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x6eU : 0x1bU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x1aU : 0x2cU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x83U : 9U))))))
                : ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                    ? ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x75U : 0xb2U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x27U : 0xebU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xe2U : 0x80U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x12U : 7U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x9aU : 5U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x96U : 0x18U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xc3U : 0x23U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xc7U : 4U))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x15U : 0x31U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xd8U : 0x71U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xf1U : 0xe5U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xa5U : 0x34U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xccU : 0xf7U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x3fU : 0x36U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x26U : 0x93U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xfdU : 0xb7U)))))
                    : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                        ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xc0U : 0x72U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xa4U : 0x9cU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xafU : 0xa2U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xd4U : 0xadU)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xf0U : 0x47U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x59U : 0xfaU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x7dU : 0xc9U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x82U : 0xcaU))))
                        : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                            ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x76U : 0xabU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xd7U : 0xfeU))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x2bU : 0x67U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 1U : 0x30U)))
                            : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0xc5U : 0x6fU)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x6bU : 0xf2U))
                                : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                    ? ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x7bU : 0x77U)
                                    : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813266)
                                        ? 0x7cU : 0x63U))))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__WILL_FIRE_RL_aesbuf_aes_aes_b_put_bram 
        = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__NOT_aesbuf_aes_aes_b_bram_inp_rRdPtr_read___05F070_ETC___05F_d80747) 
              & (0U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_state_var))) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_input_fifo__DOT__full_reg)) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_started)) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_capture_write_request)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__WILL_FIRE_RL_aesbuf_aes_aes_b_send_bram 
        = (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__NOT_aesbuf_aes_aes_b_bram_inp_rRdPtr_read___05F070_ETC___05F_d80747) 
                & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_state_var))) 
               & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_rg_state))) 
              & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Frg_state))) 
             & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_rg_state))) 
            & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_started))) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_capture_write_request)));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_iv_index) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_iv_D_IN[0U] 
            = (IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_iv[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_iv[0U]))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_iv_D_IN[1U] 
            = (IData)(((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_iv[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_iv[0U]))) 
                       >> 0x20U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_iv_D_IN[2U] 
            = (IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[2U])) 
                        << 0x33U) | (((QData)((IData)(
                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[1U])) 
                                      << 0x13U) | ((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                                                   >> 0xdU))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_iv_D_IN[3U] 
            = (IData)(((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[2U])) 
                         << 0x33U) | (((QData)((IData)(
                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[1U])) 
                                       << 0x13U) | 
                                      ((QData)((IData)(
                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                                       >> 0xdU))) >> 0x20U));
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_iv_D_IN[0U] 
            = (IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[2U])) 
                        << 0x33U) | (((QData)((IData)(
                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[1U])) 
                                      << 0x13U) | ((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                                                   >> 0xdU))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_iv_D_IN[1U] 
            = (IData)(((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[2U])) 
                         << 0x33U) | (((QData)((IData)(
                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[1U])) 
                                       << 0x13U) | 
                                      ((QData)((IData)(
                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                                       >> 0xdU))) >> 0x20U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_iv_D_IN[2U] 
            = (IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_iv[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_iv[2U]))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_iv_D_IN[3U] 
            = (IData)(((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_iv[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_iv[2U]))) 
                       >> 0x20U));
    }
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_key_index) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key_D_IN[0U] 
            = (IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key[0U]))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key_D_IN[1U] 
            = (IData)(((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key[0U]))) 
                       >> 0x20U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key_D_IN[2U] 
            = (IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[2U])) 
                        << 0x33U) | (((QData)((IData)(
                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[1U])) 
                                      << 0x13U) | ((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                                                   >> 0xdU))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key_D_IN[3U] 
            = (IData)(((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[2U])) 
                         << 0x33U) | (((QData)((IData)(
                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[1U])) 
                                       << 0x13U) | 
                                      ((QData)((IData)(
                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                                       >> 0xdU))) >> 0x20U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key_D_IN[4U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key[4U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key_D_IN[5U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key[5U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key_D_IN[6U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key[6U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key_D_IN[7U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key[7U];
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key_D_IN[0U] 
            = (IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[2U])) 
                        << 0x33U) | (((QData)((IData)(
                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[1U])) 
                                      << 0x13U) | ((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                                                   >> 0xdU))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key_D_IN[1U] 
            = (IData)(((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[2U])) 
                         << 0x33U) | (((QData)((IData)(
                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[1U])) 
                                       << 0x13U) | 
                                      ((QData)((IData)(
                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                                       >> 0xdU))) >> 0x20U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key_D_IN[2U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key[2U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key_D_IN[3U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key[3U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key_D_IN[4U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key[4U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key_D_IN[5U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key[5U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key_D_IN[6U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key[6U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key_D_IN[7U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_rg_key[7U];
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_resp_D_IN 
        = ((((((((((0U == (0xffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_addr__DOT__data0_reg 
                                            >> 0x14U)))) 
                   | (0x20U == (0xffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_addr__DOT__data0_reg 
                                                 >> 0x14U))))) 
                  | (0x40U == (0xffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_addr__DOT__data0_reg 
                                                >> 0x14U))))) 
                 | (0x80U == (0xffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_addr__DOT__data0_reg 
                                               >> 0x14U))))) 
                | (0x83U == (0xffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_addr__DOT__data0_reg 
                                              >> 0x14U))))) 
               | (0x84U == (0xffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_addr__DOT__data0_reg 
                                             >> 0x14U))))) 
              | (0x86U == (0xffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_addr__DOT__data0_reg 
                                            >> 0x14U)))))
              ? 0U : 2U) << 4U) | (0xfU & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_addr__DOT__data0_reg)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_ctr_D_IN 
        = ((0x83U != (0xffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_addr__DOT__data0_reg 
                                       >> 0x14U)))) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_ctr)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_started_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_capture_write_request) 
           & (0x83U == (0xffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_addr__DOT__data0_reg 
                                         >> 0x14U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_ctr_op_write_1___05FSEL_1 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_capture_write_request) 
            & (0x83U == (0xffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_addr__DOT__data0_reg 
                                          >> 0x14U))))) 
           & (vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[0U] 
              >> 0xdU));
    vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_bram_inp_pwEnqueue_whas 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_capture_write_request) 
            & (0U == (0xffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_addr__DOT__data0_reg 
                                       >> 0x14U))))) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_ctr));
    vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_state_var_write_1___05FSEL_1 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_capture_write_request) 
            & (0x83U == (0xffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_addr__DOT__data0_reg 
                                          >> 0x14U))))) 
           & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[0U] 
                 >> 0xdU)));
    __Vtemp3174[0U] = (0x20U | ((0xffffffc0U & ((IData)(
                                                        ((1U 
                                                          & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                                          ? 
                                                         (0xffffffff00000000ULL 
                                                          | (QData)((IData)(
                                                                            ((((0ULL 
                                                                                == 
                                                                                (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[6U])) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U])) 
                                                                                << 0xfU) 
                                                                                | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U])) 
                                                                                >> 0x11U)))) 
                                                                               & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                                >> 2U)) 
                                                                              | ((0U 
                                                                                == 
                                                                                ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U] 
                                                                                << 0xfU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U] 
                                                                                >> 0x11U))) 
                                                                                & (~ 
                                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                                >> 2U))))
                                                                              ? 0U
                                                                              : 
                                                                             ((4U 
                                                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                                                               ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh195256)
                                                                               : 
                                                                              ((2U 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                                                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh195118)
                                                                                : 
                                                                               ((0U 
                                                                                == 
                                                                                (0x7fffffffU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U] 
                                                                                << 0xfU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U] 
                                                                                >> 0x11U))))
                                                                                 ? 
                                                                                ((0x10000U 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U])
                                                                                 ? 0xcf000000U
                                                                                 : 0U)
                                                                                 : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh195118))))))))
                                                          : 
                                                         ((((0ULL 
                                                             == 
                                                             (((QData)((IData)(
                                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[6U])) 
                                                               << 0x2fU) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U])) 
                                                                  << 0xfU) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U])) 
                                                                    >> 0x11U)))) 
                                                            & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                               >> 2U)) 
                                                           | ((0U 
                                                               == 
                                                               ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U] 
                                                                 << 0xfU) 
                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U] 
                                                                   >> 0x11U))) 
                                                              & (~ 
                                                                 (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                  >> 2U))))
                                                           ? 0ULL
                                                           : 
                                                          ((4U 
                                                            & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                                            ? 
                                                           (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__sign___05Fh235102)) 
                                                             << 0x3fU) 
                                                            | (((QData)((IData)(
                                                                                (0x7ffU 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_IF_ff_input_first___05F309_BITS_5_TO_3_318_EQ_0_ETC___05F_d3706 
                                                                                >> 0x34U)))
                                                                                 ? 
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                ((IData)(0x43eU) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x___05Fh235203))))
                                                                                 : 
                                                                                ((IData)(0x43eU) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x___05Fh235203))))))) 
                                                                << 0x34U) 
                                                               | (0xfffffffffffffULL 
                                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_IF_ff_input_first___05F309_BITS_5_TO_3_318_EQ_0_ETC___05F_d3706)))
                                                            : 
                                                           (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__lv_sign___05Fh220890)) 
                                                             << 0x3fU) 
                                                            | (((QData)((IData)(
                                                                                (0x7ffU 
                                                                                & ((IData)(0x41eU) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x___05Fh229768)))))) 
                                                                << 0x34U) 
                                                               | ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT___theResult___05F___05Fh220894 
                                                                                << 
                                                                                (0x1fU 
                                                                                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x___05Fh229768)))))) 
                                                                  << 0x15U))))))) 
                                                << 6U)) 
                                | (0x1fU & ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                             ? ((((0ULL 
                                                   == 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[6U])) 
                                                     << 0x2fU) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U])) 
                                                        << 0xfU) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U])) 
                                                          >> 0x11U)))) 
                                                  & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                     >> 2U)) 
                                                 | ((0U 
                                                     == 
                                                     ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U] 
                                                       << 0xfU) 
                                                      | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U] 
                                                         >> 0x11U))) 
                                                    & (~ 
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                        >> 2U))))
                                                 ? 0U
                                                 : 
                                                ((4U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                                  ? (IData)(
                                                            (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh195256 
                                                             >> 0x20U))
                                                  : 
                                                 ((2U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                                   ? (IData)(
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh195118 
                                                              >> 0x20U))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U] 
                                                         << 0xfU) 
                                                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U] 
                                                           >> 0x11U))))
                                                    ? 0U
                                                    : (IData)(
                                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh195118 
                                                               >> 0x20U))))))
                                             : ((1U 
                                                 & ((0ULL 
                                                     == 
                                                     (((QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[6U])) 
                                                       << 0x2fU) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U])) 
                                                          << 0xfU) 
                                                         | ((QData)((IData)(
                                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U])) 
                                                            >> 0x11U)))) 
                                                    | (~ 
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                        >> 2U))))
                                                 ? 0U
                                                 : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inexact___05Fh235105))))));
    __Vtemp3174[1U] = ((0x3fU & ((IData)(((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                           ? (0xffffffff00000000ULL 
                                              | (QData)((IData)(
                                                                ((((0ULL 
                                                                    == 
                                                                    (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[6U])) 
                                                                      << 0x2fU) 
                                                                     | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U])) 
                                                                         << 0xfU) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U])) 
                                                                           >> 0x11U)))) 
                                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                      >> 2U)) 
                                                                  | ((0U 
                                                                      == 
                                                                      ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U] 
                                                                        << 0xfU) 
                                                                       | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U] 
                                                                          >> 0x11U))) 
                                                                     & (~ 
                                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                         >> 2U))))
                                                                  ? 0U
                                                                  : 
                                                                 ((4U 
                                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                                                   ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh195256)
                                                                   : 
                                                                  ((2U 
                                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                                                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh195118)
                                                                    : 
                                                                   ((0U 
                                                                     == 
                                                                     (0x7fffffffU 
                                                                      & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U] 
                                                                          << 0xfU) 
                                                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U] 
                                                                            >> 0x11U))))
                                                                     ? 
                                                                    ((0x10000U 
                                                                      & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U])
                                                                      ? 0xcf000000U
                                                                      : 0U)
                                                                     : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh195118))))))))
                                           : ((((0ULL 
                                                 == 
                                                 (((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[6U])) 
                                                   << 0x2fU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U])) 
                                                      << 0xfU) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U])) 
                                                        >> 0x11U)))) 
                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                   >> 2U)) 
                                               | ((0U 
                                                   == 
                                                   ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U] 
                                                     << 0xfU) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U] 
                                                       >> 0x11U))) 
                                                  & (~ 
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                      >> 2U))))
                                               ? 0ULL
                                               : ((4U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                                   ? 
                                                  (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__sign___05Fh235102)) 
                                                    << 0x3fU) 
                                                   | (((QData)((IData)(
                                                                       (0x7ffU 
                                                                        & ((1U 
                                                                            & (IData)(
                                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_IF_ff_input_first___05F309_BITS_5_TO_3_318_EQ_0_ETC___05F_d3706 
                                                                                >> 0x34U)))
                                                                            ? 
                                                                           ((IData)(1U) 
                                                                            + 
                                                                            ((IData)(0x43eU) 
                                                                             - 
                                                                             (0x3fU 
                                                                              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x___05Fh235203))))
                                                                            : 
                                                                           ((IData)(0x43eU) 
                                                                            - 
                                                                            (0x3fU 
                                                                             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x___05Fh235203))))))) 
                                                       << 0x34U) 
                                                      | (0xfffffffffffffULL 
                                                         & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_IF_ff_input_first___05F309_BITS_5_TO_3_318_EQ_0_ETC___05F_d3706)))
                                                   : 
                                                  (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__lv_sign___05Fh220890)) 
                                                    << 0x3fU) 
                                                   | (((QData)((IData)(
                                                                       (0x7ffU 
                                                                        & ((IData)(0x41eU) 
                                                                           - 
                                                                           (0x1fU 
                                                                            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x___05Fh229768)))))) 
                                                       << 0x34U) 
                                                      | ((QData)((IData)(
                                                                         (0x7fffffffU 
                                                                          & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT___theResult___05F___05Fh220894 
                                                                             << 
                                                                             (0x1fU 
                                                                              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x___05Fh229768)))))) 
                                                         << 0x15U))))))) 
                                 >> 0x1aU)) | (0xffffffc0U 
                                               & ((IData)(
                                                          (((1U 
                                                             & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                                             ? 
                                                            (0xffffffff00000000ULL 
                                                             | (QData)((IData)(
                                                                               ((((0ULL 
                                                                                == 
                                                                                (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[6U])) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U])) 
                                                                                << 0xfU) 
                                                                                | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U])) 
                                                                                >> 0x11U)))) 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                                >> 2U)) 
                                                                                | ((0U 
                                                                                == 
                                                                                ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U] 
                                                                                << 0xfU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U] 
                                                                                >> 0x11U))) 
                                                                                & (~ 
                                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                                >> 2U))))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((4U 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                                                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh195256)
                                                                                 : 
                                                                                ((2U 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                                                                 ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh195118)
                                                                                 : 
                                                                                ((0U 
                                                                                == 
                                                                                (0x7fffffffU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U] 
                                                                                << 0xfU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U] 
                                                                                >> 0x11U))))
                                                                                 ? 
                                                                                ((0x10000U 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U])
                                                                                 ? 0xcf000000U
                                                                                 : 0U)
                                                                                 : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh195118))))))))
                                                             : 
                                                            ((((0ULL 
                                                                == 
                                                                (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[6U])) 
                                                                  << 0x2fU) 
                                                                 | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U])) 
                                                                     << 0xfU) 
                                                                    | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U])) 
                                                                       >> 0x11U)))) 
                                                               & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                  >> 2U)) 
                                                              | ((0U 
                                                                  == 
                                                                  ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U] 
                                                                    << 0xfU) 
                                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U] 
                                                                      >> 0x11U))) 
                                                                 & (~ 
                                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                     >> 2U))))
                                                              ? 0ULL
                                                              : 
                                                             ((4U 
                                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                                               ? 
                                                              (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__sign___05Fh235102)) 
                                                                << 0x3fU) 
                                                               | (((QData)((IData)(
                                                                                (0x7ffU 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_IF_ff_input_first___05F309_BITS_5_TO_3_318_EQ_0_ETC___05F_d3706 
                                                                                >> 0x34U)))
                                                                                 ? 
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                ((IData)(0x43eU) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x___05Fh235203))))
                                                                                 : 
                                                                                ((IData)(0x43eU) 
                                                                                - 
                                                                                (0x3fU 
                                                                                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x___05Fh235203))))))) 
                                                                   << 0x34U) 
                                                                  | (0xfffffffffffffULL 
                                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_IF_ff_input_first___05F309_BITS_5_TO_3_318_EQ_0_ETC___05F_d3706)))
                                                               : 
                                                              (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__lv_sign___05Fh220890)) 
                                                                << 0x3fU) 
                                                               | (((QData)((IData)(
                                                                                (0x7ffU 
                                                                                & ((IData)(0x41eU) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x___05Fh229768)))))) 
                                                                   << 0x34U) 
                                                                  | ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT___theResult___05F___05Fh220894 
                                                                                << 
                                                                                (0x1fU 
                                                                                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x___05Fh229768)))))) 
                                                                     << 0x15U)))))) 
                                                           >> 0x20U)) 
                                                  << 6U)));
    __Vtemp3174[2U] = (0x3fU & ((IData)((((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                           ? (0xffffffff00000000ULL 
                                              | (QData)((IData)(
                                                                ((((0ULL 
                                                                    == 
                                                                    (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[6U])) 
                                                                      << 0x2fU) 
                                                                     | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U])) 
                                                                         << 0xfU) 
                                                                        | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U])) 
                                                                           >> 0x11U)))) 
                                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                      >> 2U)) 
                                                                  | ((0U 
                                                                      == 
                                                                      ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U] 
                                                                        << 0xfU) 
                                                                       | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U] 
                                                                          >> 0x11U))) 
                                                                     & (~ 
                                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                         >> 2U))))
                                                                  ? 0U
                                                                  : 
                                                                 ((4U 
                                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                                                   ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh195256)
                                                                   : 
                                                                  ((2U 
                                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                                                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh195118)
                                                                    : 
                                                                   ((0U 
                                                                     == 
                                                                     (0x7fffffffU 
                                                                      & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U] 
                                                                          << 0xfU) 
                                                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U] 
                                                                            >> 0x11U))))
                                                                     ? 
                                                                    ((0x10000U 
                                                                      & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U])
                                                                      ? 0xcf000000U
                                                                      : 0U)
                                                                     : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x_wget___05Fh195118))))))))
                                           : ((((0ULL 
                                                 == 
                                                 (((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[6U])) 
                                                   << 0x2fU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U])) 
                                                      << 0xfU) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U])) 
                                                        >> 0x11U)))) 
                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                   >> 2U)) 
                                               | ((0U 
                                                   == 
                                                   ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U] 
                                                     << 0xfU) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U] 
                                                       >> 0x11U))) 
                                                  & (~ 
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                      >> 2U))))
                                               ? 0ULL
                                               : ((4U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                                   ? 
                                                  (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__sign___05Fh235102)) 
                                                    << 0x3fU) 
                                                   | (((QData)((IData)(
                                                                       (0x7ffU 
                                                                        & ((1U 
                                                                            & (IData)(
                                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_IF_ff_input_first___05F309_BITS_5_TO_3_318_EQ_0_ETC___05F_d3706 
                                                                                >> 0x34U)))
                                                                            ? 
                                                                           ((IData)(1U) 
                                                                            + 
                                                                            ((IData)(0x43eU) 
                                                                             - 
                                                                             (0x3fU 
                                                                              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x___05Fh235203))))
                                                                            : 
                                                                           ((IData)(0x43eU) 
                                                                            - 
                                                                            (0x3fU 
                                                                             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x___05Fh235203))))))) 
                                                       << 0x34U) 
                                                      | (0xfffffffffffffULL 
                                                         & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_IF_ff_input_first___05F309_BITS_5_TO_3_318_EQ_0_ETC___05F_d3706)))
                                                   : 
                                                  (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__lv_sign___05Fh220890)) 
                                                    << 0x3fU) 
                                                   | (((QData)((IData)(
                                                                       (0x7ffU 
                                                                        & ((IData)(0x41eU) 
                                                                           - 
                                                                           (0x1fU 
                                                                            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x___05Fh229768)))))) 
                                                       << 0x34U) 
                                                      | ((QData)((IData)(
                                                                         (0x7fffffffU 
                                                                          & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT___theResult___05F___05Fh220894 
                                                                             << 
                                                                             (0x1fU 
                                                                              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x___05Fh229768)))))) 
                                                         << 0x15U)))))) 
                                         >> 0x20U)) 
                                >> 0x1aU));
    __Vtemp3177[0U] = (0x20U | ((0xffffffc0U & ((IData)(
                                                        ((1U 
                                                          & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                                          ? 
                                                         (((~ 
                                                            ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__condFlags32_res_wget) 
                                                             >> 0xdU)) 
                                                           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__NOT_IF_condFlags32_res_whas___05F343_THEN_condFlag_ETC___05F_d3844))
                                                           ? 
                                                          ((1U 
                                                            & ((~ 
                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                 >> 1U)) 
                                                               & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__setCanonicalNaN_res_wget[2U] 
                                                                  >> 0x1fU)))
                                                            ? 
                                                           ((1U 
                                                             & ((~ 
                                                                 (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                  >> 2U)) 
                                                                & (IData)(
                                                                          ((1ULL 
                                                                            + 
                                                                            (~ vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh248728)) 
                                                                           >> 0x1fU))))
                                                             ? 
                                                            (((QData)((IData)(
                                                                              (- (IData)(
                                                                                (1U 
                                                                                & (((IData)(1U) 
                                                                                + 
                                                                                (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh248728))) 
                                                                                >> 0x1fU)))))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((IData)(1U) 
                                                                                + 
                                                                                (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh248728))))))
                                                             : 
                                                            (1ULL 
                                                             + 
                                                             (~ vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh248728)))
                                                            : 
                                                           ((1U 
                                                             & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                 >> 1U) 
                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__setCanonicalNaN_res_wget[2U] 
                                                                   >> 0x1fU)))
                                                             ? 0ULL
                                                             : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh248728))
                                                           : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05Fh248108)
                                                          : 
                                                         (((~ 
                                                            ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__condFlags64_res_wget) 
                                                             >> 0xdU)) 
                                                           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__NOT_IF_condFlags64_res_whas___05F428_THEN_condFlag_ETC___05F_d4012))
                                                           ? 
                                                          ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__sign___05Fh235102)
                                                            ? 
                                                           ((1U 
                                                             & ((~ 
                                                                 (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                  >> 2U)) 
                                                                & (IData)(
                                                                          ((1ULL 
                                                                            + 
                                                                            (~ vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh251803)) 
                                                                           >> 0x1fU))))
                                                             ? 
                                                            (((QData)((IData)(
                                                                              (- (IData)(
                                                                                (1U 
                                                                                & (((IData)(1U) 
                                                                                + 
                                                                                (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh251803))) 
                                                                                >> 0x1fU)))))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((IData)(1U) 
                                                                                + 
                                                                                (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh251803))))))
                                                             : 
                                                            (1ULL 
                                                             + 
                                                             (~ vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh251803)))
                                                            : 
                                                           ((1U 
                                                             & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                 >> 1U) 
                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[6U] 
                                                                   >> 0x10U)))
                                                             ? 0ULL
                                                             : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh251803))
                                                           : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05Fh251180))) 
                                                << 6U)) 
                                | ((((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                      ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_NOT_IF_condFlags32_res_whas___05F343_THEN_condF_ETC___05F_d4182)
                                      : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_NOT_IF_condFlags64_res_whas___05F428_THEN_condF_ETC___05F_d4218)) 
                                    << 4U) | ((1U & 
                                               vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                               ? ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_NOT_IF_condFlags32_res_whas___05F343_THEN_condF_ETC___05F_d4182)) 
                                                  & (((~ 
                                                       ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__condFlags32_res_wget) 
                                                        >> 0xdU)) 
                                                      & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__NOT_IF_condFlags32_res_whas___05F343_THEN_condFlag_ETC___05F_d3844))
                                                      ? 
                                                     ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__lv_inexact___05Fh248112) 
                                                      | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__lv_inexact1___05Fh248119))
                                                      : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__lv_inexact___05Fh248112)))
                                               : ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_NOT_IF_condFlags64_res_whas___05F428_THEN_condF_ETC___05F_d4218)) 
                                                  & (((~ 
                                                       ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__condFlags64_res_wget) 
                                                        >> 0xdU)) 
                                                      & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__NOT_IF_condFlags64_res_whas___05F428_THEN_condFlag_ETC___05F_d4012))
                                                      ? 
                                                     ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__lv_inexact___05Fh251184) 
                                                      | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__lv_inexact1___05Fh251191))
                                                      : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__lv_inexact___05Fh251184)))))));
    __Vtemp3177[1U] = ((0x3fU & ((IData)(((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                           ? (((~ ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__condFlags32_res_wget) 
                                                   >> 0xdU)) 
                                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__NOT_IF_condFlags32_res_whas___05F343_THEN_condFlag_ETC___05F_d3844))
                                               ? ((1U 
                                                   & ((~ 
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                        >> 1U)) 
                                                      & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__setCanonicalNaN_res_wget[2U] 
                                                         >> 0x1fU)))
                                                   ? 
                                                  ((1U 
                                                    & ((~ 
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                         >> 2U)) 
                                                       & (IData)(
                                                                 ((1ULL 
                                                                   + 
                                                                   (~ vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh248728)) 
                                                                  >> 0x1fU))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (((IData)(1U) 
                                                                                + 
                                                                                (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh248728))) 
                                                                                >> 0x1fU)))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((IData)(1U) 
                                                                       + 
                                                                       (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh248728))))))
                                                    : 
                                                   (1ULL 
                                                    + 
                                                    (~ vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh248728)))
                                                   : 
                                                  ((1U 
                                                    & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                        >> 1U) 
                                                       & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__setCanonicalNaN_res_wget[2U] 
                                                          >> 0x1fU)))
                                                    ? 0ULL
                                                    : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh248728))
                                               : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05Fh248108)
                                           : (((~ ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__condFlags64_res_wget) 
                                                   >> 0xdU)) 
                                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__NOT_IF_condFlags64_res_whas___05F428_THEN_condFlag_ETC___05F_d4012))
                                               ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__sign___05Fh235102)
                                                   ? 
                                                  ((1U 
                                                    & ((~ 
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                         >> 2U)) 
                                                       & (IData)(
                                                                 ((1ULL 
                                                                   + 
                                                                   (~ vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh251803)) 
                                                                  >> 0x1fU))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (((IData)(1U) 
                                                                                + 
                                                                                (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh251803))) 
                                                                                >> 0x1fU)))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((IData)(1U) 
                                                                       + 
                                                                       (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh251803))))))
                                                    : 
                                                   (1ULL 
                                                    + 
                                                    (~ vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh251803)))
                                                   : 
                                                  ((1U 
                                                    & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                        >> 1U) 
                                                       & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[6U] 
                                                          >> 0x10U)))
                                                    ? 0ULL
                                                    : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh251803))
                                               : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05Fh251180))) 
                                 >> 0x1aU)) | (0xffffffc0U 
                                               & ((IData)(
                                                          (((1U 
                                                             & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                                             ? 
                                                            (((~ 
                                                               ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__condFlags32_res_wget) 
                                                                >> 0xdU)) 
                                                              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__NOT_IF_condFlags32_res_whas___05F343_THEN_condFlag_ETC___05F_d3844))
                                                              ? 
                                                             ((1U 
                                                               & ((~ 
                                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                    >> 1U)) 
                                                                  & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__setCanonicalNaN_res_wget[2U] 
                                                                     >> 0x1fU)))
                                                               ? 
                                                              ((1U 
                                                                & ((~ 
                                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                     >> 2U)) 
                                                                   & (IData)(
                                                                             ((1ULL 
                                                                               + 
                                                                               (~ vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh248728)) 
                                                                              >> 0x1fU))))
                                                                ? 
                                                               (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (((IData)(1U) 
                                                                                + 
                                                                                (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh248728))) 
                                                                                >> 0x1fU)))))) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh248728))))))
                                                                : 
                                                               (1ULL 
                                                                + 
                                                                (~ vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh248728)))
                                                               : 
                                                              ((1U 
                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                    >> 1U) 
                                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__setCanonicalNaN_res_wget[2U] 
                                                                      >> 0x1fU)))
                                                                ? 0ULL
                                                                : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh248728))
                                                              : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05Fh248108)
                                                             : 
                                                            (((~ 
                                                               ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__condFlags64_res_wget) 
                                                                >> 0xdU)) 
                                                              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__NOT_IF_condFlags64_res_whas___05F428_THEN_condFlag_ETC___05F_d4012))
                                                              ? 
                                                             ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__sign___05Fh235102)
                                                               ? 
                                                              ((1U 
                                                                & ((~ 
                                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                     >> 2U)) 
                                                                   & (IData)(
                                                                             ((1ULL 
                                                                               + 
                                                                               (~ vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh251803)) 
                                                                              >> 0x1fU))))
                                                                ? 
                                                               (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (((IData)(1U) 
                                                                                + 
                                                                                (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh251803))) 
                                                                                >> 0x1fU)))))) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh251803))))))
                                                                : 
                                                               (1ULL 
                                                                + 
                                                                (~ vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh251803)))
                                                               : 
                                                              ((1U 
                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                    >> 1U) 
                                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[6U] 
                                                                      >> 0x10U)))
                                                                ? 0ULL
                                                                : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh251803))
                                                              : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05Fh251180)) 
                                                           >> 0x20U)) 
                                                  << 6U)));
    __Vtemp3177[2U] = (0x3fU & ((IData)((((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                           ? (((~ ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__condFlags32_res_wget) 
                                                   >> 0xdU)) 
                                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__NOT_IF_condFlags32_res_whas___05F343_THEN_condFlag_ETC___05F_d3844))
                                               ? ((1U 
                                                   & ((~ 
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                        >> 1U)) 
                                                      & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__setCanonicalNaN_res_wget[2U] 
                                                         >> 0x1fU)))
                                                   ? 
                                                  ((1U 
                                                    & ((~ 
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                         >> 2U)) 
                                                       & (IData)(
                                                                 ((1ULL 
                                                                   + 
                                                                   (~ vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh248728)) 
                                                                  >> 0x1fU))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (((IData)(1U) 
                                                                                + 
                                                                                (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh248728))) 
                                                                                >> 0x1fU)))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((IData)(1U) 
                                                                       + 
                                                                       (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh248728))))))
                                                    : 
                                                   (1ULL 
                                                    + 
                                                    (~ vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh248728)))
                                                   : 
                                                  ((1U 
                                                    & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                        >> 1U) 
                                                       & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__setCanonicalNaN_res_wget[2U] 
                                                          >> 0x1fU)))
                                                    ? 0ULL
                                                    : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh248728))
                                               : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05Fh248108)
                                           : (((~ ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__condFlags64_res_wget) 
                                                   >> 0xdU)) 
                                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__NOT_IF_condFlags64_res_whas___05F428_THEN_condFlag_ETC___05F_d4012))
                                               ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__sign___05Fh235102)
                                                   ? 
                                                  ((1U 
                                                    & ((~ 
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                         >> 2U)) 
                                                       & (IData)(
                                                                 ((1ULL 
                                                                   + 
                                                                   (~ vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh251803)) 
                                                                  >> 0x1fU))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (((IData)(1U) 
                                                                                + 
                                                                                (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh251803))) 
                                                                                >> 0x1fU)))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((IData)(1U) 
                                                                       + 
                                                                       (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh251803))))))
                                                    : 
                                                   (1ULL 
                                                    + 
                                                    (~ vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh251803)))
                                                   : 
                                                  ((1U 
                                                    & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                        >> 1U) 
                                                       & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[6U] 
                                                          >> 0x10U)))
                                                    ? 0ULL
                                                    : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05F_3___05Fh251803))
                                               : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__final_result___05Fh251180)) 
                                         >> 0x20U)) 
                                >> 0x1aU));
    __Vtemp3192[0U] = (0x20U | (0xffffffc0U & ((IData)(
                                                       ((1U 
                                                         & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                                         ? 
                                                        (0xffffffff00000000ULL 
                                                         | (QData)((IData)(
                                                                           ((0x80000000U 
                                                                             & (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                                >> 3U))))
                                                                                 ? 
                                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__setCanonicalNaN_res_wget[1U] 
                                                                                >> 0x1fU)
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                                >> 3U))))
                                                                                 ? 
                                                                                (~ 
                                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__setCanonicalNaN_res_wget[1U] 
                                                                                >> 0x1fU))
                                                                                 : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x___05Fh282196))) 
                                                                                << 0x1fU)) 
                                                                            | (0x7fffffffU 
                                                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__setCanonicalNaN_res_wget[2U])))))
                                                         : 
                                                        (((QData)((IData)(
                                                                          (1U 
                                                                           & ((0U 
                                                                               == 
                                                                               (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                                >> 3U))))
                                                                               ? 
                                                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U] 
                                                                               >> 0x10U)
                                                                               : 
                                                                              ((1U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                                >> 3U))))
                                                                                ? 
                                                                               (~ 
                                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U] 
                                                                                >> 0x10U))
                                                                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_first___05F309_BIT_208_447_XOR_ff_input_f_ETC___05F_d3810)))))) 
                                                          << 0x3fU) 
                                                         | (0x7fffffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[6U])) 
                                                                << 0x2fU) 
                                                               | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U])) 
                                                                   << 0xfU) 
                                                                  | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U])) 
                                                                     >> 0x11U))))))) 
                                               << 6U)));
    __Vtemp3192[1U] = ((0x3fU & ((IData)(((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                           ? (0xffffffff00000000ULL 
                                              | (QData)((IData)(
                                                                ((0x80000000U 
                                                                  & (((0U 
                                                                       == 
                                                                       (7U 
                                                                        & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[1U] 
                                                                            << 0x1dU) 
                                                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                              >> 3U))))
                                                                       ? 
                                                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__setCanonicalNaN_res_wget[1U] 
                                                                       >> 0x1fU)
                                                                       : 
                                                                      ((1U 
                                                                        == 
                                                                        (7U 
                                                                         & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[1U] 
                                                                             << 0x1dU) 
                                                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                               >> 3U))))
                                                                        ? 
                                                                       (~ 
                                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__setCanonicalNaN_res_wget[1U] 
                                                                         >> 0x1fU))
                                                                        : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x___05Fh282196))) 
                                                                     << 0x1fU)) 
                                                                 | (0x7fffffffU 
                                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__setCanonicalNaN_res_wget[2U])))))
                                           : (((QData)((IData)(
                                                               (1U 
                                                                & ((0U 
                                                                    == 
                                                                    (7U 
                                                                     & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[1U] 
                                                                         << 0x1dU) 
                                                                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                           >> 3U))))
                                                                    ? 
                                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U] 
                                                                    >> 0x10U)
                                                                    : 
                                                                   ((1U 
                                                                     == 
                                                                     (7U 
                                                                      & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[1U] 
                                                                          << 0x1dU) 
                                                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                            >> 3U))))
                                                                     ? 
                                                                    (~ 
                                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U] 
                                                                      >> 0x10U))
                                                                     : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_first___05F309_BIT_208_447_XOR_ff_input_f_ETC___05F_d3810)))))) 
                                               << 0x3fU) 
                                              | (0x7fffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[6U])) 
                                                     << 0x2fU) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U])) 
                                                        << 0xfU) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U])) 
                                                          >> 0x11U))))))) 
                                 >> 0x1aU)) | (0xffffffc0U 
                                               & ((IData)(
                                                          (((1U 
                                                             & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                                             ? 
                                                            (0xffffffff00000000ULL 
                                                             | (QData)((IData)(
                                                                               ((0x80000000U 
                                                                                & (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                                >> 3U))))
                                                                                 ? 
                                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__setCanonicalNaN_res_wget[1U] 
                                                                                >> 0x1fU)
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                                >> 3U))))
                                                                                 ? 
                                                                                (~ 
                                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__setCanonicalNaN_res_wget[1U] 
                                                                                >> 0x1fU))
                                                                                 : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x___05Fh282196))) 
                                                                                << 0x1fU)) 
                                                                                | (0x7fffffffU 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__setCanonicalNaN_res_wget[2U])))))
                                                             : 
                                                            (((QData)((IData)(
                                                                              (1U 
                                                                               & ((0U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                                >> 3U))))
                                                                                 ? 
                                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U] 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                                >> 3U))))
                                                                                 ? 
                                                                                (~ 
                                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U] 
                                                                                >> 0x10U))
                                                                                 : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_first___05F309_BIT_208_447_XOR_ff_input_f_ETC___05F_d3810)))))) 
                                                              << 0x3fU) 
                                                             | (0x7fffffffffffffffULL 
                                                                & (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[6U])) 
                                                                    << 0x2fU) 
                                                                   | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U])) 
                                                                       << 0xfU) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U])) 
                                                                         >> 0x11U)))))) 
                                                           >> 0x20U)) 
                                                  << 6U)));
    __Vtemp3192[2U] = (0x3fU & ((IData)((((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                           ? (0xffffffff00000000ULL 
                                              | (QData)((IData)(
                                                                ((0x80000000U 
                                                                  & (((0U 
                                                                       == 
                                                                       (7U 
                                                                        & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[1U] 
                                                                            << 0x1dU) 
                                                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                              >> 3U))))
                                                                       ? 
                                                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__setCanonicalNaN_res_wget[1U] 
                                                                       >> 0x1fU)
                                                                       : 
                                                                      ((1U 
                                                                        == 
                                                                        (7U 
                                                                         & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[1U] 
                                                                             << 0x1dU) 
                                                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                               >> 3U))))
                                                                        ? 
                                                                       (~ 
                                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__setCanonicalNaN_res_wget[1U] 
                                                                         >> 0x1fU))
                                                                        : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__x___05Fh282196))) 
                                                                     << 0x1fU)) 
                                                                 | (0x7fffffffU 
                                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__setCanonicalNaN_res_wget[2U])))))
                                           : (((QData)((IData)(
                                                               (1U 
                                                                & ((0U 
                                                                    == 
                                                                    (7U 
                                                                     & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[1U] 
                                                                         << 0x1dU) 
                                                                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                           >> 3U))))
                                                                    ? 
                                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U] 
                                                                    >> 0x10U)
                                                                    : 
                                                                   ((1U 
                                                                     == 
                                                                     (7U 
                                                                      & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[1U] 
                                                                          << 0x1dU) 
                                                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                                            >> 3U))))
                                                                     ? 
                                                                    (~ 
                                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U] 
                                                                      >> 0x10U))
                                                                     : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_first___05F309_BIT_208_447_XOR_ff_input_f_ETC___05F_d3810)))))) 
                                               << 0x3fU) 
                                              | (0x7fffffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[6U])) 
                                                     << 0x2fU) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[5U])) 
                                                        << 0xfU) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[4U])) 
                                                          >> 0x11U)))))) 
                                         >> 0x20U)) 
                                >> 0x1aU));
    if ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])) {
        __Vtemp3202[0U] = ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BITS_12_TO_8_310_EQ_0b1_ETC___05F_d4457[0U]
                                : ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                    ? ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BITS_12_TO_8_310_EQ_0b1_ETC___05F_d4457[0U]
                                        : __Vtemp3174[0U])
                                    : ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BITS_12_TO_8_310_EQ_0b1_ETC___05F_d4457[0U]
                                        : __Vtemp3177[0U])))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                ? ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BITS_12_TO_8_310_EQ_0b1_ETC___05F_d4457[0U]
                                    : ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BITS_12_TO_8_310_EQ_0b1_ETC___05F_d4457[0U]
                                        : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BIT_0_341_THEN_IF_ff_in_ETC___05F_d3521[0U]))
                                : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BITS_12_TO_8_310_EQ_0b1_ETC___05F_d4457[0U]));
        __Vtemp3202[1U] = ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BITS_12_TO_8_310_EQ_0b1_ETC___05F_d4457[1U]
                                : ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                    ? ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BITS_12_TO_8_310_EQ_0b1_ETC___05F_d4457[1U]
                                        : __Vtemp3174[1U])
                                    : ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BITS_12_TO_8_310_EQ_0b1_ETC___05F_d4457[1U]
                                        : __Vtemp3177[1U])))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                ? ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BITS_12_TO_8_310_EQ_0b1_ETC___05F_d4457[1U]
                                    : ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BITS_12_TO_8_310_EQ_0b1_ETC___05F_d4457[1U]
                                        : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BIT_0_341_THEN_IF_ff_in_ETC___05F_d3521[1U]))
                                : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BITS_12_TO_8_310_EQ_0b1_ETC___05F_d4457[1U]));
        __Vtemp3202[2U] = ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BITS_12_TO_8_310_EQ_0b1_ETC___05F_d4457[2U]
                                : ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                    ? ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BITS_12_TO_8_310_EQ_0b1_ETC___05F_d4457[2U]
                                        : __Vtemp3174[2U])
                                    : ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BITS_12_TO_8_310_EQ_0b1_ETC___05F_d4457[2U]
                                        : __Vtemp3177[2U])))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                ? ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BITS_12_TO_8_310_EQ_0b1_ETC___05F_d4457[2U]
                                    : ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BITS_12_TO_8_310_EQ_0b1_ETC___05F_d4457[2U]
                                        : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BIT_0_341_THEN_IF_ff_in_ETC___05F_d3521[2U]))
                                : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BITS_12_TO_8_310_EQ_0b1_ETC___05F_d4457[2U]));
    } else {
        __Vtemp3202[0U] = ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BITS_12_TO_8_310_EQ_0b1_ETC___05F_d4457[0U]
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                ? ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BITS_12_TO_8_310_EQ_0b1_ETC___05F_d4457[0U]
                                    : ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BIT_0_341_THEN_IF_ff_in_ETC___05F_d3521[0U]
                                        : __Vtemp3192[0U]))
                                : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BITS_12_TO_8_310_EQ_0b1_ETC___05F_d4457[0U]));
        __Vtemp3202[1U] = ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BITS_12_TO_8_310_EQ_0b1_ETC___05F_d4457[1U]
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                ? ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BITS_12_TO_8_310_EQ_0b1_ETC___05F_d4457[1U]
                                    : ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BIT_0_341_THEN_IF_ff_in_ETC___05F_d3521[1U]
                                        : __Vtemp3192[1U]))
                                : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BITS_12_TO_8_310_EQ_0b1_ETC___05F_d4457[1U]));
        __Vtemp3202[2U] = ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BITS_12_TO_8_310_EQ_0b1_ETC___05F_d4457[2U]
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                ? ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BITS_12_TO_8_310_EQ_0b1_ETC___05F_d4457[2U]
                                    : ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U])
                                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BIT_0_341_THEN_IF_ff_in_ETC___05F_d3521[2U]
                                        : __Vtemp3192[2U]))
                                : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__IF_ff_input_first___05F309_BITS_12_TO_8_310_EQ_0b1_ETC___05F_d4457[2U]));
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__MUX_rg_result_1_wset_1___05FVAL_1[0U] 
        = __Vtemp3202[0U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__MUX_rg_result_1_wset_1___05FVAL_1[1U] 
        = __Vtemp3202[1U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__MUX_rg_result_1_wset_1___05FVAL_1[2U] 
        = __Vtemp3202[2U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__decoder_func_32_inst_BITS_1_TO_0_0_EQ_0b11_1_O_ETC___05F_d551 
        = (((((3U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                             << 6U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                       >> 0x1aU)))) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_3_EQ_0b0_4_ETC___05F_d545)) 
             & (3U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                              << 1U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                        >> 0x1fU))))) 
            & (4U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                             << 4U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                       >> 0x1cU))))) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_0_4_ETC___05F_d548));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__registerfile__DOT__MUX_floating_rf_upd_1___05FSEL_2 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv_EN_debug_access_gprs) 
            & (vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[2U] 
               >> 0xfU)) & vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[0U]);
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__registerfile__DOT__MUX_integer_rf_upd_1___05FSEL_2 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv_EN_debug_access_gprs) 
            & (vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[2U] 
               >> 0xfU)) & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[0U]));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv_EN_ma_debug_access_csrs) {
        __Vtemp3207[0U] = ((0xfffffff0U & ((IData)(
                                                   ((0x8000U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[2U])
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[2U])) 
                                                      << 0x3fU) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[1U])) 
                                                         << 0x1fU) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[0U])) 
                                                           >> 1U)))
                                                     : 0ULL)) 
                                           << 4U)) 
                           | (((0x8000U & vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[2U])
                                ? 1U : 2U) << 2U));
        __Vtemp3207[1U] = ((0xfU & ((IData)(((0x8000U 
                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[2U])
                                              ? (((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[2U])) 
                                                  << 0x3fU) 
                                                 | (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[1U])) 
                                                     << 0x1fU) 
                                                    | ((QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[0U])) 
                                                       >> 1U)))
                                              : 0ULL)) 
                                    >> 0x1cU)) | (0xfffffff0U 
                                                  & ((IData)(
                                                             (((0x8000U 
                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[2U])
                                                                ? 
                                                               (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[2U])) 
                                                                 << 0x3fU) 
                                                                | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[1U])) 
                                                                    << 0x1fU) 
                                                                   | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[0U])) 
                                                                      >> 1U)))
                                                                : 0ULL) 
                                                              >> 0x20U)) 
                                                     << 4U)));
        __Vtemp3207[2U] = ((0xfff0U & (vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[2U] 
                                       << 3U)) | (0xfU 
                                                  & ((IData)(
                                                             (((0x8000U 
                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[2U])
                                                                ? 
                                                               (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[2U])) 
                                                                 << 0x3fU) 
                                                                | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[1U])) 
                                                                    << 0x1fU) 
                                                                   | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__debug_module_hart_abstractOperation[0U])) 
                                                                      >> 1U)))
                                                                : 0ULL) 
                                                              >> 0x20U)) 
                                                     >> 0x1cU)));
    } else {
        __Vtemp3207[0U] = ((0xfffffff0U & ((IData)(
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[2U])) 
                                                     << 0x29U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[1U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[0U])) 
                                                          >> 0x17U)))) 
                                           << 4U)) 
                           | ((0xcU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[1U] 
                                        << 0x1cU) | 
                                       (0xffffffcU 
                                        & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[0U] 
                                           >> 4U)))) 
                              | (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[1U] 
                                        << 0xbU) | 
                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[0U] 
                                        >> 0x15U)))));
        __Vtemp3207[1U] = ((0xfU & ((IData)((((QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[2U])) 
                                              << 0x29U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[1U])) 
                                                 << 9U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[0U])) 
                                                   >> 0x17U)))) 
                                    >> 0x1cU)) | (0xfffffff0U 
                                                  & ((IData)(
                                                             ((((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[2U])) 
                                                                << 0x29U) 
                                                               | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[1U])) 
                                                                   << 9U) 
                                                                  | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[0U])) 
                                                                     >> 0x17U))) 
                                                              >> 0x20U)) 
                                                     << 4U)));
        __Vtemp3207[2U] = ((0xfff0U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[1U] 
                                        << 0x1bU) | 
                                       (0x7fffff0U 
                                        & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[0U] 
                                           >> 5U)))) 
                           | (0xfU & ((IData)(((((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[2U])) 
                                                 << 0x29U) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[0U])) 
                                                      >> 0x17U))) 
                                               >> 0x20U)) 
                                      >> 0x1cU)));
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[0U] 
        = __Vtemp3207[0U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[1U] 
        = __Vtemp3207[1U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
        = __Vtemp3207[2U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp3_EN_mav_upd_on_debugger 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr_EN_take_trap) 
           & (((0x31U <= (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr_take_trap_type_cause)) 
               & (0x35U >= (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr_take_trap_type_cause))) 
              | (0x36U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr_take_trap_type_cause))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_EN_mav_upd_on_trap 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr_EN_take_trap) 
            & ((0x31U > (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr_take_trap_type_cause)) 
               | (0x35U < (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr_take_trap_type_cause)))) 
           & (0x36U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr_take_trap_type_cause)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5_flush_fst 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__wr_flush_whas) 
           & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__wr_flush_wget[2U] 
              >> 2U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_EN_mav_upd_on_ret 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr_EN_system_instruction) 
            & (0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[1U] 
                             << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[0U] 
                                          >> 6U))))) 
           & (((0U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[1U] 
                                << 0xfU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[0U] 
                                            >> 0x11U)))) 
               | (1U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[1U] 
                                  << 0xfU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[0U] 
                                              >> 0x11U))))) 
              | (3U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[1U] 
                                 << 0xfU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[0U] 
                                             >> 0x11U))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_EN_ma_core_req 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr_EN_system_instruction) 
             & (0U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[1U] 
                              << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[0U] 
                                           >> 6U))))) 
            & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__rg_csr_wait))) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv_EN_ma_debug_access_csrs));
    vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_blockdone_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__WILL_FIRE_RL_aesbuf_aes_aes_b_send_bram) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_aes_aes_b_blockaes_block_start));
    vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_bram_inp_pwDequeue_whas 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__WILL_FIRE_RL_aesbuf_aes_aes_b_put_bram) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__WILL_FIRE_RL_aesbuf_aes_aes_b_send_bram));
    vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fkg_prev_key4_write_1___05FSEL_3 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__WILL_FIRE_RL_aesbuf_aes_aes_b_send_bram) 
           & ((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                & ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen)) 
                   | (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen)))) 
               | ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                  & ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen)) 
                     | (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))))) 
              | ((((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                   | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                  | (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                 & ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen)) 
                    | (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fkg_prev_key6_write_1___05FSEL_3 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__WILL_FIRE_RL_aesbuf_aes_aes_b_send_bram) 
           & ((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))) 
               | ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                  & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen)))) 
              | ((((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                   | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                  | (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                 & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_saved_write_1___05FSEL_3 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__WILL_FIRE_RL_aesbuf_aes_aes_b_send_bram) 
           & ((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
               | (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                   | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                  | (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)))) 
              & (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_saved) 
                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__NOT_aesbuf_aes_aes_b_key_aes_0761_BITS_127_TO___05FETC___05F_d80849) 
                     | (0U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen)))) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__NOT_aesbuf_aes_aes_b_key_aes_0761_BITS_191_TO___05FETC___05F_d80882))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fkg_round_key_done_0_write_1___05FSEL_2 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__WILL_FIRE_RL_aesbuf_aes_aes_b_send_bram) 
           & ((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
               | (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                   | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                  | (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)))) 
              & ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__NOT_aesbuf_aes_aes_b_key_aes_0761_BITS_127_TO___05FETC___05F_d80849) 
                   | (0U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))) 
                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__NOT_aesbuf_aes_aes_b_key_aes_0761_BITS_191_TO___05FETC___05F_d80882)) 
                 | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_saved)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_rg_state_EN 
        = (((((((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_rg_state)) 
                & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_counter))) 
               | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__WILL_FIRE_RL_aesbuf_aes_aes_b_send_bram) 
                  & (((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                        | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                       | (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                      | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                     | (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))))) 
              | ((4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_rg_state)) 
                 & (7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_counter)))) 
             | ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_rg_state)) 
                & ((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_length)) 
                     | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_length))) 
                    | (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_length))) 
                   | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_round_number_ETC___05F_d57194))))) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_aes_aes_b_blockaes_block_start) 
               & (((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_)) 
                     | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_))) 
                    | (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_))) 
                   | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_))) 
                  | (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_))))) 
           | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_rg_state)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fkg_maxrounds_write_1___05FSEL_2 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__WILL_FIRE_RL_aesbuf_aes_aes_b_send_bram) 
           & ((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                & (((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen)) 
                    | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))) 
                   | (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen)))) 
               | ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                  & (((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen)) 
                      | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))) 
                     | (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))))) 
              | ((((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                   | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                  | (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                 & (((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen)) 
                     | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))) 
                    | (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_col_0_write_1___05FSEL_3 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__WILL_FIRE_RL_aesbuf_aes_aes_b_send_bram) 
           & (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_decrypt_aes) 
               & (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                   | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                  | (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)))) 
              | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_decrypt_aes)) 
                 & (((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                       | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                      | (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                     | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                    | (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fcol0_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__WILL_FIRE_RL_aesbuf_aes_aes_b_send_bram) 
           & (((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes)) 
                 | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
                | (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
               | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))) 
              | (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_sbox_out_D_IN 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_aes_aes_b_blockaes_aes___05Fdecrypt_initial_xor) 
            & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdecrypt)))
            ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_sbox_out_write_1___05FVAL_1)
            : (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_aes_aes_b_blockaes_aes___05Fdr_sub) 
                & (((((((((((((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter)) 
                                | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))) 
                               | (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))) 
                              | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))) 
                             | (4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))) 
                            | (5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))) 
                           | (6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))) 
                          | (7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))) 
                         | (8U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))) 
                        | (9U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))) 
                       | (0xaU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))) 
                      | (0xbU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))) 
                     | (0xcU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))) 
                    | (0xdU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))) 
                   | (0xeU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))))
                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_sbox_out_write_1___05FVAL_2)
                : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_last_round_write_1___05FSEL_1)
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_sbox_out_write_1___05FVAL_3)
                    : (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_aes_aes_b_blockaes_block_start) 
                        & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_decrypt___05F8316_AND_NO_ETC___05F_d78617) 
                           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__NOT_aesbuf_aes_aes_b_blockaes_decrypt___05F8316_83_ETC___05F_d78624)))
                        ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_decrypt_)
                            ? (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_)) 
                                | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_)))
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1760040)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1771516))
                            : ((4U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_))
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1771516)
                                : ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_))
                                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1760040)
                                    : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_mode_))
                                        ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1754297)
                                        : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1777347)))))
                        : (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__WILL_FIRE_RL_aesbuf_aes_aes_b_send_bram) 
                            & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_decrypt_aes_0757_AND_NOT_aesb_ETC___05F_d80991) 
                               | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__NOT_aesbuf_aes_aes_b_decrypt_aes_0757_0985_AND_ETC___05F_d80997)))
                            ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_decrypt_aes)
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819373)
                                : ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))
                                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1807853)
                                    : ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_mode_aes))
                                        ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1813634)
                                        : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__x___05Fh1819373))))
                            : 0U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_ctr_op_D_IN 
        = (1U & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_ctr_op_write_1___05FSEL_1)) 
                 & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_ctr_op))));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_bram_inp_pwEnqueue_whas) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__x3___05Fh1802294[0U] 
            = (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_inp);
        vlTOPp->mkTbSoc__DOT__soc__DOT__x3___05Fh1802294[1U] 
            = (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_inp 
                       >> 0x20U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__x3___05Fh1802294[2U] 
            = (IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[2U])) 
                        << 0x33U) | (((QData)((IData)(
                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[1U])) 
                                      << 0x13U) | ((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                                                   >> 0xdU))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__x3___05Fh1802294[3U] 
            = (IData)(((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[2U])) 
                         << 0x33U) | (((QData)((IData)(
                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[1U])) 
                                       << 0x13U) | 
                                      ((QData)((IData)(
                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                                       >> 0xdU))) >> 0x20U));
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__x3___05Fh1802294[0U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__x3___05Fh1802294[1U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__x3___05Fh1802294[2U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__x3___05Fh1802294[3U] = 0U;
    }
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_state_var_write_1___05FSEL_1) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_bram_inp_rRdPtr_D_IN = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_bram_inp_rWrPtr_D_IN = 0U;
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_bram_inp_rRdPtr_D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_bram_inp_rRdPtr)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_bram_inp_rWrPtr_D_IN 
            = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_bram_inp_rWrPtr)));
    }
    __Vtemp3219[1U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_dpfpu_sqrt)
                        ? ((0x3fU & ((IData)((((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_sqrt_ff_final_out[2U])) 
                                               << 0x3bU) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_sqrt_ff_final_out[1U])) 
                                                  << 0x1bU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_sqrt_ff_final_out[0U])) 
                                                    >> 5U)))) 
                                     >> 0x1aU)) | (0xffffffc0U 
                                                   & ((IData)(
                                                              ((((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_sqrt_ff_final_out[2U])) 
                                                                 << 0x3bU) 
                                                                | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_sqrt_ff_final_out[1U])) 
                                                                    << 0x1bU) 
                                                                   | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_sqrt_ff_final_out[0U])) 
                                                                      >> 5U))) 
                                                               >> 0x20U)) 
                                                      << 6U)))
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_spfpu_sqrt)
                            ? ((0x3fU & ((IData)((0xffffffff00000000ULL 
                                                  | (QData)((IData)(
                                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_sqrt_ff_final_out 
                                                                     >> 5U))))) 
                                         >> 0x1aU)) 
                               | (0xffffffc0U & ((IData)(
                                                         ((0xffffffff00000000ULL 
                                                           | (QData)((IData)(
                                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_sqrt_ff_final_out 
                                                                              >> 5U)))) 
                                                          >> 0x20U)) 
                                                 << 6U)))
                            : 0U));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_spfpu_divider) {
        __Vtemp3220[0U] = (0x20U | ((0xffffffc0U & 
                                     ((IData)((0xffffffff00000000ULL 
                                               | (QData)((IData)(
                                                                 (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_wr_final_out_wget 
                                                                  >> 5U))))) 
                                      << 6U)) | (0x1fU 
                                                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_wr_final_out_wget))));
        __Vtemp3220[2U] = (0x3fU & ((IData)(((0xffffffff00000000ULL 
                                              | (QData)((IData)(
                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_wr_final_out_wget 
                                                                 >> 5U)))) 
                                             >> 0x20U)) 
                                    >> 0x1aU));
    } else {
        __Vtemp3220[0U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_dpfpu_sqrt)
                            ? (0x20U | ((0xffffffc0U 
                                         & ((IData)(
                                                    (((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_sqrt_ff_final_out[2U])) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_sqrt_ff_final_out[1U])) 
                                                         << 0x1bU) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_sqrt_ff_final_out[0U])) 
                                                           >> 5U)))) 
                                            << 6U)) 
                                        | (0x1fU & 
                                           vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_sqrt_ff_final_out[0U])))
                            : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_spfpu_sqrt)
                                ? (0x20U | ((0xffffffc0U 
                                             & ((IData)(
                                                        (0xffffffff00000000ULL 
                                                         | (QData)((IData)(
                                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_sqrt_ff_final_out 
                                                                            >> 5U))))) 
                                                << 6U)) 
                                            | (0x1fU 
                                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_sqrt_ff_final_out))))
                                : 0U));
        __Vtemp3220[2U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_dpfpu_sqrt)
                            ? (0x3fU & ((IData)(((((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_sqrt_ff_final_out[2U])) 
                                                   << 0x3bU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_sqrt_ff_final_out[1U])) 
                                                      << 0x1bU) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_sqrt_ff_final_out[0U])) 
                                                        >> 5U))) 
                                                 >> 0x20U)) 
                                        >> 0x1aU)) : 
                           ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_spfpu_sqrt)
                             ? (0x3fU & ((IData)(((0xffffffff00000000ULL 
                                                   | (QData)((IData)(
                                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_sqrt_ff_final_out 
                                                                      >> 5U)))) 
                                                  >> 0x20U)) 
                                         >> 0x1aU))
                             : 0U));
    }
    __Vtemp3221[1U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_fm_add_sub)
                        ? ((0x3fU & ((IData)((0xffffffff00000000ULL 
                                              | (QData)((IData)(
                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfm_add_sub_ff_final_out_wget 
                                                                 >> 5U))))) 
                                     >> 0x1aU)) | (0xffffffc0U 
                                                   & ((IData)(
                                                              ((0xffffffff00000000ULL 
                                                                | (QData)((IData)(
                                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfm_add_sub_ff_final_out_wget 
                                                                                >> 5U)))) 
                                                               >> 0x20U)) 
                                                      << 6U)))
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_spfpu_divider)
                            ? ((0x3fU & ((IData)((0xffffffff00000000ULL 
                                                  | (QData)((IData)(
                                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_wr_final_out_wget 
                                                                     >> 5U))))) 
                                         >> 0x1aU)) 
                               | (0xffffffc0U & ((IData)(
                                                         ((0xffffffff00000000ULL 
                                                           | (QData)((IData)(
                                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfpu_divider_wr_final_out_wget 
                                                                              >> 5U)))) 
                                                          >> 0x20U)) 
                                                 << 6U)))
                            : __Vtemp3219[1U]));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_dpfm_add_sub) {
        __Vtemp3223[0U] = (0x20U | ((0xffffffc0U & 
                                     ((IData)((((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfm_add_sub_ff_final_out_wget[2U])) 
                                                << 0x3bU) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfm_add_sub_ff_final_out_wget[1U])) 
                                                   << 0x1bU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfm_add_sub_ff_final_out_wget[0U])) 
                                                     >> 5U)))) 
                                      << 6U)) | (0x1fU 
                                                 & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfm_add_sub_ff_final_out_wget[0U])));
        __Vtemp3223[1U] = ((0x3fU & ((IData)((((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfm_add_sub_ff_final_out_wget[2U])) 
                                               << 0x3bU) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfm_add_sub_ff_final_out_wget[1U])) 
                                                  << 0x1bU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfm_add_sub_ff_final_out_wget[0U])) 
                                                    >> 5U)))) 
                                     >> 0x1aU)) | (0xffffffc0U 
                                                   & ((IData)(
                                                              ((((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfm_add_sub_ff_final_out_wget[2U])) 
                                                                 << 0x3bU) 
                                                                | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfm_add_sub_ff_final_out_wget[1U])) 
                                                                    << 0x1bU) 
                                                                   | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfm_add_sub_ff_final_out_wget[0U])) 
                                                                      >> 5U))) 
                                                               >> 0x20U)) 
                                                      << 6U)));
        __Vtemp3223[2U] = (0x3fU & ((IData)(((((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfm_add_sub_ff_final_out_wget[2U])) 
                                               << 0x3bU) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfm_add_sub_ff_final_out_wget[1U])) 
                                                  << 0x1bU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfm_add_sub_ff_final_out_wget[0U])) 
                                                    >> 5U))) 
                                             >> 0x20U)) 
                                    >> 0x1aU));
    } else {
        __Vtemp3223[0U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_dpfpu_divider)
                            ? (0x20U | ((0xffffffc0U 
                                         & ((IData)(
                                                    (((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_wr_final_out_wget[2U])) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_wr_final_out_wget[1U])) 
                                                         << 0x1bU) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_wr_final_out_wget[0U])) 
                                                           >> 5U)))) 
                                            << 6U)) 
                                        | (0x1fU & 
                                           vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_wr_final_out_wget[0U])))
                            : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_fm_add_sub)
                                ? (0x20U | ((0xffffffc0U 
                                             & ((IData)(
                                                        (0xffffffff00000000ULL 
                                                         | (QData)((IData)(
                                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfm_add_sub_ff_final_out_wget 
                                                                            >> 5U))))) 
                                                << 6U)) 
                                            | (0x1fU 
                                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfm_add_sub_ff_final_out_wget))))
                                : __Vtemp3220[0U]));
        __Vtemp3223[1U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_dpfpu_divider)
                            ? ((0x3fU & ((IData)((((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_wr_final_out_wget[2U])) 
                                                   << 0x3bU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_wr_final_out_wget[1U])) 
                                                      << 0x1bU) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_wr_final_out_wget[0U])) 
                                                        >> 5U)))) 
                                         >> 0x1aU)) 
                               | (0xffffffc0U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_wr_final_out_wget[2U])) 
                                                            << 0x3bU) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_wr_final_out_wget[1U])) 
                                                               << 0x1bU) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_wr_final_out_wget[0U])) 
                                                                 >> 5U))) 
                                                          >> 0x20U)) 
                                                 << 6U)))
                            : __Vtemp3221[1U]);
        __Vtemp3223[2U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_dpfpu_divider)
                            ? (0x3fU & ((IData)(((((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_wr_final_out_wget[2U])) 
                                                   << 0x3bU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_wr_final_out_wget[1U])) 
                                                      << 0x1bU) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_dpfpu_divider_wr_final_out_wget[0U])) 
                                                        >> 5U))) 
                                                 >> 0x20U)) 
                                        >> 0x1aU)) : 
                           ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_rl_get_output_from_fm_add_sub)
                             ? (0x3fU & ((IData)(((0xffffffff00000000ULL 
                                                   | (QData)((IData)(
                                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__inst_spfm_add_sub_ff_final_out_wget 
                                                                      >> 5U)))) 
                                                  >> 0x20U)) 
                                         >> 0x1aU))
                             : __Vtemp3220[2U]));
    }
    if ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__CAN_FIRE_RL_start_stage) 
          & ((((0x14U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[1U] 
                                    << 0x18U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                 >> 8U)))) 
               | (5U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[1U] 
                                   << 0x18U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                >> 8U))))) 
              | (0x1aU == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[1U] 
                                     << 0x18U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                                  >> 8U))))) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_first___05F309_BITS_12_TO_8_310_EQ_0b100___05FETC___05F_d3335))) 
         & (4U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[1U] 
                            << 0x13U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__ff_input_D_OUT[0U] 
                                         >> 0xdU)))))) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__rg_result_1_wget[0U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__MUX_rg_result_1_wset_1___05FVAL_1[0U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__rg_result_1_wget[1U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__MUX_rg_result_1_wset_1___05FVAL_1[1U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__rg_result_1_wget[2U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__MUX_rg_result_1_wset_1___05FVAL_1[2U];
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__rg_result_1_wget[0U] 
            = __Vtemp3223[0U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__rg_result_1_wget[1U] 
            = __Vtemp3223[1U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage3__DOT__multicycle_alu__DOT__fpu__DOT__rg_result_1_wget[2U] 
            = __Vtemp3223[2U];
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_NOT_decoder_func_32_inst_BITS_1_TO_0_0_EQ_0_ETC___05F_d669 
        = (((QData)((IData)((((3U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                             << 6U) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                               >> 0x1aU)))) 
                              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_3_EQ_0b0_4_ETC___05F_d321))
                              ? 6U : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U])
                                       ? ((0x80000000U 
                                           & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U])
                                           ? ((0x40000000U 
                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U])
                                               ? ((0x20000000U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                   ? 6U
                                                   : 
                                                  ((0x10000000U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                    ? 6U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                          << 0x1aU) 
                                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                            >> 6U))))
                                                     ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__CASE_decoder_func_32_inst_BITS_31_TO_7_0_6_0x2_ETC___05Fq1)
                                                     : 
                                                    ((((4U 
                                                        != 
                                                        (7U 
                                                         & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                             << 0x1aU) 
                                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                               >> 6U)))) 
                                                       & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__valid_csr_access___05F_d308)) 
                                                      & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__address_valid___05F_d311))
                                                      ? 5U
                                                      : 6U))))
                                               : ((0x20000000U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                   ? 
                                                  ((0x10000000U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                    ? 3U
                                                    : 6U)
                                                   : 
                                                  ((0x10000000U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                          << 0x1aU) 
                                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                            >> 6U))))
                                                     ? 4U
                                                     : 6U)
                                                    : 
                                                   (((2U 
                                                      != 
                                                      (7U 
                                                       & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                           << 0x1aU) 
                                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                             >> 6U)))) 
                                                     & (3U 
                                                        != 
                                                        (7U 
                                                         & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                             << 0x1aU) 
                                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                               >> 6U)))))
                                                     ? 2U
                                                     : 6U))))
                                           : ((0x40000000U 
                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U])
                                               ? ((0x20000000U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                   ? 6U
                                                   : 
                                                  ((0x10000000U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                    ? 6U
                                                    : 
                                                   (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__NOT_decoder_func_32_inst_BIT_26_93_94_AND_NOT___05FETC___05F_d201) 
                                                     & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_31_TO_27_9_EQ_0b0_ETC___05F_d235) 
                                                        | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_31_TO_27_9_EQ_0b1_ETC___05F_d246)))
                                                     ? 8U
                                                     : 6U)))
                                               : (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__NOT_decoder_func_32_inst_BIT_26_93_94_AND_NOT___05FETC___05F_d201) 
                                                   & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_14_TO_12_3_EQ_7_7_ETC___05F_d211))
                                                   ? 8U
                                                   : 6U)))
                                       : ((0x80000000U 
                                           & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U])
                                           ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_4_TO_2_5_EQ_0b0_6_ETC___05F_d346)
                                           : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_4_TO_2_5_EQ_0b0_6_ETC___05F_d333)))))) 
            << 0x2cU) | (((QData)((IData)(((((0x1cU 
                                              == (0x1fU 
                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      << 4U) 
                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                        >> 0x1cU)))) 
                                             & (9U 
                                                == 
                                                (0x7fU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                     << 0xdU) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       >> 0x13U))))) 
                                            & (0U == 
                                               (7U 
                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                    << 0x1aU) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      >> 6U)))))
                                            ? 5U : 
                                           ((0xbU == 
                                             (0x1fU 
                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  << 4U) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                    >> 0x1cU))))
                                             ? 2U : 
                                            (((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 6U) 
                                              & (3U 
                                                 == 
                                                 (0x1fU 
                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      << 4U) 
                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                        >> 0x1cU)))))
                                              ? 4U : 
                                             (((~ (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                   >> 6U)) 
                                               & (3U 
                                                  == 
                                                  (0x1fU 
                                                   & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       << 4U) 
                                                      | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                         >> 0x1cU)))))
                                               ? 3U
                                               : ((
                                                   (8U 
                                                    == 
                                                    (0x1fU 
                                                     & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                         << 4U) 
                                                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                           >> 0x1cU)))) 
                                                   | ((9U 
                                                       == 
                                                       (0x1fU 
                                                        & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                            << 4U) 
                                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                              >> 0x1cU)))) 
                                                      & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[3U] 
                                                         >> 8U)))
                                                   ? 1U
                                                   : 0U))))))) 
                          << 0x29U) | (((QData)((IData)(
                                                        ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__decoder_func_32_inst_BITS_1_TO_0_0_EQ_0b11_1_O_ETC___05F_d551)
                                                          ? 
                                                         ((0x1f000U 
                                                           & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                              << 3U)) 
                                                          | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__NOT_decoder_func_32_inst_BITS_6_TO_2_EQ_0b1011_ETC___05F_d579))
                                                          : 
                                                         ((0x80000000U 
                                                           & (((0xbU 
                                                                != 
                                                                (0x1fU 
                                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                     << 4U) 
                                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                       >> 0x1cU)))) 
                                                               << 0x1fU) 
                                                              & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                 << 6U))) 
                                                          | ((0x7ff00000U 
                                                              & ((((5U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                         << 4U) 
                                                                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                           >> 0x1cU)))) 
                                                                   | (0xdU 
                                                                      == 
                                                                      (0x1fU 
                                                                       & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                           << 4U) 
                                                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                             >> 0x1cU)))))
                                                                   ? 
                                                                  ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                    << 0x12U) 
                                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                      >> 0xeU))
                                                                   : 
                                                                  ((0xbU 
                                                                    == 
                                                                    (0x1fU 
                                                                     & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                         << 4U) 
                                                                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                           >> 0x1cU))))
                                                                    ? 0U
                                                                    : 
                                                                   ((0x7f8U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 0x19U)))) 
                                                                        << 3U)) 
                                                                    | ((4U 
                                                                        & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                           >> 0x17U)) 
                                                                       | ((2U 
                                                                           & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                              >> 0x18U)) 
                                                                          | (1U 
                                                                             & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 0x19U))))))) 
                                                                 << 0x14U)) 
                                                             | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__CASE_decoder_func_32_inst_BITS_6_TO_2_0b101_de_ETC___05Fq9) 
                                                                 << 0xcU) 
                                                                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__NOT_decoder_func_32_inst_BITS_6_TO_2_EQ_0b1011_ETC___05F_d579))))))) 
                                        << 9U) | (QData)((IData)(
                                                                 ((((((3U 
                                                                       != 
                                                                       (3U 
                                                                        & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                            << 6U) 
                                                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                              >> 0x1aU)))) 
                                                                      & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_3_EQ_0b0_4_ETC___05F_d321)) 
                                                                     | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_3_EQ_0b0_4_ETC___05F_d545))
                                                                     ? 
                                                                    ((((((3U 
                                                                          != 
                                                                          (3U 
                                                                           & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                               << 6U) 
                                                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1aU)))) 
                                                                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_3_EQ_0b0_4_ETC___05F_d321)) 
                                                                        | (0U 
                                                                           == 
                                                                           (3U 
                                                                            & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 1U) 
                                                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1fU))))) 
                                                                       | (1U 
                                                                          == 
                                                                          (3U 
                                                                           & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                               << 1U) 
                                                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1fU))))) 
                                                                      | (2U 
                                                                         == 
                                                                         (3U 
                                                                          & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                              << 1U) 
                                                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1fU)))))
                                                                      ? 2U
                                                                      : 
                                                                     ((3U 
                                                                       == 
                                                                       (3U 
                                                                        & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                            << 1U) 
                                                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                              >> 0x1fU))))
                                                                       ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT___theResult___05F___05F_9_snd___05Fh3564)
                                                                       : 2U))
                                                                     : 
                                                                    ((((1U 
                                                                        & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U])
                                                                        ? 
                                                                       ((0x80000000U 
                                                                         & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                         ? 
                                                                        ((0x40000000U 
                                                                          & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                          ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_3_EQ_0b10___05FETC___05F_d654)
                                                                          : 
                                                                         ((0x20000000U 
                                                                           & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                           ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_3_EQ_0b10___05FETC___05F_d654)
                                                                           : 
                                                                          ((0x10000000U 
                                                                            & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                            ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_3_EQ_0b10___05FETC___05F_d654)
                                                                            : 
                                                                           ((0x100U 
                                                                             & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U])
                                                                             ? 
                                                                            (8U 
                                                                             | (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 6U))))
                                                                             : 
                                                                            (2U 
                                                                             | (1U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 6U)))))))
                                                                         : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_3_EQ_0b10___05FETC___05F_d654))
                                                                        : 
                                                                       ((0x80000000U 
                                                                         & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                         ? 
                                                                        ((0x40000000U 
                                                                          & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                          ? 
                                                                         ((0x10000000U 
                                                                           & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                           ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_3_EQ_0b10___05FETC___05F_d654)
                                                                           : 
                                                                          ((0x100U 
                                                                            & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U])
                                                                            ? 
                                                                           ((0x80U 
                                                                             & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U])
                                                                             ? 
                                                                            (7U 
                                                                             & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 6U)))
                                                                             : 
                                                                            ((0x40U 
                                                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U])
                                                                              ? 
                                                                             ((0x1000000U 
                                                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U])
                                                                               ? 0xbU
                                                                               : 5U)
                                                                              : 
                                                                             (7U 
                                                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 6U)))))
                                                                            : 
                                                                           ((0x80U 
                                                                             & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U])
                                                                             ? 
                                                                            ((0x40U 
                                                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U])
                                                                              ? 0xeU
                                                                              : 0xcU)
                                                                             : 
                                                                            ((0x40U 
                                                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U])
                                                                              ? 
                                                                             (7U 
                                                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 6U)))
                                                                              : 
                                                                             ((0x1000000U 
                                                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U])
                                                                               ? 0xaU
                                                                               : 0U)))))
                                                                          : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_3_EQ_0b10___05FETC___05F_d654))
                                                                         : 
                                                                        ((0x40000000U 
                                                                          & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                          ? 
                                                                         ((0x10000000U 
                                                                           & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                           ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_3_EQ_0b10___05FETC___05F_d654)
                                                                           : 
                                                                          ((2U 
                                                                            == 
                                                                            (7U 
                                                                             & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 6U))))
                                                                            ? 0xcU
                                                                            : 
                                                                           ((3U 
                                                                             == 
                                                                             (7U 
                                                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 6U))))
                                                                             ? 0xeU
                                                                             : 
                                                                            ((5U 
                                                                              == 
                                                                              (7U 
                                                                               & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 6U))))
                                                                              ? 
                                                                             ((0x1000000U 
                                                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U])
                                                                               ? 0xbU
                                                                               : 5U)
                                                                              : 
                                                                             (7U 
                                                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 6U)))))))
                                                                          : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_3_EQ_0b10___05FETC___05F_d654)))) 
                                                                      << 3U) 
                                                                     | (7U 
                                                                        & ((((((3U 
                                                                                == 
                                                                                (3U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 6U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1aU)))) 
                                                                               | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_6_TO_5_3_EQ_0b0_4_ETC___05F_d545)) 
                                                                              & (2U 
                                                                                == 
                                                                                (3U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 1U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1fU))))) 
                                                                             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_decoder_func_32_inst_BITS_4_TO_2_5_EQ_0b0_6_ETC___05F_d250)) 
                                                                            & (7U 
                                                                               == 
                                                                               (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 6U)))))
                                                                            ? 
                                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[1U]
                                                                            : 
                                                                           ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                             << 0x1aU) 
                                                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                               >> 6U)))))) 
                                                                   << 2U) 
                                                                  | ((((3U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                             << 4U) 
                                                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                               >> 0x1cU)))) 
                                                                       | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__decoder_func_32_inst_BITS_1_TO_0_0_EQ_0b11_1_O_ETC___05F_d551)) 
                                                                      | (((0x1cU 
                                                                           == 
                                                                           (0x1fU 
                                                                            & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 4U) 
                                                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU)))) 
                                                                          & (9U 
                                                                             == 
                                                                             (0x7fU 
                                                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0xdU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 0x13U))))) 
                                                                         & (0U 
                                                                            == 
                                                                            (7U 
                                                                             & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 6U)))))) 
                                                                     << 1U)))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__IF_ma_core_req_req_BITS_79_TO_68_EQ_0x300_THEN_ETC___05F_d197 
        = ((0x8000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396
            : ((0x4000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396
                : ((0x2000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                    ? ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                        ? ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                ? ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396
                                    : ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396
                                        : ((0x80U & 
                                            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396
                                            : ((0x40U 
                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                ? (
                                                   (0x20U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396
                                                    : 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396
                                                     : 
                                                    (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_meip)) 
                                                      << 0xbU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__IF_wr_csr_misa_whas___05F2_THEN_wr_csr_misa_wget___05F_ETC___05F_d69) 
                                                                         << 9U) 
                                                                        | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mtip) 
                                                                            << 7U) 
                                                                           | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__IF_wr_csr_misa_whas___05F2_THEN_wr_csr_misa_wget___05F_ETC___05F_d72) 
                                                                               << 5U) 
                                                                              | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_msip) 
                                                                                << 3U) 
                                                                                | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__IF_wr_csr_misa_whas___05F2_THEN_wr_csr_misa_wget___05F_ETC___05F_d75) 
                                                                                << 1U))))))))))
                                                : (
                                                   (0x20U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mtval
                                                     : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3155)
                                                    : 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? 
                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mepc 
                                                     << 1U)
                                                     : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396))))))
                                : ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396
                                    : ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396
                                        : ((0x80U & 
                                            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396
                                            : ((0x40U 
                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                ? (
                                                   (0x20U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396
                                                    : 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3114
                                                     : 
                                                    (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mcounterie)) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_meie) 
                                                                         << 0xbU) 
                                                                        | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_seie) 
                                                                            << 9U) 
                                                                           | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mtie) 
                                                                               << 7U) 
                                                                              | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_stie) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_msie) 
                                                                                << 3U) 
                                                                                | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_ssie) 
                                                                                << 1U)))))))))))
                                                : (
                                                   (0x20U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? (QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mideleg))
                                                     : 
                                                    (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_medeleg_u1)) 
                                                      << 0xfU) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_medeleg_m2) 
                                                                         << 0xcU) 
                                                                        | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_medeleg_l10))))))
                                                    : 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396
                                                     : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csr_mstatus))))))))
                        : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396)
                    : ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                        ? ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                ? ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396
                                    : ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396
                                        : ((0x80U & 
                                            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396
                                            : ((0x40U 
                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                ? (
                                                   (0x20U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396
                                                    : 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396
                                                     : (QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__IF_wr_csr_misa_whas___05F2_THEN_wr_csr_misa_wget___05F_ETC___05F_d116))))
                                                : (
                                                   (0x20U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_stval
                                                     : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3357)
                                                    : 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? 
                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_sepc 
                                                     << 1U)
                                                     : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396))))))
                                : ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396
                                    : ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396
                                        : ((0x80U & 
                                            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396
                                            : ((0x40U 
                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                ? (
                                                   (0x20U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396
                                                    : 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3316
                                                     : 
                                                    (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_seie)) 
                                                      << 9U) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_stie) 
                                                                         << 5U) 
                                                                        | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_ssie) 
                                                                           << 1U)))))))
                                                : (
                                                   (0x20U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396
                                                    : 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396
                                                     : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3194))))))))
                        : vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396))));
    __Vtemp3234[1U] = ((1U & ((IData)((0x8000000000000000ULL 
                                       | (QData)((IData)(
                                                         (((0U 
                                                            != vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_ma_counter_interrupts_i) 
                                                           << 0xfU) 
                                                          | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_meip) 
                                                              << 0xaU) 
                                                             | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__IF_wr_csr_misa_whas___05F2_THEN_wr_csr_misa_wget___05F_ETC___05F_d69) 
                                                                 << 8U) 
                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mtip) 
                                                                    << 6U) 
                                                                   | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__IF_wr_csr_misa_whas___05F2_THEN_wr_csr_misa_wget___05F_ETC___05F_d72) 
                                                                       << 4U) 
                                                                      | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_msip) 
                                                                          << 2U) 
                                                                         | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__IF_wr_csr_misa_whas___05F2_THEN_wr_csr_misa_wget___05F_ETC___05F_d75))))))))))) 
                              >> 0x1fU)) | (0xfffffffeU 
                                            & ((IData)(
                                                       ((0x8000000000000000ULL 
                                                         | (QData)((IData)(
                                                                           (((0U 
                                                                              != vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_ma_counter_interrupts_i) 
                                                                             << 0xfU) 
                                                                            | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_meip) 
                                                                                << 0xaU) 
                                                                               | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__IF_wr_csr_misa_whas___05F2_THEN_wr_csr_misa_wget___05F_ETC___05F_d69) 
                                                                                << 8U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mtip) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__IF_wr_csr_misa_whas___05F2_THEN_wr_csr_misa_wget___05F_ETC___05F_d72) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_msip) 
                                                                                << 2U) 
                                                                                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__IF_wr_csr_misa_whas___05F2_THEN_wr_csr_misa_wget___05F_ETC___05F_d75)))))))))) 
                                                        >> 0x20U)) 
                                               << 1U)));
    if ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])) {
        __Vtemp3250[0U] = ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 0U : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? 0U : (0xfffffffeU 
                                             & ((IData)(
                                                        (0x8000000000000000ULL 
                                                         | (QData)((IData)(
                                                                           (((0U 
                                                                              != vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_ma_counter_interrupts_i) 
                                                                             << 0xfU) 
                                                                            | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_meip) 
                                                                                << 0xaU) 
                                                                               | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__IF_wr_csr_misa_whas___05F2_THEN_wr_csr_misa_wget___05F_ETC___05F_d69) 
                                                                                << 8U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mtip) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__IF_wr_csr_misa_whas___05F2_THEN_wr_csr_misa_wget___05F_ETC___05F_d72) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_msip) 
                                                                                << 2U) 
                                                                                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__IF_wr_csr_misa_whas___05F2_THEN_wr_csr_misa_wget___05F_ETC___05F_d75))))))))))) 
                                                << 1U))));
        __Vtemp3250[1U] = ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 0U : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? 0U : __Vtemp3234[1U]));
        __Vtemp3250[2U] = ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 0U : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? 0U : (1U & ((IData)(
                                                           ((0x8000000000000000ULL 
                                                             | (QData)((IData)(
                                                                               (((0U 
                                                                                != vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_ma_counter_interrupts_i) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_meip) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__IF_wr_csr_misa_whas___05F2_THEN_wr_csr_misa_wget___05F_ETC___05F_d69) 
                                                                                << 8U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mtip) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__IF_wr_csr_misa_whas___05F2_THEN_wr_csr_misa_wget___05F_ETC___05F_d72) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_msip) 
                                                                                << 2U) 
                                                                                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__IF_wr_csr_misa_whas___05F2_THEN_wr_csr_misa_wget___05F_ETC___05F_d75)))))))))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU))));
    } else {
        __Vtemp3250[0U] = ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mtval)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3155))
                            : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                ? (0xfffffffeU & ((IData)(
                                                          (0x8000000000000000ULL 
                                                           | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mepc)) 
                                                  << 1U))
                                : 0U));
        __Vtemp3250[1U] = ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                ? (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mtval 
                                           >> 0x20U))
                                : (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3155 
                                           >> 0x20U)))
                            : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                ? ((1U & ((IData)((0x8000000000000000ULL 
                                                   | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mepc)) 
                                          >> 0x1fU)) 
                                   | (0xfffffffeU & 
                                      ((IData)(((0x8000000000000000ULL 
                                                 | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mepc) 
                                                >> 0x20U)) 
                                       << 1U))) : 0U));
        __Vtemp3250[2U] = ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 1U : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? (1U & ((IData)(
                                                      ((0x8000000000000000ULL 
                                                        | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mepc) 
                                                       >> 0x20U)) 
                                              >> 0x1fU))
                                     : 0U));
    }
    __Vtemp3262[1U] = ((1U & ((IData)((0x8000000000000000ULL 
                                       | (QData)((IData)(
                                                         (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mcounterie) 
                                                           << 0xbU) 
                                                          | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_meie) 
                                                              << 0xaU) 
                                                             | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_seie) 
                                                                 << 8U) 
                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mtie) 
                                                                    << 6U) 
                                                                   | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_stie) 
                                                                       << 4U) 
                                                                      | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_msie) 
                                                                          << 2U) 
                                                                         | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_ssie))))))))))) 
                              >> 0x1fU)) | (0xfffffffeU 
                                            & ((IData)(
                                                       ((0x8000000000000000ULL 
                                                         | (QData)((IData)(
                                                                           (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mcounterie) 
                                                                             << 0xbU) 
                                                                            | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_meie) 
                                                                                << 0xaU) 
                                                                               | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_seie) 
                                                                                << 8U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mtie) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_stie) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_msie) 
                                                                                << 2U) 
                                                                                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_ssie)))))))))) 
                                                        >> 0x20U)) 
                                               << 1U)));
    if ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])) {
        __Vtemp3278[0U] = ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 0U : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3114)
                                     : (0xfffffffeU 
                                        & ((IData)(
                                                   (0x8000000000000000ULL 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mcounterie) 
                                                                        << 0xbU) 
                                                                       | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_meie) 
                                                                           << 0xaU) 
                                                                          | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_seie) 
                                                                              << 8U) 
                                                                             | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mtie) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_stie) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_msie) 
                                                                                << 2U) 
                                                                                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_ssie))))))))))) 
                                           << 1U))));
        __Vtemp3278[2U] = ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 0U : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? 1U : (1U & ((IData)(
                                                           ((0x8000000000000000ULL 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mcounterie) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_meie) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_seie) 
                                                                                << 8U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mtie) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_stie) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_msie) 
                                                                                << 2U) 
                                                                                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_ssie)))))))))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU))));
    } else {
        __Vtemp3278[0U] = ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_mideleg)
                                : (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_medeleg_u1) 
                                    << 0xfU) | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_medeleg_m2) 
                                                 << 0xcU) 
                                                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_medeleg_l10))))
                            : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                ? 0U : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csr_mstatus)));
        __Vtemp3278[2U] = ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 1U : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? 0U : 1U));
    }
    __Vtemp3284[1U] = ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                        ? 0U : ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                 ? 0U : ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                          ? 0U : ((0x40U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                   ? 
                                                  ((0x20U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3114 
                                                                >> 0x20U))
                                                     : 
                                                    __Vtemp3262[1U]))
                                                   : 
                                                  ((0x20U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? 0U
                                                     : (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csr_mstatus 
                                                                >> 0x20U))))))));
    __Vtemp3335[1U] = ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                        ? ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 0U : 0U) : ((0x20U & 
                                           vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                           ? ((0x10U 
                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                               ? (IData)(
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_stval 
                                                          >> 0x20U))
                                               : (IData)(
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3357 
                                                          >> 0x20U)))
                                           : ((0x10U 
                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                               ? ((1U 
                                                   & ((IData)(
                                                              (0x8000000000000000ULL 
                                                               | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_sepc)) 
                                                      >> 0x1fU)) 
                                                  | (0xfffffffeU 
                                                     & ((IData)(
                                                                ((0x8000000000000000ULL 
                                                                  | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_sepc) 
                                                                 >> 0x20U)) 
                                                        << 1U)))
                                               : 0U)));
    if ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])) {
        __Vtemp3341[0U] = 0U;
        __Vtemp3341[2U] = 0U;
    } else {
        __Vtemp3341[0U] = ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 0U : ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? 0U : ((0x40U 
                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                              ? ((0x20U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                  ? 0U
                                                  : 
                                                 ((0x10U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                   ? 0U
                                                   : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__IF_wr_csr_misa_whas___05F2_THEN_wr_csr_misa_wget___05F_ETC___05F_d116)))
                                              : ((0x20U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                  ? 
                                                 ((0x10U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                   ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_stval)
                                                   : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3357))
                                                  : 
                                                 ((0x10U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                   ? 
                                                  (0xfffffffeU 
                                                   & ((IData)(
                                                              (0x8000000000000000ULL 
                                                               | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_sepc)) 
                                                      << 1U))
                                                   : 0U)))));
        __Vtemp3341[2U] = ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 0U : ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? 0U : ((0x40U 
                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                              ? ((0x20U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                  ? 0U
                                                  : 
                                                 ((0x10U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                   ? 0U
                                                   : 1U))
                                              : ((0x20U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                  ? 1U
                                                  : 
                                                 ((0x10U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                   ? 
                                                  (1U 
                                                   & ((IData)(
                                                              ((0x8000000000000000ULL 
                                                                | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_sepc) 
                                                               >> 0x20U)) 
                                                      >> 0x1fU))
                                                   : 0U)))));
    }
    __Vtemp3360[1U] = ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                        ? ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 0U : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3316 
                                                >> 0x20U))
                                     : ((1U & ((IData)(
                                                       (0x8000000000000000ULL 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_seie) 
                                                                            << 8U) 
                                                                           | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_stie) 
                                                                               << 4U) 
                                                                              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_ssie))))))) 
                                               >> 0x1fU)) 
                                        | (0xfffffffeU 
                                           & ((IData)(
                                                      ((0x8000000000000000ULL 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_seie) 
                                                                            << 8U) 
                                                                           | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_stie) 
                                                                               << 4U) 
                                                                              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_ssie)))))) 
                                                       >> 0x20U)) 
                                              << 1U)))))
                        : ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 0U : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? 0U : (IData)(
                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3194 
                                                     >> 0x20U)))));
    if ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])) {
        __Vtemp3364[0U] = 0U;
        __Vtemp3364[2U] = 0U;
    } else {
        __Vtemp3364[0U] = ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 0U : ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                         ? 0U : ((0x10U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                  ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3316)
                                                  : 
                                                 (0xfffffffeU 
                                                  & ((IData)(
                                                             (0x8000000000000000ULL 
                                                              | (QData)((IData)(
                                                                                (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_seie) 
                                                                                << 8U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_stie) 
                                                                                << 4U) 
                                                                                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_ssie))))))) 
                                                     << 1U))))
                                     : ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                         ? 0U : ((0x10U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                  ? 0U
                                                  : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3194)))));
        __Vtemp3364[2U] = ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 0U : ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                         ? 0U : ((0x10U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                  ? 1U
                                                  : 
                                                 (1U 
                                                  & ((IData)(
                                                             ((0x8000000000000000ULL 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_seie) 
                                                                                << 8U) 
                                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_stie) 
                                                                                << 4U) 
                                                                                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_ssie)))))) 
                                                              >> 0x20U)) 
                                                     >> 0x1fU))))
                                     : ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                         ? 0U : ((0x10U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                  ? 0U
                                                  : 1U))));
    }
    if ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])) {
        __Vtemp3370[0U] = ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 0U : ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? 0U : ((0x100U 
                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                              ? 0U : 
                                             ((0x80U 
                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                               ? 0U
                                               : ((0x40U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? 0U
                                                     : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396))))))));
        __Vtemp3370[1U] = ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? 0U : ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? 0U : ((0x100U 
                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                              ? 0U : 
                                             ((0x80U 
                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                               ? 0U
                                               : ((0x40U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? 0U
                                                     : (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__new_value_data___05Fh3396 
                                                                >> 0x20U)))))))));
    } else {
        __Vtemp3370[0U] = ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? __Vtemp3341[0U] : ((0x200U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                  ? 0U
                                                  : 
                                                 __Vtemp3364[0U]));
        __Vtemp3370[1U] = ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                ? 0U : ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                         ? 0U : ((0x80U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                  ? 0U
                                                  : 
                                                 __Vtemp3335[1U])))
                            : ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                ? 0U : ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                         ? 0U : ((0x80U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                  ? 0U
                                                  : 
                                                 __Vtemp3360[1U]))));
    }
    __Vtemp3373[2U] = ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                        ? ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                ? 0U : ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                         ? 0U : ((0x100U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                   ? 0U
                                                   : 
                                                  ((0x40U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                      ? 0U
                                                      : 1U)))))))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                ? __Vtemp3341[2U] : 
                               ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                 ? 0U : __Vtemp3364[2U])))
                        : 0U);
    __Vtemp3375[0U] = ((0x2000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                        ? ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                            ? ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                ? 0U : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                         ? ((0x200U 
                                             & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                             ? 0U : 
                                            ((0x100U 
                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                              ? 0U : 
                                             ((0x80U 
                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                               ? 0U
                                               : __Vtemp3250[0U])))
                                         : ((0x200U 
                                             & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                             ? 0U : 
                                            ((0x100U 
                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                              ? 0U : 
                                             ((0x80U 
                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                               ? 0U
                                               : __Vtemp3278[0U])))))
                            : 0U) : ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                      ? __Vtemp3370[0U]
                                      : 0U));
    __Vtemp3377[2U] = ((0x4000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                        ? 0U : ((0x2000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                 ? ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                     ? ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                         ? 0U : ((0x400U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                  ? 
                                                 ((0x200U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                   ? 0U
                                                   : 
                                                  ((0x100U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? 0U
                                                    : 
                                                   ((0x80U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? 0U
                                                     : 
                                                    __Vtemp3250[2U])))
                                                  : 
                                                 ((0x200U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                   ? 0U
                                                   : 
                                                  ((0x100U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                    ? 0U
                                                    : 
                                                   ((0x80U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                     ? 0U
                                                     : 
                                                    __Vtemp3278[2U])))))
                                     : 0U) : __Vtemp3373[2U]));
    if ((0x8000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_resp_to_core_wget[0U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_resp_to_core_wget[1U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_resp_to_core_wget[2U] = 0U;
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_resp_to_core_wget[0U] 
            = ((0x4000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                ? 0U : __Vtemp3375[0U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_resp_to_core_wget[1U] 
            = ((0x4000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                ? 0U : ((0x2000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                         ? ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                             ? ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                 ? 0U : ((0x400U & 
                                          vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                          ? ((0x200U 
                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                              ? 0U : 
                                             ((0x100U 
                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                               ? 0U
                                               : ((0x80U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                                   ? 0U
                                                   : 
                                                  __Vtemp3250[1U])))
                                          : __Vtemp3284[1U]))
                             : 0U) : ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])
                                       ? __Vtemp3370[1U]
                                       : 0U)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_resp_to_core_wget[2U] 
            = __Vtemp3377[2U];
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp3__DOT__MUX_rg_csr_dpc_write_1___05FSEL_1 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp3_EN_mav_upd_on_debugger) 
            & (0x31U <= (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr_take_trap_type_cause))) 
           & (0x35U >= (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr_take_trap_type_cause)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__MUX_rg_mcause_write_1___05FSEL_2 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_EN_mav_upd_on_trap) 
           & (1U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mav_upd_on_trap_prv)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__MUX_rg_scause_write_1___05FSEL_2 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_EN_mav_upd_on_trap) 
           & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mav_upd_on_trap_prv)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__MUX_rg_mie_write_1___05FSEL_2 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_EN_mav_upd_on_ret) 
           & (1U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[1U] 
                            << 0xfU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[0U] 
                                        >> 0x11U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__MUX_rg_sie_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_EN_mav_upd_on_ret) 
           & (1U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[1U] 
                            << 0xfU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[0U] 
                                        >> 0x11U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__MUX_rg_mcause_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_EN_ma_core_req) 
           & (0x342U == (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                   >> 4U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__MUX_rg_mie_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_EN_ma_core_req) 
           & (0x300U == (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                   >> 4U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__MUX_rg_scause_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_EN_ma_core_req) 
           & (0x142U == (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                   >> 4U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__MUX_rg_sie_write_1___05FSEL_3 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_EN_ma_core_req) 
           & ((0x300U == (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                    >> 4U))) | (0x100U 
                                                == 
                                                (0xfffU 
                                                 & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                                    >> 4U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__ff_fwd_request_ENQ 
        = ((((((((((((((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_EN_ma_core_req) 
                           & (0x300U != (0xfffU & (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                                   >> 4U)))) 
                          & (0x302U != (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                                  >> 4U)))) 
                         & (0x303U != (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                                 >> 4U)))) 
                        & (0x304U != (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                                >> 4U)))) 
                       & (0x344U != (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                               >> 4U)))) 
                      & (0x305U != (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                              >> 4U)))) 
                     & (0x341U != (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                             >> 4U)))) 
                    & (0x342U != (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                            >> 4U)))) 
                   & (0x343U != (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                           >> 4U)))) 
                  & (0x100U != (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                          >> 4U)))) 
                 & (0x104U != (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                         >> 4U)))) 
                & (0x144U != (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                        >> 4U)))) & 
               (0x105U != (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                     >> 4U)))) & (0x141U 
                                                  != 
                                                  (0xfffU 
                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                                      >> 4U)))) 
             & (0x142U != (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                     >> 4U)))) & (0x143U 
                                                  != 
                                                  (0xfffU 
                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                                      >> 4U)))) 
           & (0x180U != (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                   >> 4U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_round_number_D_IN 
        = (0x1fU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fkg_rot_prev_key_write_1___05FSEL_2)
                     ? ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_length))
                         ? ((IData)(1U) + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_round_number))
                         : ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_length))
                             ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_round_toggle_192)
                                 ? ((IData)(1U) + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_round_number))
                                 : ((IData)(2U) + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_round_number)))
                             : ((IData)(2U) + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_round_number))))
                     : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fkg_maxrounds_write_1___05FSEL_1)
                         ? (((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_keyy_len)) 
                             | (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_keyy_len)))
                             ? 1U : 2U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fkg_maxrounds_write_1___05FSEL_2)
                                            ? (((0U 
                                                 == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen)) 
                                                | (1U 
                                                   == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen)))
                                                ? 1U
                                                : 2U)
                                            : 0U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_rg_state_D_IN 
        = (((((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_rg_state_write_1___05FSEL_1) 
                  | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_rg_state_write_1___05FSEL_2)) 
                 | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_last_round_write_1___05FSEL_1)) 
                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_last_round_write_1___05FSEL_2)) 
               | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_col_0_write_1___05FSEL_2)) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_col_0_write_1___05FSEL_3)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_aes_aes_b_blockaes_aes___05Fdecrypt_initial_xor)) 
            | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_rg_state_write_1___05FSEL_8))
            ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_rg_state_write_1___05FSEL_1)
                ? 3U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_rg_state_write_1___05FSEL_2)
                         ? 7U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_last_round_write_1___05FSEL_1)
                                  ? 2U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_last_round_write_1___05FSEL_2)
                                           ? 8U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_col_0_write_1___05FSEL_2)
                                                    ? 
                                                   ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdecrypt)
                                                     ? 8U
                                                     : 2U)
                                                    : 
                                                   ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_col_0_write_1___05FSEL_3)
                                                     ? 
                                                    ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdecrypt)
                                                      ? 8U
                                                      : 2U)
                                                     : 
                                                    ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_aes_aes_b_blockaes_aes___05Fdecrypt_initial_xor)
                                                      ? 
                                                     ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdecrypt)
                                                       ? 8U
                                                       : 2U)
                                                      : 0U)))))))
            : ((8U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_rg_state))
                ? 6U : 0U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_rg_state_EN 
        = (((((((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_aes_aes_b_blockaes_aes___05Fdr_sub) 
                    & (0xfU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter))) 
                   | ((6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_rg_state)) 
                      & (0xfU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_counter)))) 
                  | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_aes_aes_b_blockaes_aes___05Fdone_encoding) 
                     & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fcounter_7753_EQ_ETC___05F_d77767)))) 
                 | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_aes_aes_b_blockaes_aes___05Fdone_encoding_decrypt) 
                    & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fcounter_7753_EQ_ETC___05F_d77767)))) 
                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_col_0_write_1___05FSEL_2)) 
               | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fdr_col_0_write_1___05FSEL_3)) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_aes_aes_b_blockaes_aes___05Fdecrypt_initial_xor)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_aes_aes_b_blockaes_aes___05Fdr_addKeyDecrypt)) 
            | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_aesbuf_aes_aes_b_blockaes_aes___05Fdr_rowColShift)) 
           | (8U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fdr_rg_state)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_rg_state_D_IN 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fkg_rci_write_1___05FSEL_1)
            ? (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_length)) 
                & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_round_number_ETC___05F_d55115)))
                ? 4U : 3U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fcol0_write_1___05FSEL_1)
                               ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_saved)
                                   ? ((((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_127_TO_96_0_ETC___05F_d80796) 
                                            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_95_TO_64_07_ETC___05F_d80798)) 
                                           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_63_TO_32_08_ETC___05F_d80801)) 
                                          & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_31_TO_0_080_ETC___05F_d80804)) 
                                         & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))) 
                                        | (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_191_TO_160___05FETC___05F_d80808) 
                                                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_159_TO_128___05FETC___05F_d80810)) 
                                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_127_TO_96_0_ETC___05F_d80812)) 
                                              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_95_TO_64_07_ETC___05F_d80814)) 
                                             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_63_TO_32_08_ETC___05F_d80816)) 
                                            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_31_TO_0_080_ETC___05F_d80818)) 
                                           & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen)))) 
                                       | (((((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_255_TO_224___05FETC___05F_d80822) 
                                                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_223_TO_192___05FETC___05F_d80824)) 
                                                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_191_TO_160___05FETC___05F_d80826)) 
                                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_159_TO_128___05FETC___05F_d80828)) 
                                              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_127_TO_96_0_ETC___05F_d80830)) 
                                             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_95_TO_64_07_ETC___05F_d80832)) 
                                            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_63_TO_32_08_ETC___05F_d80834)) 
                                           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_key_aes_0761_BITS_31_TO_0_080_ETC___05F_d80836)) 
                                          & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_aeskeylen))))
                                       ? 0U : 1U) : 1U)
                               : (((4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_rg_state)) 
                                   & (7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_counter)))
                                   ? 3U : (((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_rg_state)) 
                                            & ((((0U 
                                                  == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_length)) 
                                                 | (1U 
                                                    == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_length))) 
                                                | (2U 
                                                   == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_length))) 
                                               | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_round_number_ETC___05F_d57194))))
                                            ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_round_number_ETC___05F_d57194)
                                                ? (
                                                   ((0U 
                                                     == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_length)) 
                                                    | (1U 
                                                       == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_length)))
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_round_number_ETC___05F_d55115)
                                                     ? 0U
                                                     : 2U))
                                                : 0U)
                                            : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__MUX_aesbuf_aes_aes_b_blockaes_aes___05Fcol0_write_1___05FSEL_2)
                                                ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_key_saved)
                                                    ? 
                                                   ((((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8381_BITS_127_T_ETC___05F_d78390) 
                                                          & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8381_BITS_95_TO_ETC___05F_d78392)) 
                                                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8381_BITS_63_TO_ETC___05F_d78395)) 
                                                        & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8381_BITS_31_TO_ETC___05F_d78398)) 
                                                       & (0U 
                                                          == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_keyy_len))) 
                                                      | (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8381_BITS_191_T_ETC___05F_d78402) 
                                                              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8381_BITS_159_T_ETC___05F_d78404)) 
                                                             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8381_BITS_127_T_ETC___05F_d78406)) 
                                                            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8381_BITS_95_TO_ETC___05F_d78408)) 
                                                           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8381_BITS_63_TO_ETC___05F_d78410)) 
                                                          & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8381_BITS_31_TO_ETC___05F_d78412)) 
                                                         & (1U 
                                                            == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_keyy_len)))) 
                                                     | (((((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8381_BITS_255_T_ETC___05F_d78416) 
                                                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8381_BITS_223_T_ETC___05F_d78418)) 
                                                              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8381_BITS_191_T_ETC___05F_d78420)) 
                                                             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8381_BITS_159_T_ETC___05F_d78422)) 
                                                            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8381_BITS_127_T_ETC___05F_d78424)) 
                                                           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8381_BITS_95_TO_ETC___05F_d78426)) 
                                                          & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8381_BITS_63_TO_ETC___05F_d78428)) 
                                                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_key___05F8381_BITS_31_TO_ETC___05F_d78430)) 
                                                        & (2U 
                                                           == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_keyy_len))))
                                                     ? 0U
                                                     : 1U)
                                                    : 1U)
                                                : (
                                                   (1U 
                                                    == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__aesbuf_aes_aes_b_blockaes_aes___05Fkg_rg_state))
                                                    ? 2U
                                                    : 0U))))));
    __Vtemp3380[0U] = (IData)((((QData)((IData)(((4U 
                                                  == 
                                                  (7U 
                                                   & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       << 2U) 
                                                      | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                         >> 0x1eU))))
                                                  ? 
                                                 (0x1fU 
                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                      << 0xbU) 
                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                        >> 0x15U)))
                                                  : 0U))) 
                                << 0x37U) | (((QData)((IData)(
                                                              ((((5U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                       << 4U) 
                                                                      | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                         >> 0x1cU)))) 
                                                                 | (0x19U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                         << 4U) 
                                                                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                           >> 0x1cU))))) 
                                                                | (0x1bU 
                                                                   == 
                                                                   (0x1fU 
                                                                    & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                        << 4U) 
                                                                       | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                          >> 0x1cU)))))
                                                                ? 1U
                                                                : 
                                                               (((4U 
                                                                  == 
                                                                  (7U 
                                                                   & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                       << 2U) 
                                                                      | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                         >> 0x1eU)))) 
                                                                 | (((5U 
                                                                      == 
                                                                      (7U 
                                                                       & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                           << 2U) 
                                                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                             >> 0x1eU)))) 
                                                                     & (0xdU 
                                                                        != 
                                                                        (0xfU 
                                                                         & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                             << 0xaU) 
                                                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                               >> 0x16U))))) 
                                                                    & (0xfU 
                                                                       != 
                                                                       (0xfU 
                                                                        & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                            << 0xaU) 
                                                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                              >> 0x16U))))))
                                                                 ? 2U
                                                                 : 0U)))) 
                                              << 0x35U) 
                                             | (((QData)((IData)(
                                                                 ((((3U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                          << 4U) 
                                                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                            >> 0x1cU)))) 
                                                                    | (0x19U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                            << 4U) 
                                                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                              >> 0x1cU))))) 
                                                                   | (0x1bU 
                                                                      == 
                                                                      (0x1fU 
                                                                       & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                           << 4U) 
                                                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                             >> 0x1cU)))))
                                                                   ? 
                                                                  ((0x8000U 
                                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                    ? 3U
                                                                    : 2U)
                                                                   : 
                                                                  (((1U 
                                                                     == 
                                                                     (7U 
                                                                      & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                          << 2U) 
                                                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                            >> 0x1eU)))) 
                                                                    | (0xdU 
                                                                       == 
                                                                       (0x1fU 
                                                                        & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                            << 4U) 
                                                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                              >> 0x1cU)))))
                                                                    ? 1U
                                                                    : 
                                                                   (((((5U 
                                                                        == 
                                                                        (7U 
                                                                         & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                             << 2U) 
                                                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                               >> 0x1eU)))) 
                                                                       & (~ 
                                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                           >> 0x18U))) 
                                                                      | (9U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                              << 4U) 
                                                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU))))) 
                                                                     | (4U 
                                                                        == 
                                                                        (7U 
                                                                         & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                             << 2U) 
                                                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                               >> 0x1eU)))))
                                                                     ? 4U
                                                                     : 0U))))) 
                                                 << 0x32U) 
                                                | (((QData)((IData)(
                                                                    (4U 
                                                                     == 
                                                                     (7U 
                                                                      & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                          << 2U) 
                                                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                            >> 0x1eU)))))) 
                                                    << 0x31U) 
                                                   | (((QData)((IData)(
                                                                       (((1U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                               << 4U) 
                                                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU)))) 
                                                                         | ((((5U 
                                                                               == 
                                                                               (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1eU)))) 
                                                                              & (0xaU 
                                                                                != 
                                                                                (0xfU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 0x16U))))) 
                                                                             & (0xcU 
                                                                                != 
                                                                                (0xfU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 0x16U))))) 
                                                                            & (0xeU 
                                                                               != 
                                                                               (0xfU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 0x16U)))))) 
                                                                        | (4U 
                                                                           == 
                                                                           (7U 
                                                                            & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 2U) 
                                                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1eU))))))) 
                                                       << 0x30U) 
                                                      | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_NOT_decoder_func_32_inst_BITS_1_TO_0_0_EQ_0_ETC___05F_d669))))));
    __Vtemp3380[1U] = ((0xf0000000U & (((((0x18U == 
                                           (0x1fU & 
                                            ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                              << 4U) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                >> 0x1cU)))) 
                                          | (4U == 
                                             (0xfU 
                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  << 3U) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                    >> 0x1dU))))) 
                                         | (3U == (0x1fU 
                                                   & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       << 4U) 
                                                      | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                         >> 0x1cU)))))
                                         ? 0U : (0x1fU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                     << 0x1fU) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       >> 1U)))) 
                                       << 0x1cU)) | (IData)(
                                                            ((((QData)((IData)(
                                                                               ((4U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1eU))))
                                                                                 ? 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0xbU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 0x15U)))
                                                                                 : 0U))) 
                                                               << 0x37U) 
                                                              | (((QData)((IData)(
                                                                                ((((5U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 4U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU)))) 
                                                                                | (0x19U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 4U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU))))) 
                                                                                | (0x1bU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 4U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU)))))
                                                                                 ? 1U
                                                                                 : 
                                                                                (((4U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1eU)))) 
                                                                                | (((5U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1eU)))) 
                                                                                & (0xdU 
                                                                                != 
                                                                                (0xfU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 0x16U))))) 
                                                                                & (0xfU 
                                                                                != 
                                                                                (0xfU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 0x16U))))))
                                                                                 ? 2U
                                                                                 : 0U)))) 
                                                                  << 0x35U) 
                                                                 | (((QData)((IData)(
                                                                                ((((3U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 4U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU)))) 
                                                                                | (0x19U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 4U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU))))) 
                                                                                | (0x1bU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 4U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU)))))
                                                                                 ? 
                                                                                ((0x8000U 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U])
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 
                                                                                (((1U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1eU)))) 
                                                                                | (0xdU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 4U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU)))))
                                                                                 ? 1U
                                                                                 : 
                                                                                (((((5U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1eU)))) 
                                                                                & (~ 
                                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 0x18U))) 
                                                                                | (9U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 4U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU))))) 
                                                                                | (4U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1eU)))))
                                                                                 ? 4U
                                                                                 : 0U))))) 
                                                                     << 0x32U) 
                                                                    | (((QData)((IData)(
                                                                                (4U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1eU)))))) 
                                                                        << 0x31U) 
                                                                       | (((QData)((IData)(
                                                                                (((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 4U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1cU)))) 
                                                                                | ((((5U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1eU)))) 
                                                                                & (0xaU 
                                                                                != 
                                                                                (0xfU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 0x16U))))) 
                                                                                & (0xcU 
                                                                                != 
                                                                                (0xfU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 0x16U))))) 
                                                                                & (0xeU 
                                                                                != 
                                                                                (0xfU 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                                                << 0xaU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                >> 0x16U)))))) 
                                                                                | (4U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                                >> 0x1eU))))))) 
                                                                           << 0x30U) 
                                                                          | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__instance_decoder_func_32_2__DOT__IF_NOT_decoder_func_32_inst_BITS_1_TO_0_0_EQ_0_ETC___05F_d669))))) 
                                                             >> 0x20U)));
    __Vtemp3381[2U] = ((0xfffffffeU & (((((((((((0x1cU 
                                                 == 
                                                 (0x1fU 
                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      << 4U) 
                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                        >> 0x1cU)))) 
                                                & (0U 
                                                   != 
                                                   (7U 
                                                    & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                        << 0x1aU) 
                                                       | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                          >> 6U))))) 
                                               & (9U 
                                                  != 
                                                  (0x7fU 
                                                   & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                       << 0xdU) 
                                                      | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                         >> 0x13U))))) 
                                              | (0U 
                                                 == 
                                                 (7U 
                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      << 2U) 
                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                        >> 0x1eU))))) 
                                             | (0xdU 
                                                == 
                                                (0x1fU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                     << 4U) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                       >> 0x1cU))))) 
                                            | (1U == 
                                               (7U 
                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                    << 2U) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                      >> 0x1eU))))) 
                                           | (0x1bU 
                                              == (0x1fU 
                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      << 4U) 
                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                        >> 0x1cU))))) 
                                          | (0x19U 
                                             == (0x1fU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                     << 4U) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                       >> 0x1cU))))) 
                                         | (((5U == 
                                              (7U & 
                                               ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 << 2U) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                   >> 0x1eU)))) 
                                             & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                >> 0x18U)) 
                                            & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[3U] 
                                                >> 6U) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_csrs_to_decode[3U] 
                                                  >> 8U))))
                                         ? 0U : (0x1fU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                     << 0x12U) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       >> 0xeU)))) 
                                       << 1U)) | (0xfffffffU 
                                                  & (((((0x18U 
                                                         == 
                                                         (0x1fU 
                                                          & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                              << 4U) 
                                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                >> 0x1cU)))) 
                                                        | (4U 
                                                           == 
                                                           (0xfU 
                                                            & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                                << 3U) 
                                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                  >> 0x1dU))))) 
                                                       | (3U 
                                                          == 
                                                          (0x1fU 
                                                           & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                               << 4U) 
                                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                                 >> 0x1cU)))))
                                                       ? 0U
                                                       : 
                                                      (0x1fU 
                                                       & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                           << 0x1fU) 
                                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                             >> 1U)))) 
                                                     >> 4U)));
    __Vtemp3382[2U] = ((0xffffffc0U & ((((((0x1bU == 
                                            (0x1fU 
                                             & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                 << 4U) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                   >> 0x1cU)))) 
                                           | (0xdU 
                                              == (0x1fU 
                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                      << 4U) 
                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                        >> 0x1cU))))) 
                                          | (5U == 
                                             (0x1fU 
                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                  << 4U) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                    >> 0x1cU))))) 
                                         | ((0x1cU 
                                             == (0x1fU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                     << 4U) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[0U] 
                                                       >> 0x1cU)))) 
                                            & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                               >> 8U)))
                                         ? 0U : (0x1fU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[2U] 
                                                     << 0x17U) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe1__DOT__data0_reg[1U] 
                                                       >> 9U)))) 
                                       << 6U)) | __Vtemp3381[2U]);
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__decoder_func_32___05F_d84[0U] 
        = __Vtemp3380[0U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__decoder_func_32___05F_d84[1U] 
        = __Vtemp3380[1U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__decoder_func_32___05F_d84[2U] 
        = __Vtemp3382[2U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[0U] 
        = ((0xfffffffcU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__IF_ma_core_req_req_BITS_79_TO_68_EQ_0x300_THEN_ETC___05F_d197) 
                           << 2U)) | (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[1U] 
                                             << 0x1eU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[0U] 
                                               >> 2U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[1U] 
        = ((3U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__IF_ma_core_req_req_BITS_79_TO_68_EQ_0x300_THEN_ETC___05F_d197) 
                  >> 0x1eU)) | (0xfffffffcU & ((IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__IF_ma_core_req_req_BITS_79_TO_68_EQ_0x300_THEN_ETC___05F_d197 
                                                        >> 0x20U)) 
                                               << 2U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[2U] 
        = ((3U & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__IF_ma_core_req_req_BITS_79_TO_68_EQ_0x300_THEN_ETC___05F_d197 
                           >> 0x20U)) >> 0x1eU)) | 
           (0xfffffffcU & ((IData)((((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[1U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[0U])) 
                                                     >> 4U)))) 
                           << 2U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[3U] 
        = ((3U & ((IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])) 
                            << 0x3cU) | (((QData)((IData)(
                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[1U])) 
                                          << 0x1cU) 
                                         | ((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[0U])) 
                                            >> 4U)))) 
                  >> 0x1eU)) | (0xfffffffcU & ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])) 
                                                          << 0x3cU) 
                                                         | (((QData)((IData)(
                                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[1U])) 
                                                             << 0x1cU) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[0U])) 
                                                               >> 4U))) 
                                                        >> 0x20U)) 
                                               << 2U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[4U] 
        = (3U & ((IData)(((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U])) 
                            << 0x3cU) | (((QData)((IData)(
                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[1U])) 
                                          << 0x1cU) 
                                         | ((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[0U])) 
                                            >> 4U))) 
                          >> 0x20U)) >> 0x1eU));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_core_resp[0U] 
        = (IData)(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_EN_ma_core_req)
                    ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_resp_to_core_wget[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_resp_to_core_wget[0U])))
                    : 0ULL));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_core_resp[1U] 
        = (IData)((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_EN_ma_core_req)
                     ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_resp_to_core_wget[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_resp_to_core_wget[0U])))
                     : 0ULL) >> 0x20U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_core_resp[2U] 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_EN_ma_core_req) 
           & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__rg_resp_to_core_wget[2U]);
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__SEXT_decoder_func_32_4_BITS_40_TO_9_59___05F_d260 
        = (((QData)((IData)((- (IData)((1U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__decoder_func_32___05F_d84[1U] 
                                              >> 8U)))))) 
            << 0x20U) | (QData)((IData)(((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__decoder_func_32___05F_d84[1U] 
                                          << 0x17U) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage2__DOT__decoder_func_32___05F_d84[0U] 
                                            >> 9U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__x___05Fh10238 
        = ((1U == (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[0U]))
            ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[4U])) 
                << 0x3eU) | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[3U])) 
                              << 0x1eU) | ((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[2U])) 
                                           >> 2U)))
            : ((2U == (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[0U]))
                ? ((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[4U])) 
                     << 0x3eU) | (((QData)((IData)(
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[3U])) 
                                   << 0x1eU) | ((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[2U])) 
                                                >> 2U))) 
                   | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[2U])) 
                       << 0x3eU) | (((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[1U])) 
                                     << 0x1eU) | ((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[0U])) 
                                                  >> 2U))))
                : ((~ (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[4U])) 
                        << 0x3eU) | (((QData)((IData)(
                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[3U])) 
                                      << 0x1eU) | ((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[2U])) 
                                                   >> 2U)))) 
                   & (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[2U])) 
                       << 0x3eU) | (((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[1U])) 
                                     << 0x1eU) | ((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__csr_op_arg_wget[0U])) 
                                                  >> 2U))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_mv_resp_to_core[0U] 
        = ((((((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_core_resp[0U] 
                | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_core_resp[0U]) 
               | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp3_mv_core_resp[0U]) 
              | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp4_mv_core_resp[0U]) 
             | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp5_mv_core_resp[0U]) 
            | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp6_mv_core_resp[0U]) 
           | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp7_mv_core_resp[0U]);
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_mv_resp_to_core[1U] 
        = ((((((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_core_resp[1U] 
                | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_core_resp[1U]) 
               | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp3_mv_core_resp[1U]) 
              | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp4_mv_core_resp[1U]) 
             | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp5_mv_core_resp[1U]) 
            | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp6_mv_core_resp[1U]) 
           | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp7_mv_core_resp[1U]);
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_mv_resp_to_core[2U] 
        = ((((((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1_mv_core_resp[2U] 
                | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_core_resp[2U]) 
               | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp3_mv_core_resp[2U]) 
              | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp4_mv_core_resp[2U]) 
             | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp5_mv_core_resp[2U]) 
            | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp6_mv_core_resp[2U]) 
           | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp7_mv_core_resp[2U]);
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__ma_core_req_req_BITS_79_TO_68_EQ_0x300_AND_IF___05FETC___05F_d249 
        = ((0x300U == (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_ma_core_req_req[2U] 
                                 >> 4U))) & (((3U == 
                                               (3U 
                                                & (IData)(
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__x___05Fh10238 
                                                           >> 0xbU)))) 
                                              | ((IData)(
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_csr_misa 
                                                          >> 0x12U)) 
                                                 & (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__x___05Fh10238 
                                                                >> 0xbU)))))) 
                                             | ((IData)(
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp2_mv_csr_misa 
                                                         >> 0x14U)) 
                                                & (0U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile__DOT__mk_grp1__DOT__x___05Fh10238 
                                                               >> 0xbU)))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__rg_csr_wait_D_IN 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr_EN_system_instruction) 
            & (0U != (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[1U] 
                             << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[0U] 
                                          >> 6U))))) 
           & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__rg_csr_wait)) 
              | (~ vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_mv_resp_to_core[2U])));
    if ((3U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[4U] 
                      >> 7U)))) {
        __Vtemp3399[1U] = ((1U & ((IData)((((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_mv_resp_to_core[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_mv_resp_to_core[0U])))) 
                                  >> 0x1fU)) | (0xfffffffeU 
                                                & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_mv_resp_to_core[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_mv_resp_to_core[0U]))) 
                                                            >> 0x20U)) 
                                                   << 1U)));
        __Vtemp3399[2U] = ((0x3eU & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[0U]) 
                           | (1U & ((IData)(((((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_mv_resp_to_core[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_mv_resp_to_core[0U]))) 
                                             >> 0x20U)) 
                                    >> 0x1fU)));
    } else {
        __Vtemp3399[1U] = ((1U & ((IData)((((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[2U])) 
                                            << 0x34U) 
                                           | (((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[1U])) 
                                               << 0x14U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[0U])) 
                                                 >> 0xcU)))) 
                                  >> 0x1fU)) | (0xfffffffeU 
                                                & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[2U])) 
                                                              << 0x34U) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[1U])) 
                                                                 << 0x14U) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[0U])) 
                                                                   >> 0xcU))) 
                                                            >> 0x20U)) 
                                                   << 1U)));
        __Vtemp3399[2U] = ((0x3eU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[1U] 
                                      << 0x1aU) | (0x3fffffeU 
                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[0U] 
                                                      >> 6U)))) 
                           | (1U & ((IData)(((((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[2U])) 
                                               << 0x34U) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[1U])) 
                                                  << 0x14U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[0U])) 
                                                    >> 0xcU))) 
                                             >> 0x20U)) 
                                    >> 0x1fU)));
    }
    __Vtemp3401[0U] = ((1U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[4U] 
                                     >> 7U))) ? (0xfffffffeU 
                                                 & ((IData)(
                                                            (((QData)((IData)(
                                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[2U])) 
                                                              << 0x3aU) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[1U])) 
                                                                 << 0x1aU) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[0U])) 
                                                                   >> 6U)))) 
                                                    << 1U))
                        : ((3U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[4U] 
                                         >> 7U))) ? 
                           (0xfffffffeU & ((IData)(
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_mv_resp_to_core[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_mv_resp_to_core[0U])))) 
                                           << 1U)) : 
                           ((0xfffffffeU & ((IData)(
                                                    (((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[2U])) 
                                                      << 0x34U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[1U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[0U])) 
                                                           >> 0xcU)))) 
                                            << 1U)) 
                            | (1U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[0U] 
                                     >> 1U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__wr_commit_wget[0U] 
        = __Vtemp3401[0U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__wr_commit_wget[1U] 
        = ((1U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[4U] 
                         >> 7U))) ? ((1U & ((IData)(
                                                    (((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[2U])) 
                                                      << 0x3aU) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[1U])) 
                                                         << 0x1aU) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[0U])) 
                                                           >> 6U)))) 
                                            >> 0x1fU)) 
                                     | (0xfffffffeU 
                                        & ((IData)(
                                                   ((((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[2U])) 
                                                      << 0x3aU) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[1U])) 
                                                         << 0x1aU) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[0U])) 
                                                           >> 6U))) 
                                                    >> 0x20U)) 
                                           << 1U)))
            : __Vtemp3399[1U]);
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__wr_commit_wget[2U] 
        = (0x40U | ((1U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[4U] 
                                  >> 7U))) ? ((0x3eU 
                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[0U]) 
                                              | (1U 
                                                 & ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[2U])) 
                                                               << 0x3aU) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[1U])) 
                                                                  << 0x1aU) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[0U])) 
                                                                    >> 6U))) 
                                                             >> 0x20U)) 
                                                    >> 0x1fU)))
                     : __Vtemp3399[2U]));
    vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__rx_w_data_whas___05F4_AND_rx_w_data_wget___05F5_BITS_1_ETC___05F_d117 
        = (((3U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[4U] 
                          >> 7U))) & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr_system_instruction[2U] 
                                      | vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__stage5__DOT__csr__DOT__csrfile_mv_resp_to_core[2U])) 
           | (2U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__cclass_riscv__DOT__pipe4_D_OUT[4U] 
                           >> 7U))));
}
