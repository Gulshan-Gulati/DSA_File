#include<iostream>
#include<vector>
#include<list>
using namespace std;
int v;
void dfs(int node,vector<int>adj[],int vis[],vector<int>&ls){
    vis[node] = 1;
    ls.push_back(node);
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,ls);
        }
    }
}
vector<int>dfsGraph(int v,vector<int>adj[]){
    int vis[v] = {0};
    int start = 0;
    vector<int>ls;
    dfs(start,adj,vis,ls);
    return ls;
}
void add_edge(vector<int> adj[],int src, int dest){
    adj[src].push_back(dest);
    adj[dest].push_back(src);
}
void display(vector<int>&ans){
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<"->";
    }
}
int main(){
   vector <int> adj[5];
    
    add_edge(adj, 0, 2);
    add_edge(adj, 2, 4);
    add_edge(adj, 0, 1);
    add_edge(adj, 0, 3);
   vector<int>ans = dfsGraph(7,adj);
   display(ans);
   return 0;
}

