#include<bits/stdc++.h>
using namespace std;
void leftZero(int arr[], int n){
    vector<int>temp;
    for(int i = 0; i<n-1; i++){
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }
    for(int i = 0; i<temp.size(); i++){
        arr[i] = temp[i];
    }
    for(int i = temp.size(); i<n; i++){
        arr[i] = 0;
    }
}
int main(){
    int arr[] = {1,0,2,3,0,4,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    leftZero(arr,n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}