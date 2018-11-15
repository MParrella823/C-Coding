/*
 * Write a C program that generates two 2x2 matrices with random numbers from 0 to 100. Print these arrays. Multiply the arrays and print result.
 *
 */
 
 #include <stdio.h>
 #include <time.h>
 
 
 int main(void){
	 
	 int matrix1[2][2];
	 int matrix2[2][2];
	 int matrix3[2][2];	 
	 int i;
	 int j;
	 
	 
	 // Seed the random number generator
	 srand(time(NULL));
	 

	 
	 for (i = 0; i < 2; i++)
	 {
		 
		 for (j = 0; j < 2; j++)
			 matrix1[i][j] = (((rand()) % 100) + 1);
		 
	 }
	 
	 for (i = 0; i < 2; i++)
	 {
		 for (j = 0; j < 2; j++)
			 matrix2[i][j] = (((rand()) % 100) + 1);
	 }
	 
	 
	 // Print array
	 printf("\n");
	 printf("\n");
	 printf("ARRAY 1: \n");
	 for (i = 0; i < 2; ++i)
	 {
		for (j = 0; j < 2; ++j)
		 	printf("%d ", matrix1[i][j]);
				 
		printf("\n");
	 }
	 
	 printf("\n");
	 printf("\n");
	 printf("\n");
	 
	 printf("ARRAY 2: \n");
	 for (i = 0; i < 2; ++i)
	 {
		for (j = 0; j < 2; ++j)
		 	printf("%d ", matrix2[i][j]);
				 
		printf("\n");
	 }
	 printf("\n");
	 
	 // Multiply arrays
	 
	 matrix3[0][0] = ( ((matrix1[0][0] * matrix2[0][0]) + (matrix1[0][1] * matrix2[1][0])));
	 
	 matrix3[0][1] = ( ((matrix1[0][0] * matrix2[0][1]) + (matrix1[0][1] * matrix2[1][1])));
	 
	 matrix3[1][0] = ( ((matrix1[1][0] * matrix2[0][0]) + (matrix1[1][1] * matrix2[1][0])));
	 
	 matrix3[1][1] = ( ((matrix1[1][0] * matrix2[0][1]) + (matrix1[1][1] * matrix2[1][1])));
	 
	 printf("\n");
	 printf("\n");
	 printf("MULTIPLIED ARRAYS: \n");
	 
	
	 for (i = 0; i < 2; ++i)
	 {
		for (j = 0; j < 2; ++j)
		 	printf("%d ", matrix3[i][j]);
				 
		printf("\n");
	 }
	 printf("\n");	 
	 
	 
	 
	 return 0;
 }