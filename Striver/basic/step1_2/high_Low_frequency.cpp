#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    int arr[n];
    map<int,int>frequency;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        // frequency[arr[i]]++;
    }
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i = 0; i<n; i++){
        frequency[arr[i]]++;
    }
     for (auto it : frequency) {
        if (it.second > max) {
            max = it.second;
        }
        if (it.second < min) {
            min = it.second;
        }
    }
    cout<<"Minimum Element :"<<min<<endl;
    cout<<"Maximum Element :"<<max<<endl;
    for(auto it:frequency){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}