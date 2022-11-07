module singlecycle (
    input logic clk_i, 
    input logic rst_ni, 

    /* verilator lint_off UNUSED */
    input logic [31:0]io_sw_i, 
    /* verilator lint_on UNUSED */

    output logic [31:0] io_lcd_o,
    output logic [31:0] io_ledg_o,
    output logic [31:0] io_ledr_o,
    output logic [31:0] io_hex0_o,
    output logic [31:0] io_hex1_o,
    output logic [31:0] io_hex2_o,
    output logic [31:0] io_hex3_o,
    output logic [31:0] io_hex4_o,
    output logic [31:0] io_hex5_o,
    output logic [31:0] io_hex6_o,
    output logic [31:0] io_hex7_o
);

logic br_sel;
logic [31:0]nxt_pc;
logic [31:0]pc_four;
logic [31:0]alu_data;
logic [31:0]pc_o;

mux2 #(32) mux2_0(
    .d0 (pc_four), 
    .d1 (alu_data),
    .s  (br_sel),
    .y  (nxt_pc)
);

pc pc (
    .clk_i (clk_i),
    .rst_ni(rst_ni),

    .nxt_pc_i(nxt_pc),

    .pc_o(pc_o)
);

pcplus4 pcpl4(
    .pc_i(pc_o),
    .pc_four_o(pc_four)
);

logic [31:0]instr;
inst_memory im(
    .adrr_i (pc_o),
    .inst_o (instr)
);

logic rd_wren;
logic [31:0] rs1_data;
logic [31:0] rs2_data;
logic [31:0] wb_data;
regfile rf(
    .clk_i (clk_i),
    .rst_ni(rst_ni),

    .rs1_addr_i (instr[19:15]),
    .rs2_addr_i (instr[24:20]),
    .rd_addr_i  (instr[11:7]),
    .rd_data_i  (wb_data),

    .rd_wren_i  (rd_wren),

    .rs1_data_o (rs1_data),
    .rs2_data_o (rs2_data)
);

/* verilator lint_off UNUSED */
logic br_less;
logic br_equal;
logic br_unsigned;
logic op_a_sel;
logic op_b_sel;
logic [3:0] alu_op;
logic mem_wren;
logic [1:0] wb_sel;
logic [1:0] imm_src;
ctrl_unit cu(
    .br_less_i     (br_less),
    .br_equal_i    (br_equal),
    .instr_i       (instr),

    .br_sel_o      (br_sel),
    .br_unsigned_o (br_unsigned), 
    .rd_wren_o     (rd_wren),   
    .op_a_sel_o    (op_a_sel),
    .op_b_sel_o    (op_b_sel),
    .alu_op_o      (alu_op),
    .mem_wren_o    (mem_wren),
    .wb_sel_o      (wb_sel)
);

logic [31:0] imm;
immgen imgen(
    .instr_i (instr[31:0]),
    .imm_o   (imm)
);

brcomp br(
    .rs1_data_i     (rs1_data),
    .rs2_data_i     (rs2_data),
    .br_unsigned_i  (br_unsigned),

    .br_less_o      (br_less),
    .br_equal_o     (br_equal)
);

logic [31:0] operand_a;
logic [31:0] operand_b;

mux2 #(32) mux2_1(
    .d0 (rs1_data), 
    .d1 (pc_o),
    .s  (op_a_sel),
    .y  (operand_a)
);

mux2 #(32) mux2_2(
    .d0 (rs2_data), 
    .d1 (imm),
    .s  (op_b_sel),
    .y  (operand_b)
);

alu al(
    .operand_a_i  (operand_a),
    .operand_b_i  (operand_b),

    .alu_op_i     (alu_op),
    .alu_data_o   (alu_data)
);

logic [31:0] wdata;

mux3 #(32) mux3_0(
    .d0({{24{1'b0}}, rs2_data[7:0]}), //sb
    .d1({{16{1'b0}}, rs2_data[15:0]}), //sh
    .d2(rs2_data[31:0]), //sw
    .s(instr[13:12]),
    .y(wdata)
);
logic [31:0] r_data;
lsu ls(
    .clk_i (clk_i),
    .rst_ni(rst_ni),

    .addr_i  (alu_data),
    .wdata_i (wdata),
    .wren_i  (mem_wren),

    .io_sw_i  (io_sw_i),
    .io_lcd_o (io_lcd_o),
    .io_ledg_o(io_ledg_o),
    .io_ledr_o(io_ledr_o),
    .io_hex0_o(io_hex0_o),
    .io_hex1_o(io_hex1_o),
    .io_hex2_o(io_hex2_o),
    .io_hex3_o(io_hex3_o),
    .io_hex4_o(io_hex4_o),
    .io_hex5_o(io_hex5_o),
    .io_hex6_o(io_hex6_o),
    .io_hex7_o(io_hex7_o),

    .rdata_o (r_data)
);

logic [31:0] ld_data;
always_comb begin
    if (instr[6:0] == 7'b0000011) begin
        case (instr[14:12])
            3'b000 : ld_data = {{24{1'b1}}, r_data[7:0]}; //lb
            3'b001 : ld_data = {{16{1'b1}}, r_data[15:0]}; //lh
            3'b010 : ld_data = r_data[31:0]; //lw
            3'b100 : ld_data = {{24{1'b0}}, r_data[7:0]};  //lbu
            3'b101 : ld_data = {{16{1'b0}}, r_data[15:0]}; //lhu
            default: ld_data = {32{1'b0}};
        endcase
    end
    else ld_data = {32{1'b0}};
end

mux3 #(32) mux3_1(
    .d0(alu_data),
    .d1(ld_data), 
    .d2(pc_four),
    .s(wb_sel),
    .y(wb_data)
);

endmodule: singlecycle
