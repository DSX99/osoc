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
reg        pwrite;
reg [31:0] pwdata;
reg [3:0]  pstrb;

reg        pready;
reg [31:0] prdata;
reg        pslverr;

reg [2:0] fsm_state;
reg set;

wire out_pready;
wire [31:0] out_prdata;
wire out_pslverr;

always @(posedge clock) begin
  if(reset) begin
    paddr<=0;
    psel<=0;
    penable<=0;
    pwrite<=0;
    pwdata<=0;
    pstrb<=0;
    
    pready<=0;
    prdata<=0;
    pslverr<=0;

    fsm_state<=0;
    set<=0;
  end else begin
    if(in_penable && in_psel) begin
      case(fsm_state)
        3'd0: begin
          if(in_paddr >= flash_addr_start && in_paddr < flash_addr_end) begin
            if(set) fsm_state<= 3;
            else fsm_state<=1;
          end else begin
            paddr <= in_paddr;
            psel <= in_psel;
            penable <= in_penable;
            pwrite <= in_pwrite;
            pwdata <= in_pwdata;
            pstrb <= in_pstrb;

            pready <= out_pready;
            prdata <= out_prdata;
            pslverr <= out_pslverr;

            sent<=0;
          end
        end
        3'd1: begin
          paddr<=32'h10001014;
          penable<=1;
          psel<=1;
          pwdata<=32'h00000002;
          pstrb<=4'hf;
          pwrite<=1;
          if(out_pready) begin
            fsm_state<=2;
            psel<=0;
            penable<=0;
          end
        end
        3'd2:begin
          paddr<=32'h10001018;
          penable<=1;
          psel<=1;
          pwdata<=32'h00000001; //set divisor rate, should be changed to proper divisor
          if(out_pready) begin
            fsm_state<=3;
            set<=1;
            psel<=0;
            penable<=0;
          end
        end
        3'd3:begin
          paddr<=32'h10001004;
          penable<=1;
          psel<=1;
          pwrite<=1;
          pwdata<={8'h03,in_paddr[23:0]}; 
          if(out_pready) begin
            fsm_state<=4;
            psel<=0;
            penable<=0;
          end
        end
        3'd4:begin
          paddr<=32'h10001010;
          penable<=1;
          psel<=1;
          pwdata<=32'h00003140;
          if(out_pready) begin
            fsm_state<=5;
            psel<=0;
            penable<=0;
          end
        end
        3'd5:begin
          pwrite<=0;
          penable<=0;
          psel<=0;
          if(spi_irq_out) begin
            fsm_state<=6;
          end
        end
        3'd6:begin
          paddr<=32'h10001000;
          penable<=1;
          psel<=1;
          pwrite<=0; 
          if(out_pready) begin
            fsm_state<=7;
            penable<=0;
            psel<=0;
            pready<=1;
            prdata<=out_prdata;
            pslverr<=out_pslverr;
          end
        end
        3'd7:begin
          pready<=0;
          fsm_state<=0;
        end
      endcase
    end
  end
end

// Drive output ports from internal wires
assign in_pready  = pready;
assign in_prdata  = prdata;
assign in_pslverr = pslverr;

spi_top u0_spi_top (
  .wb_clk_i(clock),
  .wb_rst_i(reset),
  .wb_adr_i(paddr[4:0]),
  .wb_dat_i(pwdata),
  .wb_dat_o(out_prdata),
  .wb_sel_i(pstrb),
  .wb_we_i (pwrite),
  .wb_stb_i(psel),
  .wb_cyc_i(penable),
  .wb_ack_o(out_pready),
  .wb_err_o(out_pslverr),
  .wb_int_o(spi_irq_out),

  .ss_pad_o(spi_ss),
  .sclk_pad_o(spi_sck),
  .mosi_pad_o(spi_mosi),
  .miso_pad_i(spi_miso)
);

`endif // FAST_FLASH

endmodule
