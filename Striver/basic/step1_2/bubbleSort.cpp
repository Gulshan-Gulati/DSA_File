#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6] = {113,46,34,52,29,9};
    for(int i = 6; i>0; i--){
        for(int j = 0; j<6; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i = 0; i<6; i++){
        cout<<arr[i]<<" ";
    }
}