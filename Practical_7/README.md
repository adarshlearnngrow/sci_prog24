# Practical 7

## Overview
This week, we focus on dynamically allocated arrays in C. We estimate the value of \( e \) using the series expansion and compare the estimates for different polynomial orders. The user inputs the polynomial order, and the program dynamically allocates an array to store the terms of the series. The estimates are evaluated from 1st to 15th order, with observations about the accuracy of higher-order polynomials.

## Output for e.c
```Shell
[sp52@sciprog Practical_7]$ gcc e.c -o e
[sp52@sciprog Practical_7]$ ./e
Please enter the order you wish to use
5
e is estimated as 2.7166666667, with difference -1.615162e-03
[sp52@sciprog Practical_7]$ ./e
Please enter the order you wish to use
10
e is estimated as 2.7182818011, with difference -2.731266e-08
```

## Output for pointers.c
```Shell
[sp52@sciprog Practical_7]$ vim pointers.c
[sp52@sciprog Practical_7]$ gcc pointers.c -o out
[sp52@sciprog Practical_7]$ ./out
1  1  1  1  1
```
