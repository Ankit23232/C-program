#include<stdio.h>

void main(){
	int x = 5;
	void *p;
	p = &x;
	printf("%d", *(int*)p);//Typecasted to int datatype.
	return 0;
}