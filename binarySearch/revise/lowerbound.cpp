#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,4,10,12,14,22,57,89,98};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 12;
    int lo = 0;
    int hi = n-1;
    bool flag = flag;
    if(lo <= hi){
        int mid = (lo+hi)/2;
        if(arr[mid] == target){
            flag = true;
            cout<<arr[mid];
        }
        else if(arr[mid]<target){
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
        if(flag == false)
        cout<<arr[hi];
    }

}
