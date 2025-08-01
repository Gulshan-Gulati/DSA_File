#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    for(int i =0; i<5; i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;

    vector<int>v2(v.size());
    v2.push_back(v.size());
        for(int i=0; i<v.size(); i++){
            v2[i] = v[i];
        }
        for(int i=0; i<v.size(); i++){
            cout<<v2[i]<<" ";
        }
}