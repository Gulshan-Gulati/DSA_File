#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the element : "<<endl;
    for(int i=0; i<v.size(); i++){
        cin>>v[i];
    }
    int max = -1;
    for(int i=0; i<v.size(); i++){
        if(v[i]>max){
            max = v[i];
        }
    }
    cout<<max;
}