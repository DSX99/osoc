module sdram_chip(
  input        clk,
  input        cke,
  input        cs,
  input        ras,
  input        cas,
  input        we,
  input [12:0] a,
  input [ 1:0] ba,
  input [ 1:0] dqm,
  inout [15:0] dq
);
  
import "DPI-C" function void sdram_write(input int addr, input int data, input int mask);
import "DPI-C" function void sdram_read(input int addr, output int data);

  parameter SHIFT = 0;


  typedef enum [2:0] { nop_t, addr_t, read_t, write_t, term_t, reg_t } state_t;
  
  reg [2:0] state;
  reg [9:0] count;
  reg [15:0] buff;
  reg will_stop_burst;
  reg burst_read;
  reg [2:0] cas_lat;
  reg [9:0] burst_len;

  reg [23:0] addr; // addr : {addr row[12:0],ba[1:0],addr col[8:0],1'b0(dqm[1:0], 1 means dont, 0 is lowest, 1 is highest)}

  always @* begin
    if(cs) begin
      state = nop_t;
    end else begin
      case({ras,cas,we})
        3'b111: begin //NOP
          state = nop_t;
        end
        3'b011: begin //ACTIVE
          state = addr_t;
        end
        3'b101: begin //READ
          state = read_t;
        end
        3'b100: begin //WRITE
          state = write_t;
        end
        3'b110: begin //BURST TERM
          state = term_t;
        end
        3'b010: begin //PRECHARGE (NOP)
          state = nop_t;
        end
        3'b001: begin //AUTOREFRESH (NOP)
          state = nop_t;
        end
        3'b000: begin //LOAD MODE REGISTERS
          state = reg_t;
        end
        default: state = nop_t;
      endcase
    end
  end

  always @(posedge clk) begin
    if(!cke) begin
      count<=0;
      will_stop_burst<=0;
      burst_read<=0;
      cas_lat<=0;
      burst_len<=0;
    end else begin
      if(!cs)begin
        if(count!=0) count<=count+1;

        if(!burst_read)count<=0;

        case(state)
          nop_t: begin
            ;
          end
          addr_t: begin
            addr[23:9] <= {a[12:0], ba};
          end
          read_t: begin
            if(ba != addr[10:9]) begin
              $display("discrepancies in ba in read");
              $finish;
            end
            addr[8:0] <= a[8:0];
            count<=1;
            burst_read<=1;
          end
          write_t: begin
            if(ba != addr[10:9]) begin
              $display("discrepancies in ba in write");
              // $finish;
            end
            sdram_write({6'b0, addr[23:9], a[8:0], 2'b0}+SHIFT, {16'b0, dq}, {30'b0, dqm});
            count<=1;
          end
          term_t: begin
            will_stop_burst<=1;
          end
          reg_t: begin
            case(a[2:0])
              3'b000: burst_len<=1;
              3'b001: burst_len<=2;
              3'b010: burst_len<=4;
              3'b011: burst_len<=8;
              3'b111: burst_len<=1023;
              default: begin
                $display("discrepancies in burst_len");
                // $finish;
              end
            endcase
            case(a[6:4])
              3'b001: cas_lat<=1;
              3'b010: cas_lat<=2;
              3'b011: cas_lat<=3;
              default: begin
                $display("discrepancies in cas_lat");
                $finish;
              end
            endcase
          end
          default: begin
              $display("strange state");
              $finish;
          end
        endcase

        if(will_stop_burst) burst_read<=0;

        if(count=={7'b0,cas_lat}+burst_len-1) burst_read<=0;

      end
    end
  end

  always @* begin
    buff=0;
    if(count>={7'b0,cas_lat} & burst_read==1) sdram_read({6'b0, addr[23:0], 2'b0} + SHIFT + ({22'b0, count} - {29'b0, cas_lat}) * 32'd4, {16'b0,buff});
  end

  assign dq = (count>={7'b0,cas_lat} & burst_read==1) ? buff : 16'bz;

endmodule

module sdram_subchip(
  input        clk,
  input        cke,
  input        cs,
  input        ras,
  input        cas,
  input        we,
  input [13:0] a,
  input [ 1:0] ba,
  input [ 1:0] dqm,
  inout [15:0] dq
);

  parameter SHIFT = 0;

wire ras_0, ras_1, cas_0, cas_1, we_0, we_1;

reg chose; // 0-0 1-1
wire comb_chose;
wire both;

assign comb_chose = (!ras && cas && we) ? a[13] : chose;
assign both = (!ras && !cas && !we);

assign ras_0 = (!comb_chose | both) ? ras  : 1'b1;
assign cas_0 = (!comb_chose | both) ? cas  : 1'b1;
assign we_0  = (!comb_chose | both) ? we   : 1'b1;

assign ras_1 =  (comb_chose | both) ? ras  : 1'b1;
assign cas_1 =  (comb_chose | both) ? cas  : 1'b1;
assign we_1  =  (comb_chose | both) ? we   : 1'b1;

always @(posedge clk) begin
  if(!ras && cas && we) chose <= a[13];
end

sdram_chip #(
  .SHIFT(SHIFT)
) sdram0(
  .clk(clk), .cke(cke), .cs(cs), .ras(ras_0), .cas(cas_0), .we(we_0), .a(a[12:0]), .ba(ba), .dqm(dqm), .dq(dq)
);

sdram_chip #(
  .SHIFT(SHIFT + 27'h4000000)
)sdram1(
  .clk(clk), .cke(cke), .cs(cs), .ras(ras_1), .cas(cas_1), .we(we_1), .a(a[12:0]), .ba(ba), .dqm(dqm), .dq(dq)
);

endmodule

module sdram(
  input        clk,
  input        cke,
  input        cs,
  input        ras,
  input        cas,
  input        we,
  input [13:0] a,
  input [ 1:0] ba,
  input [ 3:0] dqm,
  inout [31:0] dq
);

sdram_subchip #(
  .SHIFT(0)
) sdramsub1(
  .clk(clk), .cke(cke), .cs(cs), .ras(ras), .cas(cas), .we(we), .a(a), .ba(ba), .dqm(dqm[1:0]), .dq(dq[15:0])
);

sdram_subchip #(
  .SHIFT(2)
)sdramsub2(
  .clk(clk), .cke(cke), .cs(cs), .ras(ras), .cas(cas), .we(we), .a(a), .ba(ba), .dqm(dqm[3:2]), .dq(dq[31:16])
);

endmodule