import pipeline_bus_pkg::ex_to_ls_bus_t;
import pipeline_bus_pkg::ls_to_wb_bus_t;

module lsu(
    input logic clk,
    input logic rst,
    input pipeline_bus_pkg::ex_to_ls_bus_t bus_in,
    output pipeline_bus_pkg::ls_to_wb_bus_t bus_out,
    input logic valid_left, ready_right,
    output logic ready_left, valid_right,

    // Read Address Channel (AR)
    output logic [31:0] araddr,
    output logic        arvalid,
    input  logic        arready,

    // Read Data Channel (R)
    input  logic [31:0] rdata,
    input  logic [1:0]  rresp,
    input  logic        rvalid,
    output logic        rready,

    // Write Address Channel (AW)
    output logic [31:0] awaddr,
    output logic        awvalid,
    input  logic        awready,

    // Write Data Channel (W)
    output logic [31:0] wdata,
    output logic [3:0]  wstrb,
    output logic        wvalid,
    input  logic        wready,

    // Write Response Channel (B)
    input  logic [1:0]  bresp,
    input  logic        bvalid,
    output logic        bready
);

    // LB 0
    // LH 1
    // LW 2
    // LBU 3
    // LHU 4
    // SB 5
    // SH 6
    // SW 7

    typedef enum{
        IDLE, WAIT_AR, WAIT_R, AWAIT
    } IFU_state_t;
    IFU_state_t lsu_l;

    typedef enum{
        IDLE_S, WAIT, WAIT_RESP, AWAIT_S
    } IFU_state_s_t;
    IFU_state_s_t write_state;

    logic unused_branch;
    logic ready;
    logic prev_le, prev_se;

    always_comb begin
        valid_right = valid_left && ready && !(~prev_le && bus_in.lsu_le) && !(~prev_se && bus_in.lsu_se);
        ready_left = ready;

        bus_out.alu_out = bus_in.alu_out;
        bus_out.next_pc = bus_in.next_pc;
        bus_out.csr_out = bus_in.csr_out;
        bus_out.rd = bus_in.rd;
        bus_out.mux_select = bus_in.mux_select;
        bus_out.mux_select_pc = bus_in.mux_select_pc;

        unused_branch = bus_in.branch | |rresp | |bresp;
    end

//reading
always_ff @(posedge clk) begin
    prev_le<=bus_in.lsu_le;
    prev_se<=bus_in.lsu_se;
    if(rst) begin
        bus_out.lsu_out <= 32'h0;
        arvalid <= 1'b0;
        araddr <= 32'h0;
        rready <= 1'b0;
        ready <= 1'b1;
        lsu_l <= IDLE;
    end else begin
        case(lsu_l)
            IDLE: begin
                if (ready_right && valid_left && bus_in.lsu_le) begin
                    araddr <= bus_in.alu_out;
                    arvalid <= 1'b1;
                    ready <= 1'b0;
                    lsu_l <= WAIT_AR;
                end
            end
            WAIT_AR: begin
                if (arready && arvalid) begin
                    arvalid <= 1'b0;
                    rready <= 1'b1;
                    lsu_l <= WAIT_R;
                end
            end
            WAIT_R: begin
                if (rvalid) begin
                    rready <= 1'b0;
                    lsu_l <= AWAIT;
                    case (bus_in.lsu_oper)
                        3'b000: bus_out.lsu_out <= {{24{rdata[7]}}, rdata[7:0]};
                        3'b001: bus_out.lsu_out <= {{16{rdata[15]}}, rdata[15:0]};
                        3'b010: bus_out.lsu_out <= rdata;
                        3'b011: bus_out.lsu_out <= {24'b0, rdata[7:0]};
                        3'b100: bus_out.lsu_out <= {16'b0, rdata[15:0]};
                        default: bus_out.lsu_out <= 32'h0;
                    endcase
                    ready <= 1'b1;
                end
            end
            AWAIT: begin
                if (ready_right && valid_left) begin
                    lsu_l <= IDLE;
                end
            end
        endcase
    end
end


logic write_aw_done, write_w_done;

always_comb begin
    case(bus_in.lsu_oper)
        3'b000: wstrb = 4'b0001;
        3'b001: wstrb = 4'b0011;
        3'b010: wstrb = 4'b1111;
        default: wstrb = 4'b0000;
    endcase
end

always_ff @(posedge clk) begin
    if(rst) begin
        bready <= 1'b1;
        wdata <= 32'h0;
        wvalid <= 1'b0;
        awaddr <= 32'h0;
        awvalid <= 1'b0;
        write_state <= IDLE_S;
        write_aw_done <= 1'b0;
        write_w_done <= 1'b0;
        ready <= 1'b1;
    end else begin
        case (write_state)
            IDLE_S: begin
                if (ready_right && valid_left && bus_in.lsu_we) begin
                    awaddr <= bus_in.alu_out;
                    awvalid <= 1'b1;
                    wdata <= bus_in.data_rs2;
                    wvalid <= 1'b1;
                    write_aw_done <= 1'b0;
                    write_w_done <= 1'b0;
                    ready <= 1'b0;
                    write_state <= WAIT;
                end
            end
            WAIT: begin
                if (awready && awvalid) begin
                    awvalid <= 1'b0;
                    write_aw_done <= 1'b1;
                end
                if (wready && wvalid) begin
                    wvalid <= 1'b0;
                    write_w_done <= 1'b1;
                end
                if ((write_aw_done || !bus_in.lsu_we) && (write_w_done || !bus_in.lsu_we)) begin
                    write_state <= WAIT_RESP;
                end
            end
            WAIT_RESP: begin
                if (bvalid) begin
                    write_state <= IDLE_S;
                    ready <= 1'b1;
                end
            end
            AWAIT_S: begin
                if (ready_right && valid_left) begin
                    write_state <= IDLE_S;
                end
            end
        endcase
    end
end


endmodule