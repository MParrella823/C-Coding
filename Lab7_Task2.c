/*
 * Write a C program that prompts the user for three names and print out those names in alphabetic order. You should include function that switches to all upper or all lower case.
 *
 */
 
 #include <stdio.h>
 #include <string.h>
 #include <ctype.h>
 
 
 /*
  * Function Prototype(s)
  */
  
  
  char* switchToLower(char[]);
  
  /*
   * switchToLower function will pass in the pointer to a string, convert all letters of the string to lowercase and return the pointer to the newly modified string
   *
   */
   
   char* switchToLower(char s[11]){
	   
	   int length;
	   
	   length = strlen(s);
	   
	   int counter;
	   
	   for (counter = 0; counter < length; counter++)
	   {
		   char c = s[counter];
		if ( isupper( c ) )
		    s[counter] = tolower(s[counter] );
	   }

		return s;   
	   
   }
  
  
  /*
   * Main Function
   */
   
  
  int main(void){
	  
	  char name1[11];
	  char name2[11];
	  char name3[11];
	  
	  char name1Copy[11];
	  char name2Copy[11];
	  char name3Copy[11];
	  
	  printf("Please enter 3 names, each followed by the Enter key: ");
	  int counter = 0;
  while(counter < 3)
	{
	  scanf("%10s", name1);
	  counter++;
	  scanf("%10s", name2);
	  counter++;
	  scanf("%10s", name3);
	  counter++;
	}
	  
	  strcpy(name1Copy, name1);
	  strcpy(name2Copy, name2);
	  strcpy(name3Copy, name3);
	  
	  //printf("\nNames entered:\n %s\n %s\n %s\n", name1, name2, name3);
	  
	  
	  // Pass each name into the 'switchToLower' function
	  
	  switchToLower(name1);
	  switchToLower(name2);
	  switchToLower(name3);
	  
	 
	  //printf("\nAfter switchToLower function:\n %s\n %s\n %s\n", name1, name2, name3);
	  
	  // Name 1 comes first
	  if ((name1[0] < name2[0]) && (name1[0] < name3[0]))
	  {
		  printf("\n%s\n", name1Copy);
		  if ((name2[0] < name3[0]))
		  {
			  printf("%s\n", name2Copy);
			  printf("%s\n", name3Copy);
		  }
		  else 
		  {
			  printf("%s\n", name3Copy);
			  printf("%s\n", name2Copy);
		  }
		  
	  }
	  
	  // Name 2 comes first
	  else if ((name2[0] < name1[0]) && (name2[0] < name3[0]))
	  {
		  printf("\n%s\n", name2Copy);
		  if (name1[0] < name3[0])
		  {
			  printf("%s\n", name1Copy);
			  printf("%s\n", name3Copy);
		  }
		  else
		  {
			  printf("%s\n", name3Copy);
			  printf("%s\n", name1Copy);
		  }
	  }
	  
	  // Name 3 comes first
	  else
	  {
		  printf("\n%s\n", name3Copy);
		  if (name1[0] < name2[0])
		  {
			  printf("%s\n", name1Copy);
			  printf("%s\n", name2Copy);
		  }
		  else
		  {
			  printf("%s\n", name2Copy);
			  printf("%s\n", name1Copy);
		  }
	  }	  
	  
	  return 0;
  }