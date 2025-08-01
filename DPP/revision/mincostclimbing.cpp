#include<iostream>    //top down approach
#include<vector>
using namespace std;
int minCost(int cost[], int n){
    if(n==0) return cost[0];
    if(n == 1) return cost[1];
    cost[n] = cost[n] + min(minCost(cost,n-1) , minCost(cost,n-2));
    return cost[n];
}  
int main(){
    int cost[] = {2,1,3,4,15,20,12,19,18};
    int n = sizeof(cost)/sizeof(cost[0]);
    int ans = min(minCost(cost,n-1),minCost(cost,n-2));
    cout<<ans;
    return 0;
}
