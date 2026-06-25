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

    typedef enum logic [2:0] {
        IDLE, WAIT_AR, WAIT_R, WAIT_AW_W, WAIT_RESP
    } lsu_state_t;
    lsu_state_t state;

    logic unused_branch;
    logic done_aw, done_w;
    logic lsu_active;

    // Is there an active memory operation requested by a valid instruction?
    assign lsu_active = valid_left && (bus_in.lsu_le || bus_in.lsu_we);

    always_comb begin
        // Default pipeline passthrough
        ready_left  = ready_right;
        valid_right = valid_left;

        // If the LSU is processing an operation, assert stall control
        if (lsu_active || state != IDLE) begin
            ready_left  = 0;
            valid_right = 0;
            
            // Critical Optimization: Unstall on the exact cycle AXI finishes
            if ((state == WAIT_R && rvalid) || (state == WAIT_RESP && bvalid)) begin
                ready_left  = ready_right;
                valid_right = 1;
            end
        end

        // Pass-through structures
        bus_out.alu_out       = bus_in.alu_out;
        bus_out.next_pc       = bus_in.next_pc;
        bus_out.csr_out       = bus_in.csr_out;
        bus_out.rd            = bus_in.rd;
        bus_out.mux_select    = bus_in.mux_select;
        bus_out.mux_select_pc = bus_in.mux_select_pc;
        unused_branch         = bus_in.branch | |rresp | |bresp;

        // Dynamic Write Strobe Decoding
        case(bus_in.lsu_oper) 
            3'b000:  wstrb = 4'b0001; // SB
            3'b001:  wstrb = 4'b0011; // SH
            3'b010:  wstrb = 4'b1111; // SW
            default: wstrb = 4'b0000;
        endcase
    end

    always_ff @(posedge clk) begin
        if(rst) begin
            state           <= IDLE;
            bus_out.lsu_out <= 0;
            arvalid         <= 0;
            araddr          <= 0;
            rready          <= 0;
            awaddr          <= 0;
            awvalid         <= 0;
            wdata           <= 0;
            wvalid          <= 0;
            bready          <= 1;
            done_aw         <= 0;
            done_w          <= 0;
        end else begin
            case(state)
                IDLE: begin
                    done_aw <= 0;
                    done_w  <= 0;
                    if(valid_left && ready_right) begin
                        if(bus_in.lsu_le) begin
                            arvalid <= 1;
                            araddr  <= bus_in.alu_out;
                            state   <= WAIT_AR;
                        end else if(bus_in.lsu_we) begin
                            awaddr  <= bus_in.alu_out;
                            awvalid <= 1;
                            wdata   <= bus_in.data_rs2;
                            wvalid  <= 1;
                            state   <= WAIT_AW_W;
                        end
                    end
                end

                WAIT_AR: begin
                    if(arready) begin 
                        arvalid <= 0;
                        rready  <= 1;
                        state   <= WAIT_R;
                    end
                end

                WAIT_R: begin
                    if(rvalid) begin
                        rready <= 0;
                        state  <= IDLE; // Jump directly back to IDLE for consecutive operations
                        
                        case(bus_in.lsu_oper)
                            3'd0: bus_out.lsu_out <= {{24{rdata[7]}}, rdata[7:0]};   // LB
                            3'd1: bus_out.lsu_out <= {{16{rdata[15]}}, rdata[15:0]}; // LH
                            3'd2: bus_out.lsu_out <= rdata[31:0];                    // LW
                            3'd4: bus_out.lsu_out <= {24'b0, rdata[7:0]};            // LBU
                            3'd5: bus_out.lsu_out <= {16'b0, rdata[15:0]};           // LHU
                            default: bus_out.lsu_out <= rdata;
                        endcase
                    end
                end

                WAIT_AW_W: begin
                    if(awready) begin
                        awvalid <= 0;
                        done_aw <= 1;
                    end
                    if(wready) begin
                        wvalid  <= 0;
                        done_w  <= 1;
                    end
                    
                    if((done_aw || awready) && (done_w || wready)) begin
                        state   <= WAIT_RESP;
                        done_aw <= 0;
                        done_w  <= 0;
                    end
                end

                WAIT_RESP: begin
                    if(bvalid) begin
                        state <= IDLE; // Jump directly back to IDLE for consecutive operations
                    end
                end
                
                default: state <= IDLE;
            endcase
        end
    end

endmodule