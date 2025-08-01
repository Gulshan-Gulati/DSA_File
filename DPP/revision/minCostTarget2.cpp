#include<iostream>
#include<vector>
using namespace std;
int solveTab(int coins[],int n, int x){
    vector<int> dp(x+1,INT8_MAX);
    dp[0] = 0;
    for(int i=0; i<=x; i++){
        for(int j = 0; j<n; j++ ){
            if(i-coins[j] >=0 && dp[i-coins[j]] != INT8_MAX){
                dp[i] = min(dp[i],1+dp[i-coins[j]]);
            }
        }
    }
    if(dp[x] == INT8_MAX)
        return -1;
     return dp[x];
}
int main(){
    int coins[] = {1,2,5,3,9,8};
    int n = sizeof(coins)/sizeof(coins[0]);
    int x;
    cin>>x;
    int ans = solveTab(coins,n,x);
    cout<<ans;
    return 0;
}