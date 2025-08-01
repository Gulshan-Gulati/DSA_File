#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    map<int,int>map;
    for(int i = 0; i<n; i++){
        map[arr[i]]++;
    }
    int q;
    cout<<"Enter the value of q :";
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<map[number]<<endl;
    }
    return 0;
}