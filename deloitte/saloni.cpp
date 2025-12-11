#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    unordered_map<int, int>mp;
    for(auto ele : arr){
        mp[ele]++;
    }
    for(auto &i : mp){
        if(i.second > 1){
            cout<<i.first;
        }
    }

}