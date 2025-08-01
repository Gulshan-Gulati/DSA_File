#include<iostream>
#include<vector>
using namespace std;
void sorting_practice(vector<int> &v){
    int n=v.size();
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(v[i]!=0 && v[j]==0){
                swap(v[i],v[j]);
            }
        }

    }
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sorting_practice(v);
    for(int i=0; i<n; i++){
            cout<<v[i]<<" ";       

    }
}