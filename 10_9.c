/*
 * Task 1: Write a C program that in mainm prompts the user to enter 1 to 10 numbers * (floats). Enter "q" to quit. Write a function that returns the sum of these numbers.
 * In mian print the sum to screen.
 *
 */
 
 #include <stdio.h>
 
 float sum_array(float[]);
 
 int main(void){
	 
	 float inputt[10];
	 int indexx;
	 
	 //init array
	 for(indexx=0;indexx<10;indexx++)
		 inputt[indexx] = 0;
	 
	 
	 printf("Please enter	up to 10 numbers, press \"q\" to quit:");
	 
	 indexx=0;
	 
	 while(scanf("%f", &inputt[indexx]) != 0){
		 indexx++;
		 
		 
	 }
	 
	 
	 for(indexx=0;indexx<10;++indexx)
		 printf("Index %d: %f\n", indexx, inputt[indexx]);
	 
	 
	 
	 printf("Sum is: %f\n",sum_array(inputt));
	 
	 
	 return 0;
	 
 }
 
 
 float sum_array(float* f){
	 
	 int i;
	 float sum = 0;
	 
	 for (i=0;i<10;++i)		 
		 sum += f[i];	 
	

		return sum;
	 
 }