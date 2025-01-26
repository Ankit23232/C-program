#include <stdio.h>
#include <pthread.h>

#define MAX 500

// Function to check if a number is prime
int is_prime(int n) {
    if (n < 2) return 0; // 0 means false
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1; // 1 means true
}

// Function for the first thread
void* print_primes_1_to_250(void* arg) {
    for (int i = 1; i <= 250; i++) {
        if (is_prime(i)) {
            printf("%d\n", i);
        }
    }
    return NULL;
}

// Function for the second thread
void* print_primes_251_to_500(void* arg) {
    for (int i = 251; i <= 500; i++) {
        if (is_prime(i)) {
            printf("%d\n", i);
        }
    }
    return NULL;
}

int main() {
    pthread_t thread1, thread2;

    // Create threads
    pthread_create(&thread1, NULL, print_primes_1_to_250, NULL);
    pthread_create(&thread2, NULL, print_primes_251_to_500, NULL);

    // Wait for threads to finish
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    return 0;
}
