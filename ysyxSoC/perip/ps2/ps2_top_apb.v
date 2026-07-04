module ps2_top_apb(
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

  input         ps2_clk,
  input         ps2_data
);


  reg [9:0] buffer; // ps2_data bits
  reg [3:0] count;  // count ps2_data bits
  reg prev;
  reg [7:0] out;
  
  assign in_prdata = (in_paddr[3:0] == 4'h0) ? {24'b0,out} : 32'h0;
  assign in_pslverr = 0;
  assign in_pready = (in_psel && in_penable) ? 1'b1 : 1'b0;

  always @(posedge clock) begin
    prev<=ps2_clk;
  end

  wire sampling = prev && !ps2_clk;

  always @(posedge clock) begin
    if (reset) begin // reset
        count <= 0;
    end else begin
      if (sampling) begin
        if (count == 4'd10) begin
          if ((buffer[0] == 0) && (ps2_data) && (^buffer[9:1])) begin
            count <= 0;
            out <= buffer[8:1];
          end else begin
            buffer[count] <= ps2_data;
            count <= count + 3'b1;
          end
        end
      end
    end
  end

  always @(posedge clock) begin
    if(reset) begin
      out <= 0;
    end 
  end

endmodule
