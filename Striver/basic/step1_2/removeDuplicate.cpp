#include<bits/stdc++.h>
using namespace std;
int remove_Duplicate(int arr[], int n){
    int j = 0;
    for(int i = 1; i<n; i++){
        if(arr[j] != arr[i]){
            j++;
            arr[j] = arr[i];   
        }
    }
    return j+1;
}
int main(){
    int arr [] = {1,1,2,2,3,3,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int nm = remove_Duplicate(arr,n);
    for(int i = 0; i<nm; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}