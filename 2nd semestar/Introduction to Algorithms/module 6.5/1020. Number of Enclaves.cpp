// https://leetcode.com/problems/number-of-enclaves/description/

class Solution
{
public:
    int n, m, ct = 0;
    bool vis[505][505];
    vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    bool valid(int i, int j)
    {
        if (i < 0 || j < 0 || i >= n || j >= m)
            return false;
        return true;
    }
    void dfs(int si, int sj, vector<vector<int>> &grid)
    {
        vis[si][sj] = true;
        for (int i = 0; i < 4; i++)
        {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 1)
                dfs(ci, cj, grid);
            else
                ct++;
        }
    }
    int numEnclaves(vector<vector<int>> &grid)
    {
        n = grid.size();
        m = grid[0].size();
        memset(vis, false, sizeof(vis));
        for (int i = 0; i < n; i++)
        {
            if (grid[i][0] == 1 && !vis[i][0])
                dfs(i, 0, grid);
            if (grid[i][m - 1] == 1 && !vis[i][m - 1])
                dfs(i, m - 1, grid);
        }
        for (int j = 0; j < m; j++)
        {
            if (grid[0][j] == 1 && !vis[0][j])
                dfs(0, j, grid);
            if (grid[n - 1][j] == 1 && !vis[n - 1][j])
                dfs(n - 1, j, grid);
        }

        int ct = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (grid[i][j] == 1 && !vis[i][j])
                    ct++;
        return ct;
    }
};