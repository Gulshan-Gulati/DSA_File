#include<bits/stdc++.h>
using namespace std;
void rotateRight(int arr[], int n, int k){
    if(n == 0)
    return;
    k = k % n;
    if(n<k)
    return;
    int temp[k];
    for(int i = 0; i < k; i++){
        temp[i] = arr[i];
    }
    for(int i = 0; i<n-k; i++){
        arr[i] = arr[i+k];
    }
    for(int i = n-k; i<n; i++){
        arr[i] = temp[i- n + k];
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int k = 2;
    int n = sizeof(arr)/sizeof(arr[0]);
    rotateRight(arr, n,k);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}