#include <iostream>
#include <algorithm>
using namespace std;

int minMeals(int N, int M, int K, int V[]) {
    sort(V, V + N);
    int i = 0, meals = 0;

    while (i < N) {
        int j = i;

        while (j < N && V[j] - V[i] <= M) {
            j++;
        }

        int groupSize = j - i;
        if (groupSize < K) {
            return -1; 
        }

        meals++;
        i = j;  
    }

    return meals;
}

int main() {
    // Test Case 1
    int N1 = 3, M1 = 1, K1 = 1;
    int V1[] = {1, 1, 1};
    cout << "Output 1: " << minMeals(N1, M1, K1, V1) << endl;  // Expected output: 1

    // Test Case 2
    int N2 = 2, M2 = 1, K2 = 2;
    int V2[] = {1, 4};
    cout << "Output 2: " << minMeals(N2, M2, K2, V2) << endl;  // Expected output: -1

    // Additional Test Case 3
    int N3 = 5, M3 = 3, K3 = 2;
    int V3[] = {1, 3, 2, 5, 6};
    cout << "Output 3: " << minMeals(N3, M3, K3, V3) << endl;  // Expected output: 2

    // Additional Test Case 4
    int N4 = 6, M4 = 2, K4 = 3;
    int V4[] = {1, 2, 3, 4, 5, 6};
    cout << "Output 4: " << minMeals(N4, M4, K4, V4) << endl;  // Expected output: 2

    return 0;
}
