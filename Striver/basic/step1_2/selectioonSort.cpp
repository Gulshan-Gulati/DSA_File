#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={13,46,24,52,20};
    for(int i = 0; i<5; i++){
        int min = i;
        for(int j = i+1; j<5; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}