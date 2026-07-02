module sdram(
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
  
import "DPI-C" function void sdram_write(input int addr, input int data, input mask);
import "DPI-C" function void sdram_read(input int addr, output int data);

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
      ;//do nothing
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
      endcase
    end
  end

  always @(posedge clk) begin
    if(cs) begin
      count<=0;
      buff<=0;
      will_stop_burst<=0;
      burst_read<=0;
      cas_lat<=0;
      burst_len<=0;
    end else begin
      if(count!=0) count<=count+1;

      if(!burst_read)count<=0;

      case(state)
        nop_t: begin
          ;
        end
        addr_t: begin
          addr[25:11]<={a[12:0],ba};
        end
        read_t: begin
          if(ba != addr[12:11]) begin
            $display("discrepancies in ba in read");
            $finish;
          end
          addr[10:2] <= a[8:0];
          count<=1;
          burst_read<=1;
        end
        write_t: begin
          if(ba != addr[12:11]) begin
            $display("discrepancies in ba in write");
            $finish;
          end
          sdram_write({addr[25:11],addr[8:0],2'b0},dq, dqm);
          addr[10:2] <= a[8:0];
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
              $finish;
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
      endcase

      if(will_stop_burst) burst_read<=0;

      if(count==1 & burst_read==0) sdram_write({addr[25:11],addr[10:2],2'b0},dq, dqm)

      if(count>=cas_lat & burst_read==1) sdram_read(addr+count-cas_lat,buff);

      if(count==cas_lat+burst_len-1) burst_read<=0;

    end
  end

  assign dq = (count>=cas_lat & burst_read==1) ? buff : 16'bz;

endmodule
