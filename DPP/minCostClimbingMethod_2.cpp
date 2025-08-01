#include<iostream>  //method 2
#include<vector>
using namespace std;
int solve(int n, int cost[], vector<int> &dp){

    //case 1 base case
    if(n==0)
    return cost[0];
    if(n==1)
    return cost[1];

    //case 3
    if(dp[n] != -1)
    return dp[n];

    // case 2
    dp[n] = cost[n] + min(solve(n-1,cost,dp),solve(n-2,cost,dp));

    return dp[n];
}
int main(){
    int cost[] = {2,1,3,4,15,20,12,19,18};
    int n = sizeof(cost)/sizeof(cost[0]);
    vector<int> dp(n+1,-1);
    int ans = min(solve(n-1,cost,dp),solve(n-2,cost,dp));
    cout<<ans;
}