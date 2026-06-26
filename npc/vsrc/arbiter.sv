module arbiter(
    input logic clk, rst,

    //LSU    
    // Read Addr Channel (AR)
    input  logic [31:0] araddr_lsu,
    input  logic        arvalid_lsu,
    output logic        arready_lsu,
    // Read Data Channel (R)
    output logic [31:0] rdata_lsu,
    output logic [1:0]  rresp_lsu,
    output logic        rvalid_lsu,
    input  logic        rready_lsu,
    // Write Address Channel (AW)
    input logic [31:0]  awaddr_lsu,
    input logic         awvalid_lsu,
    output  logic       awready_lsu,
    // Write Data Channel (W)
    input logic [31:0]  wdata_lsu,
    input logic [3:0]   wstrb_lsu,
    input logic         wvalid_lsu,
    output logic        wready_lsu,
    // Write Response Channel (B)
    output logic [1:0]  bresp_lsu,
    output logic        bvalid_lsu,
    input logic         bready_lsu,


    //IFU
    // Read Addr Channel (AR)
    input  logic [31:0] araddr_ifu,
    input  logic        arvalid_ifu,
    output logic        arready_ifu,
    // Read Data Channel (R)
    output logic [31:0] rdata_ifu,
    output logic [1:0]  rresp_ifu,
    output logic        rvalid_ifu,
    input  logic        rready_ifu,


    //OUT
    // Read Address Channel (AR)
    output logic [31:0] araddr,
    output logic        arvalid,
    input  logic        arready,
    // Read Data Channel (R)
    input  logic [31:0] rdata,
    input  logic [1:0]  rresp,
    input  logic        rvalid,
    output logic        rready,
    // Write Address Channel (AW)
    output logic [31:0] awaddr,
    output logic        awvalid,
    input  logic        awready,
    // Write Data Channel (W)
    output logic [31:0] wdata,
    output logic [3:0]  wstrb,
    output logic        wvalid,
    input  logic        wready,
    // Write Response Channel (B)
    input  logic [1:0]  bresp,
    input  logic        bvalid,
    output logic        bready
);

logic chose; //0-lsu; 1-ifu;
logic lsu_transfer, ifu_transfer;

always_comb begin //possible decouple reading and writing for non blocking writing to memory
    if(arvalid_ifu && !lsu_transfer) chose=1;

    chose=0;
    araddr=0;
    arvalid=0;
    rready=0;

    awaddr=awaddr_lsu;
    awvalid=awvalid_lsu;
    awready_lsu=awready;

    wdata=wdata_lsu;
    wstrb=wstrb_lsu;
    wvalid=wvalid_lsu;
    wready_lsu=wready;

    bresp_lsu=bresp;
    bvalid_lsu=bvalid;
    bready=bready_lsu;

    if(chose || ifu_transfer) begin
        araddr=araddr_ifu;
        arvalid=arvalid_ifu;
        arready_ifu=arready;

        rready=rready_ifu;
        rdata_ifu=rdata;
        rresp_ifu=rresp;
        rvalid_ifu=rvalid;
    end else begin
        arready_ifu=0;
        rdata_ifu=0;
        rresp_ifu=0;
        rvalid_ifu=0;
    end

    if(lsu_transfer || !chose) begin
        araddr=araddr_lsu;
        arvalid=arvalid_lsu;
        arready_ifu=arready;

        rready=rready_lsu;
        rdata_lsu=rdata;
        rresp_lsu=rresp;
        rvalid_lsu=rvalid;
    end else begin
        arready_lsu=0;
        rdata_lsu=0;
        rresp_lsu=0;
        rvalid_lsu=0;
    end
end

always_ff @(posedge clk) begin
    if(rst) begin
        ifu_transfer<=0;
        lsu_transfer<=0;
    end else begin
        if(chose && arvalid && arready) ifu_transfer<=1;
        if(!chose && arvalid && arready) lsu_transfer<=1;
        
        if(ifu_transfer && rvalid && rready) ifu_transfer<=0;
        if(lsu_transfer && ((rvalid && rready))) lsu_transfer<=0;
    end
end


endmodule