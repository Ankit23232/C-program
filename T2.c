#include<stdio.h>

void main(){
	int x=50;
	int *p = &x;
	printf("Address of x using variable: %p\n", (int*)&x);
	printf("The value of x using variable: %d/n", x);
	
	printf("Address using pointer: %p\n", (int*)p);
	printf("The value of x using pointer: %d\n",*p);
}