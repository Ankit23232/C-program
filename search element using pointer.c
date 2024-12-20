#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Initialize the array
    int n = sizeof(arr) / sizeof(arr[0]);  // Find the number of elements in the array
    int search, *ptr, found = 0;

    // Ask the user to input the element to search for
    printf("Enter the element to search: ");
    scanf("%d", &search);

    // Set pointer to the first element of the array
    ptr = arr;

    // Search for the element in the array using pointer
    for (int i = 0; i < n; i++) {
        if (*ptr == search) {  // Dereference the pointer to check value
            printf("Element %d found at index %d.\n", search, i);
            found = 1;
            break;  // Exit the loop if element is found
        }
        ptr++;  // Move the pointer to the next element
    }

    // If element is not found
    if (!found) {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
}
