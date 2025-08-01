#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int solveMem(int coins[], int n, int x,vector<int> &dp){
    if(x==0) return 0;
    if(x<0) return INT8_MAX;
    if(dp[x] != -1){
        return dp[x];
    }
    int mini = INT8_MAX;
    for(int i=0; i<n; i++){
        int ans = solveMem(coins,n,x-coins[i],dp);
        if(ans != INT8_MAX)
        mini = min(mini,1+ans);
    }
    dp[x] = mini;
    return dp[x];
}
int main(){
    int coins[] = {7,2,5,3,9,8};
    int n = sizeof(coins)/sizeof(coins[0]);
    int x;
    cin>>x;
    vector<int> dp(x+1,-1);
    int ans = solveMem(coins,n,x,dp);
    if(ans == INT8_MAX){
        cout<<-1<<endl;
    } else{
    cout<<ans;
    }
    return 0;
}