#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n=5, p=3, q=4;
	double A[n][p], B[p][q], C[n][q];
	int i, j ,k;

	for (i=0; i<n; i++) 
	    for (j=0; j<p; j++) 
		A[i][j] = i + j;
		
	

	for (i=0; i<p; i++) 
	    for (j=0; j<q; j++) 
		B[i][j] = i - j;
		

	for (i=0; i<n; i++)
	    for (j=0; j<q; j++) 
		C[i][j] = 0.0;
	
	for (i=0; i<n; i++)
	    for (j=0; j<q; j++)
	        for (k=0; k<p; k++)
		C[i][j] = C[i][j] + A[i][k] * B[k][j];
	
	printf("\n This is matrix A \n\n");
	for(i=0; i<n; i++){
		for(j=0; j<p; j++) {
		    printf("%3.0lf", A[i][j]);
		}
		printf("\n");
	}

	printf("\n This is matrix B \n\n");
	for(i=0; i<p; i++){
		for(j=0; j<q; j++){
		    printf("%3.0lf", B[i][j]);
		}
		printf("\n");
	}

	printf("\n This is matrix C \n\n");
	for(i=0; i<n; i++){
		for(j=0; j<q; j++){
		    printf("%3.0lf", C[i][j]);
		}
		printf("\n");
	}



	return 0;
}
