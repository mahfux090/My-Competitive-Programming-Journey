// https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool vis[10005];
    int parent[10005];
    bool cycle;

    void dfs(int src, vector<vector<int>>& adj) {
        vis[src] = true;
        for (auto child : adj[src]) {
            if (!vis[child]) {
                parent[child] = src;
                dfs(child, adj);
            } else if (child != parent[src]) {
                cycle = true;
            }
        }
    }

    bool isCycle(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);
        for (auto e : edges) {
            int u = e[0], v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u); 
        }

        memset(vis, false, sizeof(vis));
        memset(parent, -1, sizeof(parent));
        cycle = false;

        for (int i = 0; i < V; i++) {
            if (!vis[i]) dfs(i, adj);
        }
        return cycle;
    }
};
