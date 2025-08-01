#include<iostream>
#include<vector>
using namespace std;
int solveRec(int arr[],int n,int x){
    if(x==0)
    return 0;
    if(x<0)
    return INT8_MAX;
    int mini = INT8_MAX;
    for(int i=0; i<n; i++){
        int ans = solveRec(arr,n,x-arr[i]);
        if(ans != INT8_MAX)
        mini = min(mini,1+ans);
    }
    return mini;
}
int main(){
    int arr [] = {1,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 7;
    int ans = solveRec(arr,n,x);
    if(ans == INT8_MAX)
    cout<<-1;
    else
    cout<<ans;
}