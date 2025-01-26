#include <stdio.h>
#include <pthread.h>

#define MAX_SIZE 100

int arr[MAX_SIZE];
int element_to_search;
int array_size;
int num_threads;
int element_found = 0;  // Flag to indicate if the element is found

// Thread function to search for the element in a part of the array
void* search_element(void* arg) {
    int thread_id = *(int*)arg;
    int start = (thread_id * array_size) / num_threads;
    int end = ((thread_id + 1) * array_size) / num_threads;

    for (int i = start; i < end; i++) {
        if (arr[i] == element_to_search) {
            element_found = 1; // Element found
            break;
        }
    }

    return NULL;
}

int main() {
    printf("Enter the size of the array: ");
    scanf("%d", &array_size);

    printf("Enter the elements of the array: \n");
    for (int i = 0; i < array_size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &element_to_search);

    printf("Enter the number of threads: ");
    scanf("%d", &num_threads);

    pthread_t threads[num_threads];
    int thread_ids[num_threads];

    // Create threads to search for the element
    for (int i = 0; i < num_threads; i++) {
        thread_ids[i] = i;
        pthread_create(&threads[i], NULL, search_element, &thread_ids[i]);
    }

    // Wait for all threads to finish
    for (int i = 0; i < num_threads; i++) {
        pthread_join(threads[i], NULL);
    }

    // Print result based on the element_found flag
    if (element_found) {
        printf("Element found!\n");
    } else {
        printf("Element not found.\n");
    }

    return 0;
}
