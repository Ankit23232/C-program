#include<stdlib.h>

void main(){
	int n,i;
	printf("Enter the size.\n");
	scanf("%d", &n);
	int *A = (int*)malloc(n*sizeof(int));
	for(i=0; i<n; i++){
		A[i] = i+1;
	}
	int *B = (int*)realloc(A, 2*n*sizeof(int));
	printf("Address of previous block: %d\n", A);
	printf("Address of block B: %d\n",B);
	for(i=0; i<2*n; i++){
		printf("%d\n", B[i]);
	}
	
}