#include <bits/stdc++.h>
using namespace std;
int grid[105][105];
bool vis[105][105];
int level[105][105];
vector<pair<int, int>> d ={{2,-1},{1,-2},{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2}};
int n, m;

bool base(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
void bfs(int ki, int kj)
{
    queue<pair<int, int>> q;
    q.push({ki, kj});
    vis[ki][kj] = true;
    level[ki][kj] = 0;
    while (!q.empty())
    {
        pair<int, int> prant = q.front();
        q.pop();
        int p_i = prant.first;
        int p_j = prant.second;
        for (int i = 0; i < 8; i++)
        {
            int c_i = p_i + d[i].first;
            int c_j = p_j + d[i].second;
            if (base(c_i, c_j) && !vis[c_i][c_j])
            {
                level[c_i][c_j] = level[p_i][p_j] + 1;
                vis[c_i][c_j] = true;
                q.push({c_i, c_j});
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));
        cin >> n >> m;
        int ki, kj,qi,qj;
        cin >> ki >> kj>>qi>>qj;
        bfs(ki, kj);
        cout<<level[qi][qj]<<endl;
    }

    return 0;
}