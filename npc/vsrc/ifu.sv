import pipeline_bus_pkg::if_to_id_bus_t;

module ifu(
    input logic [31:0] pc,
    input logic [31:0] next_pc,
    output pipeline_bus_pkg::if_to_id_bus_t bus_out,
    output logic valid,
    input logic ready
);

    import "DPI-C" function int memread(int addr);

    always_comb begin
        bus_out = 0;
        valid = 0;
        if(ready) begin
            bus_out.pc = pc;
            bus_out.next_pc = next_pc;
            bus_out.opcode = memread(pc);
            valid = 1'b1;
        end
    end

endmodule