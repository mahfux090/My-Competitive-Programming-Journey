#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
pair<int, int> parent[1005][1005];
int n, m;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    while (!q.empty())
    {
        int pi = q.front().first;
        int pj = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = pi + d[i].first;
            int cj = pj + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && (grid[ci][cj] != '#'))
            {
                vis[ci][cj] = true;
                parent[ci][cj] = {pi, pj};
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
            if (grid[i][j] == 'R')
            {
                si = i;
                sj = j;
            }

            if (grid[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    bfs(si, sj);
    if (vis[di][dj])
    {

        int ni = di, nj = dj;
        while (1)
        {
            pair<int, int> par = parent[ni][nj];
            ni = par.first;
            nj = par.second;
            if (grid[ni][nj] == 'R')
            {
                break;
            }
            grid[ni][nj] = 'X';
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << grid[i][j];
            }
            cout << endl;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << grid[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}