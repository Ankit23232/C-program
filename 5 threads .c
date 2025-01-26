#include <stdio.h>
#include <pthread.h>

#define MAX 1000
#define NUM_THREADS 5

// Thread function to display numbers in a range
void* print_numbers(void* arg) {
    int thread_id = *(int*)arg; // Get thread ID
    int start = thread_id * (MAX / NUM_THREADS) + 1;
    int end = (thread_id + 1) * (MAX / NUM_THREADS);

    for (int i = start; i <= end; i++) {
        printf("%d\n", i);
    }

    return NULL;
}

int main() {
    pthread_t threads[NUM_THREADS];
    int thread_ids[NUM_THREADS];

    // Create threads
    for (int i = 0; i < NUM_THREADS; i++) {
        thread_ids[i] = i; // Assign thread ID
        pthread_create(&threads[i], NULL, print_numbers, &thread_ids[i]);
    }

    // Wait for all threads to finish
    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }

    return 0;
}
