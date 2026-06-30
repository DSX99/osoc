// define this macro to enable fast behavior simulation
// for flash by skipping SPI transfers
// `define FAST_FLASH

module spi_top_apb #(
  parameter flash_addr_start = 32'h30000000,
  parameter flash_addr_end   = 32'h3fffffff,
  parameter spi_ss_num       = 8
) (
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

  output                  spi_sck,
  output [spi_ss_num-1:0] spi_ss,
  output                  spi_mosi,
  input                   spi_miso,
  output                  spi_irq_out
);

`ifdef FAST_FLASH

wire [31:0] data;
parameter invalid_cmd = 8'h0;
flash_cmd flash_cmd_i(
  .clock(clock),
  .valid(in_psel && !in_penable),
  .cmd(in_pwrite ? invalid_cmd : 8'h03),
  .addr({8'b0, in_paddr[23:2], 2'b0}),
  .data(data)
);
assign spi_sck    = 1'b0;
assign spi_ss     = 8'b0;
assign spi_mosi   = 1'b1;
assign spi_irq_out= 1'b0;
assign in_pslverr = 1'b0;
assign in_pready  = in_penable && in_psel && !in_pwrite;
assign in_prdata  = data[31:0];

`else

reg [31:0] paddr;
reg        psel;
reg        penable;
reg [2:0]  pprot;
reg        pwrite;
reg [31:0] pwdata;
reg [3:0]  pstrb;

reg        pready;
reg [31:0] prdata;
reg        pslverr;

reg flash_access;

always @(*) begin
  flash_access = 0;
  paddr = 0; 
  psel = 0;
  penable = 0;
  pprot = 0;
  pwrite = 0;
  pwdata = 0;
  pstrb = 0;

  in_pready = 0;
  in_prdata = 0;
  in_pslverr = 0;
  if(paddr[31:28] == 4'h3) begin
    flash_access = 1;
  end else begin
    paddr = in_paddr;
    psel = in_psel;
    penable = in_penable;
    pprot = in_pprot;
    pwrite = in_pwrite;
    pwdata = in_pwdata;
    pstrb = in_pstrb;

    in_pready = pready;
    in_prdata = prdata;
    in_pslverr = pslverr;
  end
end

always @(posedge clk)

// Drive output ports from internal wires
assign in_pready  = pready;
assign in_prdata  = prdata;
assign in_pslverr = pslverr;

spi_top u0_spi_top (
  .wb_clk_i(clock),
  .wb_rst_i(reset),
  .wb_adr_i(paddr[4:0]),
  .wb_dat_i(pwdata),
  .wb_dat_o(prdata),
  .wb_sel_i(pstrb),
  .wb_we_i (pwrite),
  .wb_stb_i(psel),
  .wb_cyc_i(penable),
  .wb_ack_o(pready),
  .wb_err_o(pslverr),
  .wb_int_o(spi_irq_out),

  .ss_pad_o(spi_ss),
  .sclk_pad_o(spi_sck),
  .mosi_pad_o(spi_mosi),
  .miso_pad_i(spi_miso)
);

`endif // FAST_FLASH

endmodule
