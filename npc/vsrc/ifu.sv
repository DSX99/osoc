`include "pipeline_bus_pkg.sv"
import pipeline_bus_pkg::*;

module ifu(
    input logic [31:0] pc,
    output if_to_id_bus_t bus_out,
    output logic valid,
    input logic ready
);

    import "DPI-C" function int memread(int addr);

    always_comb begin
        bus_out.pc = pc;
        bus_out.next_pc = pc + 4;
        bus_out.opcode = memread(pc);
        valid = 1'b1;
    end

endmodule