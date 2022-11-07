// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+65,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+66,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+67,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+68,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+69,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+70,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+72,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+74,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+75,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+77,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+65,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+66,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+67,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+68,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+69,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+70,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+72,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+74,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+75,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+77,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("singleCycle ");
    tracep->declBit(c+77,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+65,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+66,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+67,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+68,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+69,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+70,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+72,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+74,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+75,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1,"br_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2,"nxt_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,"pc_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,"alu_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,"pc_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,"rd_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+8,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,"wb_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,"br_less",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+11,"br_equal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+12,"br_unsigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+13,"op_a_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+14,"op_b_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+15,"alu_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+16,"mem_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+17,"wb_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,"imm_src",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+18,"imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,"operand_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,"operand_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,"wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,"r_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,"ld_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("al ");
    tracep->declBus(c+19,"operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+20,"operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+15,"alu_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+4,"alu_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+22,"subtractor",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("br ");
    tracep->declBus(c+8,"rs1_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+9,"rs2_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+12,"br_unsigned_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"br_less_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"br_equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+23,"subtractor",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,"result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cu ");
    tracep->declBit(c+10,"br_less_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"br_equal_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+6,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1,"br_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+12,"br_unsigned_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"rd_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+13,"op_a_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"op_b_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+15,"alu_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+16,"mem_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+17,"wb_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("im ");
    tracep->declBus(c+5,"adrr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+6,"inst_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imgen ");
    tracep->declBus(c+6,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+18,"imm_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ls ");
    tracep->declBit(c+77,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+21,"wdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+16,"wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+65,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+80,"rdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+66,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+67,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+68,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+69,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+70,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+72,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+74,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+75,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+25,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mux2_0 ");
    tracep->declBus(c+83,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+3,"d0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+4,"d1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1,"s",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"y",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux2_1 ");
    tracep->declBus(c+83,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+8,"d0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+5,"d1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+13,"s",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+19,"y",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux2_2 ");
    tracep->declBus(c+83,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+9,"d0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+18,"d1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+14,"s",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+20,"y",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux3_0 ");
    tracep->declBus(c+83,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+26,"d0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+27,"d1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+9,"d2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+28,"s",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+21,"y",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux3_1 ");
    tracep->declBus(c+83,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+4,"d0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+81,"d1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3,"d2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+17,"s",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+79,"y",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc ");
    tracep->declBit(c+77,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"nxt_pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+5,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcpl4 ");
    tracep->declBus(c+5,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3,"pc_four_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rf ");
    tracep->declBit(c+77,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"rs1_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+30,"rs2_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+31,"rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+79,"rd_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+7,"rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8,"rs1_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+9,"rs2_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+32+i*1,"mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+64,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__singleCycle__DOT__br_sel));
    bufp->fullIData(oldp+2,(((IData)(vlSelf->top__DOT__singleCycle__DOT__br_sel)
                              ? vlSelf->top__DOT__singleCycle__DOT__alu_data
                              : ((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__pc_o))),32);
    bufp->fullIData(oldp+3,(((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__pc_o)),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__singleCycle__DOT__alu_data),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__singleCycle__DOT__pc_o),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__singleCycle__DOT__instr),32);
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__singleCycle__DOT__rd_wren));
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__singleCycle__DOT__rs1_data),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__singleCycle__DOT__rs2_data),32);
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__singleCycle__DOT__br_less));
    bufp->fullBit(oldp+11,(vlSelf->top__DOT__singleCycle__DOT__br_equal));
    bufp->fullBit(oldp+12,(vlSelf->top__DOT__singleCycle__DOT__br_unsigned));
    bufp->fullBit(oldp+13,(vlSelf->top__DOT__singleCycle__DOT__op_a_sel));
    bufp->fullBit(oldp+14,(vlSelf->top__DOT__singleCycle__DOT__op_b_sel));
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__singleCycle__DOT__alu_op),4);
    bufp->fullBit(oldp+16,(vlSelf->top__DOT__singleCycle__DOT__mem_wren));
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__singleCycle__DOT__wb_sel),2);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__singleCycle__DOT__imm),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__singleCycle__DOT__operand_a),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__singleCycle__DOT__operand_b),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__singleCycle__DOT__wdata),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__singleCycle__DOT__al__DOT__subtractor),32);
    bufp->fullIData(oldp+23,(((IData)(1U) + (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)))),32);
    bufp->fullBit(oldp+24,((((IData)(1U) + (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                            >> 0x1fU)));
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__singleCycle__DOT__ls__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+26,((0xffU & vlSelf->top__DOT__singleCycle__DOT__rs2_data)),32);
    bufp->fullIData(oldp+27,((0xffffU & vlSelf->top__DOT__singleCycle__DOT__rs2_data)),32);
    bufp->fullCData(oldp+28,((3U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                    >> 0xcU))),2);
    bufp->fullCData(oldp+29,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+30,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+31,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[0]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[1]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[2]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[3]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[4]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[5]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[6]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[7]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[8]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[9]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[10]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[11]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[12]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[13]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[14]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[15]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[16]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[17]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[18]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[19]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[20]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[21]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[22]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[23]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[24]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[25]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[26]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[27]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[28]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[29]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[30]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__mem[31]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__singleCycle__DOT__rf__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+65,(vlSelf->io_sw_i),32);
    bufp->fullIData(oldp+66,(vlSelf->io_lcd_o),32);
    bufp->fullIData(oldp+67,(vlSelf->io_ledg_o),32);
    bufp->fullIData(oldp+68,(vlSelf->io_ledr_o),32);
    bufp->fullIData(oldp+69,(vlSelf->io_hex0_o),32);
    bufp->fullIData(oldp+70,(vlSelf->io_hex1_o),32);
    bufp->fullIData(oldp+71,(vlSelf->io_hex2_o),32);
    bufp->fullIData(oldp+72,(vlSelf->io_hex3_o),32);
    bufp->fullIData(oldp+73,(vlSelf->io_hex4_o),32);
    bufp->fullIData(oldp+74,(vlSelf->io_hex5_o),32);
    bufp->fullIData(oldp+75,(vlSelf->io_hex6_o),32);
    bufp->fullIData(oldp+76,(vlSelf->io_hex7_o),32);
    bufp->fullBit(oldp+77,(vlSelf->clk_i));
    bufp->fullBit(oldp+78,(vlSelf->rst_ni));
    bufp->fullIData(oldp+79,(((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__wb_sel))
                               ? ((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__pc_o)
                               : ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__wb_sel))
                                   ? ((3U == (0x7fU 
                                              & vlSelf->top__DOT__singleCycle__DOT__instr))
                                       ? ((0x4000U 
                                           & vlSelf->top__DOT__singleCycle__DOT__instr)
                                           ? ((0x2000U 
                                               & vlSelf->top__DOT__singleCycle__DOT__instr)
                                               ? 0U
                                               : ((0x1000U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                   ? 
                                                  (0xffffU 
                                                   & vlSelf->top__DOT__singleCycle__DOT__r_data)
                                                   : 
                                                  (0xffU 
                                                   & vlSelf->top__DOT__singleCycle__DOT__r_data)))
                                           : ((0x2000U 
                                               & vlSelf->top__DOT__singleCycle__DOT__instr)
                                               ? ((0x1000U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                   ? 0U
                                                   : vlSelf->top__DOT__singleCycle__DOT__r_data)
                                               : ((0x1000U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                   ? 
                                                  (0xffff0000U 
                                                   | (0xffffU 
                                                      & vlSelf->top__DOT__singleCycle__DOT__r_data))
                                                   : 
                                                  (0xffffff00U 
                                                   | (0xffU 
                                                      & vlSelf->top__DOT__singleCycle__DOT__r_data)))))
                                       : 0U) : vlSelf->top__DOT__singleCycle__DOT__alu_data))),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__singleCycle__DOT__r_data),32);
    bufp->fullIData(oldp+81,(((3U == (0x7fU & vlSelf->top__DOT__singleCycle__DOT__instr))
                               ? ((0x4000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                   ? ((0x2000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                       ? 0U : ((0x1000U 
                                                & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                ? (0xffffU 
                                                   & vlSelf->top__DOT__singleCycle__DOT__r_data)
                                                : (0xffU 
                                                   & vlSelf->top__DOT__singleCycle__DOT__r_data)))
                                   : ((0x2000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                       ? ((0x1000U 
                                           & vlSelf->top__DOT__singleCycle__DOT__instr)
                                           ? 0U : vlSelf->top__DOT__singleCycle__DOT__r_data)
                                       : ((0x1000U 
                                           & vlSelf->top__DOT__singleCycle__DOT__instr)
                                           ? (0xffff0000U 
                                              | (0xffffU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__r_data))
                                           : (0xffffff00U 
                                              | (0xffU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__r_data)))))
                               : 0U)),32);
    bufp->fullCData(oldp+82,(vlSelf->top__DOT__singleCycle__DOT__imm_src),2);
    bufp->fullIData(oldp+83,(0x20U),32);
}
