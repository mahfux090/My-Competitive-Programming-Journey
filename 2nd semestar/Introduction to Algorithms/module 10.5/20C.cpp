#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> g(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }
    const long long INF = 1e18;
    vector<long long> d(n + 1, INF);
    vector<int> p(n + 1, -1);
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    d[1] = 0;
    pq.push({0, 1});
    while (!pq.empty())
    {
        auto [du, u] = pq.top();
        pq.pop();
        if (du != d[u])
            continue;
        for (auto [v, w] : g[u])
        {
            if (d[u] + w < d[v])
            {
                d[v] = d[u] + w;
                p[v] = u;
                pq.push({d[v], v});
            }
        }
    }
    if (d[n] == INF)
    {
        cout << -1 << "\n";
        return 0;
    }
    vector<int> path;
    for (int v = n; v != -1; v = p[v])
        path.push_back(v);
    reverse(path.begin(), path.end());
    for (int x : path)
        cout << x << " ";
}
