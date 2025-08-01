#include<bits/stdc++.h>
using namespace std;
void sec_largest(int arr[],int n){
    int sec_min = INT_MAX;
    int min = INT_MAX;
    for(int i = 0; i<n; i++){
        if(arr[i]<min){
            sec_min = min;
            min = arr[i];
        }
        else if(arr[i]<sec_min && arr[i] != min){
            sec_min = arr[i];
        }
    }
    cout<<sec_min;
}
int main(){
    int arr[] = {2,5,1,3,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    sec_largest(arr,n);
    return 0;
}