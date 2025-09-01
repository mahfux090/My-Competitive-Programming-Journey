#include <bits/stdc++.h>
using namespace std;
int adj[1005][1005];
int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                adj[i][j] = 0;
            else
                adj[i][j] = INT_MAX;
        }
    for (int i = 0; i < e; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a][b] = c;
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (adj[i][k] != INT_MAX && adj[k][j] != INT_MAX && adj[i][k] + adj[k][j] < adj[i][j])
                    adj[i][j] = adj[i][k] + adj[k][j];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (adj[i][j] == INT_MAX)
                cout << "INF ";
            else
                cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}