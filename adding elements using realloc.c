#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int initial_size, new_size, i;

    // Ask the user for the initial size of the array
    printf("Enter the initial size of the array: ");
    scanf("%d", &initial_size);

    // Dynamically allocate memory for the array using malloc
    arr = (int *)malloc(initial_size * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;  // Exit if memory allocation fails
    }

    // Ask the user to enter elements for the array
    printf("Enter %d elements for the array:\n", initial_size);
    for (i = 0; i < initial_size; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the array elements before realloc
    printf("\nArray before adding more elements:\n");
    for (i = 0; i < initial_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Ask the user for the new size of the array
    printf("Enter the new size of the array (greater than initial size): ");
    scanf("%d", &new_size);
    
    if ( new_size < initial_size){
    	printf("Must enter greater than initial size.");
	}

    // Reallocate memory to increase the array size using realloc
    arr = (int *)realloc(arr, new_size * sizeof(int));

    // Check if memory allocation was successful after realloc
    if (arr == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;  // Exit if memory reallocation fails
    }

    // Ask the user to enter the new elements for the expanded array
    printf("Enter %d new elements for the array:\n", new_size - initial_size);
    for (i = initial_size; i < new_size; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the array elements after realloc
    printf("\nArray after adding more elements:\n");
    for (i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
