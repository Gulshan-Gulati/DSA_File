#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {100,200,1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count= 1;
    int ans = 1;
    for(int i = 1; i<n; i++){
        if(arr[i-1]<arr[i]){
        count++;
        }
        else{ 
            count = 1;
        }
        ans = max(count,ans);
    }
    cout<<ans;
}