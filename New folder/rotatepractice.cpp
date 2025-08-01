#include<iostream>
#include<vector>5

using namespace std;
int main(){
    vector<int> v;
    v.push_back(8);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    v.push_back(5);
    v.push_back(9);
    v.push_back(7);
    v.push_back(1);
    int k;
    cout<<"Enter k:";
    cin>>k;
    int n=8;
k=k%n;
int ansArr[n];
int j=0;
    for(int i=n-k; i<n; i++){
ansArr[j++]=v[i];
    }
     for(int i=0; i<n; i++){
ansArr[j++]=v[i];
    }
     for(int i=0; i<n; i++){
        cout<<ansArr[i]<<" ";
    }
}