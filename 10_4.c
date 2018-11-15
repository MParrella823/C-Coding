#include <stdio.h>

int main(void){

int x=1;
int y=2;
int z[10];
int *ip, *arrayptr;

z[0] = 5;
z[1] = 12;

ip = &x;
y = *ip;

printf("The value of y is %d", y);
