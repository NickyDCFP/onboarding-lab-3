#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "VExercise2.h"

TEST_CASE("Exercise2 module test", "[Exercise2]")
{
    // Test a variety of inputs
    unsigned short state = 0xACE1;
    unsigned short in;
    unsigned short out;
    
    // Initialize the clock and reset signals
    bool clk = false;
    bool rst = true;
    
    // Cycle the clock a few times with reset asserted
    for(int i = 0; i < 5; i++)
    {
        // Call the Verilog module
        Exercise2(clk, rst, in, out);
        
        // Check if the output is zero
        REQUIRE(out == 0);
        
        // Toggle the clock signal
        clk = !clk;
    }
    
    // Deassert the reset signal
    rst = false;
    
    // Test a variety of inputs
    for(int i = 0; i < 100; i++)
    {
        // Generate a random input value
        in = rand() % 0xFFFF;
        
        // Call the Verilog module
        Exercise2(clk, rst, in, out);
        
        // Compute the expected output
        unsigned short expected_out = (state ^ in);
        
        // Compute the next state of the LFSR
        unsigned short bit = ((state >> 10) ^ (state >> 8) ^ (state >> 3) ^ (state >> 1)) & 1;
        state = (state >> 1) | (bit << 15);
        
        // Check if the output is correct
        REQUIRE(out == expected_out);
        
        // Toggle the clock signal
        clk = !clk;
    }
}
