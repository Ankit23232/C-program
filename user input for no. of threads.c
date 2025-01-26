#include <stdio.h>
#include <pthread.h>

#define MAX 1000
#define MAX_THREADS 100  // Maximum allowed threads

// Thread function to display numbers in a range
void* print_numbers(void* arg) {
    int* data = (int*)arg; // Get thread data
    int thread_id = data[0]; // Extract thread ID
    int num_threads = data[1]; // Extract total number of threads
    int start = thread_id * (MAX / num_threads) + 1;
    int end = (thread_id + 1) * (MAX / num_threads);

    for (int i = start; i <= end; i++) {
        printf("%d\n", i);
    }

    return NULL;
}

int main() {
    int num_threads;
    pthread_t threads[MAX_THREADS];
    int thread_args[MAX_THREADS][2]; // Store thread ID and total threads

    // Input the number of threads
    printf("Enter the number of threads (1-%d): ", MAX_THREADS);
    scanf("%d", &num_threads);

    // Validate the number of threads
    if (num_threads < 1 || num_threads > MAX_THREADS) {
        printf("Invalid number of threads. Please enter a number between 1 and %d.\n", MAX_THREADS);
        return 1;
    }

    // Create threads
    for (int i = 0; i < num_threads; i++) {
        thread_args[i][0] = i;         // Thread ID
        thread_args[i][1] = num_threads; // Total threads
        pthread_create(&threads[i], NULL, print_numbers, thread_args[i]);
    }

    // Wait for all threads to finish
    for (int i = 0; i < num_threads; i++) {
        pthread_join(threads[i], NULL);
    }

    return 0;
}
