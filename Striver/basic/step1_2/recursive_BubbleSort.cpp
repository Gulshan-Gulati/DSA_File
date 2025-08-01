#include<bits/stdc++.h>
using namespace std;
void recu_Bubble(int arr[],int n){
    if(n==1)
        return;
    for(int i = 0; i<=n-2; i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    recu_Bubble(arr,n-1);
}
int main(){
    int arr[] = {13,46,24,52,20,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    recu_Bubble(arr,n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}