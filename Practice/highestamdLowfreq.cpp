#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int arr[] = {1,2,2,3,3,1,4,5,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    unordered_map<int, int>mp;
    for(int i : arr){
        mp[i]++;
    }
    int maxFreq = INT8_MIN;
    int minFreq = INT8_MAX;
    int minNum = -1;
    int maxNum = -1;
    for(auto it : mp){
        if(it.second < minFreq){
            minFreq = it.second;
            minNum = it.first;
        }
    }
    for(auto it : mp){
        if(it.second > maxFreq){
            maxFreq = it.second;
            maxNum = it.first;

        }
    }
    cout<<minFreq<<endl;
    cout<<minNum<<endl<<endl;
    cout<<maxFreq<<endl;    
    cout<<maxNum<<endl;    
    
}