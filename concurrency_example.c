#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

// Number of threads
#define NUM_THREADS 5

// Function

void* print_thread_id(void* threadid) {
    long tid = (long) threadid;
    printf("Thread ID: %ld is running\n", tid);
    pthread_exit(NULL);
}

int main() {
    pthread_t threads[NUM_THREADS];
    int rc;
    long t;
    
    // Create threads
    for(t = 0; t < NUM_THREADS; t++) {
        printf("Creating thread %ld\n", t);
        rc = pthread_create(&threads[t], NULL, print_thread_id, (void *)t);
        
        // Check for creation failure
        if (rc) {
            printf("Error: Unable to create thread, %d\n", rc);
            exit(-1);
        }
    }

    // Wait for all threads to complete
    for (t = 0; t < NUM_THREADS; t++) {
        pthread_join(threads[t], NULL);
    }

    printf("All threads completed.\n");

    return 0;
}
