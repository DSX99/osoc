module psram(
  input sck,
  input ce_n,
  inout [3:0] dio
);

  import "DPI-C" function void psram_write(input int addr, input int data, input int half);
  import "DPI-C" function void psram_read(input int addr, output int data);

  reg [23:0] saddr;
  reg [7:0] counter;
  reg [7:0] oper;
  reg rw; //0-read 1-write

  reg[7:0] buff;

  always @(posedge sck) begin
    if(!ce_n) counter<=counter+1;
    else counter<=0;

    if(counter==8) begin
      if(oper == 8'h38) rw<=1;
      else if(oper == 8'heb) rw<=0;
      else begin
        $display("Wrong code for psram");
        $finish;
      end
    end

    case(counter)
      8'd0: oper[0]<=dio[0];      
      8'd1: oper[1]<=dio[0];
      8'd2: oper[2]<=dio[0];      
      8'd3: oper[3]<=dio[0];
      8'd4: oper[4]<=dio[0];      
      8'd5: oper[5]<=dio[0];
      8'd6: oper[6]<=dio[0];      
      8'd7: oper[7]<=dio[0];
      8'd8: saddr[(23-4*(counter-8)):(23-4*(counter-8))] <= dio;
      8'd9: saddr[(23-4*(counter-8)):(23-4*(counter-8))] <= dio;
      8'd10: saddr[(23-4*(counter-8)):(23-4*(counter-8))] <= dio;
      8'd11: saddr[(23-4*(counter-8)):(23-4*(counter-8))] <= dio;
      8'd12: saddr[(23-4*(counter-8)):(23-4*(counter-8))] <= dio;
      8'd13: saddr[(23-4*(counter-8)):(23-4*(counter-8))] <= dio;
      default: begin
        if(rw) begin
          psram_write(saddr, dio, counter[0]);
          if(counter[0]) saddr<=saddr+1;
        end else if(counter>=20) begin
          if(counter[0]) begin
            saddr<=saddr+1;
          end else begin
            psram_read(saddr, buff);
          end
        end
      end
    endcase 
  end

  always @* begin
    if(counter < 20) begin
      dio = 4'bz;
    end else begin
      if(rw)begin
        dio = 4'bz;
      end else begin
        if(counter[0]) dio = buff[3:0];
        else dio = buff[7:4];
      end
    end
  end

endmodule
