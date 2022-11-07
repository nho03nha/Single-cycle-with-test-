/* verilator lint_off MULTITOP */
module ctrl_unit (
/* verilator lint_off UNUSED */
    input logic br_less_i,
    input logic br_equal_i,
 
    input logic [31:0] instr_i,
/* verilator lint_on UNUSED */   
    output logic br_sel_o,      
    output logic br_unsigned_o,
    output logic rd_wren_o,
    output logic op_a_sel_o,
    output logic op_b_sel_o,
    output logic [3:0] alu_op_o,
    output logic mem_wren_o,
    output logic [1:0] wb_sel_o
);

/*
typedef enum logic [6:0] {
    lw      = 7'b0000011,
    R_TYPE  = 7'b0110011,
    I_TYPE  = 7'b0010011,
    S_TYPE  = 7'b0100011,
    B_TYPE  = 7'b1100011,
    J_TYPE  = 7'b1101111 
} type_op_e;
*/
//type_op_e op_e_tmp;
//assign op_e_tmp = instr_i[6:0];

always_comb begin
    case(instr_i[6:0])
        7'b0000011: begin // lw, lb,
            rd_wren_o  = 1'b1;
            op_a_sel_o = 1'b0;
            op_b_sel_o = 1'b1;    
            mem_wren_o = 1'b0; 
            wb_sel_o   = 2'b01;
            br_sel_o   = 1'b0;  
            br_unsigned_o = 1'b0;     
        end
        7'b0110011: begin // R-type
            rd_wren_o  = 1'b1;
            op_a_sel_o = 1'b0;
            op_b_sel_o = 1'b0;
            mem_wren_o = 1'b0;
            wb_sel_o   = 2'b00;
            br_sel_o   = 1'b0;
            br_unsigned_o = 1'b0; 
        end

        7'b0010011: begin // I_TYPE
            rd_wren_o  = 1'b1;
            op_a_sel_o = 1'b0;
            op_b_sel_o = 1'b1;
            mem_wren_o = 1'b0;
            wb_sel_o   = 2'b00;
            br_sel_o   = 1'b0;
            br_unsigned_o = 1'b0; 
        end
        
        7'b0100011: begin // S_TYPE
            rd_wren_o  = 1'b0;
            op_a_sel_o = 1'b0;
            op_b_sel_o = 1'b1;
            mem_wren_o = 1'b1;
            wb_sel_o   = 2'b00;
            br_sel_o   = 1'b0;
            br_unsigned_o = 1'b0; 
        end

        7'b1100011: begin // B_TYPE
            rd_wren_o  = 1'b0;
            op_a_sel_o = 1'b1;
            op_b_sel_o = 1'b1;
            mem_wren_o = 1'b0;
            wb_sel_o   = 2'b00;
            case (instr_i[14:12])
                3'b000 : begin // beq
                    br_unsigned_o = 1'b0;
                    if({br_equal_i, br_less_i} == 2'b10)
                        br_sel_o = 1'b1;
                    else br_sel_o = 1'b0;
                end           
                3'b001 : begin // bne
                    br_unsigned_o = 1'b0;
                    if(({br_equal_i, br_less_i} == 2'b00)|({br_equal_i, br_less_i} == 2'b01))
                        br_sel_o = 1'b1;
                    else br_sel_o = 1'b0;                   
                end           
                3'b100 : begin // blt
                    br_unsigned_o = 1'b0;
                    if({br_equal_i, br_less_i} == 2'b01)
                        br_sel_o = 1'b1;
                    else br_sel_o = 1'b0; 
                end           
                3'b101 : begin // bge
                    br_unsigned_o = 1'b0;
                    if(({br_equal_i, br_less_i} == 2'b00) | ({br_equal_i, br_less_i} == 2'b10))
                        br_sel_o = 1'b1;
                    else br_sel_o = 1'b0; 
                end           
                3'b110 : begin //bltu
                    br_unsigned_o = 1'b1;
                    if({br_equal_i, br_less_i} == 2'b01)
                        br_sel_o = 1'b1;
                    else br_sel_o = 1'b0; 
                end           
                3'b111 : begin //bgeu
                     br_unsigned_o = 1'b1;
                    if(({br_equal_i, br_less_i} == 2'b10) | ({br_equal_i, br_less_i} == 2'b00))
                        br_sel_o = 1'b1;
                    else br_sel_o = 1'b0;            
                end           
                default : begin
                    br_unsigned_o = 1'b0;
                    br_sel_o = 1'b0;
                end 
            endcase          
        end

        7'b1101111: begin //JAL_TYPE
            rd_wren_o   = 1'b1;
            op_a_sel_o  = 1'b1;
            op_b_sel_o  = 1'b1;
            mem_wren_o  = 1'b0;
            wb_sel_o    = 2'b10;
            br_sel_o    = 1'b1;
            br_unsigned_o = 1'b0; 
        end

        7'b1100111: begin //JALR_TYPE
            rd_wren_o   = 1'b1;
            op_a_sel_o  = 1'b0;
            op_b_sel_o  = 1'b1;
            mem_wren_o  = 1'b0;
            wb_sel_o    = 2'b10;
            br_sel_o    = 1'b1;
            br_unsigned_o = 1'b0; 
        end

        default: begin
            rd_wren_o   = 1'b0;
            op_a_sel_o  = 1'b0;
            op_b_sel_o  = 1'b0;
            mem_wren_o  = 1'b0;
            wb_sel_o    = 2'b00;
            br_sel_o    = 1'b0;
            br_unsigned_o = 1'b0; 
        end
    endcase
end

always_comb begin
    case(instr_i[6:0])
        7'b0110011: begin // R-type
            case(instr_i[14:12])
                3'd0: begin
                    case(instr_i[30])
                    1'b0: alu_op_o = 4'h0; // add
                    1'b1: alu_op_o = 4'h9; // sub  
                    endcase                 
                end
                3'd1: alu_op_o = 4'h1; // sll
                3'd2: alu_op_o = 4'h2; // slt
                3'd3: alu_op_o = 4'h3; // sltu
                3'd4: alu_op_o = 4'h4; // xor
                3'd5: begin
                    case(instr_i[30])
                    1'b0: alu_op_o = 4'h5; // srl
                    1'b1: alu_op_o = 4'h6; // sra
                    endcase
                end
                3'd6: alu_op_o = 4'h7; // or
                3'd7: alu_op_o = 4'h8; // and
            endcase
        end
        7'b0010011: begin // I-type
            case(instr_i[14:12])
                3'd0: alu_op_o = 4'h0; //addi
                3'd1: alu_op_o = 4'h1; //slli
                3'd2: alu_op_o = 4'h2; //slti
                3'd3: alu_op_o = 4'h3; //sltiu
                3'd4: alu_op_o = 4'h4; //xori
                3'd5: begin
                    case(instr_i[30])
                    1'b0: alu_op_o = 4'h5; // srli
                    1'b1: alu_op_o = 4'h6; // srai
                    endcase
                end
                3'd6: alu_op_o = 4'h7; //ori
                3'd7: alu_op_o = 4'h8; //andi
                default: alu_op_o = 4'h0;
            endcase
        end
        7'b1101111: alu_op_o = 4'h0;
        7'b1100111: alu_op_o = 4'h0;
        default alu_op_o = 4'h0;
    endcase
end

endmodule: ctrl_unit
