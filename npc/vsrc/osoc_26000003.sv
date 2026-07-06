module osoc_26000003 (
    input  logic        clock,
    input  logic        reset,
    input  logic        io_interrupt,

    input  logic        io_master_awready,
    output logic        io_master_awvalid,
    output logic [31:0] io_master_awaddr, 
    output logic [3:0]  io_master_awid,
    output logic [7:0]  io_master_awlen,
    output logic [2:0]  io_master_awsize,
    output logic [1:0]  io_master_awburst,
    input  logic        io_master_wready,
    output logic        io_master_wvalid,
    output logic [31:0] io_master_wdata,
    output logic [3:0]  io_master_wstrb,
    output logic        io_master_wlast,
    output logic        io_master_bready,
    input  logic        io_master_bvalid,
    input  logic [1:0]  io_master_bresp,
    input  logic [3:0]  io_master_bid,
    input  logic        io_master_arready,
    output logic        io_master_arvalid,
    output logic [31:0] io_master_araddr,
    output logic [3:0]  io_master_arid,
    output logic [7:0]  io_master_arlen,
    output logic [2:0]  io_master_arsize,
    output logic [1:0]  io_master_arburst,
    output logic        io_master_rready,
    input  logic        io_master_rvalid,
    input  logic [1:0]  io_master_rresp,
    input  logic [31:0] io_master_rdata,
    input  logic        io_master_rlast,
    input  logic [3:0]  io_master_rid,

    output logic        io_slave_awready,
    input  logic        io_slave_awvalid,
    input  logic [31:0] io_slave_awaddr,
    input  logic [3:0]  io_slave_awid,
    input  logic [7:0]  io_slave_awlen,
    input  logic [2:0]  io_slave_awsize,
    input  logic [1:0]  io_slave_awburst,
    output logic        io_slave_wready,
    input  logic        io_slave_wvalid,
    input  logic [31:0] io_slave_wdata,
    input  logic [3:0]  io_slave_wstrb,
    input  logic        io_slave_wlast,
    input  logic        io_slave_bready,
    output logic        io_slave_bvalid,
    output logic [1:0]  io_slave_bresp,
    output logic [3:0]  io_slave_bid,
    output logic        io_slave_arready,
    input  logic        io_slave_arvalid,
    input  logic [31:0] io_slave_araddr,
    input  logic [3:0]  io_slave_arid,
    input  logic [7:0]  io_slave_arlen,
    input  logic [2:0]  io_slave_arsize,
    input  logic [1:0]  io_slave_arburst,
    input  logic        io_slave_rready,
    output logic        io_slave_rvalid,
    output logic [1:0]  io_slave_rresp,
    output logic [31:0] io_slave_rdata,
    output logic        io_slave_rlast,
    output logic [3:0]  io_slave_rid
);

    logic        core_awvalid;
    logic [31:0] core_awaddr;
    logic [3:0]  core_awid;
    logic [7:0]  core_awlen;
    logic [2:0]  core_awsize;
    logic [1:0]  core_awburst;
    logic        core_awready;

    logic        core_wvalid;
    logic [31:0] core_wdata;
    logic [3:0]  core_wstrb;
    logic        core_wlast;
    logic        core_wready;

    logic        core_bready;
    logic        core_bvalid;
    logic [1:0]  core_bresp;
    logic [3:0]  core_bid;

    logic        core_arvalid;
    logic [31:0] core_araddr;
    logic [3:0]  core_arid;
    logic [7:0]  core_arlen;
    logic [2:0]  core_arsize;
    logic [1:0]  core_arburst;
    logic        core_arready;

    logic        core_rready;
    logic        core_rvalid;
    logic [1:0]  core_rresp;
    logic [31:0] core_rdata;
    logic        core_rlast;
    logic [3:0]  core_rid;

    logic [31:0] cwdata, crdata, caddr;
    logic        cwvalid, crvalid;
    logic        cawvalid, carvalid;
    logic        cawready, cwready; 
    logic        carready, crready; 

    logic match_aw, match_ar;
    assign match_aw = (core_awaddr[31:16] == 16'h0200) || trans[0];
    assign match_ar = (core_araddr[31:16] == 16'h0200) || trans[1];

    assign caddr = match_ar ? core_araddr : core_awaddr;

    always_comb begin
        if (match_aw) begin
            io_master_awvalid = 1'b0;
            io_master_awaddr  = 32'b0;
            io_master_awid    = 4'b0;
            io_master_awlen   = 8'b0;
            io_master_awsize  = 3'b0;
            io_master_awburst = 2'b0;
            core_awready      = cawready;
            io_master_wvalid  = 1'b0;
            io_master_wdata   = 32'b0;
            io_master_wstrb   = 4'b0;
            io_master_wlast   = 1'b0;
            core_wready       = cwready;   
            io_master_bready  = 1'b0;
            core_bvalid       = 1'b1; 
            core_bresp        = 2'b00;
            core_bid          = core_awid;
        end else begin
            io_master_awvalid = core_awvalid;
            io_master_awaddr  = core_awaddr;
            io_master_awid    = core_awid;
            io_master_awlen   = core_awlen;
            io_master_awsize  = core_awsize;
            io_master_awburst = core_awburst;
            core_awready      = io_master_awready;
            io_master_wvalid  = core_wvalid;
            io_master_wdata   = core_wdata;
            io_master_wstrb   = core_wstrb;
            io_master_wlast   = core_wlast;
            core_wready       = io_master_wready;    
            io_master_bready  = core_bready;
            core_bvalid       = io_master_bvalid;
            core_bresp        = io_master_bresp;
            core_bid          = io_master_bid;
        end

        if (match_ar) begin
            io_master_arvalid = 1'b0;
            io_master_araddr  = 32'b0;
            io_master_arid    = 4'b0;
            io_master_arlen   = 8'b0;
            io_master_arsize  = 3'b0;
            io_master_arburst = 2'b0;
            core_arready      = carready; 

            io_master_rready  = 1'b0;
            core_rvalid       = crvalid;
            core_rdata        = crdata;
            core_rresp        = 2'b00;
            core_rlast        = 1'b0;
            core_rid          = core_arid;
        end else begin
            io_master_arvalid = core_arvalid;
            io_master_araddr  = core_araddr;
            io_master_arid    = core_arid;
            io_master_arlen   = core_arlen;
            io_master_arsize  = core_arsize;
            io_master_arburst = core_arburst;
            core_arready      = io_master_arready;

            io_master_rready  = core_rready;
            core_rvalid       = io_master_rvalid;
            core_rdata        = io_master_rdata;
            core_rresp        = io_master_rresp;
            core_rlast        = io_master_rlast;
            core_rid          = io_master_rid;
        end
    
        cwvalid  = core_wvalid && match_aw;
        cawvalid = core_awvalid && match_aw;
        cwdata   = core_wdata;
        carvalid = core_arvalid && match_ar;
        crready  = core_rready; 
    end

    logic[1:0] trans; // 0-write 1-read

    always_ff @(posedge clock) begin
        if(reset)begin
            trans<=0;
        end else begin
            if((match_ar) && ((carvalid && carready))) trans<=2;
            if((match_aw) && ((cawvalid && cawready))) trans<=1;
            
            if(trans[1] && crready && crvalid) trans<=0;
            if(trans[0] && core_bready && core_bvalid) trans<=0;
        end
    end

    osoc_26000003_core core (
        .clock(clock),
        .reset(reset),
        .io_interrupt(io_interrupt),

        .io_master_awready(core_awready),
        .io_master_awvalid(core_awvalid),
        .io_master_awaddr(core_awaddr),
        .io_master_awid(core_awid),
        .io_master_awlen(core_awlen),
        .io_master_awsize(core_awsize),
        .io_master_awburst(core_awburst),
        .io_master_wready(core_wready),
        .io_master_wvalid(core_wvalid),
        .io_master_wdata(core_wdata),
        .io_master_wstrb(core_wstrb),
        .io_master_wlast(core_wlast),
        .io_master_bready(core_bready),
        .io_master_bvalid(core_bvalid),
        .io_master_bresp(core_bresp),
        .io_master_bid(core_bid),
        .io_master_arready(core_arready),
        .io_master_arvalid(core_arvalid),
        .io_master_araddr(core_araddr),
        .io_master_arid(core_arid),
        .io_master_arlen(core_arlen),
        .io_master_arsize(core_arsize),
        .io_master_arburst(core_arburst),
        .io_master_rready(core_rready),
        .io_master_rvalid(core_rvalid),
        .io_master_rresp(core_rresp),
        .io_master_rdata(core_rdata),
        .io_master_rlast(core_rlast),
        .io_master_rid(core_rid),

        .io_slave_awready(io_slave_awready),
        .io_slave_awvalid(io_slave_awvalid),
        .io_slave_awaddr(io_slave_awaddr),
        .io_slave_awid(io_slave_awid),
        .io_slave_awlen(io_slave_awlen),
        .io_slave_awsize(io_slave_awsize),
        .io_slave_awburst(io_slave_awburst),
        .io_slave_wready(io_slave_wready),
        .io_slave_wvalid(io_slave_wvalid),
        .io_slave_wdata(io_slave_wdata),
        .io_slave_wstrb(io_slave_wstrb),
        .io_slave_wlast(io_slave_wlast),
        .io_slave_bready(io_slave_bready),
        .io_slave_bvalid(io_slave_bvalid),
        .io_slave_bresp(io_slave_bresp),
        .io_slave_bid(io_slave_bid),
        .io_slave_arready(io_slave_arready),
        .io_slave_arvalid(io_slave_arvalid),
        .io_slave_araddr(io_slave_araddr),
        .io_slave_arid(io_slave_arid),
        .io_slave_arlen(io_slave_arlen),
        .io_slave_arsize(io_slave_arsize),
        .io_slave_arburst(io_slave_arburst),
        .io_slave_rready(io_slave_rready),
        .io_slave_rvalid(io_slave_rvalid),
        .io_slave_rresp(io_slave_rresp),
        .io_slave_rdata(io_slave_rdata),
        .io_slave_rlast(io_slave_rlast),
        .io_slave_rid(io_slave_rid)
    );

    CLINT CLINT_mod (
        .clk(clock),
        .rst(reset),
        .caddr(caddr),
        .cwdata(cwdata),
        .crdata(crdata),
        .carvalid(carvalid),
        .cwvalid(cwvalid),
        .cawvalid(cawvalid),
        .carready(carready),
        .cawready(cawready),
        .cwready(cwready),
        .crready(crready),
        .crvalid(crvalid)
    );

endmodule