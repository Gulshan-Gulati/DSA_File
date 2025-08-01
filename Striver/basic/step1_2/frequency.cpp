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
        frequency[arr[i]]++;
    }
    // for(int i = 0; i<n; i++){
    //     frequency[arr[i]]++;
    // }
    for(auto it:frequency){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}