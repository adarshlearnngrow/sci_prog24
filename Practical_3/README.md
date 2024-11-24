## This is Practical 3
This program approximates the integral of \( \tan(x) \) from 0 to \( \pi/3 \) using the Trapezoidal Rule, compares it to \( \ln(2) \), and calculates the absolute and relative errors.

SSH output:
```Shell
[sp52@sciprog practical02]$ gcc trap.c -o out
[sp52@sciprog practical02]$ ./out
The value of sum before loop: 1.732051
I am even and here's the value of sum: 1.907028
I am even and here's the value of sum: 2.795581
I am even and here's the value of sum: 4.456137
I am even and here's the value of sum: 7.011252
I am even and here's the value of sum: 10.689451
I am even and here's the value of sum: 15.929254
The value of sum after loop: 15.929254
The final value of the sums is: 0.695045
The actual value is: 0.693147
abs_diff = 0.001898
rel_diff = 0.002738
```
