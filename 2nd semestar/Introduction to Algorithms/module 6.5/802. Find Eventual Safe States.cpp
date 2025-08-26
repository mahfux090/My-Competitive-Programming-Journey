// https://leetcode.com/problems/find-eventual-safe-states/description/

class Solution {
public:
 bool vis[10005];
    bool pathvis[10005];
    vector<int> safe;
    bool dfs(int src, vector<vector<int>>& graph)
    {
        vis[src]=true;
        pathvis[src]=true;
        for(int child: graph[src])
        {
            if(vis[child] && pathvis[child])
                return true;
            if(!vis[child])
                if(dfs(child, graph))
                    return true;
        }
        safe.push_back(src);
        pathvis[src]= false;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        for(int i=0;i<n;i++)
            if(!vis[i])
                dfs(i,graph);
        sort(safe.begin(),safe.end());
        return safe;
    }
};