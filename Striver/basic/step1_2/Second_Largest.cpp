#include<bits/stdc++.h>
using namespace std;
void sec_largest(int arr[],int n){
    int sec_max = INT_MIN;
    int max = INT_MIN;
    for(int i = 0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]>sec_max && arr[i]<max){
            sec_max = arr[i];
        }
    }
    cout<<sec_max;
}
int main(){
    int arr[] = {2,5,1,3,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    sec_largest(arr,n);
    return 0;
}