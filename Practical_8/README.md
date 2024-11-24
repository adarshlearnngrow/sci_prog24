# Practical 8

## Overview
This program calculates the Greatest Common Divisor (GCD) of two integers using both iterative and recursive methods. The GCD is the largest positive integer that divides both numbers without leaving a remainder.

### Positive test cases 
```Shell
[sp52@sciprog Practical_8]$ gcc gcd.c -o gcd
[sp52@sciprog Practical_8]$ ./gcd
Please enter two positive integers:
6
36
IterativeGCD(6, 36)=6
RecursiveGCD(6, 36)=6
```
### Negative test cases 
```Shell
[sp52@sciprog Practical_8]$ ./gcd
Please enter two positive integers:
10
-5
Please enter positive intergers!
```

## GCD by using random number
```Shell
[sp52@sciprog Practical_8]$ gcc -o gcd gcd_random.o main.o
[sp52@sciprog Practical_8]$ ./gcd
IterativeGCD(14, 16)=2
RecursiveGCD(14, 16)=2
```
