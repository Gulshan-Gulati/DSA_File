#include<iostream>
#include<vector>
using namespace std;
void zero_sort(vector<int> &v){
    int n=v.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
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
    zero_sort(v);
    for(int i=0; i<n; i++){
        cout<<v[i];
    }
    cout<<endl;
    return 0;
}