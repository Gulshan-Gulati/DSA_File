#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    for(int i = 0; i<5; i++){
        int elem;
        cin>>elem;
        v.push_back(elem);
    }
    vector<int>v2(v.size());
    // for(int i=0; i<5; i++){
    //         v2.push_back(v[i]);
    // }

    v2.push_back(v.size());
    for(int i=0; i<5; i++){
       v2[i] = v[i];
    }
    for(int i=0; i<v.size(); i++){
        cout<<v2[i]<<" ";
    }

}
