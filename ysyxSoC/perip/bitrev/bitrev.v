module bitrev (
  input wire sck,
  input wire ss,
  input wire mosi,
  output reg miso
);

  reg buff [6:0];
  reg count [3:0];

  always @(posedge sck) begin
    miso <= 1;
    if(~ss) begin
      if(count<7)begin
        buff <= {mosi, buff[6:1]};
      end else if(count==7)begin
        miso <= mosi;
      end else begin
        buff <= buff{buff[5:1],1'b0};
        miso <= buff[6];
      end
      count<=count+1;
    end
  end

endmodule
