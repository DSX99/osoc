module apb_delayer(
  input         clock,
  input         reset,
  input  [31:0] in_paddr,
  input         in_psel,
  input         in_penable,
  input  [2:0]  in_pprot,
  input         in_pwrite,
  input  [31:0] in_pwdata,
  input  [3:0]  in_pstrb,
  output        in_pready,
  output [31:0] in_prdata,
  output        in_pslverr,

  output [31:0] out_paddr,
  output        out_psel,
  output        out_penable,
  output [2:0]  out_pprot,
  output        out_pwrite,
  output [31:0] out_pwdata,
  output [3:0]  out_pstrb,
  input         out_pready,
  input  [31:0] out_prdata,
  input         out_pslverr
);

  assign out_paddr   = in_paddr;
  assign out_psel    = in_psel;
  assign out_penable = in_penable;
  assign out_pprot   = in_pprot;
  assign out_pwrite  = in_pwrite;
  assign out_pwdata  = in_pwdata;
  assign out_pstrb   = in_pstrb;
  assign in_pready   = out ? buff_pready : 1'b0;
  assign in_prdata   = out ? buff_prdata : 32'b0;
  assign in_pslverr  = out ? buff_pslverr : 1'b0;

  reg        buff_pready;
  reg [31:0] buff_prdata;
  reg        buff_pslverr;


  parameter ADD = 181;

  reg [9:0] count;
  reg [19:0] delay;
  wire out;

  assign out = delay[19:10] > count;

  always @(posedge clock) begin
    if(reset) begin
      count<=0;
      delay<=0;
      buff_pready<=0;
      buff_prdata<=0;
      buff_pslverr<=0;
    end else begin
      if(in_psel && in_penable && !out && !buff_pready) begin
        count<=count+ 1;
        delay<=ADD;
      end
      if(out_pready) begin
        buff_pready<=out_pready;
        buff_prdata<=out_prdata;
        buff_pslverr<=out_pslverr;
      end
      if(delay!=0) begin
        delay<=delay+ADD;
      end
      if(out) begin
        count<=0;
        delay<=0;
        buff_pready<=0;
      end
    end
  end

endmodule
