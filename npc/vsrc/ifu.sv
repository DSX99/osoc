module ifu(
    input logic rst,
    input logic clk,
    input logic [31:0] pc,
    output logic [31:0] opcode
);

import "DPI-C" function int memread(int addr);

initial begin
    opcode = memread(32'h80000000);
end

always_ff @(posedge clk) begin
    if(!rst) opcode = memread(pc);
end

endmodule