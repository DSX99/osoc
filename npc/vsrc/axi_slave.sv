module axi_slave (
    input  logic        clk,
    input  logic        rst,
    
    // Write Address Channel (AW)
    input  logic [31:0] awaddr,  
    input  logic        awvalid,
    output logic        awready,
    
    // Write Data Channel (W)
    input  logic [31:0] wdata,   
    input  logic        wvalid,
    output logic        wready,
    input  logic [3:0]  wstrb,
    
    // Write Response Channel (B)
    output logic [1:0]  bresp,
    output logic        bvalid,
    input  logic        bready,
    
    // Read Address Channel (AR)
    input  logic [31:0] araddr,  
    input  logic        arvalid,
    output logic        arready,
    
    // Read Data Channel (R)
    output logic [31:0] rdata,   
    output logic [1:0]  rresp,
    output logic        rvalid,
    input  logic        rready
);

    import "DPI-C" function void memwrite(int addr, int data, int idk);
    import "DPI-C" function int  memread(int addr);

    // =========================================================================
    // READ CHANNEL (1 IPC Pipelined)
    // =========================================================================
    // We are ready to accept a new read address if:
    // 1. We don't currently have valid data waiting to be read (!rvalid)
    // 2. OR the master is consuming the valid data exactly on this cycle (rready)
    assign arready = ~rvalid | rready;

    always_ff @(posedge clk) begin
        if (rst) begin
            rdata  <= 32'b0;
            rresp  <= 2'b00;
            rvalid <= 1'b0;
        end else begin
            // If the master sends an address and we are ready, grab data immediately
            if (arvalid && arready) begin
                rdata  <= memread(araddr);
                rvalid <= 1'b1;
                rresp  <= 2'b00; // OKAY response
            end 
            // If master read the data but didn't send a new address, clear valid
            else if (rvalid && rready) begin
                rvalid <= 1'b0;
            end
        end
    end

    // =========================================================================
    // WRITE CHANNEL (1 IPC Decoupled)
    // =========================================================================
    logic        aw_latched;
    logic [31:0] awaddr_reg;

    // We can accept new write commands as long as the Response (B) channel 
    // isn't backed up waiting for the master to acknowledge it.
    logic b_channel_ready;
    assign b_channel_ready = ~bvalid | bready;

    // Ready for address if B channel is clear, and we aren't hoarding an old address
    assign awready = b_channel_ready && (~aw_latched | wvalid);
    // Ready for data if B channel is clear, and we actually have an address to write to
    assign wready  = b_channel_ready && (awvalid | aw_latched);

    always_ff @(posedge clk) begin
        if (rst) begin
            bvalid     <= 1'b0;
            bresp      <= 2'b00;
            aw_latched <= 1'b0;
            awaddr_reg <= 32'b0;
        end else begin
            // 1. Clear BVALID if the master accepted it
            if (bvalid && bready) begin
                bvalid <= 1'b0;
            end

            // 2. Process Write: If we have both Address and Data THIS cycle
            if (wvalid && wready) begin
                logic [31:0] target_addr;
                
                // Use the latched address if AW arrived a cycle early, else use current AW
                target_addr = aw_latched ? awaddr_reg : awaddr;
                
                // Fire DPI-C write
                memwrite(target_addr, wdata, {28'b0, wstrb});
                
                bvalid     <= 1'b1;
                bresp      <= 2'b00; // OKAY response
                aw_latched <= 1'b0;  // Clear latched state
            end 
            // 3. Latch Address: If AW arrives early without W data, save it
            else if (awvalid && awready) begin
                aw_latched <= 1'b1;
                awaddr_reg <= awaddr;
            end
        end
    end

endmodule