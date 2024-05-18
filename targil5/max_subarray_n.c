#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maxSubArraySumN(int arr[], int n) {
    int max_sum = arr[0];
    int current_sum = arr[0];

    for (int i = 1; i < n; i++) {
        current_sum = (current_sum > 0) ? current_sum + arr[i] : arr[i];
        max_sum = (current_sum > max_sum) ? current_sum : max_sum;
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
    int max_sum = maxSubArraySumN(arr, array_size);
    clock_t end = clock();
    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Maximum sub array sum (n): %d\n", max_sum);
    printf("Time taken: %f seconds\n", time_taken);

    free(arr);

    return 0;
}
