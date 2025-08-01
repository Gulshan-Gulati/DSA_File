#include<iostream>  //method 3
#include<vector>
using namespace std;

int solve(int n, int cost[]){
     vector<int> dp(n+1);
    dp[0] = cost[0];
    dp[1] = cost[1];
    for(int i=2; i<n; i++){
        dp[i] = cost[i] + min(dp[i-1],dp[i-2]);
    }
    return min(dp[n-1],dp[n-2]);
}
int main(){
    int cost[] = {16, 19, 10, 12, 18};
    int n =sizeof(cost)/sizeof(cost[0]);
    int ans = (solve(n,cost));
    cout<<ans;
    return 0;
}