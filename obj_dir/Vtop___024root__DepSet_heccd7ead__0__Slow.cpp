// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_h2b17369e__0;
    // Body
    vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vxrand_h96fdabed__3 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vxrand_h96fdabed__2 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vxrand_h96fdabed__1 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vxrand_h96fdabed__0 
        = (0xffU & VL_RAND_RESET_I(8));
    __Vtemp_h2b17369e__0[0U] = 0x2e73696dU;
    __Vtemp_h2b17369e__0[1U] = 0x64617461U;
    __Vtemp_h2b17369e__0[2U] = 0x6d656d2eU;
    __Vtemp_h2b17369e__0[3U] = 0x696e7374U;
    __Vtemp_h2b17369e__0[4U] = 0x6f72792fU;
    __Vtemp_h2b17369e__0[5U] = 0x2f6d656dU;
    __Vtemp_h2b17369e__0[6U] = 0x2eU;
    VL_READMEM_N(true, 32, 4096, 0, VL_CVT_PACK_STR_NW(7, __Vtemp_h2b17369e__0)
                 ,  &(vlSelf->top__DOT__singleCycle__DOT__im__DOT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem[0x503U] 
        = (vlSelf->io_sw_i >> 0x18U);
    vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem[0x502U] 
        = (0xffU & (vlSelf->io_sw_i >> 0x10U));
    vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem[0x501U] 
        = (0xffU & (vlSelf->io_sw_i >> 8U));
    vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem[0x500U] 
        = (0xffU & vlSelf->io_sw_i);
    vlSelf->top__DOT__singleCycle__DOT__instr = vlSelf->top__DOT__singleCycle__DOT__im__DOT__mem
        [(0xfffU & (vlSelf->top__DOT__singleCycle__DOT__pc_o 
                    >> 2U))];
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

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->io_sw_i = VL_RAND_RESET_I(32);
    vlSelf->io_lcd_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledg_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledr_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex0_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex1_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex2_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex3_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex4_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex5_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex6_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex7_o = VL_RAND_RESET_I(32);
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__br_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__nxt_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__alu_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__pc_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__rd_wren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__br_less = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__br_equal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__br_unsigned = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__op_a_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__op_b_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__mem_wren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__wb_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__imm_src = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__operand_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__operand_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__wdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__r_data = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__singleCycle__DOT__im__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__singleCycle__DOT__rf__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__singleCycle__DOT__al__DOT__subtractor = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vxrand_h96fdabed__3 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vxrand_h96fdabed__2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vxrand_h96fdabed__1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vxrand_h96fdabed__0 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<1535; ++__Vi0) {
        vlSelf->top__DOT__singleCycle__DOT__ls__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__singleCycle__DOT__ls__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vlvbound_h5e2306a2__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vlvbound_h5df73118__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vlvbound_h5df5a107__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vlvbound_hd28f1f54__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vlvbound_h5e2306a2__1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vlvbound_h5df73118__1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vlvbound_h5df5a107__1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vlvbound_hd28f1f54__1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__singleCycle__DOT__ls__DOT____Vlvbound_hb9a6c45f__0 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
