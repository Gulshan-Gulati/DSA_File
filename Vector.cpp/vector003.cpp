#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vrr;
    for(int i=0; i<5; i++){
        int element;
        cin>>element;
        vrr.push_back(element);
    }
    for(int i=0; i<vrr.size(); i++){
        cout<<vrr[i]<<" ";
    }
    return 0;
}