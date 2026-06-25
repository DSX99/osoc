module top(
    input clk,
    input rst
);

logic [31:0] pc /* verilator public */;

// Pipeline buses and valid/ready signals
if_to_id_bus_t if_id_bus;
logic if_id_valid, if_id_ready;

id_to_ex_bus_t id_ex_bus;
logic id_ex_valid, id_ex_ready;

ex_to_ls_bus_t ex_ls_bus;
logic ex_ls_valid, ex_ls_ready;

ls_to_wb_bus_t ls_wb_bus;
logic ls_wb_valid, ls_wb_ready;

pc pc_mod(
    .clk(clk), .rst(rst), .branch(ex_ls_bus.branch), .data_in(ls_wb_bus.alu_out), .pc(pc), .next_pc()
);

// IFU
ifu ifu_mod(
    .pc(pc), .bus_out(if_id_bus), .valid(if_id_valid), .ready(if_id_ready)
);

// ID
decode decode_mod(
    .bus_in(if_id_bus), .bus_out(id_ex_bus), .valid(id_ex_valid), .ready(id_ex_ready)
);

// EXU
alu alu_mod(
    .bus_in(id_ex_bus), .bus_out(ex_ls_bus), .valid(ex_ls_valid), .ready(ex_ls_ready)
);

csr csr_mod(
    .clk(clk), .rst(rst), .oper(id_ex_bus.csr_oper[1:0]), .addr(id_ex_bus.imm[11:0]), .data_in(0), .data_out(), .pc(pc) ,.cause(id_ex_bus.cause)
);

// LSU
lsu lsu_mod(
    .clk(clk), .bus_in(ex_ls_bus), .bus_out(ls_wb_bus), .valid(ls_wb_valid), .ready(ls_wb_ready)
);

// WB/regfile
logic [31:0] reg_data_rs1, reg_data_rs2;
regs reg_mod(
    .clk(clk), .rst(rst), .data_in(ls_wb_bus.alu_out), .rs1(id_ex_bus.rs1), .rs2(id_ex_bus.rs2), .rd(ls_wb_bus.rd), .data_rs1(reg_data_rs1), .data_rs2(reg_data_rs2)
);

// feed register values into id_ex_bus data fields before ALU
always_comb begin
    id_ex_bus.data_rs1 = reg_data_rs1;
    id_ex_bus.data_rs2 = reg_data_rs2;
end

assign if_id_ready = 1'b1;
assign id_ex_ready = 1'b1;
assign ex_ls_ready = 1'b1;
assign ls_wb_ready = 1'b1;

assign if_id_valid = 1'b1;
assign id_ex_valid = 1'b1;
assign ex_ls_valid = 1'b1;
assign ls_wb_valid = 1'b1;

endmodule