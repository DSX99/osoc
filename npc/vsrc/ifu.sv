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
logic ar_sent;

assign idk = |rresp_ifu;


always_ff @(posedge clk) begin
    idk_2 <= idk_2 | idk;
    if(rst) begin
        opcode<=0;
        arvalid_ifu<=0;
        rready_ifu<=0;
        araddr_ifu<=0;
        stall<=1;
    end else begin
        if(external_stall ==0) stall<=1; //stall only for cycle to update pc (possibly in future use comb value that will be written in to pc)
        if(!lsu_stall && stall && !ar_sent) begin 
            arvalid_ifu<=1;
            araddr_ifu<=pc; 
            ar_sent<=1;
        end
        if(arvalid_ifu && arready_ifu) begin // done handshake for ar
            arvalid_ifu<=0;
            rready_ifu<=1;
        end
        if(rvalid_ifu && rready_ifu) begin //done handshake for r
            opcode<=rdata_ifu;
            rready_ifu<=0;
            stall<=0;
            ar_sent<=0;
        end
    end
end

endmodule