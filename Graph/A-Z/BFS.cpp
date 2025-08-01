#include<iostream>
#include<vector>
#include<list>
#include<unordered_map>
#include<queue>
#include<unordered_set>
using namespace std;
vector<int> bfsGraph(int v, vector<int>adj[]){
    int vis[v] = {0};
    vis[0] = 1;
    queue<int>q;
    q.push(0);
    vector<int>bfs;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it: adj[node]){
            if(!vis[it]) {
                vis[it] = 1; 
                q.push(it); 
            }
        }    

    }
    return bfs;
}
void add_edge(vector<int> adj[],int src,int dest){
    adj[src].push_back(dest);
    adj[dest].push_back(src);
}
void display(vector<int>&ans){
    for(int i = 0; i<5;i++){
        cout<<ans[i]<<"->";
    }
}
int main(){
    vector<int> adj[6];
    int e;
    cin>>e;
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edge(adj,s,d);
    }
    // add_edge(adj,0,1);
    // add_edge(adj,1,2);
    // add_edge(adj,1,3);
    // add_edge(adj,0,4);
    vector <int> ans = bfsGraph(5,adj);
    display(ans);
}