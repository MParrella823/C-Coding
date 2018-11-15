 /*
 * Create a 4x3 integer array and the value of each element is the sum
 * of the subscripts.
 *
 * Print out the array
 *
 */
 
 
 #include <stdio.h>
 
 void print_array(int[4][3]);
 
 void print_array(int array[4][3])
{	
	int i;
	int j;
	
	  printf("\n");
	 for (i = 0; i < 4; ++a)
	 {
		for (j = 0; j < 3; ++b)
		 	printf("%d", array[a][b]);
				 
		printf("\n");
	 }
	 printf("\n");
}
 
 
 int main(void){
	 
	 int a[4][3];
	 int i;
	 int j;
	 
	 for (i = 0; i < 4; ++i)
	 {
		 for (j = 0; j < 3; ++j)
		 {
			 a[i][j] = (i+j);
		 }
	 }
	 
	
	 print_array(a[4][3]);
	 
	 
	 
	 
	 
	 return 0;
	 
 }