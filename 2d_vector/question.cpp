#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> adj_list;
vector<int> colors;

bool is_valid_coloring() {
    for (int u = 1; u < adj_list.size(); ++u) {
        for (int v : adj_list[u]) {
            if (colors[u] == colors[v]) {
                return false;
            }
        }
    }
    return true;
}

void dfs(int node, int color) {
    colors[node] = color;
    for (int neighbor : adj_list[node]) {
        if (colors[neighbor] == 0) {
            dfs(neighbor, 3 - color);
        }
    }
}

void solve(int N, int M, vector<pair<int, int>>& edges) {
    adj_list.resize(N + 1);
    colors.assign(N + 1, 0);

    for (const auto& edge : edges) {
        int a = edge.first, b = edge.second;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    for (int i = 1; i <= N; ++i) {
        if (colors[i] == 0) {
            dfs(i, 1);
        }
    }

    if (is_valid_coloring()) {
        cout << "YES" << endl;
        for (int i = 1; i <= N; ++i) {
            cout << colors[i] << " ";
        }
        cout << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<pair<int, int>> edges(M);
    for (int i = 0; i < M; ++i) {
        cin >> edges[i].first >> edges[i].second;
    }
    solve(N, M, edges);
    return 0;
}
