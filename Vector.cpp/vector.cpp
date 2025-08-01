#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    for(int i=0; i<5; i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //while loop;
    int idx = 0;
    while(idx<v.size()){
        cout<<v[idx++]<<" ";
    }
    cout<<endl;
    v.insert(v.begin()+2,3);
    //for each loop
    for(int val:v){
        cout<<val<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+2);
    for(int ele:v){
        cout<<ele<<" ";
    }
    return 0;
}
