module pcplus4 
(
    input logic [31:0] pc_i,
    output logic [31:0] pc_four_o
);

assign pc_four_o = pc_i + 4;

endmodule: pcplus4
