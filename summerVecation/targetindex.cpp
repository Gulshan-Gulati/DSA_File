#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& arr, int n, int k) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == k) 
            return mid;

        // Check if the left half is sorted
        if (arr[low] <= arr[mid]) {
            if (k >= arr[low] && k < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        // Right half is sorted
        else {
            if (k > arr[mid] && k <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int n = arr.size(), k = 4;
    int ans = search(arr, n, k);

    if (ans == -1)
        cout << "Target is not present.\n";
    else
        cout << "The index is: " << ans << "\n";

    return 0;
}