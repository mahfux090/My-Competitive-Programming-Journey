class Solution {
public:
    bool vis[1005][1005];
    vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
    int n,m;

    bool valid(int i, int j)
    {
        if(i<0 || i>=n || j<0 || j>=m)
            return false;
        return true;
    }

    void bfs(vector<vector<int>>& grid)
    {
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(grid[i][j] == 1)
                {
                    grid[i][j] = 0;
                    q.push({i,j});
                    vis[i][j] = true;
                }
        while(!q.empty())
        {
            pair<int,int> par = q.front();
            q.pop();
            int par_i = par.first;
            int par_j = par.second;
            for(int i=0;i<4;i++)
            {
                int ci = par_i + d[i].first;
                int cj = par_j + d[i].second;
                if(valid(ci,cj) && !vis[ci][cj])
                {
                    grid[ci][cj] = grid[par_i][par_j] + 1;
                    q.push({ci,cj});
                    vis[ci][cj] = true;
                }
            }
        }
    }
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        n = isWater.size();
        m = isWater[0].size();
        bfs(isWater);
        return isWater; 
    }
};