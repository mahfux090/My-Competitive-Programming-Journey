class Solution {
public:
    vector<int> g[205];
    bool vis[205];

    void dfs(int u)
    {
        vis[u]=true;
        for(int v:g[u])
            if(!vis[v])
                dfs(v);
    }

    int findCircleNum(vector<vector<int>>& mat) {
        int n=mat.size();

        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                if(mat[i][j]==1)
                {
                    g[i].push_back(j);
                    g[j].push_back(i);
                }

        int cnt=0;
        for(int i=0;i<n;i++)
            if(!vis[i])
            {
                dfs(i);
                cnt++;
            }

        return cnt;
    }
};
