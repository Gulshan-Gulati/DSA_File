#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(6);

    for(int i=0; i<v.size(); i++){
        cin>>v[i];
    }
    int x = 7;
    int max = 0;
    for(int i=0; i<v.size(); i++){
        if(v[i]>7){
            max++;
        }
    }
    cout<<max;
}