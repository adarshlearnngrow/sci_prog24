#include <stdio.h>
#include <math.h>
#include <string.h>
#define N 12

float TanArr[N+1];


float degtorad(float degarg);
float traprule();



int main() {
    int i;
    float a = 0.0, b_deg = 60.0;
    float deg;

    // Calculate tan values at discrete points and store in TanArr
    for (i = 0; i < N; i++) { 
        deg = i * 5.0;
        TanArr[i] = tan(degtorad(deg)); 
        printf("TanArr[%d] = %f\n", i, TanArr[i]);
    }

    float area = traprule();

    // Approximated result
    printf("\nTrapezoidal result is: %f\n", area);
    // Actual result using ln(2)
    printf("Real result is: %f\n", log(2.0));

    return 0;
}

float degtorad(float degarg) {
    float pi = 3.1415927;
    return((pi * degarg)/180.0);
}

float traprule(){
    float area;
    int i;

    area = TanArr[0] + TanArr[N];
    printf("\nInitial area (sum at x(0) and x(12)) = %f\n", area);

    // Sum up intermediate tan values with weight 2 for trapezoidal rule
    for (i = 1; i < N; i++) {
        area = area + 2 * TanArr[i];
    }

    printf("The value of the sum after the loop is: %f\n", area);

    // Multiply area by (pi/3) / (2 * 12) after converting to radians
    float mult_rad = degtorad((60.00 - 0.0) / (2 * N));
    area = mult_rad * area;
    return area;
}