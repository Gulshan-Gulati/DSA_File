#include<bits/stdc++.h>
using namespace std;
int floor(vector<int>&arr, int x){
    int n = arr.size();
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] <= x){
            ans = arr[mid];
            low = mid + 1;
        } else{
            high = mid - 1;
        }
    }
    return ans;
}
int ceil(vector<int>&arr, int x){
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] >= x){
            ans = arr[mid];
        high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {3,4,4,7,8,10};
    int x = 5;
    int ansFloor = floor(arr,x);
    int ansCeil = ceil(arr,x);
    cout<<ansFloor<<", "<<ansCeil;
    
    return 0;
}