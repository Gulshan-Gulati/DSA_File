#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int> &arr){
    int n = arr.size();
    for(int i = 0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    // int arr[] = {3,1,2,5,4};
    vector<int>arr{3,2,1,5,4};
    bubbleSort(arr);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}