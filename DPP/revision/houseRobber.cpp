#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int> &nums, int n){
    int prev2 = 0;
    int prev1 = nums[0];

    for(int i=1; i<n; i++){
        int include = prev2+nums[i];
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
    if(n==1) return arr[0];
    vector<int> first,second;
    for(int i=0; i<n; i++){
      if(i != n-1){
        first.push_back(arr[i]);
      }
      if(i != 0){
        second.push_back(arr[i]);
      }
    }
    int ans = max(solve(first,n),solve(second,n));
    cout<<ans;
    return 0;
}