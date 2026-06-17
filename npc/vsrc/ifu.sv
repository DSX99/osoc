module ifu(
    input logic [31:0] pc,
    output logic [31:0] opcode
);

import "DPI-C" function int instread(int addr);

always_comb begin
    opcode = instread(pc);
end

endmodule