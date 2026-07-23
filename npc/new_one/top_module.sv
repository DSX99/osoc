module top_module;

    initial begin
        $display("--- SIMULATION STARTED ---");
    end

    logic clock,reset;
    
    initial clock = 0;
    always #1 clock = ~clock;

    initial begin
        reset = 1'b1;
        #100;         // Hold reset for 100ns
        reset = 1'b0;   // Release reset
    end

    initial begin
        $dumpfile("icarus/waveform.fst"); 
        $dumpvars(0, top_module);
    end

    logic finish;

    always_ff @(posedge clock) begin
        if(finish) $finish;
    end


    logic        io_interrupt;
    logic        io_slave_awvalid;
    logic [31:0] io_slave_awaddr;
    logic [3:0]  io_slave_awid;
    logic [7:0]  io_slave_awlen;
    logic [2:0]  io_slave_awsize;
    logic [1:0]  io_slave_awburst;
    logic        io_slave_wvalid;
    logic [31:0] io_slave_wdata;
    logic [3:0]  io_slave_wstrb;
    logic        io_slave_wlast;
    logic        io_slave_bready;
    logic        io_slave_arvalid;
    logic [31:0] io_slave_araddr;
    logic [3:0]  io_slave_arid;
    logic [7:0]  io_slave_arlen;
    logic [2:0]  io_slave_arsize;
    logic [1:0]  io_slave_arburst;
    logic        io_slave_rready;

assign io_interrupt     = 1'b0;
assign io_slave_awvalid = 1'b0;
assign io_slave_awaddr  = 32'b0;
assign io_slave_awid    = 4'b0;
assign io_slave_awlen   = 8'b0;
assign io_slave_awsize  = 3'b0;
assign io_slave_awburst = 2'b0;
assign io_slave_wvalid  = 1'b0;
assign io_slave_wdata   = 32'b0;
assign io_slave_wstrb   = 4'b0;
assign io_slave_wlast   = 1'b0;
assign io_slave_bready  = 1'b0;
assign io_slave_arvalid = 1'b0;
assign io_slave_araddr  = 32'b0;
assign io_slave_arid    = 4'b0;
assign io_slave_arlen   = 8'b0;
assign io_slave_arsize  = 3'b0;
assign io_slave_arburst = 2'b0;
assign io_slave_rready  = 1'b0;

    logic        io_slave_awready;
    logic        io_slave_wready;
    logic        io_slave_bvalid;
    logic [1:0]  io_slave_bresp;
    logic [3:0]  io_slave_bid;
    logic        io_slave_arready;
    logic        io_slave_rvalid;
    logic [1:0]  io_slave_rresp;
    logic [31:0] io_slave_rdata;
    logic        io_slave_rlast;
    logic [3:0]  io_slave_rid;


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

    logic        io_master_awvalid;
    logic [31:0] io_master_awaddr;
    logic [3:0]  io_master_awid;
    logic [7:0]  io_master_awlen;
    logic [2:0]  io_master_awsize;
    logic [1:0]  io_master_awburst;
    logic        io_master_awready;

    logic        io_master_wvalid;
    logic [31:0] io_master_wdata;
    logic [3:0]  io_master_wstrb;
    logic        io_master_wlast;
    logic        io_master_wready;

    logic        io_master_bready;
    logic        io_master_bvalid;
    logic [1:0]  io_master_bresp;
    logic [3:0]  io_master_bid;

    logic        io_master_arvalid;
    logic [31:0] io_master_araddr;
    logic [3:0]  io_master_arid;
    logic [7:0]  io_master_arlen;
    logic [2:0]  io_master_arsize;
    logic [1:0]  io_master_arburst;
    logic        io_master_arready;

    logic        io_master_rready;
    logic        io_master_rvalid;
    logic [1:0]  io_master_rresp;
    logic [31:0] io_master_rdata;
    logic        io_master_rlast;
    logic [3:0]  io_master_rid;

    logic [31:0] cwdata, crdata, caddr;
    logic        cwvalid, crvalid;
    logic        cawvalid, carvalid;
    logic        cawready, cwready; 
    logic        carready, crready; 
    logic        crlast;

    logic match_aw, match_ar;
    assign match_aw = (core_awaddr[31:16] == 16'h0200) || trans[0];
    assign match_ar = (core_araddr[31:16] == 16'h0200) || trans[1];

    assign caddr = match_ar ? core_araddr : core_awaddr;

    always @(*) begin

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

    ysyx_26060184 ysyx_26060184 (
        .clock(clock),
        .reset(reset),
        .io_interrupt(io_interrupt),
        .finish_top(finish),

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

    ram axi_slave_lsu_mod (
        .clk(clock), 
        .rst(reset), 
        .araddr(io_master_araddr), 
        .arvalid(io_master_arvalid), 
        .arlen(io_master_arlen),
        .arsize(io_master_arsize),
        .arburst(io_master_arburst),
        .arready(io_master_arready), 
        .rdata(io_master_rdata), 
        .rresp(io_master_rresp), 
        .rvalid(io_master_rvalid), 
        .rready(io_master_rready),
        .rlast(io_master_rlast),
        .awaddr(io_master_awaddr), 
        .awvalid(io_master_awvalid), 
        .awready(io_master_awready), 
        .wdata(io_master_wdata), 
        .wstrb(io_master_wstrb), 
        .wvalid(io_master_wvalid), 
        .wready(io_master_wready), 
        .bresp(io_master_bresp), 
        .bvalid(io_master_bvalid), 
        .bready(io_master_bready)
    );

endmodule