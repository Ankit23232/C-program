#include<stdio.h>

void main(){
	int num = 100;
	int *p = &num;
	int **q = &p;
	printf("Value of a number through double pointer: %d\n", **q);
}