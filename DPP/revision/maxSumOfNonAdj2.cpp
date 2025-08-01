#include<iostream>
#include<vector>
using namespace std;
int maxSum(int arr[], int n,vector<int> &dp){
    if(n<0) return 0;
    if(n==0) return arr[0];

    if(dp[n] != -1) return dp[n];

  int include = arr[n] + maxSum(arr,n-2,dp);
  int exclude = 0 + maxSum(arr,n-1,dp);

  dp[n] = max(include,exclude);
  return dp[n];
}
int main(){
    int arr[] = {1,3,2,4,5,6,7,8,5,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> dp(n+1,-1);
    int ans = maxSum(arr, n-1,dp);    /// n-1 passes due to arr start with 0 .
    cout<<ans;
    return 0;
}