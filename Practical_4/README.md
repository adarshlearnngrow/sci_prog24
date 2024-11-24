## This is Practical 4

## Overview
This week, we build on concepts from last week’s practical and this week’s lectures to create programs that calculate the values of \( \tan(x) \) and approximate the area under the curve using the Trapezoidal Rule with C functions.


```Shell
[sp52@sciprog practical04]$ gcc trap.c -o out
[sp52@sciprog practical04]$ ./out
TanArr[0] = 0.000000
TanArr[1] = 0.087489
TanArr[2] = 0.176327
TanArr[3] = 0.267949
TanArr[4] = 0.363970
TanArr[5] = 0.466308
TanArr[6] = 0.577350
TanArr[7] = 0.700208
TanArr[8] = 0.839100
TanArr[9] = 1.000000
TanArr[10] = 1.191754
TanArr[11] = 1.428148

Initial area (sum at x(0) and x(12)) = 0.000000
The value of the sum after the loop is: 14.197204

Trapezoidal result is: 0.619470
Real result is: 0.693147
```