#include <bits/stdc++.h>
using namespace std;
int majorElem(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }
        if (count > (n / 2))
        {
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    int arr[] = {3, 2, 3, 2, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = majorElem(arr, n);
    cout << ans;
    return 0;
}