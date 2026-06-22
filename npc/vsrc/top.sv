module top(
    input clk,
    input rst
);

logic [31:0] opcode /* verilator public */,pc /* verilator public */;

logic [31:0] to_regs, data_rs1, data_rs2, next_pc, alu_out, lsu_out, imm;
logic [7:0] alu_op;
logic [4:0] rs1, rs2, rd;
logic [2:0] lsu_oper;
logic [1:0] mux_select;
logic branch, lsu_we, lsu_le;

regs reg_mod(
    .clk(clk), .rst(rst), .data_in(to_regs), .rs1(rs1), .rs2(rs2), .rd(rd), .data_rs1(data_rs1), .data_rs2(data_rs2)
);

pc pc_mod(
    .clk(clk), .rst(rst), .branch(branch), .data_in(alu_out), .pc(pc), .next_pc(next_pc)
);

lsu lsu_mod(
    .data_in(data_rs2), .addr(alu_out), .oper(lsu_oper), .we(lsu_we), .le(lsu_le), .data_out(lsu_out)
);

decode decode_mod(
    .inst(opcode), .imm(imm), .alu_op(alu_op), .rs1(rs1), .rs2(rs2), .rd(rd), .lsu_we(lsu_we), .lsu_le(lsu_le), .mux_select(mux_select), .lsu_oper(lsu_oper)
);

alu alu_mod(
    .alu_op(alu_op), .data_rs1(data_rs1), .data_rs2(data_rs2), .pc(pc), .imm(imm), .branch(branch), .data_out(alu_out)
);

ifu ifu_mod(
    .rst(rst), .clk(clk), .pc(pc), .opcode(opcode)
);

always_comb begin
    to_regs=0;
    case(mux_select)
        0: to_regs = alu_out;
        1: to_regs = lsu_out;
        2: to_regs = next_pc;
    endcase
end

endmodule
