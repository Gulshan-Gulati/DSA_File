#include<iostream>
#include<vector>
using namespace std;
int solve(int cost[],int n){
    int prev2 = cost[0];
    int prev1 = cost[1];

    for(int i = 2; i<n; i++){
        int curr = cost[i] + min(prev1, prev2);
        prev2 = prev1;
        prev1 = curr;
    }
    return min(prev1,prev2);
}
int main(){
    int cost[] = {2,1,3,4,15,20,12,19,18};
    int n = sizeof(cost)/sizeof(cost[0]);
    int ans = solve(cost,n);
    cout<<ans;
    return 0;
}