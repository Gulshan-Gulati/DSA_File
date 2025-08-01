#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;

    for(int i=0; i<5; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    v.insert(v.begin()+1,4);
    for(int ele:v){
        cout<<ele;
    }
    cout<<endl;
    v.erase(v.end()-1);
    for(int i=0; i<v.size(); i++){
        cout<<v[i];
    }
    return 0;
}