#include <bits/stdc++.h>
using namespace std;
int max_sumofSubarray(int arr[], int n)
{
    int max_sum = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum > max_sum)
        {
            max_sum = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return max_sum;
}
int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = max_sumofSubarray(arr, n);
    cout << ans;
    return 0;
}