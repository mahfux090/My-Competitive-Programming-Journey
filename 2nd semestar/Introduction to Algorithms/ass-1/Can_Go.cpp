#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;
bool base(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    
}
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    while (!q.empty())
    {
        pair<int, int> prant = q.front();
        int pi = prant.first, pj = prant.second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = pi + d[i].first;
            int cj = pj + d[i].second;
            if (base(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '#')
            {
                vis[ci][cj] = true;
                q.push({ci, cj});
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    int si, sj, di, dj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'A')
            {
                si = i;
                sj = j;
            }
            if (grid[i][j] == 'B')
            {
                di = i;
                dj = j;
            }
        }
    }
    memset(vis, false, sizeof(vis));
    bfs(si, sj);
    vis[di][dj] ? cout << "YES" : cout << "NO";

    return 0;
}