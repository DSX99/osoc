import pipeline_bus_pkg::id_to_ex_bus_t;
import pipeline_bus_pkg::ex_to_ls_bus_t;

module alu (
    input pipeline_bus_pkg::id_to_ex_bus_t bus_in,
    output pipeline_bus_pkg::ex_to_ls_bus_t bus_out,
    input logic valid_left, ready_right,
    output logic ready_left, valid_right
);

    //alu_op[7] = change rs2_val to imm
    //alu_op[6] = change rs1_val to pc
    //alu_op[5:3] branch or arithmetics (5:4): 11-atomic, 10-mult, 01-branch, 00-arithmetic, 3-extra (sub/srai)
    //alu_op[2:0] directly operation, alu_op[2:0] copied from instr



    logic [31:0] val1, val2;
    logic [$bits(bus_in)-1:0] unused_bus_in;

    assign val1 = bus_in.alu_op[6] ? bus_in.pc : bus_in.data_rs1;
    assign val2 = bus_in.alu_op[7] ? bus_in.imm : bus_in.data_rs2;

    always_comb begin
        valid_right = valid_left;
        ready_left = ready_right;
        unused_bus_in = bus_in;

        bus_out = '0;

        bus_out.alu_out = 0;
        bus_out.branch = 0;

        if(bus_in.alu_op[5:4]==2'b00) begin
            case(bus_in.alu_op[2:0])
                0: begin
                    if(bus_in.alu_op[3]) bus_out.alu_out = val1 - val2;
                    else bus_out.alu_out = val1 + val2;
                end 
                1: bus_out.alu_out = val1<<val2[4:0];
                2: bus_out.alu_out = {31'b0,$signed(val1)<$signed(val2)};
                3: bus_out.alu_out = {31'b0,val1<val2};
                4: bus_out.alu_out = val1^val2;
                5: begin
                    if(bus_in.alu_op[3]) bus_out.alu_out = $signed(val1) >>> val2[4:0];
                    else bus_out.alu_out = val1 >> val2[4:0];
                end 
                6: bus_out.alu_out = val1|val2;
                7: bus_out.alu_out = val1&val2;
            endcase
        end else if(bus_in.alu_op[5:4]==2'b01) begin
            bus_out.alu_out = val1 + val2;
            case(bus_in.alu_op[2:0])
                0: bus_out.branch = bus_in.data_rs1 == bus_in.data_rs2;
                1: bus_out.branch = bus_in.data_rs1 != bus_in.data_rs2;
                4: bus_out.branch = $signed(bus_in.data_rs1) <  $signed(bus_in.data_rs2);
                5: bus_out.branch = $signed(bus_in.data_rs1) >= $signed(bus_in.data_rs2);
                6: bus_out.branch = bus_in.data_rs1 <  bus_in.data_rs2;
                7: bus_out.branch = bus_in.data_rs1 >= bus_in.data_rs2;
            endcase
        end

        // propagate control signals
        bus_out.next_pc = bus_in.next_pc;
        bus_out.data_rs2 = bus_in.data_rs2;
        bus_out.lsu_we = bus_in.lsu_we;
        bus_out.lsu_re = bus_in.lsu_re;
        bus_out.lsu_oper = bus_in.lsu_oper;
        bus_out.rd = bus_in.rd;
        bus_out.mux_select = bus_in.mux_select;
        bus_out.mux_select_pc = bus_in.mux_select_pc;

    end

endmodule
