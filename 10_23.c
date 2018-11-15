#include <stdio.h>
#include <string.h>

int main (void) {
	char greet[20];
	printf("Please enter a string: ");
	scanf("%19[^EOF]", greet);
	int length, i;
	length = strlen(greet);
	printf("the length of the string is %d\n", length);
	for (i=0; i< length; ++i)
		printf("%c\n", greet[i]);
	return 0;
}

