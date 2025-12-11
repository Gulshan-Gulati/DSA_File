#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,-3,-1,-4,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int idx = -1;
    int negCount = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] < 0){
            negCount++;
        }
    }
    int min = 1;
    for(int i = 0; i<n; i++){
        if(arr[i] < 0){
            if(negCount % 2 != 0){
                min *= arr[i];
            }
            else if(arr[i] < min){
            min = arr[i];
            // idx = i;
            }
       }
        
    }
    int mul = 1;
    for(int i = 0; i<n; i++){
        if(arr[i] > 0){
            mul *= arr[i];
        }
    }
    int result = 1;;
    result = mul * min;
    cout<<result;
}