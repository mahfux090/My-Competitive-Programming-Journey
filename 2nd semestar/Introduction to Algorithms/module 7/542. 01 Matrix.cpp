class Solution {
public:
    vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    int n, m;

    bool valid(int i, int j) {
        if (i < 0 || i >= n || j < 0 || j >= m)
            return false;
        return true;
    }

    void bfs(vector<vector<int>>& grid) {
        bool vis[n][m];
        memset(vis, false, sizeof(vis));
        queue<pair<int, int>> q;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (grid[i][j] == 0) {
                    q.push({i, j});
                    vis[i][j] = true;
                }
        while (!q.empty()) {
            pair<int, int> par = q.front();
            q.pop();
            int par_i = par.first;
            int par_j = par.second;
            for (int i = 0; i < 4; i++) {
                int ci = par_i + d[i].first;
                int cj = par_j + d[i].second;
                if (valid(ci, cj) &&
                    (grid[ci][cj] > grid[par_i][par_j] + 1 || !vis[ci][cj])) {
                    q.push({ci, cj});
                    grid[ci][cj] = grid[par_i][par_j] + 1;
                    vis[ci][cj] = true;
                }
            }
        }
    }

    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        n = mat.size();
        m = mat[0].size();
        bfs(mat);
        return mat;
    }
};