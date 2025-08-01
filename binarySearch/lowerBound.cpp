#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,4,5,9,15,18,21,24};
    int n = 9;
    int target = 12;
    int lo = 0;
    int hi = n-1;
    bool flag = flag;
    while(lo<=hi){
        int mid = (lo + hi)/2;
        if(arr[mid] == target){
        flag = true;
        cout<<arr[mid];
        break;
        }
    else if(arr[mid]<target)
    lo = mid+1;
    else hi = mid - 1;
    }
    if(flag == false)
    cout<<arr[hi];
}