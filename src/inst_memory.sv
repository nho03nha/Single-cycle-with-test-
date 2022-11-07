module inst_memory (
    //input logic clk_i,
    /*verilator lint_off UNUSED*/
    input logic [31:0] adrr_i,
    /*verilator lint_on UNUSED*/
    output logic [31:0] inst_o
);

/*verilator lint_off WIDTH*/
logic [31:0] mem [4095:0];

initial begin
    $readmemh("./memory/instmem.data.sim", mem); 
end

assign inst_o = mem[adrr_i[31:2]];

endmodule: inst_memory
