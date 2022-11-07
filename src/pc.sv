/* verilator lint_off MULTITOP */

module pc (
    input logic clk_i,
    input logic rst_ni,
    input logic [31:0] nxt_pc_i,

    output logic [31:0] pc_o
);

always_ff @( posedge clk_i, negedge rst_ni ) begin : proc_pc
    if (!rst_ni) pc_o <= 0;
    else begin
        pc_o <= nxt_pc_i;
    end
end

endmodule: pc
