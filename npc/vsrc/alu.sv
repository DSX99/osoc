module alu (
    input logic [7:0] alu_op,
    input logic [31:0] data_rs1,
    input logic [31:0] data_rs2,
    input logic [31:0] pc,
    input logic [31:0] imm,
    
    output logic branch,
    output logic [31:0] data_out
);

    //alu_op[7] = change rs2_val to imm
    //alu_op[6] = change rs1_val to pc
    //alu_op[5:3] branch or arithmetics (5:4): 11-atomic, 10-mult, 01-branch, 00-arithmetic, 3-extra (sub/srai)
    //alu_op[2:0] directly operation, alu_op[2:0] copied from instr



    logic [31:0] val1, val2;

    assign val1 = alu_op[6] ? pc : data_rs1;
    assign val2 = alu_op[7] ? imm : data_rs2;

    always_comb begin
        data_out=0;
        branch = 0;
        
        if(alu_op[5:4]==2'b00) begin
            case(alu_op[2:0])
                0: begin
                    if(alu_op[3]) data_out = val1 - val2;
                    else data_out = val1 + val2;
                end 
                1: data_out = val1<<val2[4:0];
                2: data_out = {31'b0,$signed(val1)<$signed(val2)};
                3: data_out = {31'b0,val1<val2};
                4: data_out = val1^val2;
                5: begin
                    if(alu_op[3]) data_out = val1 >>> val2[4:0];
                    else data_out = val1 >> val2[4:0];
                end 
                6: data_out = val1|val2;
                7: data_out = val1&val2;
            endcase
        end else if(alu_op[5:4]==2'b01) begin
            data_out = val1 + val2;
            case(alu_op[2:0])
                0: branch = data_rs1 == data_rs2;
                1: branch = data_rs1 != data_rs2;
                4: branch = $signed(data_rs1) <  $signed(data_rs2);
                5: branch = $signed(data_rs1) >= $signed(data_rs2);
                6: branch = data_rs1 <  data_rs2;
                7: branch = data_rs1 >= data_rs2;
            endcase
        end else if(alu_op[5:4]==2'b10) begin
            ; //mult
        end else if(alu_op[5:4]==2'b11) begin
            ; //atomic
        end
    end

endmodule
