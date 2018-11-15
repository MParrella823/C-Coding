/*
 * Matt Parrella
 * CSC381 - Fall 2018
 * November 1, 2018
 * Homework 5
 */
  
/*
 * Given a spatial region and values for points on the boundaries of the region, the goal
 * is to approximate the steady-state solution for points in the interior. We do this by
 * covering the region with an evenly-spaced grid of points. 
 *
 */
 
 #include <stdio.h>
 #include <stdlib.h>
 
 /*
  * Function Prototype(s)
  */
  
  void print_Array(float[10][10]);
  void init_Array(float[10][10], float top, float right, float bottom, float left);  
  
  
  /*
   * print_Array function will take in a multidimensional array (fixed to size 10x10, for the purpose of this assignment).
   * It will print out the passed in array's current values to the screen.
   *
   */
  
  void print_Array(float array[10][10]){
	 
	int row;
	int col;
	 
	 printf("\n");
	 for (row = 0; row < 10; row++){
		 printf(" ");
		for (col = 0; col < 10; col++)
			 printf("%.2f ", array[row][col]);			
		
		printf("\n");
	 }  
	 printf("\n");
	  
  }
  
  void init_Array(float array[10][10], float top, float right, float bottom, float left){
	  
	  int row;
	  int col;
	  
	  // initialize array
	  
	  for (col = 0; col < 10; col++)
		  for (row = 0; row < 10; row++)
			  array[col][row] = 0;
	  
	  // Set top row
	  for (col = 0; col < 10; col++)
		  array[0][col] = top;
	  
	  // Set right column
	  for (row = 1; row < 10; row++)
		  array[row][9] = right;
	  
	  // Set bottom row
	  for (col = 0; col < 9; col++)
		  array[9][col] = bottom;
	  
	  // Set left column
	  for (row = 0; row < 9; row++)
		  array[row][0] = left;
  }  
  
  /*
   * Main Function
   */
 
 int main(void){
	 
	 float epsilon;
	 int iterations;
	 int count = 0; // Used to count number of iterations
	 
	 // Vars top, right, bottom, left used for user input to determine boundary values
	 float top;
	 float right;
	 float bottom;
	 float left;
	 
	 // Vars used for iterating over matrix
	 int row;
	 int col; 
	 
	 printf("\nPlease enter the maximum number of iterations: ");
	 scanf("%d", &iterations);
	 
	 if (iterations > 0) {

		printf("\nPlease enter a value for Epsilon (between 0.001 and 0.1): ");
		scanf("%f", &epsilon);
		
		if (epsilon >= 0.001 && epsilon <= 0.1){
	 
			 //Create 10x10 grid
			 
			 float currentGrid[10][10];
			 float nextGrid[10][10];
			 float maxDiff;			 
			 
			 // Prompt user for boundary values
			 
			 printf("\nPlease enter the value for the TOP boundary: ");
			 scanf("%f", &top);
			 
			 printf("\nPlease enter the value for the RIGHT boundary: ");
			 scanf("%f", &right);
			 
			 printf("\nPlease enter the value for the BOTTOM boundary: ");
			 scanf("%f", &bottom);
			 
			 printf("\nPlease enter the value for the LEFT boundary: ");
			 scanf("%f", &left);
			 			 
			 // Initialize Arrays
			 init_Array(currentGrid, top, right, bottom, left);
			 init_Array(nextGrid, top, right, bottom, left);
								 
			 while (count < iterations){
				 
				 for(row = 1; row < 9; row++){
						for (col = 1; col < 9; col++){
							nextGrid[row][col] = ( (currentGrid[row-1][col] + currentGrid[row+1][col] + currentGrid[row][col-1] + currentGrid[row][col+1]) / 4);
						}
				 }
				 
				 // Check next Grid for highest difference and compare against epsilon
				
				 maxDiff = ((nextGrid[row][col] - currentGrid[row][col])); //initialize maxDiff to difference of cell 1 between next and current grid
				 for (row = 1; row < 9; row++)
					 for (col = 1; col < 9; col++){
						 // Check if the difference is negative, if it is, make it positive for comparison
						 if ((nextGrid[row][col] - currentGrid[row][col]) < 0){
							if (((nextGrid[row][col] - currentGrid[row][col])*-1) > maxDiff)
								maxDiff = ((nextGrid[row][col] - currentGrid[row][col]) * -1);
						 }
						else
						{
							if ((nextGrid[row][col] - currentGrid[row][col]) > maxDiff)
								maxDiff = (nextGrid[row][col] - currentGrid[row][col]);
						}						 
					 }								 
				 
				 if (maxDiff <= epsilon)
					 break;
			
				 
				 else{
					 // Copy nextGrid into currentGrid
					 for (row = 1; row < 9 ; row++)
						 for (col = 1; col < 9; col++)
							 currentGrid[row][col] = nextGrid[row][col];
				 }
			
				++count;
			 }
			 
			 if (count == iterations)
				 printf("\n***RESULT: Failed to converge. ***\n\n");
						 
			 else{
			 	 //Print answers
				 printf("\n***RESULT: CONVERGED!! ***\n");				 
				 printf("\nCurrent Grid (After calc):\n");
				 print_Array(currentGrid);				 
				 printf("\nNumber of iterations needed: %d\n", count);
				 printf("\nEpsilon used: %.3f\n", epsilon);
				 printf("\nNext Grid (After calc): \n");
				 print_Array(nextGrid);
			 }
		 
		}
		
		else
			printf("\n***ERROR: Please enter a value for Epsilon between 0.001 and 0.1***\n");
	}
	 
	else
		 printf("\n***ERROR: Please enter a positive number of iterations***\n");
	 
	
	 return 0; // Terminate main function
 }
 