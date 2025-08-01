#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> a){
    for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }
    return;
}
int main(){
    vector<int>v;
    vector<int>v2(v.size());
    for(int i=0; i<5; i++){
        int element;
        cin>>element;
        v.push_back(element);
        display(v);
    }
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){

        }
    }
}
