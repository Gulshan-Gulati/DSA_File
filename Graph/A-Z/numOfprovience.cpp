#include<iostream>
#include<vector>
using namespace std;

void dfs(int node, vector<int> adj[], int vis[]) {
    vis[node] = 1; 
    for(auto it : adj[node]) {
        if(!vis[it]) {  
            dfs(it, adj, vis);
        }
    }
}

void dfsGraph(int v, vector<int> adj[]) {
    int vis[v] = {0}; 
    int count = 0; 

    for(int i = 0; i < v; i++) {
        if(!vis[i]) {  
            dfs(i, adj, vis);  
            count++;  
        }
    }
    cout << "Number of connected components: " << count << endl;
}

void add_edge(vector<int> adj[], int src, int dest) {
    adj[src].push_back(dest);
    adj[dest].push_back(src);
}

int main() {
    int v = 8;  
    vector<int> adj[v];

    add_edge(adj, 0, 1);
    add_edge(adj, 1, 2);
    add_edge(adj, 3, 4);
    add_edge(adj, 4, 5);
    add_edge(adj, 6, 7);

    dfsGraph(v, adj);

    return 0;
}
