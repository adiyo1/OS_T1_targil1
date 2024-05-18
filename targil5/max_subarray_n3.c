#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maxSubArraySumN3(int arr[], int n) {
    int max_sum = arr[0];

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int current_sum = 0;
            for (int k = i; k <= j; k++) {
                current_sum += arr[k];
            }
            if (current_sum > max_sum) {
                max_sum = current_sum;
            }
        }
    }

    return max_sum;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <random_seed> <array_size>\n", argv[0]);
        return 1;
    }

    int random_seed = atoi(argv[1]);
    int array_size = atoi(argv[2]);

    srand(random_seed);

    int *arr = (int *)malloc(array_size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Generate random numbers
    for (int i = 0; i < array_size; i++) {
        arr[i] = rand() % 100 - 25; // Uniformly distributed in the range (-25, 74)
    }

    clock_t start = clock();
    int max_sum = maxSubArraySumN3(arr, array_size);
    clock_t end = clock();
    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Maximum sub array sum (n^3): %d\n", max_sum);
    printf("Time taken: %f seconds\n", time_taken);

    free(arr);

    return 0;
}
