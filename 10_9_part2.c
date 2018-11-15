/*
 * Write a C program that has a function that generates three random integers and stores them in x,y and z consecutively. Write a function that takes x,y,z by reference and returns the smallest value in x, the next in y and the largest in z. Print the three values in main with the proper labels.
 *
 *
 */
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 
 void task2(int*,int*,int*);
 
 int main(void){
	 
	 int x;
	 int y;
	 int z;
	 
	 
	srand(time(NULL));
	
	x = rand();
	y = rand();
	z = rand();

	printf("\n");
	printf("BEFORE FUNCTION:\n");
	printf("X = %d\n", x);
	printf("Y = %d\n", y);
	printf("Z = %d\n", z);
	printf("\n");
	 
	
	task2(&x, &y, &z);
	
	printf("\n");
	printf("AFTER FUNCTION:\n");
	printf("X = %d\n", x);
	printf("Y = %d\n", y);
	printf("Z = %d\n", z);
	printf("\n");
	
	
	 
	 
	 
	 return 0;
	 
 }
 
 void task2(int* x, int* y, int* z){
	 
	 int a =*x;
	 int b = *y;
	 int c = *z;
	 int smallest;
	 int middlest;
	 int largest;
	 
	 
	
	 // x is smallest
	 if ( (a < b) && (a < c)){
		 smallest = a;
		 if (b < c){
			 middlest = b;
			 largest = c;
		 }
		 else{
			 middlest = c;
			 largest = b;
		 }
	 }
	 
	 // y is smallest
	 if ( (b < a) && (b < c)){
		 smallest = b;
		 if (a < c){
			 middlest = a;
			 largest = c;
		 }
		 else{
			 middlest = c;
			 largest = a;
		 }
	 }
	 
	 // z is smallest 
	 else if ( (c < a) && (c < b)){
		 smallest = c;
		 if (b < a){
			 middlest = b;
			 largest = a;
		 }
		 else{
			 middlest = a;
			 largest = b;
		 }
	 }
	 

	 
	 
	 *x = smallest;
	 *y = middlest;
	 *z = largest;
	 
	
	 
	 	 
	 
 }
 
 