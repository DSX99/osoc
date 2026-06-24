module ifu(
    input logic clk,
    input logic rst,
    input logic [31:0] pc,
    output logic [31:0] opcode,

    input logic lsu_stall,
    output logic stall,

    // Read Addr Channel (AR)
    output logic [31:0] araddr_ifu,
    output logic        arvalid_ifu,
    input  logic        arready_ifu,

    // Read Data Channel (R)
    input  logic [31:0] rdata_ifu,
    input  logic [1:0]  rresp_ifu,
    input  logic        rvalid_ifu,
    output logic        rready_ifu
);

logic idk, idk_2;

assign idk = |rresp_ifu;

assign rready_ifu = !lsu_stall; // we are ready to accept new opcode iff lsu is not busy (we must keep opcode so result of lsu can be saved)
assign stall = (arvalid_ifu && !arready_ifu) || (!rvalid_ifu && rready_ifu); // we stall if we wait to accept addr or wait for data

always_ff @(posedge clk) begin
    idk_2 <= idk_2 | idk;
    if(rst) begin
        opcode<=0;
        araddr_ifu<=0;
        arvalid_ifu<=0;
    end else begin
        if(arvalid_ifu && arready_ifu) begin
            arvalid_ifu<=0;
        end
        if(!lsu_stall) begin
            araddr_ifu<=pc;
            arvalid_ifu<=1;
        end
        if(rvalid_ifu && rready_ifu) begin
            opcode<=rdata_ifu;
        end
    end
end

endmodule