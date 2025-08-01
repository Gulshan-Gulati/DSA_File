#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int x;
    cout<<"Enter the target : "<<endl;
    cin>>x;
    cout<<"Enter the element of array : "<<endl;
    for(int i = 0; i<n; i++){
        int value;
        cin>>value;
        v.push_back(value);
    }
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
        if(v[i]+v[j]==x){
            cout<<"("<<i<<","<<j<<")"<<endl;
        }
        }
    }
}