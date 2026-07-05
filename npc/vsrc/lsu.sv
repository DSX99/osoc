module lsu (
    input logic clk,
    input logic rst,

    // =========================================================================
    // Explicit Inputs (from pipeline_bus_pkg::ex_to_ls_bus_t)
    // =========================================================================
    input logic [31:0] bus_in_next_pc,       // Carried through for JAL/JALR return addresses
    input logic [31:0] bus_in_alu_out,       // Computed ALU result / Memory Address for LSU
    input logic [31:0] bus_in_data_rs2,      // Data to be written to memory for store instructions
    input logic [31:0] bus_in_csr_out,       // Data read from CSR register file
    input logic        bus_in_lsu_we,        // Memory Write Enable
    input logic        bus_in_lsu_re,        // Memory Read Enable
    input logic [2:0]  bus_in_lsu_oper,      // LSU width/sign extension code
    input logic [4:0]  bus_in_rd,            // Destination register address
    input logic [1:0]  bus_in_mux_select,    // Selector for Write-Back data multiplexer
    input logic        bus_in_mux_select_pc, // selector for pc write
    input logic        bus_in_branch,        // Branch indicator produced by ALU

    // =========================================================================
    // Explicit Outputs (to pipeline_bus_pkg::ls_to_wb_bus_t)
    // =========================================================================
    output logic [31:0] bus_out_alu_out,       // ALU result
    output logic [31:0] bus_out_lsu_out,       // Data loaded from memory
    output logic [31:0] bus_out_next_pc,       // Return address (PC + 4) for JAL/JALR
    output logic [31:0] bus_out_csr_out,       // Data read from system CSRs
    output logic [4:0]  bus_out_rd,            // Destination register address
    output logic [1:0]  bus_out_mux_select,    // 0: ALU, 1: LSU, 2: next_pc, 3: csr_out
    output logic        bus_out_mux_select_pc, // selector for pc write

    // Handshake control signals
    input  logic valid_left, ready_right,
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
    output logic        bready,

    // Control/Fixes
    output logic        lsu_device_call
);

    // LB 0, LH 1, LW 2, LBU 3, LHU 4, SB 5, SH 6, SW 7

    logic unused_branch;
    logic done_r, done_w;

    always_comb begin
        lsu_device_call = 0;
        if ((((bus_in_alu_out >= 32'h10000000) && (bus_in_alu_out < 32'h10001000)) || 1'b0) && (bus_in_lsu_we || bus_in_lsu_re)) begin
            lsu_device_call = 1;
        end

        unused_branch = bus_in_branch | |rresp | |bresp;

        bus_out_alu_out       = 0;
        bus_out_next_pc       = 0;
        bus_out_csr_out       = 0;
        bus_out_rd            = 0;
        bus_out_mux_select    = 0;
        bus_out_mux_select_pc = 0;

        if (valid_left && ready_right) begin 
            bus_out_alu_out       = bus_in_alu_out;
            bus_out_next_pc       = bus_in_next_pc;
            bus_out_csr_out       = bus_in_csr_out;
            bus_out_rd            = bus_in_rd;
            bus_out_mux_select    = bus_in_mux_select;
            bus_out_mux_select_pc = bus_in_mux_select_pc;
        end 


        arvalid = 0;
        araddr  = 0;
        rready  = 0;
        bus_out_lsu_out = 0;
        done_r = 0;

        if(!rst) begin
        //read
        if(bus_in_lsu_re) begin
        case(lsu_r)
            IDLE_R: begin
                if (bus_in_lsu_re && valid_left) begin
                    arvalid = 1;
                    araddr  = bus_in_alu_out;
                end
            end
            WAIT_AR: begin
                arvalid = 1;
                araddr  = bus_in_alu_out;
                
            end
            WAIT_R: begin
                rready  = 1;

                if (rvalid && rready) begin
                    case (bus_in_lsu_oper)
                        0: begin // LB
                            case (bus_in_alu_out[1:0])
                                2'b00: bus_out_lsu_out = {{24{rdata[7]}}, rdata[7:0]};
                                2'b01: bus_out_lsu_out = {{24{rdata[15]}}, rdata[15:8]};
                                2'b10: bus_out_lsu_out = {{24{rdata[23]}}, rdata[23:16]};
                                2'b11: bus_out_lsu_out = {{24{rdata[31]}}, rdata[31:24]};
                            endcase
                        end 
                        1: begin // LH
                            case (bus_in_alu_out[1])
                                1'b0: bus_out_lsu_out = {{16{rdata[15]}}, rdata[15:0]};
                                1'b1: bus_out_lsu_out = {{16{rdata[31]}}, rdata[31:16]};
                            endcase
                        end 
                        2: begin // LW
                            bus_out_lsu_out = rdata[31:0];
                        end 
                        4: begin // LBU
                            case (bus_in_alu_out[1:0])
                                2'b00: bus_out_lsu_out = {{24'b0}, rdata[7:0]};
                                2'b01: bus_out_lsu_out = {{24'b0}, rdata[15:8]};
                                2'b10: bus_out_lsu_out = {{24'b0}, rdata[23:16]};
                                2'b11: bus_out_lsu_out = {{24'b0}, rdata[31:24]};
                            endcase
                        end 
                        5: begin // LHU
                            case (bus_in_alu_out[1])
                                1'b0: bus_out_lsu_out = {{16'b0}, rdata[15:0]};
                                1'b1: bus_out_lsu_out = {{16'b0}, rdata[31:16]};
                            endcase
                        end 
                    endcase
                    done_r = 1;
                end
            end
        endcase
        end


        awaddr  = 0;
        awvalid = 0;
        wdata = 0;
        wvalid = 0;
        done_w = 0;
        //write
        if(bus_in_lsu_we) begin
        case(lsu_w)
            IDLE_W: begin
                if (bus_in_lsu_we && valid_left) begin
                    awaddr  = bus_in_alu_out; 
                    awvalid = 1;
                    wdata   = (bus_in_data_rs2 << (bus_in_alu_out[1:0] * 8));
                    wvalid  = 1;
                end
            end
            WAIT_W: begin
                awaddr  = bus_in_alu_out; 
                awvalid = 1;
                wdata   = (bus_in_data_rs2 << (bus_in_alu_out[1:0] * 8));
                wvalid  = 1;
            end
            WAIT_WRESP: begin
                done_w=1;
            end
        endcase
        end
    end

    //read
    
    typedef enum {
        IDLE_R, WAIT_AR, WAIT_R
    } LSU_state_R_t;
    LSU_state_R_t lsu_r;

    always_ff @(posedge clk) begin
        if (rst) begin
            lsu_r           <= IDLE_R;
        end else begin
            case (lsu_r)
                IDLE_R: begin
                    if (bus_in_lsu_re && valid_left) begin
                        lsu_r   <= WAIT_AR;
                    end
                end
                WAIT_AR: begin
                    if (arready && arvalid) begin
                        lsu_r   <= WAIT_R;
                    end
                end
                WAIT_R: begin
                    if (rvalid && rready) begin
                        lsu_r <= IDLE_R;
                    end
                end
                default: ;
            endcase
        end
    end

        valid_right   = valid_left && (!bus_in_lsu_re || done_r) && (!bus_in_lsu_we || done_w); 
        ready_left    = ready_right && (!bus_in_lsu_re || done_r) && (!bus_in_lsu_we || done_w);

    end

    //store
    logic done_aw, done_wdata, done_b, done_commit;

    typedef enum {
        IDLE_W, WAIT_W, WAIT_WRESP
    } LSU_state_w_t;
    LSU_state_w_t lsu_w;

    always_comb begin
        case (bus_in_lsu_oper) 
            3'b000:  wstrb = (4'b0001 << bus_in_alu_out[1:0]);
            3'b001:  wstrb = (4'b0011 << bus_in_alu_out[1:0]);
            3'b010:  wstrb = 4'b1111;
            default: wstrb = 0;
        endcase
    end

    always_ff @(posedge clk) begin
        if (rst) begin
            done_aw     <= 0;
            done_wdata  <= 0;
            done_b      <= 0;
            done_commit <= 0;
            lsu_w       <= IDLE_W;
        end else begin
            case (lsu_w)
                IDLE_W: begin
                    if (bus_in_lsu_we && valid_left) begin
                        lsu_w   <= WAIT_W;
                    end
                end
                WAIT_W: begin
                    if (wready) begin 
                        done_wdata <= 1;
                    end
                    if (awready) begin
                        done_aw <= 1;
                    end
                    if ((done_aw || awready) && (done_wdata || wready)) begin
                        done_aw<=0;
                        done_wdata<=0;
                        lsu_w <= WAIT_WRESP;
                    end
                end
                WAIT_WRESP: begin
                    if (bvalid) done_b<=1;

                    if(ready_right) done_commit<=1;
                    
                    if((done_b || bvalid) && (done_commit || ready_right)) begin
                        lsu_w  <= IDLE_W;
                        done_commit<=0;
                        done_b<=0;
                    end 
                end
                default: ;
            endcase
        end
    end

endmodule