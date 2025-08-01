#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {10,22,12,3,0,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ans;
    int max = arr[n-1];
    ans.push_back(max);
    for(int i = n-2; i>=0; i--){
        if(arr[i] > max){
            max = arr[i];
            ans.push_back(arr[i]);
        }
    }
    for(int i = ans.size()-1; i>=0; i--){
        cout<<ans[i]<<" ";
    }
    return 0;
}