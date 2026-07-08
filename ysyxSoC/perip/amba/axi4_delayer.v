module axi4_delayer(
  input         clock,
  input         reset,

  output        in_arready,
  input         in_arvalid,
  input  [3:0]  in_arid,
  input  [31:0] in_araddr,
  input  [7:0]  in_arlen,
  input  [2:0]  in_arsize,
  input  [1:0]  in_arburst,
  input         in_rready,
  output        in_rvalid,
  output [3:0]  in_rid,
  output [31:0] in_rdata,
  output [1:0]  in_rresp,
  output        in_rlast,
  output        in_awready,
  input         in_awvalid,
  input  [3:0]  in_awid,
  input  [31:0] in_awaddr,
  input  [7:0]  in_awlen,
  input  [2:0]  in_awsize,
  input  [1:0]  in_awburst,
  output        in_wready,
  input         in_wvalid,
  input  [31:0] in_wdata,
  input  [3:0]  in_wstrb,
  input         in_wlast,
                in_bready,
  output        in_bvalid,
  output [3:0]  in_bid,
  output [1:0]  in_bresp,

  input         out_arready,
  output        out_arvalid,
  output [3:0]  out_arid,
  output [31:0] out_araddr,
  output [7:0]  out_arlen,
  output [2:0]  out_arsize,
  output [1:0]  out_arburst,
  output        out_rready,
  input         out_rvalid,
  input  [3:0]  out_rid,
  input  [31:0] out_rdata,
  input  [1:0]  out_rresp,
  input         out_rlast,
  input         out_awready,
  output        out_awvalid,
  output [3:0]  out_awid,
  output [31:0] out_awaddr,
  output [7:0]  out_awlen,
  output [2:0]  out_awsize,
  output [1:0]  out_awburst,
  input         out_wready,
  output        out_wvalid,
  output [31:0] out_wdata,
  output [3:0]  out_wstrb,
  output        out_wlast,
                out_bready,
  input         out_bvalid,
  input  [3:0]  out_bid,
  input  [1:0]  out_bresp
);

  assign out_arid = in_arid;
  assign out_araddr = in_araddr;
  assign out_arlen = in_arlen;
  assign out_arsize = in_arsize;
  assign out_arburst = in_arburst;
  assign in_rid = out_rid;
  assign in_rdata = out_rdata;
  assign in_rresp = out_rresp;
  assign in_rlast = out_rlast;
  assign out_awid = in_awid;
  assign out_awaddr = in_awaddr;
  assign out_awlen = in_awlen;
  assign out_awsize = in_awsize;
  assign out_awburst = in_awburst;
  assign out_wdata = in_wdata;
  assign out_wstrb = in_wstrb;
  assign out_wlast = in_wlast;
  assign in_bid = out_bid;
  assign in_bresp = out_bresp;


  assign in_arready = out_arready;
  assign out_arvalid = in_arvalid;
  
  assign in_awready = out_awready;
  assign out_awvalid = in_awvalid;
  
  assign in_wready = out_wready;
  assign out_wvalid = in_wvalid;
  


  assign out_rready = ready_r ? in_rready : out_rlast ? 1'b0 : 1'b1;
  assign in_rvalid = ready_r ? out_rvalid : 1'b0;
  
  assign out_bready = ready_w ? in_bready : 1'b0;
  assign in_bvalid = ready_w ? out_bvalid : 1'b0;

  parameter ADD = 181;

  reg set;
  reg [9:0] count_r, count_w;
  reg [3:0] burst_count_r, burst_count_w;
  reg [19:0] delay_r, delay_w;
  wire ready_r, ready_w;

  reg [31:0] FIFO_r [7:0];
  reg [2:0] FIFO_r_count;

  assign ready_r = delay_r[19:10] > count_r;
  assign ready_w = delay_w[19:10] > count_w;


  always @(posedge clock) begin
    if(reset) begin
      count_r<=0;
      count_w<=0;
      delay_r<=0;
      delay_w<=0;
    end else begin
      if(in_awvalid) begin
        count_w<=count_w+ 1;
        delay_w<=ADD;
      end
      if(count_w!=0 && out_bvalid!=1)begin
        count_w<=count_w+1;
      end
      if(delay_w!=0) begin
        delay_w<=delay_w+ADD;
      end
      if(ready_w && in_bready && out_bvalid) begin
        count_w<=0;
        delay_w<=0;
      end





      if(in_arvalid) begin
        count_r<=count_r+ 1;
        delay_r<=ADD;
      end
      if(out_rvalid && out_rready && !out_rlast)begin
        FIFO_r[FIFO_r_count] <= rdata;
        FIFO_r_count <= FIFO_r_count + 1;
      end
      if(count_r!=0 && !(out_rvalid && out_rlast))begin
        count_r<=count_r+1;
      end
      if(delay_r!=0) begin
        delay_r<=delay_r+ADD;
      end
      if(ready_r && in_rready && out_rvalid) begin
        count_r<=0;
        delay_r<=0;
      end
    end
  end



endmodule
