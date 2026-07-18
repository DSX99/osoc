module vga_top_apb(
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

  output [7:0]  vga_r,
  output [7:0]  vga_g,
  output [7:0]  vga_b,
  output        vga_hsync,
  output        vga_vsync,
  output        vga_valid
);

assign in_pready = in_psel & in_penable;
assign in_prdata = 32'b0;
assign in_pslverr = 1'b0;

parameter h_frontporch = 96;
parameter h_active = 144;
parameter h_backporch = 784;
parameter h_total = 800;

parameter v_frontporch = 2;
parameter v_active = 35;
parameter v_backporch = 515;
parameter v_total = 525;

reg [7:0] mem [307200*4];

reg [9:0] x_cnt;
reg [9:0] y_cnt;
wire h_valid;
wire v_valid;

always @(posedge clock) begin
    if(reset == 1'b1) begin
        x_cnt <= 1;
        y_cnt <= 1;
    end
    else begin
        if(x_cnt == h_total)begin
            x_cnt <= 1;
            if(y_cnt == v_total) y_cnt <= 1;
            else y_cnt <= y_cnt + 1;
        end
        else x_cnt <= x_cnt + 1;
    end
end

always @(posedge clock) begin
  if(reset) begin
    for (int i = 0; i < 307200*4; i = i + 1) begin
      mem[i]<=0;
    end
  end else begin
    if(in_psel && in_penable) begin
      if(in_pwrite) begin
        if(in_pstrb[0])
          mem[in_paddr - 32'h2100_0000   ]<=in_pwdata[7:0];
        if(in_pstrb[1])
          mem[in_paddr - 32'h2100_0000 +1]<=in_pwdata[15:8];
        if(in_pstrb[2])
          mem[in_paddr - 32'h2100_0000 +2]<=in_pwdata[23:16];
        if(in_pstrb[3])
          mem[in_paddr - 32'h2100_0000 +3]<=in_pwdata[31:24];
      end
    end
  end
end

assign vga_hsync = (x_cnt > h_frontporch);
assign vga_vsync = (y_cnt > v_frontporch);

assign h_valid = (x_cnt > h_active) & (x_cnt <= h_backporch);
assign v_valid = (y_cnt > v_active) & (y_cnt <= v_backporch);
assign vga_valid = h_valid & v_valid;

wire [9:0] h_addr = h_valid ? (x_cnt - 10'd145) : 10'd0;
wire [9:0] v_addr = v_valid ? (y_cnt - 10'd36) : 10'd0;

assign vga_r = mem[((h_addr + v_addr*640)<<2) + 2];
assign vga_g = mem[((h_addr + v_addr*640)<<2) + 1];
assign vga_b = mem[((h_addr + v_addr*640)<<2) + 0];

endmodule
