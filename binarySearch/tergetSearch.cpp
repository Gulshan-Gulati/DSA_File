#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int target){    
    int low = 0;
    int high = n-1;

    while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid] == target)
        return mid;
    else if(arr[mid]<target)
        low = mid+1;
    else
        low = mid-1;
    }
    return -1;
}
int main(){
    int arr[] = {1,2,4,45,5,78,81,82};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 45;
    int result = binarySearch(arr,n,target);
    if(result != -1){
        cout<<"Element is found at index : "<<result<<endl;
    } else{
        cout<<"Element not found in the array"<<endl;
    }
}