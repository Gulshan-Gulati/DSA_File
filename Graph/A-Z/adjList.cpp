#include<iostream>
#include<vector>
using namespace std;
int main(){
    int nv,e;
    cin>>nv>>e;
    vector<int>adj[nv+1];
    for(int i = 0; i<nv; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return 0;
}