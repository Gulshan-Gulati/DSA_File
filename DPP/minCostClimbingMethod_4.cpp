#include<iostream>  //method 4
#include<vector>
using namespace std;

int solve(int n, int cost[]){
     vector<int> dp(n+1);
    int prev2 = cost[0];
    int prev1 = cost[1];
    for(int i=2; i<n; i++){
        int curr = cost[i] + min(prev1,prev2);
        prev2 = prev1;
        prev1 = curr;

    }
    return min(prev1,prev2);
}
int main(){
    int cost[] = {16, 19, 10, 12, 18};
    int n =sizeof(cost)/sizeof(cost[0]);
    int ans = (solve(n,cost));
    cout<<ans;
    return 0;
}