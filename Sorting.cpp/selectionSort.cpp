#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,1,4,2,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i< n-1; i++){
        int min = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}