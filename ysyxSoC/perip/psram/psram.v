module psram(
  input sck,
  input ce_n,
  inout wire [3:0] dio
);

  import "DPI-C" function void psram_write(input int addr, input int data, input int half);
  import "DPI-C" function void psram_read(input int addr, output int data);

  reg [23:0] saddr;
  reg [7:0] counter;
  reg [7:0] oper;
  reg rw; //0-read 1-write
  reg set;

  reg[7:0] buff;

  always @(posedge sck or posedge ce_n) begin
    if(ce_n) counter<=0;
    else counter<=counter+1;

    if(counter==2) begin
      if(oper == 8'h38) rw<=1;
      if(oper == 8'heb) rw<=0;
    end

    if(counter==8) begin
      if(oper == 8'h35) set<=1;
      else if(oper != 8'h38 && oper != 8'heb)begin
        $display("Wrong code for psram %x",oper);
        $finish;
      end
    end
    if(!set) begin
      case(counter)
      8'd0: oper[7]<=dio[0];      
      8'd1: oper[6]<=dio[0];
      8'd2: oper[5]<=dio[0];      
      8'd3: oper[4]<=dio[0];
      8'd4: oper[3]<=dio[0];      
      8'd5: oper[2]<=dio[0];
      8'd6: oper[1]<=dio[0];      
      8'd7: oper[0]<=dio[0];
      default: ;
    endcase 
    end else begin
      case(counter)
      8'd0: oper[7:4]<=dio;      
      8'd1: oper[3:0]<=dio;
      8'd2: saddr[23:20] <= dio;
      8'd3: saddr[19:16] <= dio;
      8'd4: saddr[15:12] <= dio;
      8'd5: saddr[11:8] <= dio;
      8'd6: saddr[7:4] <= dio;
      8'd7: saddr[3:0] <= dio;
      default: begin
        if(rw && !ce_n) begin
          psram_write({8'b0,saddr}, {28'b0,dio}, {31'b0,counter[0]});
          if(counter[0]) saddr<=saddr+1;
        end else if(counter>=14) begin
          if(!ce_n) begin
            if(counter[0]) begin
              saddr<=saddr+1;
            end else begin
              psram_read({8'b0,saddr}, {24'b0,buff});
            end
          end
        end
      end
    endcase 
    end
  end
                          // change zeros here to z's when moving to icarus
  assign dio =  (counter < 14 || rw) ? 4'b0 :
                (counter[0])         ? buff[3:0] : buff[7:4];

endmodule
