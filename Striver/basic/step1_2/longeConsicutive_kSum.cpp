#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,3,5};
    int k = 5;
    int len = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            int sum = 0;
            for(int p = i; p<=j; p++){
                sum += arr[p];
            }
            if(sum == k){
                len = max(len,j-i+1);
            }
        }
    }
    cout<<len;
}