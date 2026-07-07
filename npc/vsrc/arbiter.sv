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

    //burst
    input logic [7:0] arlen_ifu,
    input logic [2:0] arsize_ifu,
    input logic [1:0] arburst_ifu,
    
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

    
    output logic [7:0] arlen,
    output logic [2:0] arsize,
    output logic [1:0] arburst,
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

logic read_select, read_select_comb; // 0-lsu 1-ifu
logic read_busy, write_busy;

always_comb begin
    if(arvalid_lsu) begin
        read_select_comb = 0;
    end else begin
        read_select_comb = 1;
    end
end

always_comb begin 

    araddr      = 32'b0;
    arvalid     = 1'b0;
    arlen=0;
    arsize=3'b010;
    arburst=0;

    arready_lsu = 1'b0;
    arready_ifu = 1'b0;

    rready      = 1'b0;
    rdata_lsu   = 32'b0; rresp_lsu = 2'b0; rvalid_lsu = 1'b0;
    rdata_ifu   = 32'b0; rresp_ifu = 2'b0; rvalid_ifu = 1'b0;

    awaddr      = 32'b0;
    awvalid     = 1'b0;
    awready_lsu = 1'b0;

    wdata       = 32'b0;
    wstrb       = 4'b0;
    wvalid      = 1'b0;
    wready_lsu  = 1'b0;

    bready      = bready_lsu;
    bresp_lsu   = bresp;
    bvalid_lsu  = bvalid;

    //read
    if(!read_busy) begin
        if(!read_select_comb) begin
            araddr = araddr_lsu;
            arvalid = arvalid_lsu;
            arready_lsu = arready;
            arready_ifu = 0;
        end else begin
            araddr = araddr_ifu;
            arvalid = arvalid_ifu;
            arready_lsu = 0;
            arready_ifu = arready;
            arburst = arburst_ifu;
            arlen = arlen_ifu;
            arsize =arsize_ifu;
        end 
    end else begin
        if(!read_select) begin
            rready     = rready_lsu;
            rdata_lsu  = rdata;
            rresp_lsu  = rresp;
            rvalid_lsu = rvalid;
        end else begin
            rready     = rready_ifu;
            rdata_ifu  = rdata;
            rresp_ifu  = rresp;
            rvalid_ifu = rvalid;
        end
    end

    //write
    awaddr      = awaddr_lsu;
    awvalid     = awvalid_lsu;
    awready_lsu = awready;
    wdata       = wdata_lsu;
    wstrb       = wstrb_lsu;
    wvalid      = wvalid_lsu;
    wready_lsu  = wready;
    bready     = bready_lsu;
    bresp_lsu  = bresp;
    bvalid_lsu = bvalid;

    if (!write_busy) begin
        awaddr      = awaddr_lsu;
        awvalid     = awvalid_lsu;
        awready_lsu = awready;

        wdata       = wdata_lsu;
        wstrb       = wstrb_lsu;
        wvalid      = wvalid_lsu;
        wready_lsu  = wready;
    end
end

always_ff @(posedge clk) begin
    if(rst) begin
        read_select<=0;
    end else begin
        if (!read_busy) begin
            if (arvalid && arready) begin
                read_busy  <= 1'b1;
                read_select <= read_select_comb;
            end
        end else begin
            if (rvalid && rready) begin
                read_busy <= 1'b0;
            end
        end

        if (!write_busy) begin
            if (awvalid && awready) begin
                write_busy <= 1'b1;
            end
        end else begin
            if (bvalid && bready) begin
                write_busy <= 1'b0;
            end
        end
    end
end


endmodule