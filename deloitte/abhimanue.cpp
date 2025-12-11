#include<iostream>
using namespace std;
int main(){
    int arr[] = {2, 2, 11, 15, 1,8, 10,20,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 9;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] +arr[j] == target){
                cout<<i<<" "<<j;
            }
        }
    }
}