module Exercise2(
    input clk,      // Clock signal
    input rst,      // Reset signal
    input [15:0] in,  // Input signal
    output [15:0] out // Output signal
);

reg [15:0] state = 16'hACE1; // Initialize the LFSR state to a non-zero value

assign out = (state ^ in); // Compute the output

always @(negedge clk) // Negative-edge triggered clock
begin
    if(rst) // Reset the LFSR if the reset signal is asserted
        state <= 16'hACE1;
    else // Compute the next state of the LFSR
        state <= {state[14:0], (state[10] ^ state[8] ^ state[3] ^ state[1])};
end

endmodule
