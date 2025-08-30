#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> g[N];
bool vis[N];
vector<int> rep;

void dfs(int u)
{
    vis[u] = 1;
    for (auto v : g[u])
    {
        if (!vis[v])
            dfs(v);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for (int i = 1; i <= n; i++)
        if (!vis[i])
        {
            rep.push_back(i);
            dfs(i);
        }
    cout << rep.size() - 1 << "\n";
    for (int i = 0; i + 1 < rep.size(); i++)
        cout << rep[i] << " " << rep[i + 1] << "\n";
}
