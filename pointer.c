#include<stdio.h>
//pointer and arrays
void main(){
	int a[5] = {1,2,3,4,5};
	int *p;
	p=a;
	printf("%d\n", a);
	printf("%d\n", *p);
	printf("%d\n", p+1);
	printf("%d\n", *(p+1));
	printf("%d\n", p[0]);
}