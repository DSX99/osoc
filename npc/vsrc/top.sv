module top(
    input clk,
    input rst
);

logic [31:0] pc /* verilator public */, opcode /* verilator public */;
logic reg_valid /* verilator public */;

logic reg_valid_e;

assign opcode = if_id_bus.opcode;

logic [31:0] next_pc;

// Pipeline buses and valid/ready signals
if_to_id_bus_t if_id_bus;
logic if_id_valid, if_id_ready;

id_to_ex_bus_t id_ex_bus_decoded;
id_to_ex_bus_t id_ex_bus;
logic id_ex_valid, id_ex_ready;

ex_to_ls_bus_t ex_ls_bus_alu;
ex_to_ls_bus_t ex_ls_bus;
logic ex_ls_valid, ex_ls_ready;

ls_to_wb_bus_t ls_wb_bus;
logic ls_wb_valid, ls_wb_ready;
logic [31:0] csr_data;

logic [31:0] pc_in;
pc pc_mod(
    .clk(clk), .rst(rst), .branch(ex_ls_bus.branch), .data_in(pc_in), .pc(pc), .next_pc(next_pc), .valid(ls_wb_valid)
);
assign pc_in = ls_wb_bus.mux_select_pc ? ls_wb_bus.csr_out : ls_wb_bus.alu_out;


// IFU
ifu ifu_mod(
    .clk(clk), .rst(rst), .pc(pc), .next_pc(next_pc), .bus_out(if_id_bus), .valid(if_id_valid), .ready(if_id_ready),
    .araddr(araddr_ifu), .arvalid(arvalid_ifu), .arready(arready_ifu), .rdata(rdata_ifu), .rresp(rresp_ifu), .rvalid(rvalid_ifu), .rready(rready_ifu)
);

// ID
decode decode_mod(
    .bus_in(if_id_bus), .bus_out(id_ex_bus_decoded), .valid_left(if_id_valid), .ready_left(if_id_ready), .valid_right(id_ex_valid), .ready_right(id_ex_ready)
);




// EXU

logic id_ex_ready_alu, id_ex_ready_csr, ex_ls_valid_alu, ex_ls_valid_csr;

alu alu_mod(
    .bus_in(id_ex_bus), .bus_out(ex_ls_bus_alu), .valid_left(id_ex_valid), .ready_left(id_ex_ready_alu), .valid_right(ex_ls_valid_alu), .ready_right(ex_ls_ready)
);

logic [31:0] csr_in;
csr csr_mod(
    .clk(clk), .rst(rst), .oper(id_ex_bus.csr_oper[1:0]), .addr(id_ex_bus.imm[11:0]),
    .data_in(csr_in), .data_out(csr_data), .pc(pc), .cause(id_ex_bus.cause), .valid_left(id_ex_valid), .ready_left(id_ex_ready_csr), .valid_right(ex_ls_valid_csr), .ready_right(ex_ls_ready)
);

always_comb begin
    ex_ls_bus = ex_ls_bus_alu;
    ex_ls_bus.csr_out = csr_data;
end

assign id_ex_ready = id_ex_ready_alu & id_ex_ready_csr;
assign ex_ls_valid = ex_ls_valid_alu & ex_ls_valid_csr;




// LSU
lsu lsu_mod(
    .clk(clk), .rst(rst), .bus_in(ex_ls_bus), .bus_out(ls_wb_bus), .valid_left(ex_ls_valid), .ready_left(ex_ls_ready), .valid_right(ls_wb_valid), .ready_right(ls_wb_ready),
    .araddr(araddr_lsu), .arvalid(arvalid_lsu), .arready(arready_lsu), .rdata(rdata_lsu), .rresp(rresp_lsu), .rvalid(rvalid_lsu), .rready(rready_lsu),
    .awaddr(awaddr_lsu), .awvalid(awvalid_lsu), .awready(awready_lsu), .wdata(wdata_lsu), .wstrb(wstrb_lsu), .wvalid(wvalid_lsu), .wready(wready_lsu), .bresp(bresp_lsu), .bvalid(bvalid_lsu), .bready(bready_lsu)
);



