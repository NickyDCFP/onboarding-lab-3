# Week 3 Lab: Verification

## Exercise 2:
I used random testing for exercise 2. There weren't any real "edge cases" to test, and exhaustive testing wasn't something that I could do. So, instead, I just initiated the register with a random value and ran it for a thousand iterations. I could've used one or multiple set values for init to initialize the module, but I felt more secure using random values, since I could just run it many times. Additionally, the ChatGPT output for this problem used random numbers, so it was easy to modify the code and use random numbers as well.

## Exercise 4: 
In order to test a Don't Care, you must keep all other variables constant and change only the Don't Care variable, ensuring that the output also doesn't change. In order to truly make sure that it has no effect on output, you must try every value for the Don't Care against every combination of values of the other variables. 