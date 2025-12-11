#include <bits/stdc++.h>
using namespace std;

// Function to prepare adjacency list
void prepareAdjList(unordered_map<int, set<int>> &adjList, vector<pair<int, int>> &edges){
    for (int i = 0; i<edges.size(); i++){
        int u = edges[i].first;
        int v = edges[i].second;
        adjList[u].insert(v);
        adjList[v].insert(u);
    }
}
// BFS function for a single component
void bfs(unordered_map<int, set<int>> &adjList, unordered_map<int, bool> &visited, vector<int> &ans, int node){
    queue<int>q;
    q.push(node);
    visited[node] = 1;
    while(!q.empty()){
        int frontNode = q.front();
        q.pop();
        ans.push_back(frontNode);
        for(auto i :adjList[frontNode]){
            if(!visited[frontNode]){
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}
// BFS traversal for disconnected graph
vector<int> BFS(int vertex, vector<pair<int, int>> edges){
    unordered_map<int, set<int>>adjList;
    vector<int> ans;
    unordered_map<int, bool> visited;
    // prepare adjacency list
    prepareAdjList(adjList, edges);
    // traverse all components of the graph
    for(int i = 0; i<vertex; i++){
        if(!visited[i]){
            bfs(adjList, visited,ans, i);
        }
    }
    return ans;
}
// Driver code
int main(){
    int V = 5; // number of vertices
    vector<pair<int, int>> edges = {
        {0, 3}, {0, 2}, {3, 1}, {2, 4}, {1, 4}};
    vector<int> result = BFS(V, edges);
    cout << "BFS Traversal: ";
    for (int node : result){
        cout << node << " ";
    }
    cout << endl;
    return 0;
}
