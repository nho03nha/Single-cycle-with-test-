module lsu
(
    input logic clk_i,
    input logic rst_ni,
    /* verilator lint_off UNUSED */
    input [31:0] addr_i,
    /* verilator lint_on UNUSED */
    input logic [31:0]wdata_i,
    input logic wren_i,
    input logic [31:0]io_sw_i,

    output logic [31:0] rdata_o,
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

typedef enum logic[31:0]{
    SW   = 32'h0500,
    
    LCD  = 32'h04A0,
    
    LEDG = 32'h0490,
    LEDR = 32'h0480,
    
    HEX7 = 32'h0470,
    HEX6 = 32'h0460,
    HEX5 = 32'h0450,
    HEX4 = 32'h0440,
    HEX3 = 32'h0430,
    HEX2 = 32'h0420,
    HEX1 = 32'h0410,
    HEX0 = 32'h0400
} addr_sel_e;

/* verilator lint_off UNUSED */
//addr_sel_e addr_i_e;
/* verilator lint_off UNUSED */
//assign addr_i_e = addr_i;
logic [7:0]mem [1534:0];
/* verilator lint_off WIDTH */
//assign rdata_o = mem[addr_i[31:2]];
assign {mem[SW+3],mem[SW+2],mem[SW+1],mem[SW]} = io_sw_i;
/* verilator lint_on WIDTH */
assign rdata_o = {mem[addr_i+3],mem[addr_i+2],mem[addr_i+1],mem[addr_i]};
/*
always_comb begin
    case (addr_i)
        32'h04A0: io_lcd_o  = wdata_i;
        32'h0490: io_ledg_o = wdata_i;
        32'h0480: io_ledr_o = wdata_i;
        32'h0470: io_hex7_o = wdata_i;
        32'h0460: io_hex6_o = wdata_i;
        32'h0450: io_hex5_o = wdata_i;
        32'h0440: io_hex4_o = wdata_i;
        32'h0430: io_hex3_o = wdata_i;
        32'h0420: io_hex2_o = wdata_i;
        32'h0410: io_hex1_o = wdata_i;
        32'h0400: io_hex0_o = wdata_i;
        default: ;
    endcase
end
*/

always_ff @(posedge clk_i, negedge rst_ni) begin
    if (rst_ni == 1'b0) begin
        for (int i=0; i<1535; i=i+1) begin
            /* verilator lint_off BLKSEQ */
            mem [i] = 8'b0;
            /* verilator lint_on BLKSEQ */
        end
    end
    else begin
        if (addr_i == 32'h0500) begin
            {mem[addr_i+3],mem[addr_i+2],mem[addr_i+1],mem[addr_i]} <= io_sw_i;
        end
        else if(wren_i==1'b1) begin 
                {mem[addr_i+3],mem[addr_i+2],mem[addr_i+1],mem[addr_i]} <= wdata_i;
            end 
            
            /*
            case (addr_i)
                32'h04A0: io_lcd_o  <= wdata_i;
                32'h0490: io_ledg_o <= wdata_i;
                32'h0480: io_ledr_o <= wdata_i;
                32'h0470: io_hex7_o <= wdata_i;
                32'h0460: io_hex6_o <= wdata_i;
                32'h0450: io_hex5_o <= wdata_i;
                32'h0440: io_hex4_o <= wdata_i;
                32'h0430: io_hex3_o <= wdata_i;
                32'h0420: io_hex2_o <= wdata_i;
                32'h0410: io_hex1_o <= wdata_i;
                32'h0400: io_hex0_o <= wdata_i;
                default: ;
            endcase
            */
        end

    $writememh("memory/datamem.data", mem);
end

assign io_lcd_o  = {mem[LCD+3],mem[LCD+2],mem[LCD+1],mem[LCD]};
assign io_ledg_o = {mem[LEDG+3],mem[LEDG+2],mem[LEDG+1],mem[LEDG]};
assign io_ledr_o = {mem[LEDR+3],mem[LEDR+2],mem[LEDR+1],mem[LEDR]};
assign io_hex7_o = {mem[HEX7+3],mem[HEX7+2],mem[HEX7+1],mem[HEX7]};
assign io_hex6_o = {mem[HEX6+3],mem[HEX6+2],mem[HEX6+1],mem[HEX6]};
assign io_hex5_o = {mem[HEX5+3],mem[HEX5+2],mem[HEX5+1],mem[HEX5]};
assign io_hex4_o = {mem[HEX4+3],mem[HEX4+2],mem[HEX4+1],mem[HEX4]};
assign io_hex3_o = {mem[HEX3+3],mem[HEX3+2],mem[HEX3+1],mem[HEX3]};
assign io_hex2_o = {mem[HEX2+3],mem[HEX2+2],mem[HEX2+1],mem[HEX2]};
assign io_hex1_o = {mem[HEX1+3],mem[HEX1+2],mem[HEX1+1],mem[HEX1]};
assign io_hex0_o = {mem[HEX0+3],mem[HEX0+2],mem[HEX0+1],mem[HEX0]};    

endmodule: lsu
