module top(
    input clk,
    input rst
);

logic [31:0] opcode /* verilator public */,pc /* verilator public */;

logic [31:0] araddr_ifu;
logic        arvalid_ifu, arready_ifu;
logic [31:0] rdata_ifu;
logic [1:0]  rresp_ifu;
logic        rvalid_ifu, rready_ifu;

logic [31:0] araddr_lsu, awaddr_lsu, wdata_lsu;
logic        arvalid_lsu, arready_lsu, awvalid_lsu, awready_lsu;
logic [31:0] rdata_lsu;
logic [1:0]  rresp_lsu, bresp_lsu;
logic        rvalid_lsu, rready_lsu, wvalid_lsu, wready_lsu, bvalid_lsu, bready_lsu;
logic [3:0]  wstrb_lsu;

logic [31:0] to_regs, data_rs1, data_rs2, next_pc, alu_out, lsu_out, imm, csr_in, csr_out, to_pc;
logic [7:0] alu_op;
logic [4:0] rs1, rs2, rd, cause;
logic [2:0] lsu_oper, csr_oper;
logic [1:0] mux_select, mux_select_pc;
logic branch, lsu_we, lsu_le, external_stall, ifu_stall, lsu_stall;

regs reg_mod(
    .clk(clk), .rst(rst), .data_in(to_regs), .rs1(rs1), .rs2(rs2), .rd(rd), .data_rs1(data_rs1), .data_rs2(data_rs2)
);

pc pc_mod(
    .clk(clk), .rst(rst), .branch(branch), .data_in(to_pc), .pc(pc), .next_pc(next_pc), .external_stall(external_stall)
);

lsu lsu_mod (
    .clk(clk), .rst(rst), .we(lsu_we), .le(lsu_le), .data_in(data_rs2), .addr(alu_out), .oper(lsu_oper), .data_out(lsu_out), .external_stall(external_stall), .stall(lsu_stall),
    .araddr_lsu(araddr_lsu), .arvalid_lsu(arvalid_lsu), .arready_lsu(arready_lsu), .rdata_lsu(rdata_lsu), .rresp_lsu(rresp_lsu), .rvalid_lsu(rvalid_lsu), .rready_lsu(rready_lsu),
    .awaddr_lsu(awaddr_lsu), .awvalid_lsu(awvalid_lsu), .awready_lsu(awready_lsu), .wdata_lsu(wdata_lsu), .wstrb_lsu(wstrb_lsu), .wvalid_lsu(wvalid_lsu), .wready_lsu(wready_lsu),
    .bresp_lsu(bresp_lsu), .bvalid_lsu(bvalid_lsu), .bready_lsu(bready_lsu)
);

decode decode_mod(
    .inst(opcode), .imm(imm), .alu_op(alu_op), .rs1(rs1), .rs2(rs2), .rd(rd), .lsu_we(lsu_we), .lsu_le(lsu_le), .mux_select(mux_select), .lsu_oper(lsu_oper),
    .csr_oper(csr_oper), .cause(cause), .mux_select_pc(mux_select_pc)
);

alu alu_mod(
    .alu_op(alu_op), .data_rs1(data_rs1), .data_rs2(data_rs2), .pc(pc), .imm(imm), .branch(branch), .data_out(alu_out)
);

ifu ifu_mod (
    .clk(clk), .rst(rst), .pc(pc), .opcode(opcode), .lsu_stall(lsu_stall), .stall(ifu_stall), .araddr_ifu(araddr_ifu), .arvalid_ifu(arvalid_ifu), .arready_ifu(arready_ifu), 
    .rdata_ifu(rdata_ifu), .rresp_ifu(rresp_ifu), .rvalid_ifu(rvalid_ifu), .rready_ifu(rready_ifu)
);

csr csr_mod(
    .clk(clk), .rst(rst), .oper(csr_oper[1:0]), .addr(imm[11:0]), .data_in(csr_in), .data_out(csr_out), .pc(pc) ,.cause(cause)
);

assign csr_in = csr_oper[2] ? {27'b0, rs1} : data_rs1;

assign external_stall = lsu_stall | ifu_stall;

always_comb begin
    to_regs=0;
    case(mux_select)
        0: to_regs = alu_out;
        1: to_regs = lsu_out;
        2: to_regs = next_pc;
        3: to_regs = csr_out;
    endcase
    case(mux_select_pc)
        2'b00: to_pc = alu_out;
        2'b01: to_pc = csr_out;
        default: to_pc = alu_out;
    endcase
end

//temporary (not-)arbiter 

logic [31:0] arb_araddr, arb_awaddr, arb_wdata;
logic        arb_arvalid, arb_awvalid, arb_wvalid, arb_wready, arb_arready, arb_awready;

logic [31:0] arb_rdata;
logic [1:0]  arb_rresp, arb_bresp;
logic        arb_rvalid, arb_bvalid;
logic        arb_rready, arb_bready;

assign arb_araddr  = araddr_ifu  | araddr_lsu;
assign arb_arvalid = arvalid_ifu | arvalid_lsu;

assign arb_awaddr  = awaddr_lsu; 
assign arb_awvalid = awvalid_lsu;
assign arb_wdata   = wdata_lsu;
assign arb_wvalid  = wvalid_lsu;

assign {rdata_ifu, rvalid_ifu, rresp_ifu} = {arb_rdata, arb_rvalid, arb_rresp};
assign {rdata_lsu, rvalid_lsu, rresp_lsu, bvalid_lsu, bresp_lsu} = {arb_rdata, arb_rvalid, arb_rresp, arb_bvalid, arb_bresp};
assign arb_rready = rready_ifu | rready_lsu;
assign arb_bready = bready_lsu;
assign arready_ifu = arb_arready;
assign arready_lsu = arb_arready;
assign awready_lsu = arb_awready;
assign wready_lsu  = arb_wready;

axi_slave slave_mod (
    .clk(clk), .rst(rst), .awaddr(arb_awaddr), .awvalid(arb_awvalid), .awready(arb_awready), .wdata(arb_wdata), .wvalid(arb_wvalid), .wready(arb_wready), .wstrb(wstrb_lsu), .bresp(arb_bresp), .bvalid(arb_bvalid), .bready(arb_bready),
    .araddr(arb_araddr), .arvalid(arb_arvalid), .arready(arb_arready), .rdata(arb_rdata), .rresp(arb_rresp), .rvalid(arb_rvalid), .rready(arb_rready)
);

endmodule
