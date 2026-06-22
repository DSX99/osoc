module ifu(
    input logic clk,
    input logic [31:0] pc,
    output logic [31:0] opcode
);

import "DPI-C" function int memread(int addr);

always_ff @(posedge clk) begin
    opcode <= memread(pc);
end

endmodule