#define SIZE 6
#include <stdio.h>
#include <string.h>

int main(void){

char str1[5];
char str2[]="Hello world";

	int i;
	
	scanf("%c", str1);

    printf("String is: %s\n", str1);
	
	int length = strlen(str1);
	printf("\nString length: %d\n", length);
 


	//int x;
	//x=strcmp(str1,str2);
	//printf("%d\n", x);
	
	
//	if(strcmp(str2,"Hello world") == 0)
	//	printf("\nStrings are equal!\n");

	

	return 0;
}