#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n, i, max;

    // Predefined size of the array
    n = 5;
    
    // Dynamically allocate memory for the array
    arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;  // Exit if memory allocation fails
    }

    // Predefined elements in the array
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 15;
    arr[3] = 30;
    arr[4] = 25;

    // Assume the first element is the maximum
    max = arr[0];

    // Loop through the array to find the maximum element
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Print the maximum element
    printf("The maximum element in the array is: %d\n", max);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
