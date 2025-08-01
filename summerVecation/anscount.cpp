#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Helper function for qsort
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

// Read only region start
int foodItems(int input1, int input2, int input3, int input4[]) {
// Read only region end

    int N = input1;
    int M = input2;
    int K = input3;
    int* V = input4;

    // Sort the array
    qsort(V, N, sizeof(int), compare);

    int i = 0;
    int meals = 0;

    while (i <= N - K) {
        int j = i + K - 1;

        // Extend the group while the difference is within M
        while (j + 1 < N && V[j + 1] - V[i] <= M) {
            j++;
        }

        meals++;
        i = j + 1;
    }

    if (i < N) {
        return -1; // Remaining items can't form a valid meal
    }

    return meals;
}
