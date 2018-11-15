/*
 * Lab 3 Task 1
 *
 * Write a program that calculates the squares and cubes of the numbers from 0 to 10 and uses tabs to print the table of values. Create two directives for the start, 0 and the end, 10.
 *
 *
 */
 
 
 #include <stdio.h>
 
 int main(void){
	 
	int start = 0;
	int end = 10;
	
	printf("\nNumber\t\tSquare\t\tCube\n\n");
	
	for (start = 0; start <= end; start++)		
		printf("%d\t\t %d\t\t %d\n", start, start*start, start*start*start);
	 
	printf("\n");
	 
	 
	 
	 return 0;
	 
 }