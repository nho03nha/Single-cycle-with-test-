// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__rf__DOT__mem__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__rf__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__rf__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__rf__DOT__mem__v1;
    SData/*10:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__ls__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__ls__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v0;
    SData/*10:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__ls__DOT__mem__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__ls__DOT__mem__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v1;
    SData/*10:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__ls__DOT__mem__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__ls__DOT__mem__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v2;
    SData/*10:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__ls__DOT__mem__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__ls__DOT__mem__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v3;
    SData/*10:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__ls__DOT__mem__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__ls__DOT__mem__v4;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v4;
    SData/*10:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__ls__DOT__mem__v5;
    CData/*7:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__ls__DOT__mem__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v5;
    SData/*10:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__ls__DOT__mem__v6;
    CData/*7:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__ls__DOT__mem__v6;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v6;
    SData/*10:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__ls__DOT__mem__v7;
    CData/*7:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__ls__DOT__mem__v7;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v7;
    VlWide<5>/*159:0*/ __Vtemp_h09a93c94__0;
    VlWide<7>/*223:0*/ __Vtemp_h4d3eb16d__0;
    // Body
    __Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v0 = 0U;
    __Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v1 = 0U;
    __Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v2 = 0U;
    __Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v3 = 0U;
    __Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v4 = 0U;
    __Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v5 = 0U;
    __Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v6 = 0U;
    __Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v7 = 0U;
    if ((1U & (~ (IData)(vlSelf->rst_ni)))) {
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__unnamedblk1__DOT__i = 0x20U;
        vlSelf->top__DOT__singleCycle__DOT__ls__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x5ffU, vlSelf->top__DOT__singleCycle__DOT__ls__DOT__unnamedblk1__DOT__i)) {
            vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vlvbound_hb9a6c45f__0 = 0U;
            if (VL_LIKELY((0x5feU >= (0x7ffU & vlSelf->top__DOT__singleCycle__DOT__ls__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem[(0x7ffU 
                                                                  & vlSelf->top__DOT__singleCycle__DOT__ls__DOT__unnamedblk1__DOT__i)] 
                    = vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vlvbound_hb9a6c45f__0;
            }
            vlSelf->top__DOT__singleCycle__DOT__ls__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__singleCycle__DOT__ls__DOT__unnamedblk1__DOT__i);
        }
    }
    __Vtemp_h09a93c94__0[0U] = 0x64617461U;
    __Vtemp_h09a93c94__0[1U] = 0x6d656d2eU;
    __Vtemp_h09a93c94__0[2U] = 0x64617461U;
    __Vtemp_h09a93c94__0[3U] = 0x6f72792fU;
    __Vtemp_h09a93c94__0[4U] = 0x6d656dU;
    VL_WRITEMEM_N(true, 8, 1535, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_h09a93c94__0)
                  ,  &(vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem)
                  , 0, ~0ULL);
    __Vtemp_h4d3eb16d__0[0U] = 0x64617461U;
    __Vtemp_h4d3eb16d__0[1U] = 0x6174612eU;
    __Vtemp_h4d3eb16d__0[2U] = 0x74657264U;
    __Vtemp_h4d3eb16d__0[3U] = 0x66676973U;
    __Vtemp_h4d3eb16d__0[4U] = 0x792f7265U;
    __Vtemp_h4d3eb16d__0[5U] = 0x656d6f72U;
    __Vtemp_h4d3eb16d__0[6U] = 0x6dU;
    VL_WRITEMEM_N(true, 32, 32, 0, VL_CVT_PACK_STR_NW(7, __Vtemp_h4d3eb16d__0)
                  ,  &(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem)
                  , 0, ~0ULL);
    __Vdlyvset__top__DOT__singleCycle__DOT__rf__DOT__mem__v0 = 0U;
    __Vdlyvset__top__DOT__singleCycle__DOT__rf__DOT__mem__v1 = 0U;
    if (vlSelf->rst_ni) {
        if ((0x500U == vlSelf->top__DOT__singleCycle__DOT__alu_data)) {
            vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vlvbound_h5e2306a2__0 
                = (vlSelf->io_sw_i >> 0x18U);
            if ((0x5feU >= (0x7ffU & ((IData)(3U) + vlSelf->top__DOT__singleCycle__DOT__alu_data)))) {
                __Vdlyvval__top__DOT__singleCycle__DOT__ls__DOT__mem__v0 
                    = vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vlvbound_h5e2306a2__0;
                __Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v0 = 1U;
                __Vdlyvdim0__top__DOT__singleCycle__DOT__ls__DOT__mem__v0 
                    = (0x7ffU & ((IData)(3U) + vlSelf->top__DOT__singleCycle__DOT__alu_data));
            }
            vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vlvbound_h5df73118__0 
                = (0xffU & (vlSelf->io_sw_i >> 0x10U));
            if ((0x5feU >= (0x7ffU & ((IData)(2U) + vlSelf->top__DOT__singleCycle__DOT__alu_data)))) {
                __Vdlyvval__top__DOT__singleCycle__DOT__ls__DOT__mem__v1 
                    = vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vlvbound_h5df73118__0;
                __Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v1 = 1U;
                __Vdlyvdim0__top__DOT__singleCycle__DOT__ls__DOT__mem__v1 
                    = (0x7ffU & ((IData)(2U) + vlSelf->top__DOT__singleCycle__DOT__alu_data));
            }
            vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vlvbound_h5df5a107__0 
                = (0xffU & (vlSelf->io_sw_i >> 8U));
            if ((0x5feU >= (0x7ffU & ((IData)(1U) + vlSelf->top__DOT__singleCycle__DOT__alu_data)))) {
                __Vdlyvval__top__DOT__singleCycle__DOT__ls__DOT__mem__v2 
                    = vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vlvbound_h5df5a107__0;
                __Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v2 = 1U;
                __Vdlyvdim0__top__DOT__singleCycle__DOT__ls__DOT__mem__v2 
                    = (0x7ffU & ((IData)(1U) + vlSelf->top__DOT__singleCycle__DOT__alu_data));
            }
            vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vlvbound_hd28f1f54__0 
                = (0xffU & vlSelf->io_sw_i);
            if ((0x5feU >= (0x7ffU & vlSelf->top__DOT__singleCycle__DOT__alu_data))) {
                __Vdlyvval__top__DOT__singleCycle__DOT__ls__DOT__mem__v3 
                    = vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vlvbound_hd28f1f54__0;
                __Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v3 = 1U;
                __Vdlyvdim0__top__DOT__singleCycle__DOT__ls__DOT__mem__v3 
                    = (0x7ffU & vlSelf->top__DOT__singleCycle__DOT__alu_data);
            }
        } else if (vlSelf->top__DOT__singleCycle__DOT__mem_wren) {
            vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vlvbound_h5e2306a2__1 
                = (vlSelf->top__DOT__singleCycle__DOT__wdata 
                   >> 0x18U);
            if ((0x5feU >= (0x7ffU & ((IData)(3U) + vlSelf->top__DOT__singleCycle__DOT__alu_data)))) {
                __Vdlyvval__top__DOT__singleCycle__DOT__ls__DOT__mem__v4 
                    = vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vlvbound_h5e2306a2__1;
                __Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v4 = 1U;
                __Vdlyvdim0__top__DOT__singleCycle__DOT__ls__DOT__mem__v4 
                    = (0x7ffU & ((IData)(3U) + vlSelf->top__DOT__singleCycle__DOT__alu_data));
            }
            vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vlvbound_h5df73118__1 
                = (0xffU & (vlSelf->top__DOT__singleCycle__DOT__wdata 
                            >> 0x10U));
            if ((0x5feU >= (0x7ffU & ((IData)(2U) + vlSelf->top__DOT__singleCycle__DOT__alu_data)))) {
                __Vdlyvval__top__DOT__singleCycle__DOT__ls__DOT__mem__v5 
                    = vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vlvbound_h5df73118__1;
                __Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v5 = 1U;
                __Vdlyvdim0__top__DOT__singleCycle__DOT__ls__DOT__mem__v5 
                    = (0x7ffU & ((IData)(2U) + vlSelf->top__DOT__singleCycle__DOT__alu_data));
            }
            vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vlvbound_h5df5a107__1 
                = (0xffU & (vlSelf->top__DOT__singleCycle__DOT__wdata 
                            >> 8U));
            if ((0x5feU >= (0x7ffU & ((IData)(1U) + vlSelf->top__DOT__singleCycle__DOT__alu_data)))) {
                __Vdlyvval__top__DOT__singleCycle__DOT__ls__DOT__mem__v6 
                    = vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vlvbound_h5df5a107__1;
                __Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v6 = 1U;
                __Vdlyvdim0__top__DOT__singleCycle__DOT__ls__DOT__mem__v6 
                    = (0x7ffU & ((IData)(1U) + vlSelf->top__DOT__singleCycle__DOT__alu_data));
            }
            vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vlvbound_hd28f1f54__1 
                = (0xffU & vlSelf->top__DOT__singleCycle__DOT__wdata);
            if ((0x5feU >= (0x7ffU & vlSelf->top__DOT__singleCycle__DOT__alu_data))) {
                __Vdlyvval__top__DOT__singleCycle__DOT__ls__DOT__mem__v7 
                    = vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vlvbound_hd28f1f54__1;
                __Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v7 = 1U;
                __Vdlyvdim0__top__DOT__singleCycle__DOT__ls__DOT__mem__v7 
                    = (0x7ffU & vlSelf->top__DOT__singleCycle__DOT__alu_data);
            }
        }
        if (vlSelf->top__DOT__singleCycle__DOT__rd_wren) {
            __Vdlyvval__top__DOT__singleCycle__DOT__rf__DOT__mem__v0 
                = ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__wb_sel))
                    ? ((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__pc_o)
                    : ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__wb_sel))
                        ? ((3U == (0x7fU & vlSelf->top__DOT__singleCycle__DOT__instr))
                            ? ((0x4000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                ? ((0x2000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                    ? 0U : ((0x1000U 
                                             & vlSelf->top__DOT__singleCycle__DOT__instr)
                                             ? (0xffffU 
                                                & vlSelf->top__DOT__singleCycle__DOT__r_data)
                                             : (0xffU 
                                                & vlSelf->top__DOT__singleCycle__DOT__r_data)))
                                : ((0x2000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                    ? ((0x1000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                        ? 0U : vlSelf->top__DOT__singleCycle__DOT__r_data)
                                    : ((0x1000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                        ? (0xffff0000U 
                                           | (0xffffU 
                                              & vlSelf->top__DOT__singleCycle__DOT__r_data))
                                        : (0xffffff00U 
                                           | (0xffU 
                                              & vlSelf->top__DOT__singleCycle__DOT__r_data)))))
                            : 0U) : vlSelf->top__DOT__singleCycle__DOT__alu_data));
            __Vdlyvset__top__DOT__singleCycle__DOT__rf__DOT__mem__v0 = 1U;
            __Vdlyvdim0__top__DOT__singleCycle__DOT__rf__DOT__mem__v0 
                = (0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                            >> 7U));
        }
        vlSelf->top__DOT__singleCycle__DOT__pc_o = vlSelf->top__DOT__singleCycle__DOT__nxt_pc;
    } else {
        __Vdlyvset__top__DOT__singleCycle__DOT__rf__DOT__mem__v1 = 1U;
        vlSelf->top__DOT__singleCycle__DOT__pc_o = 0U;
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v0) {
        vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem[__Vdlyvdim0__top__DOT__singleCycle__DOT__ls__DOT__mem__v0] 
            = __Vdlyvval__top__DOT__singleCycle__DOT__ls__DOT__mem__v0;
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v1) {
        vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem[__Vdlyvdim0__top__DOT__singleCycle__DOT__ls__DOT__mem__v1] 
            = __Vdlyvval__top__DOT__singleCycle__DOT__ls__DOT__mem__v1;
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v2) {
        vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem[__Vdlyvdim0__top__DOT__singleCycle__DOT__ls__DOT__mem__v2] 
            = __Vdlyvval__top__DOT__singleCycle__DOT__ls__DOT__mem__v2;
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v3) {
        vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem[__Vdlyvdim0__top__DOT__singleCycle__DOT__ls__DOT__mem__v3] 
            = __Vdlyvval__top__DOT__singleCycle__DOT__ls__DOT__mem__v3;
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v4) {
        vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem[__Vdlyvdim0__top__DOT__singleCycle__DOT__ls__DOT__mem__v4] 
            = __Vdlyvval__top__DOT__singleCycle__DOT__ls__DOT__mem__v4;
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v5) {
        vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem[__Vdlyvdim0__top__DOT__singleCycle__DOT__ls__DOT__mem__v5] 
            = __Vdlyvval__top__DOT__singleCycle__DOT__ls__DOT__mem__v5;
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v6) {
        vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem[__Vdlyvdim0__top__DOT__singleCycle__DOT__ls__DOT__mem__v6] 
            = __Vdlyvval__top__DOT__singleCycle__DOT__ls__DOT__mem__v6;
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__ls__DOT__mem__v7) {
        vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem[__Vdlyvdim0__top__DOT__singleCycle__DOT__ls__DOT__mem__v7] 
            = __Vdlyvval__top__DOT__singleCycle__DOT__ls__DOT__mem__v7;
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__rf__DOT__mem__v0) {
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[__Vdlyvdim0__top__DOT__singleCycle__DOT__rf__DOT__mem__v0] 
            = __Vdlyvval__top__DOT__singleCycle__DOT__rf__DOT__mem__v0;
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__rf__DOT__mem__v1) {
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[0U] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[1U] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[2U] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[3U] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[4U] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[5U] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[6U] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[7U] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[8U] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[9U] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[0xaU] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[0xbU] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[0xcU] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[0xdU] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[0xeU] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[0xfU] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[0x10U] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[0x11U] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[0x12U] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[0x13U] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[0x14U] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[0x15U] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[0x16U] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[0x17U] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[0x18U] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[0x19U] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[0x1aU] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[0x1bU] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[0x1cU] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[0x1dU] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[0x1eU] = 0U;
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[0x1fU] = 0U;
    }
    vlSelf->top__DOT__singleCycle__DOT__instr = vlSelf->top__DOT__singleCycle__DOT__im__DOT__mem
        [(0xfffU & (vlSelf->top__DOT__singleCycle__DOT__pc_o 
                    >> 2U))];
    if ((0x40U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
        vlSelf->top__DOT__singleCycle__DOT__rd_wren 
            = (1U & (IData)(((0x20U == (0x30U & vlSelf->top__DOT__singleCycle__DOT__instr)) 
                             & ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                 ? (IData)((7U == (7U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__instr)))
                                 : (IData)((7U == (7U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__instr)))))));
        if ((0x20U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            if ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                vlSelf->top__DOT__singleCycle__DOT__wb_sel = 0U;
                vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
            } else if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                    if ((2U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                        if ((1U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                            vlSelf->top__DOT__singleCycle__DOT__wb_sel = 2U;
                            vlSelf->top__DOT__singleCycle__DOT__imm 
                                = (((- (IData)((vlSelf->top__DOT__singleCycle__DOT__instr 
                                                >> 0x1fU))) 
                                    << 0x14U) | ((0xff000U 
                                                  & vlSelf->top__DOT__singleCycle__DOT__instr) 
                                                 | ((0x800U 
                                                     & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                          >> 0x14U)))));
                        } else {
                            vlSelf->top__DOT__singleCycle__DOT__wb_sel = 0U;
                            vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__singleCycle__DOT__wb_sel = 0U;
                        vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
                    }
                } else {
                    vlSelf->top__DOT__singleCycle__DOT__wb_sel = 0U;
                    vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
                }
            } else if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                if ((2U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                    if ((1U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                        vlSelf->top__DOT__singleCycle__DOT__wb_sel = 2U;
                        vlSelf->top__DOT__singleCycle__DOT__imm 
                            = (((- (IData)((vlSelf->top__DOT__singleCycle__DOT__instr 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->top__DOT__singleCycle__DOT__instr 
                                            >> 0x14U));
                    } else {
                        vlSelf->top__DOT__singleCycle__DOT__wb_sel = 0U;
                        vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
                    }
                } else {
                    vlSelf->top__DOT__singleCycle__DOT__wb_sel = 0U;
                    vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
                }
            } else {
                vlSelf->top__DOT__singleCycle__DOT__wb_sel = 0U;
                vlSelf->top__DOT__singleCycle__DOT__imm 
                    = ((2U & vlSelf->top__DOT__singleCycle__DOT__instr)
                        ? ((1U & vlSelf->top__DOT__singleCycle__DOT__instr)
                            ? (((- (IData)((vlSelf->top__DOT__singleCycle__DOT__instr 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                     >> 7U)))))
                            : 0U) : 0U);
            }
        } else {
            vlSelf->top__DOT__singleCycle__DOT__wb_sel = 0U;
            vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
        }
        vlSelf->top__DOT__singleCycle__DOT__alu_op = 0U;
        vlSelf->top__DOT__singleCycle__DOT__op_b_sel 
            = (1U & (IData)(((0x20U == (0x30U & vlSelf->top__DOT__singleCycle__DOT__instr)) 
                             & ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                 ? (IData)((7U == (7U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__instr)))
                                 : ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                     ? ((vlSelf->top__DOT__singleCycle__DOT__instr 
                                         >> 1U) & vlSelf->top__DOT__singleCycle__DOT__instr)
                                     : ((vlSelf->top__DOT__singleCycle__DOT__instr 
                                         >> 1U) & vlSelf->top__DOT__singleCycle__DOT__instr))))));
    } else if ((0x20U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
        vlSelf->top__DOT__singleCycle__DOT__rd_wren 
            = (1U & (IData)((0x13U == (0x1fU & vlSelf->top__DOT__singleCycle__DOT__instr))));
        vlSelf->top__DOT__singleCycle__DOT__wb_sel = 0U;
        if ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                vlSelf->top__DOT__singleCycle__DOT__alu_op = 0U;
            } else if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                vlSelf->top__DOT__singleCycle__DOT__alu_op = 0U;
            } else if ((2U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                if ((1U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                    if ((0x4000U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                        if ((0x2000U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                            vlSelf->top__DOT__singleCycle__DOT__alu_op 
                                = ((0x1000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                    ? 8U : 7U);
                        } else if ((0x1000U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                            if ((0x40000000U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                                if ((0x40000000U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                                    vlSelf->top__DOT__singleCycle__DOT__alu_op = 6U;
                                }
                            } else {
                                vlSelf->top__DOT__singleCycle__DOT__alu_op = 5U;
                            }
                        } else {
                            vlSelf->top__DOT__singleCycle__DOT__alu_op = 4U;
                        }
                    } else if ((0x2000U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                        vlSelf->top__DOT__singleCycle__DOT__alu_op 
                            = ((0x1000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                ? 3U : 2U);
                    } else if ((0x1000U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                        vlSelf->top__DOT__singleCycle__DOT__alu_op = 1U;
                    } else if ((0x40000000U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                        if ((0x40000000U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                            vlSelf->top__DOT__singleCycle__DOT__alu_op = 9U;
                        }
                    } else {
                        vlSelf->top__DOT__singleCycle__DOT__alu_op = 0U;
                    }
                } else {
                    vlSelf->top__DOT__singleCycle__DOT__alu_op = 0U;
                }
            } else {
                vlSelf->top__DOT__singleCycle__DOT__alu_op = 0U;
            }
            vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
        } else {
            vlSelf->top__DOT__singleCycle__DOT__alu_op = 0U;
            vlSelf->top__DOT__singleCycle__DOT__imm 
                = ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)
                    ? 0U : ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)
                             ? 0U : ((2U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                      ? ((1U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                          ? (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                      >> 7U))))
                                          : 0U) : 0U)));
        }
        vlSelf->top__DOT__singleCycle__DOT__op_b_sel 
            = (1U & (IData)((3U == (0x1fU & vlSelf->top__DOT__singleCycle__DOT__instr))));
    } else if ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
        vlSelf->top__DOT__singleCycle__DOT__rd_wren 
            = (1U & (IData)((3U == (0xfU & vlSelf->top__DOT__singleCycle__DOT__instr))));
        vlSelf->top__DOT__singleCycle__DOT__wb_sel = 0U;
        if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            vlSelf->top__DOT__singleCycle__DOT__alu_op = 0U;
            vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
        } else if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            vlSelf->top__DOT__singleCycle__DOT__alu_op = 0U;
            vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
        } else if ((2U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            if ((1U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                if ((0x4000U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                    if ((0x2000U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                        vlSelf->top__DOT__singleCycle__DOT__alu_op 
                            = ((0x1000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                ? 8U : 7U);
                    } else if ((0x1000U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                        if ((0x40000000U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                            if ((0x40000000U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                                vlSelf->top__DOT__singleCycle__DOT__alu_op = 6U;
                            }
                        } else {
                            vlSelf->top__DOT__singleCycle__DOT__alu_op = 5U;
                        }
                    } else {
                        vlSelf->top__DOT__singleCycle__DOT__alu_op = 4U;
                    }
                } else {
                    vlSelf->top__DOT__singleCycle__DOT__alu_op 
                        = ((0x2000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                            ? ((0x1000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                ? 3U : 2U) : ((0x1000U 
                                               & vlSelf->top__DOT__singleCycle__DOT__instr)
                                               ? 1U
                                               : 0U));
                }
                vlSelf->top__DOT__singleCycle__DOT__imm 
                    = (((- (IData)((vlSelf->top__DOT__singleCycle__DOT__instr 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 0x14U));
            } else {
                vlSelf->top__DOT__singleCycle__DOT__alu_op = 0U;
                vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
            }
        } else {
            vlSelf->top__DOT__singleCycle__DOT__alu_op = 0U;
            vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
        }
        vlSelf->top__DOT__singleCycle__DOT__op_b_sel 
            = (1U & (IData)((3U == (0xfU & vlSelf->top__DOT__singleCycle__DOT__instr))));
    } else {
        vlSelf->top__DOT__singleCycle__DOT__rd_wren 
            = (1U & (IData)((3U == (0xfU & vlSelf->top__DOT__singleCycle__DOT__instr))));
        if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            vlSelf->top__DOT__singleCycle__DOT__wb_sel = 0U;
            vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
        } else if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            vlSelf->top__DOT__singleCycle__DOT__wb_sel = 0U;
            vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
        } else if ((2U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            if ((1U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                vlSelf->top__DOT__singleCycle__DOT__wb_sel = 1U;
                vlSelf->top__DOT__singleCycle__DOT__imm 
                    = (((- (IData)((vlSelf->top__DOT__singleCycle__DOT__instr 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 0x14U));
            } else {
                vlSelf->top__DOT__singleCycle__DOT__wb_sel = 0U;
                vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
            }
        } else {
            vlSelf->top__DOT__singleCycle__DOT__wb_sel = 0U;
            vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
        }
        vlSelf->top__DOT__singleCycle__DOT__alu_op = 0U;
        vlSelf->top__DOT__singleCycle__DOT__op_b_sel 
            = (1U & (IData)((3U == (0xfU & vlSelf->top__DOT__singleCycle__DOT__instr))));
    }
    vlSelf->top__DOT__singleCycle__DOT__mem_wren = (IData)(
                                                           (0x23U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->top__DOT__singleCycle__DOT__instr)));
    vlSelf->top__DOT__singleCycle__DOT__br_unsigned 
        = (IData)((0x6063U == (0x607fU & vlSelf->top__DOT__singleCycle__DOT__instr)));
    vlSelf->top__DOT__singleCycle__DOT__op_a_sel = 
        (1U & (IData)(((0x60U == (0x70U & vlSelf->top__DOT__singleCycle__DOT__instr)) 
                       & ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)
                           ? (IData)((7U == (7U & vlSelf->top__DOT__singleCycle__DOT__instr)))
                           : (IData)((3U == (7U & vlSelf->top__DOT__singleCycle__DOT__instr)))))));
    vlSelf->top__DOT__singleCycle__DOT__rs1_data = 
        ((0U != (0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 0xfU))) ? vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem
         [(0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                    >> 0xfU))] : 0U);
    vlSelf->top__DOT__singleCycle__DOT__rs2_data = 
        ((0U != (0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 0x14U))) ? vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem
         [(0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                    >> 0x14U))] : 0U);
    vlSelf->top__DOT__singleCycle__DOT__operand_a = 
        ((IData)(vlSelf->top__DOT__singleCycle__DOT__op_a_sel)
          ? vlSelf->top__DOT__singleCycle__DOT__pc_o
          : vlSelf->top__DOT__singleCycle__DOT__rs1_data);
    vlSelf->top__DOT__singleCycle__DOT__wdata = ((0x2000U 
                                                  & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                  ? vlSelf->top__DOT__singleCycle__DOT__rs2_data
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                   ? 
                                                  (0xffffU 
                                                   & vlSelf->top__DOT__singleCycle__DOT__rs2_data)
                                                   : 
                                                  (0xffU 
                                                   & vlSelf->top__DOT__singleCycle__DOT__rs2_data)));
    vlSelf->top__DOT__singleCycle__DOT__br_equal = 
        ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
          == vlSelf->top__DOT__singleCycle__DOT__rs2_data)
          ? 1U : 0U);
    vlSelf->top__DOT__singleCycle__DOT__br_less = (1U 
                                                   & ((IData)(vlSelf->top__DOT__singleCycle__DOT__br_unsigned)
                                                       ? 
                                                      (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                                       < vlSelf->top__DOT__singleCycle__DOT__rs2_data)
                                                       : 
                                                      (((IData)(1U) 
                                                        + 
                                                        (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                                         + 
                                                         (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                                       >> 0x1fU)));
    vlSelf->top__DOT__singleCycle__DOT__operand_b = 
        ((IData)(vlSelf->top__DOT__singleCycle__DOT__op_b_sel)
          ? vlSelf->top__DOT__singleCycle__DOT__imm
          : vlSelf->top__DOT__singleCycle__DOT__rs2_data);
    vlSelf->top__DOT__singleCycle__DOT__br_sel = (1U 
                                                  & (IData)(
                                                            ((0x60U 
                                                              == 
                                                              (0x70U 
                                                               & vlSelf->top__DOT__singleCycle__DOT__instr)) 
                                                             & ((8U 
                                                                 & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                                 ? (IData)(
                                                                           (7U 
                                                                            == 
                                                                            (7U 
                                                                             & vlSelf->top__DOT__singleCycle__DOT__instr)))
                                                                 : 
                                                                ((4U 
                                                                  & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                                  ? 
                                                                 ((vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                   >> 1U) 
                                                                  & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                                  : 
                                                                 ((vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                   >> 1U) 
                                                                  & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                     & ((0x4000U 
                                                                         & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                                         ? 
                                                                        ((0x2000U 
                                                                          & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                                          ? 
                                                                         ((0x1000U 
                                                                           & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                                           ? 
                                                                          ((2U 
                                                                            == 
                                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__br_equal) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->top__DOT__singleCycle__DOT__br_less))) 
                                                                           | (0U 
                                                                              == 
                                                                              (((IData)(vlSelf->top__DOT__singleCycle__DOT__br_equal) 
                                                                                << 1U) 
                                                                               | (IData)(vlSelf->top__DOT__singleCycle__DOT__br_less))))
                                                                           : 
                                                                          (1U 
                                                                           == 
                                                                           (((IData)(vlSelf->top__DOT__singleCycle__DOT__br_equal) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelf->top__DOT__singleCycle__DOT__br_less))))
                                                                          : 
                                                                         ((0x1000U 
                                                                           & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                                           ? 
                                                                          ((0U 
                                                                            == 
                                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__br_equal) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->top__DOT__singleCycle__DOT__br_less))) 
                                                                           | (2U 
                                                                              == 
                                                                              (((IData)(vlSelf->top__DOT__singleCycle__DOT__br_equal) 
                                                                                << 1U) 
                                                                               | (IData)(vlSelf->top__DOT__singleCycle__DOT__br_less))))
                                                                           : 
                                                                          (1U 
                                                                           == 
                                                                           (((IData)(vlSelf->top__DOT__singleCycle__DOT__br_equal) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelf->top__DOT__singleCycle__DOT__br_less)))))
                                                                         : 
                                                                        ((~ 
                                                                          (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                           >> 0xdU)) 
                                                                         & ((0x1000U 
                                                                             & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                                             ? 
                                                                            ((0U 
                                                                              == 
                                                                              (((IData)(vlSelf->top__DOT__singleCycle__DOT__br_equal) 
                                                                                << 1U) 
                                                                               | (IData)(vlSelf->top__DOT__singleCycle__DOT__br_less))) 
                                                                             | (1U 
                                                                                == 
                                                                                (((IData)(vlSelf->top__DOT__singleCycle__DOT__br_equal) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT__singleCycle__DOT__br_less))))
                                                                             : 
                                                                            (2U 
                                                                             == 
                                                                             (((IData)(vlSelf->top__DOT__singleCycle__DOT__br_equal) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelf->top__DOT__singleCycle__DOT__br_less)))))))))))));
    vlSelf->top__DOT__singleCycle__DOT__al__DOT__subtractor 
        = ((IData)(1U) + (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                          + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)));
    vlSelf->top__DOT__singleCycle__DOT__alu_data = 
        ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
          ? ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
              ? 0U : ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
                       ? 0U : ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
                                ? vlSelf->top__DOT__singleCycle__DOT__al__DOT__subtractor
                                : (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   & vlSelf->top__DOT__singleCycle__DOT__operand_b))))
          : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
              ? ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
                  ? ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
                      ? (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         | vlSelf->top__DOT__singleCycle__DOT__operand_b)
                      : ((0x10U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                          ? ((8U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                              ? ((4U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                  ? ((2U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                      ? ((1U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                          ? (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 1U) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b)))
                                          : (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 2U) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b))))
                                      : ((1U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                          ? (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 3U) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b)))
                                          : (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 4U) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b)))))
                                  : ((2U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                      ? ((1U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                          ? (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 5U) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b)))
                                          : (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 6U) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b))))
                                      : ((1U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                          ? (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 7U) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b)))
                                          : (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 8U) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b))))))
                              : ((4U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                  ? ((2U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                      ? ((1U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                          ? (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 9U) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b)))
                                          : (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 0xaU) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b))))
                                      : ((1U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                          ? (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 0xbU) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b)))
                                          : (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b)))))
                                  : ((2U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                      ? ((1U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                          ? (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 0xdU) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b)))
                                          : (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 0xeU) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b))))
                                      : ((1U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                          ? (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 0xfU) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b)))
                                          : (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 0x10U) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b)))))))
                          : ((8U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                              ? ((4U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                  ? ((2U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                      ? ((1U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                          ? (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 0x11U) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b)))
                                          : (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 0x12U) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b))))
                                      : ((1U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                          ? (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 0x13U) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b)))
                                          : (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 0x14U) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b)))))
                                  : ((2U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                      ? ((1U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                          ? (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 0x15U) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b)))
                                          : (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 0x16U) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b))))
                                      : ((1U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                          ? (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 0x17U) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b)))
                                          : (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 0x18U) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b))))))
                              : ((4U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                  ? ((2U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                      ? ((1U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                          ? (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 0x19U) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b)))
                                          : (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 0x1aU) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b))))
                                      : ((1U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                          ? (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 0x1bU) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b)))
                                          : (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 0x1cU) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b)))))
                                  : ((2U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                      ? ((1U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                          ? (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 0x1dU) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b)))
                                          : (((- (IData)(
                                                         (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                          >> 0x1fU))) 
                                              << 0x1eU) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b))))
                                      : ((1U & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                          ? ((0x80000000U 
                                              & vlSelf->top__DOT__singleCycle__DOT__operand_a) 
                                             | (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b)))
                                          : (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                             >> (0x1fU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b))))))))
                  : ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
                      ? (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         >> (0x1fU & vlSelf->top__DOT__singleCycle__DOT__operand_b))
                      : (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b)))
              : ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
                  ? ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
                      ? ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                          < vlSelf->top__DOT__singleCycle__DOT__operand_b)
                          ? 1U : 0U) : (vlSelf->top__DOT__singleCycle__DOT__al__DOT__subtractor 
                                        >> 0x1fU)) : 
                 ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
                   ? (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                      << (0x1fU & vlSelf->top__DOT__singleCycle__DOT__operand_b))
                   : (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                      + vlSelf->top__DOT__singleCycle__DOT__operand_b)))));
    vlSelf->top__DOT__singleCycle__DOT__nxt_pc = ((IData)(vlSelf->top__DOT__singleCycle__DOT__br_sel)
                                                   ? vlSelf->top__DOT__singleCycle__DOT__alu_data
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->top__DOT__singleCycle__DOT__pc_o));
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem[0x503U] 
        = (vlSelf->io_sw_i >> 0x18U);
    vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem[0x502U] 
        = (0xffU & (vlSelf->io_sw_i >> 0x10U));
    vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem[0x501U] 
        = (0xffU & (vlSelf->io_sw_i >> 8U));
    vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem[0x500U] 
        = (0xffU & vlSelf->io_sw_i);
    vlSelf->io_lcd_o = ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                         [0x4a3U] << 0x18U) | ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                [0x4a2U] 
                                                << 0x10U) 
                                               | ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                   [0x4a1U] 
                                                   << 8U) 
                                                  | vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                  [0x4a0U])));
    vlSelf->io_ledg_o = ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                          [0x493U] << 0x18U) | ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                 [0x492U] 
                                                 << 0x10U) 
                                                | ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                    [0x491U] 
                                                    << 8U) 
                                                   | vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                   [0x490U])));
    vlSelf->io_ledr_o = ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                          [0x483U] << 0x18U) | ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                 [0x482U] 
                                                 << 0x10U) 
                                                | ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                    [0x481U] 
                                                    << 8U) 
                                                   | vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                   [0x480U])));
    vlSelf->io_hex7_o = ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                          [0x473U] << 0x18U) | ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                 [0x472U] 
                                                 << 0x10U) 
                                                | ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                    [0x471U] 
                                                    << 8U) 
                                                   | vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                   [0x470U])));
    vlSelf->io_hex6_o = ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                          [0x463U] << 0x18U) | ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                 [0x462U] 
                                                 << 0x10U) 
                                                | ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                    [0x461U] 
                                                    << 8U) 
                                                   | vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                   [0x460U])));
    vlSelf->io_hex5_o = ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                          [0x453U] << 0x18U) | ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                 [0x452U] 
                                                 << 0x10U) 
                                                | ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                    [0x451U] 
                                                    << 8U) 
                                                   | vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                   [0x450U])));
    vlSelf->io_hex4_o = ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                          [0x443U] << 0x18U) | ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                 [0x442U] 
                                                 << 0x10U) 
                                                | ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                    [0x441U] 
                                                    << 8U) 
                                                   | vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                   [0x440U])));
    vlSelf->io_hex3_o = ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                          [0x433U] << 0x18U) | ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                 [0x432U] 
                                                 << 0x10U) 
                                                | ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                    [0x431U] 
                                                    << 8U) 
                                                   | vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                   [0x430U])));
    vlSelf->io_hex2_o = ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                          [0x423U] << 0x18U) | ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                 [0x422U] 
                                                 << 0x10U) 
                                                | ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                    [0x421U] 
                                                    << 8U) 
                                                   | vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                   [0x420U])));
    vlSelf->io_hex1_o = ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                          [0x413U] << 0x18U) | ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                 [0x412U] 
                                                 << 0x10U) 
                                                | ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                    [0x411U] 
                                                    << 8U) 
                                                   | vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                   [0x410U])));
    vlSelf->io_hex0_o = ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                          [0x403U] << 0x18U) | ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                 [0x402U] 
                                                 << 0x10U) 
                                                | ((vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                    [0x401U] 
                                                    << 8U) 
                                                   | vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                   [0x400U])));
    vlSelf->top__DOT__singleCycle__DOT__r_data = ((
                                                   ((0x5feU 
                                                     >= 
                                                     (0x7ffU 
                                                      & ((IData)(3U) 
                                                         + vlSelf->top__DOT__singleCycle__DOT__alu_data)))
                                                     ? 
                                                    vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                    [
                                                    (0x7ffU 
                                                     & ((IData)(3U) 
                                                        + vlSelf->top__DOT__singleCycle__DOT__alu_data))]
                                                     : (IData)(vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vxrand_h96fdabed__0)) 
                                                   << 0x18U) 
                                                  | ((((0x5feU 
                                                        >= 
                                                        (0x7ffU 
                                                         & ((IData)(2U) 
                                                            + vlSelf->top__DOT__singleCycle__DOT__alu_data)))
                                                        ? 
                                                       vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                       [
                                                       (0x7ffU 
                                                        & ((IData)(2U) 
                                                           + vlSelf->top__DOT__singleCycle__DOT__alu_data))]
                                                        : (IData)(vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vxrand_h96fdabed__1)) 
                                                      << 0x10U) 
                                                     | ((((0x5feU 
                                                           >= 
                                                           (0x7ffU 
                                                            & ((IData)(1U) 
                                                               + vlSelf->top__DOT__singleCycle__DOT__alu_data)))
                                                           ? 
                                                          vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                          [
                                                          (0x7ffU 
                                                           & ((IData)(1U) 
                                                              + vlSelf->top__DOT__singleCycle__DOT__alu_data))]
                                                           : (IData)(vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vxrand_h96fdabed__2)) 
                                                         << 8U) 
                                                        | ((0x5feU 
                                                            >= 
                                                            (0x7ffU 
                                                             & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                                                            ? 
                                                           vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem
                                                           [
                                                           (0x7ffU 
                                                            & vlSelf->top__DOT__singleCycle__DOT__alu_data)]
                                                            : (IData)(vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vxrand_h96fdabed__3)))));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
}
#endif  // VL_DEBUG
