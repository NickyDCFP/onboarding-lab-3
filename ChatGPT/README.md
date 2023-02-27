I used ChatGPT a decent amount for this lab. 

For problem 2, I threw a lot of queries at ChatGPT. I found that it got better and better as I made my queries more and more specific, but I inevitably flew too close to the sun, and it started getting thrown off track, using `verilated`, etc.
This prompt gave me the best response:
```
Write a C++ test bench that uses catch2/catch_test_macros.hpp to test a verilog module named Exercise2 from a header named
VExercise2.h containing a 16-bit fibonacci linear feedback shift register module that operates on the negative edge of a clock with
a reset bit with taps at bits 10, 8, 3, 1 against a variety of inputs.
```
I was really surprised, because ***it actually wrote the Verilog module as well.***
Here's the response it gave me.
