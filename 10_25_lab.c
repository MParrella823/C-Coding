/*
 * Enter up to 79 characters (end with a new line)
 * Switch upper case to lower case and vice versa
 * leaving everything else the same
 */
 
 
 #include <stdio.h>
 #include <string.h>
 #include <ctype.h>

 
 int main(void){
	 
	 char inputt[80];
	 int counter;
	 int length;
	 
	 printf("Please enter a string: ");
	 scanf("%79[^\n]", inputt);
	 
	 length = strlen(inputt);
	 printf("\nUser entered: %s\n", inputt);
	 
	
	 for (counter=0; counter < length; ++counter){
		 char c = inputt[counter];
		 if ( islower(c)) 
			inputt[counter] = toupper(inputt[counter] );
		
		 else if ( isupper( c ) )
		    inputt[counter] = tolower(inputt[counter] );
			
	 }
	 
	 printf("\nNew String: %s\n", inputt);
	 
	 
	 return 0;
 }