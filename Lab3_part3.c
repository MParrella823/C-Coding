/*
 * Create a C program that prompts the user for an integer between 0 and 99. Output the least amount of coins: quarters, dimes, nickels, and pennies, which can be used to sum to the inputted value. For example, if the user enters 77, the output would be 3 quarters and 2 pennies. 
 * 
 * If the user enters a number outside the range of 0 and 99 ask again.
 *
 */
 
 #include <stdio.h>
 
 #define QUARTERS 25
 #define DIMES 10
 #define NICKELS 5
 #define PENNIES 1
 
 int main(void){
	 
	 int inputt = 0;
	 int numQuarters = 0;
	 int numDimes = 0;
	 int numNickels = 0;
	 int numPennies = 0;
	 
	 printf("\nPlease enter a value between 0 and 99: ");
	 scanf("%d", &inputt);
	 
	 if (inputt >= 0 && inputt <= 99)
	 {
		 // check if divisible by 25
		 
		 while( inputt != 0)
		 {
			 if ((inputt / QUARTERS) > 0)
			 {
				 numQuarters = (inputt / QUARTERS);
				 inputt = inputt - (numQuarters * QUARTERS);
				 
			 }
			 
			 if ((inputt / DIMES) > 0)
			 {
				 numDimes = (inputt / DIMES);
				 inputt = inputt - (numDimes * DIMES);
			 }
			 
			 if ((inputt / NICKELS) > 0)
			 {
				 numNickels = (inputt / NICKELS);
				 inputt = inputt - (numNickels * NICKELS);
			 }
			 
			 if ((inputt / PENNIES) > 0)
			 {
				 numPennies = (inputt / PENNIES);
				 inputt = inputt - (numPennies * PENNIES);
			 }
			
		 }
		 
		 printf("\nNumber of Quarters:\t %d\n", numQuarters);
		 printf("Number of Dimes:\t %d\n", numDimes);
		 printf("Number of Nickels:\t %d\n", numNickels);
		 printf("Number of Pennies:\t %d\n\n", numPennies);
	 }
	 
	 else
	 {
		 printf("\n***Error: Value is outside of range!***\n");
	 }	 
	 
	 return 0;
	 
 }