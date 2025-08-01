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
int x = 6;
int idx;
for(int i = 0; i<5; i++){
    if(v[i]==x){
        idx = i;
    }
}
cout<<idx;
}