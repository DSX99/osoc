module gpio_top_apb(
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

  output [15:0] gpio_out,
  input  [15:0] gpio_in,
  output [7:0]  gpio_seg_0,
  output [7:0]  gpio_seg_1,
  output [7:0]  gpio_seg_2,
  output [7:0]  gpio_seg_3,
  output [7:0]  gpio_seg_4,
  output [7:0]  gpio_seg_5,
  output [7:0]  gpio_seg_6,
  output [7:0]  gpio_seg_7
);

reg [15:0] led;

reg [7:0] hex [7:0];

assign gpio_out = led;
assign gpio_seg_0 = hex[0];
assign gpio_seg_1 = hex[1];
assign gpio_seg_2 = hex[2];
assign gpio_seg_3 = hex[3];
assign gpio_seg_4 = hex[4];
assign gpio_seg_5 = hex[5];
assign gpio_seg_6 = hex[6];
assign gpio_seg_7 = hex[7];

assign in_prdata = (in_paddr[3:0] == 4'h4) ? {16'b0,gpio_in} : 32'h0;
assign in_pslverr = 0;
assign in_pready = (in_psel && in_penable) ? 1'b1 : 1'b0;

always @(posedge clock) begin
  if(reset) begin
    for (int i = 0; i < 8; i = i + 1) begin
      hex[i] <= 0;
    end
    led[15:0] <= 0;
  end else begin
    if(in_psel && in_penable) begin
      if(in_pwrite) begin
        if(in_paddr[3:0] == 4'h0) led <= in_pwdata[15:0];
        if(in_paddr[3:0] == 4'h8) begin
          for(int i = 0; i < 4; i = i + 1)begin
            hex[i] <= in_pwdata[(8*i)+7:(8*i)];
          end
        end
        if(in_paddr[3:0] == 4'hc) begin
          for(int i = 0; i < 4; i = i + 1)begin
            hex[4+i] <= in_pwdata[(8*i)+7:(8*i)];
          end
        end
      end
    end
  end
end



endmodule
