I used ChatGPT a decent amount for this lab. 

For exercise 2, I threw a lot of queries at ChatGPT. I found that it got better and better as I made my queries more and more specific, but I inevitably flew too close to the sun, and it started getting thrown off track, using `verilated`, etc. There was definitely a decent amount in the output that I had to ignore, but for this kind of thing, I find it more convenient. That is, I want to use my brainpower making important decisions like how I can do testing in an efficient way instead of building the code from the ground up. It gives me a general outline, so I can just make quick alterations and tweaks, and it's easier for me.

This prompt gave me the best response:
```
Write a C++ test bench that uses catch2/catch_test_macros.hpp to test a verilog module named Exercise2 from a header named
VExercise2.h containing a 16-bit fibonacci linear feedback shift register module that operates on the negative edge of a clock with
a reset bit with taps at bits 10, 8, 3, 1 against a variety of inputs.
```
I was really surprised, because it actually tried to write the Verilog module as well.
Here's the response it gave me.
```
Sure, here's an example of how you can write a C++ test bench to test a Verilog module named "Exercise2" in a header named
"VExercise2.h" containing a 16-bit Fibonacci linear feedback shift register with taps at bits 10, 8, 3, 1 that operates on the
negative edge of a clock with a reset bit using the Catch2 testing framework. This test bench will test the module against a
variety of inputs.

Assuming the header file "VExercise2.h" contains the following code for the Verilog module:
```
[Link to Module](Exercise2_GPT.sv)
```
The test bench would look something like this:
```
[Link to Test Bench](exercise2_GPT.cpp)
```
In this test bench, we include the header file "VExercise2.h" that contains the "Exercise2" module. We then define a Catch2 test
case called "Exercise2 module test" that will test the module. In this test case, we first cycle the clock signal a few times with
the reset signal asserted to ensure that the LFSR is properly reset. We then test a variety of inputs by generating a random input.
```

Overall, I was really surprised that ChatGPT was able to use all of that information so well, and that test bench proved extremely helpful in getting the exercise done. I'm not sure if it'd be so helpful with writing SV, just since there's not as much code available, but I think it'd still be somewhat helpful. I also found it pretty hilarious that it used `0xACE1` for the state, since that was pulled straight from the Wikipedia page for LFSRs. 
