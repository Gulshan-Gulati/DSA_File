#include <bits/stdc++.h>
using namespace std;

// Function to prepare adjacency list
void prepareAdjList(unordered_map<int, list<int>> &adjList, vector<pair<int, int>> &edges)
{
    for (auto &edge : edges)
    {
        int u = edge.first;
        int v = edge.second;
        adjList[u].push_back(v);
        adjList[v].push_back(u); // because graph is undirected
    }
}

// BFS function for a single component
void bfs(unordered_map<int, list<int>> &adjList, unordered_map<int, bool> &visited, vector<int> &ans, int node)
{
    queue<int> q;
    q.push(node);
    visited[node] = true;

    while (!q.empty())
    {
        int frontNode = q.front();
        q.pop();

        // store in ans
        ans.push_back(frontNode);

        // traverse neighbours
        for (auto neighbour : adjList[frontNode])
        {
            if (!visited[neighbour])
            {
                q.push(neighbour);
                visited[neighbour] = true;
            }
        }
    }
}

// BFS traversal for disconnected graph
vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    unordered_map<int, list<int>> adjList;
    vector<int> ans;
    unordered_map<int, bool> visited;

    // prepare adjacency list
    prepareAdjList(adjList, edges);

    // traverse all components of the graph
    for (int i = 0; i < vertex; i++)
    {
        if (!visited[i])
        {
            bfs(adjList, visited, ans, i);
        }
    }

    return ans;
}

// Driver code
int main()
{
    int V = 7; // number of vertices
    vector<pair<int, int>> edges = {
        {0, 3}, {0, 2}, {3, 1}, {2, 4}, {1, 4}};

    vector<int> result = BFS(V, edges);

    cout << "BFS Traversal: ";
    for (int node : result)
    {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
