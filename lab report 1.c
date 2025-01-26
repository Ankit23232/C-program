#include <stdio.h>
#include <pthread.h>

#define MAX 1000

// Function for the first thread
void* print_first_half(void* arg) {
    for (int i = 1; i <= MAX / 2; i++) {
        printf("%d\n", i);
    }
    return NULL;
}

// Function for the second thread
void* print_second_half(void* arg) {
    for (int i = MAX / 2 + 1; i <= MAX; i++) {
        printf("%d\n", i);
    }
    return NULL;
}

int main() {
    pthread_t thread1, thread2;

    // Create the first thread
    if (pthread_create(&thread1, NULL, print_first_half, NULL) != 0) {
        perror("Failed to create thread 1");
        return 1;
    }

    // Create the second thread
    if (pthread_create(&thread2, NULL, print_second_half, NULL) != 0) {
        perror("Failed to create thread 2");
        return 1;
    }

    // Wait for both threads to complete
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    return 0;
}
