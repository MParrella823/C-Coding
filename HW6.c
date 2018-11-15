/*
 * Matt Parrella
 * CSC381 - Fall 2018
 * Homework # 6
 */
 
 
 /*
  * Write a C program that asks the user for an unsigned integer. THe program will then call a function unsigned int reverse_bits(unsigned int n).
  *
  * This function should return an unsigned integer whose bits are the same as those of n but in reverse order.
  *
  * Print to the screen the integer whose bits are in reverse order
  *
  */
  
  #include <stdio.h>
  #include <math.h>
  
  
  /*
   * Function Prototype(s)
   */
   
   
   unsigned int reverse_bits(unsigned int n);
   
   
   /*
    * reverse_bits function
	*
	* Will take an unsigned integer as a parameter, determine the 16-byte binary value, reverse this value, and return the base 10 value of the reversed binary string
	*
	*/
	
	unsigned int reverse_bits(unsigned int n)
	{
		
		int i;
		int remainder;
		int binaryValue[16]; // Array to hold binary array
		int reversedValue[16]; // Array to hold reversed binary array
		int x; // holds value of n
				
		//initialize binaryValue array
		for(i = 0; i < 16; ++i)
			binaryValue[i] = 0;
		
		//initialize reversedValue array
		for(i = 0; i < 16; ++i)
			reversedValue[i] = 0;		
		
		x = n;
		//Find binary value of passed integer
		for (i = 15; i >= 0; --i)
		{
			remainder = (x % 2);
			binaryValue[i] = remainder;
			x = (x / 2);			
		}
		
		printf("\n\nBinary value of %u: ", n);
		for (i = 0; i < 16; ++i){
			if (i % 4 == 0)
				printf(" ");
			
			printf("%d", binaryValue[i]);
		}		
		printf("\n");

		// Reverse the binary value array
		int j = 15;
		
		for (int i = 0; i < 16; ++i)
		{			
			reversedValue[j] = binaryValue[i];
			--j;			
		}
		
		printf("\n\nReversed Binary Value of %u: ", n);
		for(i = 0; i < 16; ++i)
		{
			if (i % 4 == 0)
				printf(" ");
			printf("%d", reversedValue[i]);
		}		
		printf("\n");
		
		j = 15;
		x = 0;
		
		// Find value of reversed binary array
		
		for(i = 0; i < 16; ++i)
		{
			if (reversedValue[i] == 1)
			{
				x += (1 << j); // Shift bits to the left by magnitude of position
			}
			--j;
		}
		
		
		
		return x;
		
	}
   
   

   
   /*
    * Main function
	*/
	
	
	int main(void){
		
		unsigned int inputt;
		int binaryVal[16];
	
		
		printf("\nPlease enter a positive integer: ");
		scanf("%u", &inputt);
		
		if ( inputt == 0 )
			printf("\n\n***INPUT ERROR: Please enter a positive integer greater than zero!***\n\n");
		else
		{
			// Call reverse function
			printf("\n\nAnswer: %d\n\n", reverse_bits(inputt));	
			
			
		}
		
		
		
		
		return 0;
	}