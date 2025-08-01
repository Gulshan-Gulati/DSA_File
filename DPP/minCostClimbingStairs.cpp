#include<iostream>  //method 1
#include<vector>
using namespace std;
int solve(int n, int cost[]){
    if(n==0)
    return cost[0];
    if(n==1)
    return cost[1];

    cost[n] = cost[n] + min(solve(n-1,cost),solve(n-2,cost));
    return cost[n];
}
int main(){
    int arr[]={2,1,3,4,15,20,12,19,18};  //cost
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = min(solve(n-1,arr),solve(n-2,arr));
    
    cout<<ans<<endl;
} 