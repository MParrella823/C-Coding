/*
 * Write a C program to solve two simultaneous linear equations with two unkowns. You will receive six single-precision floating-point numbers a,b,c,d,e,f each separated by whitespace. You may assume that there will be exactly six of them and that they are indeed floating points.
 *
 *
 */
 
 #include <stdio.h>
 #include <stdlib.h>
 
int main(void){
	
	// Vars a-f used to hold user input
	float a;
	float b;
	float c;
	float d;
	float e;
	float f;
	
	// Vars x and y used to store answer 
	float x;
	float y;
	
	float det; // Used to hold 'determinent' value
	
	float coeff[2][2]; // Multi-Dimensional array to hold coefficients
	float values[2];
	
	
	
	printf("\nPlease enter 6 numbers for computation: ");
	
	scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
	
	//printf("\nNumbers entered: %f %f %f %f %f %f\n", a, b, c, d, e, f);
	
	coeff[0][0] = a;
	coeff[0][1] = b;
	coeff[1][0] = d;
	coeff[1][1] = e;
	
	values[0] = c;
	values[1] = f;
	
	det = ((coeff[0][0] * coeff[1][1]) - (coeff[0][1]*coeff[1][0]));
	
	if (det == 0)
	{
		printf("\n***Error: Too Complicated!***\n\n");
		exit(1);
	}
	else
	{
		x = (((coeff[1][1] * values[0]) - (coeff[0][1] * values[1])) / det);

		y = (((coeff[0][0] * values[1]) - (coeff[1][0] * values[0])) / det);
	 	
		printf("\n X = %f\n", x);
		
		printf("\n Y = %f\n\n", y);
	
	
	}
	
	
	
	
	
	
	
	return 0;
	
}