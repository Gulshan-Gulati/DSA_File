#include<bits/stdc++.h>
using namespace std;
int largestElem(vector<int>&arr){
    sort(arr.begin(), arr.end());
    return arr[arr.size()-1];
}
int main(){
    vector<int>arr = {2,5,1,3,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<largestElem(arr);
}