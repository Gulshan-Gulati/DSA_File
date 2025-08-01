#include<iostream>
#include<vector>
#include<list>
#include<unordered_map>
#include<queue>
#include<unordered_set>
using namespace std;

vector<list<int>>graph;
unordered_set<int>visited;
vector<int>result;
int v;
void add_edges(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}
void bfs(int src, vector<int>&dist){
    queue<int>qu;
    visited.clear();
    dist.resize(v,INT8_MAX);
    dist[src] = 0;
    visited.insert(src);
    qu.push(src);
    while(not qu.empty()){
        int curr = qu.front();
        qu.pop();
        for(auto neighbour:graph[curr]){
            if(not visited.count(neighbour)){
                qu.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour] = dist[curr] + 1;
            }
        }
    }
}
int main(){
    cout<<"Enter no. of Vertices :";
    cin>>v;
    graph.resize(v,list<int>());
    int e;
    cout<<"Enter the no. of edges :";
    cin>>e;
    visited.clear();

    cout<<"Enter source and Destination :";
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edges(s,d);
    }
    int x;
    cout<<"Enter source :";
    cin>>x;
    vector<int>dist;
    bfs(x,dist);
    for(int i = 0; i<dist.size(); i++){
        cout<<"Distance from "<<x<<"to"<<i<<": "<<dist[i]<<endl;
    }
    return 0;
}