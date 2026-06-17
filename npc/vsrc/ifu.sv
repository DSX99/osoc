module ifu(
    input logic [31:0] pc,
    output logic [31:0] opcode
);

import "DPI-C" function int read(int addr);

always_comb begin
    opcode = read(pc);
end

endmodule