#include<bits/stdc++.h>
using namespace std;
void recu_insertion(int arr[],int i,int n){
    if(i == n) return;
    int j = i;
    while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j],arr[j-1]);
        j--;
    }
    recu_insertion(arr,i+1,n);
}
int main(){
    int arr[] = {13,46,24,52,12,30,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    recu_insertion(arr,0,n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}