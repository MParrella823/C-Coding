/*
 * Matt Parrella
 * CSC381 - Fall 2018
 * Homework #4 - Part B
 * October 9, 2018
 */
 
 /*
  * This program will prompt the user for an arithmetic string
  * and then evaluate the expression in a strict left-to-right
  * evaluation, and output the result.
  *
  */
  
#include <stdio.h>

/*
 *
 * Function Prototypes
 *
 *
 */
 
 
  int evaluate(char*);
 
 
 
 /*
  *
  * Main Function
  *
  */
  
int main(void){
	
	char usr_expr[20]; // Used to store user-entered expression
	int counter;
	
	//initialize char array
	for (counter=0;counter<20;counter++)
		usr_expr[counter] = '\n';
	
	
	
	printf("Please enter an expression: ");
	scanf("%s", &usr_expr[0]);
		
	evaluate(usr_expr);
	
	return 0;
}

int evaluate(char* c){
	
	int ans;
	int indexx;
	
	//printf("User entered: %s\n", c);
	
	//for(indexx=0;indexx<20;indexx++){
		//if (c[indexx] != '\n'){
		//	printf("Index %d: %c\n", indexx, c[indexx]);
		//}
	//}
	
	ans = c[0]-'0'; //Convert char to int
	
	indexx=1; 
	
	while (c[indexx] != '\n'){
		if (c[indexx] == '+'){
			indexx++;
			ans += (c[indexx] - '0');
			indexx++;
		}
		else if (c[indexx] == '-'){
			indexx++;
			ans = ans - (c[indexx] -'0');
			indexx++;
		}
		else if (c[indexx] == '*'){
			indexx++;
			ans = ans * (c[indexx]-'0');
			indexx++;
		}
		else if (c[indexx] == '/'){
			indexx++;
			ans = ans / (c[indexx]-'0');
			indexx++;
		}
		
		else{
			indexx++;
		}
		
	}
	
	printf("Answer is: %d\n", ans);
	return ans;
	
}