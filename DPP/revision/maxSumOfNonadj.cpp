#include<iostream>
#include<vector>
using namespace std;
int maxSum(int arr[], int n){
    if(n<0) return 0;
    if(n==0) return arr[0];

  int include = arr[n] + maxSum(arr,n-2);
  int exclude = 0 + maxSum(arr,n-1);

  return max(include,exclude);
}
int main(){
    int arr[] = {1,3,2,4,5,6,7,8,5,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = maxSum(arr, n-1);    /// n-1 passes due to arr start with 0 .
    cout<<ans;
    return 0;
}