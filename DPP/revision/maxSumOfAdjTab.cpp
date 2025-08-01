#include<iostream>
#include<vector>
using namespace std;
int maxSum(int arr[], int n){

    int prev2 = 0;
    int prev1 = arr[0];

    for(int i=1; i<n; i++){
        int include = prev2+arr[i];
        int exclude = prev1+0;
        int ans = max(include,exclude);
        prev2 = prev1;
        prev1 = ans;
    }
   
  return prev1;
}
int main(){
    int arr[] = {1,3,2,4,5,6,7,8,5,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = maxSum(arr, n);
    cout<<ans;
    return 0;
}