// WB/regfile
logic [31:0] reg_data_rs1, reg_data_rs2, reg_in;
regs reg_mod(
    .clk(clk), .rst(rst), .data_in(reg_in), .rs1(id_ex_bus_decoded.rs1), .rs2(id_ex_bus_decoded.rs2), .rd(ls_wb_bus.rd), .data_rs1(reg_data_rs1), .data_rs2(reg_data_rs2), .valid(ls_wb_valid), .ready(ls_wb_ready)
);

assign reg_valid_e = ls_wb_valid;
always_ff @(posedge clk) reg_valid <= reg_valid_e;
// feed register values into id_ex_bus data fields before ALU
always_comb begin
    id_ex_bus = id_ex_bus_decoded;
    id_ex_bus.data_rs1 = reg_data_rs1;
    id_ex_bus.data_rs2 = reg_data_rs2;

    case(ls_wb_bus.mux_select)
        2'b00: reg_in = ls_wb_bus.alu_out;
        2'b01: reg_in = ls_wb_bus.lsu_out;
        2'b10: reg_in = ls_wb_bus.next_pc;
        2'b11: reg_in = ls_wb_bus.csr_out;
    endcase
end

assign csr_in = id_ex_bus.csr_oper[2] ? {27'b0, id_ex_bus.rs1} : id_ex_bus.data_rs1;

logic [31:0] araddr_lsu, rdata_lsu;
logic [1:0] rresp_lsu;
logic arvalid_lsu, arready_lsu, rvalid_lsu, rready_lsu;

logic [31:0] awaddr_lsu, wdata_lsu;
logic [3:0] wstrb_lsu;
logic [1:0] bresp_lsu;
logic awvalid_lsu, awready_lsu, wvalid_lsu, wready_lsu, bvalid_lsu, bready_lsu;

logic [31:0] araddr_ifu, rdata_ifu;
logic [1:0] rresp_ifu;
logic arvalid_ifu, arready_ifu, rvalid_ifu, rready_ifu;


axi_slave_lsu axi_slave_lsu_mod (
    .clk(clk), .rst(rst), .araddr(araddr_arbiter), .arvalid(arvalid_arbiter), .arready(arready_arbiter), .rdata(rdata_arbiter), .rresp(rresp_arbiter), .rvalid(rvalid_arbiter), .rready(rready_arbiter),
    .awaddr(awaddr_arbiter), .awvalid(awvalid_arbiter), .awready(awready_arbiter), .wdata(wdata_arbiter), .wstrb(wstrb_arbiter), .wvalid(wvalid_arbiter), .wready(wready_arbiter), .bresp(bresp_arbiter), .bvalid(bvalid_arbiter), .bready(bready_arbiter)

);

arbiter arbiter_mod(
    .clk(clk), .rst(rst), .araddr(araddr_lsu), .arvalid(arvalid_lsu), .arready(arready_lsu), .rdata(rdata_lsu), .rresp(rresp_lsu), .rvalid(rvalid_lsu), .rready(rready_lsu),
    .awaddr(awaddr_lsu), .awvalid(awvalid_lsu), .awready(awready_lsu), .wdata(wdata_lsu), .wstrb(wstrb_lsu), .wvalid(wvalid_lsu), .wready(wready_lsu), .bresp(bresp_lsu), .bvalid(bvalid_lsu), .bready(bready_lsu),
    .araddr(araddr_ifu), .arvalid(arvalid_ifu), .arready(arready_ifu), .rvalid(rvalid_ifu), .rdata(rdata_ifu), .rready(rready_ifu), .rresp(rresp_ifu),
    .araddr(araddr_arbiter), .arvalid(arvalid_arbiter), .arready(arready_arbiter), .rdata(rdata_arbiter), .rresp(rresp_arbiter), .rvalid(rvalid_arbiter), .rready(rready_arbiter),
    .awaddr(awaddr_arbiter), .awvalid(awvalid_arbiter), .awready(awready_arbiter), .wdata(wdata_arbiter), .wstrb(wstrb_arbiter), .wvalid(wvalid_arbiter), .wready(wready_arbiter), .bresp(bresp_arbiter), .bvalid(bvalid_arbiter), .bready(bready_arbiter)
);

endmodule