/*
 * Write a C-program to print the sum of the digits ofa positive integer number.
 *
 * Example: 
		Input: x = 2014
		Output: sum = 7
		(2 + 0 + 1 + 4)
 *
 */
 
 #include <stdio.h>
 
 
 int main(void){
	 
	int inputt, calcVar, sum = 0, remainder;
	
	printf("\nPlease enter a number: ");
	scanf("%d", &inputt);
	
	calcVar = inputt;
	 
	 while (calcVar != 0)
	 {
		 
		 remainder = calcVar % 10; //This will get the LSB of the inputted integer
		 sum = sum + remainder;
		 calcVar = calcVar /10; //Divide by 10 to move towards the MSB, and have the result approach 0 (to end the while loop)
		 
		  
	 }
 
 printf ("\nSum = %d\n\n", sum);
	 
	 
	 
	 return 0;
 }