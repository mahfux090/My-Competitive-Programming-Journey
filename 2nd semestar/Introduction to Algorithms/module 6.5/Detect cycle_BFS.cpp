// https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool vis[10005];
    int parent[10005];
    bool cycle;

    void bfs(int src, vector<vector<int>>& adj) {
        queue<int>q;
        q.push(src);
        vis[src]=true;
        while (!q.empty())
        {
            int par=q.front();
            q.pop();
            for(auto child: adj[par])
            {
                if(vis[child] && child!=parent[par])
                    cycle=true;
                else if(!vis[child] )
                {
                    vis[child]=true;
                    parent[child]=par;
                    q.push(child);
                }
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
            if (!vis[i]) bfs(i, adj);
        }
        return cycle;
    }
};
