#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class graph {
    public:
    unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, bool direction) {
        // direction = 0 -> undirected
        // direction = 1 -> directed

        // Create an edge from u to v
        adj[u].push_back(v);

        // If undirected, create an edge from v to u
        if (direction == 0) {
            adj[v].push_back(u);
        }
    }

    void printAdjlist() {
        for (auto it : adj) {
            cout << it.first << " -> ";
            for (auto j : it.second) {
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    int m;
    cout << "Enter the value of m: " << endl;
    cin >> m;

    graph g;
    cout << "Enter the values of u and v: " << endl;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        // Creating an directed graph
        g.addEdge(u, v, 1);
    }

    cout << "The adjacency list of the graph is: " << endl;
    g.printAdjlist();

    return 0;
}
