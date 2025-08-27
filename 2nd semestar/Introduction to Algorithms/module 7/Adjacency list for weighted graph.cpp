#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int,int>>adj[1005];
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b,c});
        adj[b].push_back({a,c});
    }
    for (int i = 0; i <n; i++)
    {
        cout<<i<<"->"<<" ";
        for (auto p: adj[i])
        {
            cout<<p.first<<","<<p.second;
        }
        cout<<endl;
        
    }
    
    return 0;
}