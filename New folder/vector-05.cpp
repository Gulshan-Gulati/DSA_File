#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;

    for(int i=0; i<5; i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    v.insert(v.begin()+1,6);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}