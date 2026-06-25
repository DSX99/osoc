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
        IDLE, WAIT_AR, WAIT_R
    } IFU_state_t;
    IFU_state_t lsu_l;

    typedef enum{
        IDLE_S, WAIT, WAIT_RESP
    } IFU_state_s_t;
    IFU_state_s_t lsu_s;

    logic unused_branch;
    logic ready;
    logic prev_le;

    always_comb begin
        valid_right = valid_left && !(!prev_le && bus_in.lsu_le) && ready;
        ready_left = ready_right && !(!prev_le && bus_in.lsu_le) && ready;
        unused_branch = bus_in.branch | |rresp | |bresp;

        bus_out.alu_out = 0;
        bus_out.next_pc = 0;
        bus_out.csr_out = 0;
        bus_out.rd = 0;
        bus_out.mux_select = 0;
        bus_out.mux_select_pc = 0;


        if(valid_left && ready_right) begin //should it be here or better to take out for future?                   !!check when doing pipeline                        
            bus_out.alu_out = bus_in.alu_out;
            bus_out.next_pc = bus_in.next_pc;
            bus_out.csr_out = bus_in.csr_out;
            bus_out.rd = bus_in.rd;
            bus_out.mux_select = bus_in.mux_select;
            bus_out.mux_select_pc = bus_in.mux_select_pc;
        end 
    end

//reading
always_ff @(posedge clk) begin
    prev_le<=bus_in.lsu_le;
    if(rst) begin
        bus_out.lsu_out<=0;
        arvalid<=0;
        araddr<=0;
        rready<=0;
        ready<=0;
    end else begin
        if(ready_right && valid_left) begin
            case(lsu_l)
                IDLE:begin
                    if(bus_in.lsu_le) begin
                        arvalid<=1;
                        araddr<=bus_in.alu_out;
                        lsu_l<=WAIT_AR;
                        ready<=0;
                    end
                end
                WAIT_AR:begin
                    if(arready)begin 
                        arvalid<=0;
                        rready<=1;
                        lsu_l<=WAIT_R;
                    end
                end
                WAIT_R:begin
                    if(rvalid) begin
                        lsu_l<=IDLE;
                        case(bus_in.lsu_oper)
                            0: begin //LB
                                bus_out.lsu_out <= {{24{rdata[7]}},rdata[7:0]};
                            end 
                            1: begin //LH
                                bus_out.lsu_out <= {{16{rdata[15]}},rdata[15:0]};
                            end 
                            2: begin //LW
                                bus_out.lsu_out <= rdata[31:0];
                            end 
                            4: begin //LBU
                                bus_out.lsu_out <= {24'b0,rdata[7:0]};
                            end 
                            5: begin //LHU
                                bus_out.lsu_out <= {16'b0,rdata[15:0]};
                            end 
                        endcase
                        rready<=0;
                        ready<=1;
                    end
                end
            endcase
        end
    end
end

logic done_aw, done_w;

//writing

always_comb begin
    case(bus_in.lsu_oper) 
        3'b000: wstrb=4'b0001;
        3'b001: wstrb=4'b0011;
        3'b010: wstrb=4'b1111;
        default: wstrb=0;
    endcase
end

always_ff @(posedge clk) begin
    if(rst) begin
        bready<=1;
        wdata<=0;
        wvalid<=0;
        awaddr<=0;
        awvalid<=0;
    end else begin
        if(ready_right && valid_left) begin
            case(lsu_s)
                IDLE_S:begin
                    if(bus_in.lsu_we) begin
                        awaddr<=bus_in.alu_out;
                        awvalid<=1;
                        wdata<=bus_in.data_rs2;
                        wvalid<=1;
                        lsu_s<=WAIT;
                        ready<=0;
                    end
                end
                WAIT:begin
                    if(wready)begin 
                        wvalid<=0;
                        done_w<=1;
                    end
                    if(awready) begin
                        awvalid<=0;
                        done_aw<=1;
                    end
                    if((done_aw || awready) && (done_w || wready)) lsu_s <= WAIT_RESP;
                end
                WAIT_RESP:begin
                    done_aw<=0;
                    done_w<=0;
                    if(bvalid) begin
                        lsu_s<=IDLE_S;
                        ready<=1;
                    end
                end
            endcase
        end
    end
end


endmodule