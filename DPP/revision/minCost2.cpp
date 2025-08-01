#include<iostream>
#include<vector>
using namespace std;
int solve(int cost[],int n, vector<int> &dp){
    // base case
    if(n==0)
    return cost[0];
    if(n==1)
    return cost[1];
//  step 3
    if(dp[n] != -1)
    return dp[n];

    // step 2

    dp[n] = cost[n] + min(solve(cost,n-1,dp),solve(cost,n-2,dp));

    return dp[n];
}
int main(){
    int cost[] = {2,1,3,4,15,20,12,19,18};
    int n = sizeof(cost)/sizeof(cost[0]);

// step 1
    vector<int> dp(n+1,-1);
    int ans = min(solve(cost,n-1,dp),solve(cost,n-2,dp));
    cout<<ans;
}