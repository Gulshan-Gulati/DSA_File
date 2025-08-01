#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr = {3,7,2,1,4,1,5,6};
    int n = arr.size();
    for(int i = n-2; i>=0; i--){
        for(int j = 0; j<=i-1; j++){
            if(arr[j]>arr[i+1]){
                swap(arr[i+1], arr[j]);
            }
        }
    }
    for(int i = 0 ; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}