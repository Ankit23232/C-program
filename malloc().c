#include<stdio.h>
#include<stdlib.h>

void main(){
	int i, n;
	printf("Enter a number: ");
	scanf("%d", &n);
	int *p = (int*)malloc(n*sizeof(int));
	for(i=0; i<n; i++){
		printf("Enter an intiger: ");
		scanf("%d", p+i);
	}
	for(i=0; i<n; i++){
		printf("%d", *(p+i));
	}
	
}