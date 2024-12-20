#include<stdio.h>

void main(){
	int a=25;
	int *p = &a;
	printf("Address of a: %d\n", (int*)p);
	printf("Value of a: %d\n", *p);
	
}