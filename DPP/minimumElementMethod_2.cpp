#include<iostream>
#include<vector>
using namespace std;
int solveTab(int arr[],int n,int x){

    vector<int> dp(x+1,INT8_MAX);
    dp[0] = 0;
    for(int i=1; i<=x; i++){
       for(int j=0; j<n; j++){
        if(i-arr[j] >= 0 && dp[i-arr[j]] != INT8_MAX){
            dp[i] = min(dp[i], 1+dp[i-arr[j]]);
        }
       }
    }
    if(dp[x] == INT8_MAX)
    return -1;
    return dp[x];
}
int main(){
    int arr [] = {1,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 7;
    int ans = solveTab(arr,n,x);
    cout<<ans;
}