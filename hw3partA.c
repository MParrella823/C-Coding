/*
 * Matt Parrella
 * CSC381 - Fall 2018
 * Homework #4 Part A
 *
 *
 *  Radix Conversion Program
 *
 * This program will prompt the user to enter two non-negative integers.
 * 
 * The first number will be the number (in base 10) that is to be converted.
 *
 * The second number will be the BASE that the first number is to be converted 	into. Valid values for second number are from 2 to 16 (inclusive).
 *
 */
 
 #include <stdio.h>
 
 
 /*
  * Function Prototype(s)
  *
  */
  
 void radixConvert(int*, int*);
 
 
 /*
  *
  * Main Function
  *
  */
 
 int main(void){
	 
	int x;
	int y;
	 
	printf("Please enter 2 integers, separated by a space:");
	 
	scanf("%d %d", &x, &y);
	 
	radixConvert(&x,&y); // Call function by reference
	 
	 return 0;
	 
 }
 
 void radixConvert(int* x,int* y){
		
		 int num_to_convert;
		 num_to_convert = *x;
		 
		 int base_num;
		 base_num = *y;		
		
		 int result[32]; //array to store remainders
		 int index; // counter
		
		// Special char array used for higher Base values
		
		char special_digits[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
		 
		  // Initialize array
		 
		for (index=0; index < 32; ++index)
			result[index] = 0;
		
	
		 	 
		index = 0; //Start at beginning of array
		
		while (num_to_convert != 0) {
				
				result[index] = num_to_convert % base_num;
				num_to_convert = num_to_convert / base_num;
				index++;
		}
		 
		 --index; // Go back one index, after division is done
		 
		 printf("Answer: ");
		 
		 // Read result array BACKWARDS for correct result
		 for(index=index; index>=0; index--)
			 printf("%c", special_digits[result[index]]);
				 
		printf("\n");
		
	 }