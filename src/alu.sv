module alu
(
	input logic [31:0] operand_a_i,
	input logic [31:0] operand_b_i,
	input [3:0] alu_op_i,

	// output
	output logic [31:0]alu_data_o
);
/*

typedef enum logic[3:0]{
	A_ADD  = 4'h0,
	A_SLL  = 4'h1,
	A_SLT  = 4'h2,
	A_SLTU = 4'h3, 
	A_XOR  = 4'h4, 
 	A_SRL  = 4'h5,
  	A_SRA  = 4'h6,
	A_OR   = 4'h7, 
	A_AND  = 4'h8,
	A_SUB  = 4'h9
} alu_op_e;
*/
//alu_op_e alu_op_tmp = alu_op_i;
logic [31:0] subtractor;
//logic [4:0]tmp;
//assign tmp = operand_b_i[4:0];
assign subtractor = operand_a_i + ~operand_b_i + 1;
always_comb begin
	case (alu_op_i)
		4'h0:  alu_data_o  = operand_a_i + operand_b_i; // add
		4'h9:  alu_data_o  = subtractor; 				// sub
		4'h2:  alu_data_o  = {31'b0,subtractor[31]};	// slt
		4'h3:  alu_data_o  = (operand_a_i < operand_b_i) ? 1:0; // sltu
		4'h4:  alu_data_o  = operand_a_i ^ operand_b_i; // xor
		4'h7:  alu_data_o  = operand_a_i | operand_b_i; // or
		4'h8:  alu_data_o  = operand_a_i & operand_b_i; // and
        4'h1:  alu_data_o  = operand_a_i << operand_b_i[4:0]; // sll
	 	4'h5:  alu_data_o  = operand_a_i >> operand_b_i[4:0]; // srl
		4'h6: begin //alu_data_o  = operand_a_i >>> operand_b_i[4:0]; // sra
			case (operand_b_i[4:0])
				5'd0: alu_data_o = {{0{operand_a_i[31]}},{(32-0){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd1: alu_data_o = {{1{operand_a_i[31]}},{(32-1){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd2: alu_data_o = {{2{operand_a_i[31]}},{(32-2){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd3: alu_data_o = {{3{operand_a_i[31]}},{(32-3){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd4: alu_data_o = {{4{operand_a_i[31]}},{(32-4){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd5: alu_data_o = {{5{operand_a_i[31]}},{(32-5){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd6: alu_data_o = {{6{operand_a_i[31]}},{(32-6){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd7: alu_data_o = {{7{operand_a_i[31]}},{(32-7){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd8: alu_data_o = {{8{operand_a_i[31]}},{(32-8){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd9: alu_data_o = {{9{operand_a_i[31]}},{(32-9){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd10: alu_data_o = {{10{operand_a_i[31]}},{(32-10){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd11: alu_data_o = {{11{operand_a_i[31]}},{(32-11){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd12: alu_data_o = {{12{operand_a_i[31]}},{(32-12){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd13: alu_data_o = {{13{operand_a_i[31]}},{(32-13){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd14: alu_data_o = {{14{operand_a_i[31]}},{(32-14){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd15: alu_data_o = {{15{operand_a_i[31]}},{(32-15){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd16: alu_data_o = {{16{operand_a_i[31]}},{(32-16){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd17: alu_data_o = {{17{operand_a_i[31]}},{(32-17){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd18: alu_data_o = {{18{operand_a_i[31]}},{(32-18){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd19: alu_data_o = {{19{operand_a_i[31]}},{(32-19){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd20: alu_data_o = {{20{operand_a_i[31]}},{(32-20){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd21: alu_data_o = {{21{operand_a_i[31]}},{(32-21){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd22: alu_data_o = {{22{operand_a_i[31]}},{(32-22){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd23: alu_data_o = {{23{operand_a_i[31]}},{(32-23){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd24: alu_data_o = {{24{operand_a_i[31]}},{(32-24){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd25: alu_data_o = {{25{operand_a_i[31]}},{(32-25){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd26: alu_data_o = {{26{operand_a_i[31]}},{(32-26){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd27: alu_data_o = {{27{operand_a_i[31]}},{(32-27){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd28: alu_data_o = {{28{operand_a_i[31]}},{(32-28){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd29: alu_data_o = {{29{operand_a_i[31]}},{(32-29){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd30: alu_data_o = {{30{operand_a_i[31]}},{(32-30){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
				5'd31: alu_data_o = {{31{operand_a_i[31]}},{(32-31){1'b0}}} | (operand_a_i>>operand_b_i[4:0]);
			endcase
		end
		default: alu_data_o  = 32'h000000000;	
	endcase
end

endmodule: alu
