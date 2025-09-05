#include <bits/stdc++.h>
using namespace std;
long long adj[1005][1005];
int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 1; i <=n; i++)
        for (int j = 1;j <=n; j++)
        {
            if (i == j)
                adj[i][j] = 0;
            else
                adj[i][j] = LLONG_MAX;
        }
    for (int i = 0; i <e; i++)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        adj[a][b] = min(adj[a][b],c);
    }

    for (int k = 1; k <=n; k++)
    {
        for (int i = 1; i <=n; i++)
            for (int j = 1; j <=n; j++)
                if (adj[i][k] != LLONG_MAX && adj[k][j] != LLONG_MAX && adj[i][k] + adj[k][j] < adj[i][j])
                    adj[i][j] = adj[i][k] + adj[k][j];
    }
    int q;
    cin>>q;
    while (q--)
    {
        int s,d;
        cin>>s>>d;
        if(adj[s][d]==LLONG_MAX) 
            cout<<-1<<endl;
        else 
            cout<<adj[s][d]<<endl;
    }
    
    return 0;
}