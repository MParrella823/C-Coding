/*
 * Write a C program that has a function that accepts an array of integers and returns the average. The function also finds the max and min of the array. In main create an array with 10 values to test your function. Print results from main.
 *
 *
 */
 
 
 
 #include <stdio.h>
 
 
 /*
  *
  * Function Prototype(s)
  *
  */
  
  int arrayCalc(int[], int*, int*);
  
  /*
   *
   * Main Function
   *
   */
   
   
   int main(void){
	   
	   
	   int myArray[10] = {5,19,54,213,2,23,98,84,17,100};
	   int min = myArray[0];
	   int max = myArray[0];
	   
	   
	   
	   
	   printf("Average is: %d\n", arrayCalc(myArray, &min, &max));
	   printf("Min is: %d\n", min);
	   printf("Max is: %d\n", max);
	  
	   
	   return 0;
	   
   }
   
   int arrayCalc(int arrayPtr[], int* min, int* max){
	   
	   
	   int avg;
	   int minimum = *min;
	   int maximum = *max;
	   int indexx; // counter
	 
	   avg = 0;

	   for (indexx=0; indexx < 10; ++indexx){
		   
		   avg += arrayPtr[indexx];
		   
		   if ( arrayPtr[indexx] > maximum) {
			   maximum = arrayPtr[indexx];
		   }
		   if (arrayPtr[indexx] < minimum){
			   minimum = arrayPtr[indexx];
		   }	   
		   
	   }
	   
	   avg = avg/10;
	   
	   *min = minimum;
	   *max = maximum;
	   
	   
	   return avg;
	   
	   
	   
	   
	   
	   
   }