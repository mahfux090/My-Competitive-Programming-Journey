#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>>adj[1005];
int dis[1005];

void dijkstra(int src)
{
    queue<pair<int,int>>par;
    par.push({src,0});
    dis[src]=0;
    while (!par.empty())
    {
        int par_node=par.front().first;
        int par_dis=par.front().second;
        par.pop();
        for(auto child: adj[par_node])
        {
            int child_node=child.first;
            int child_dis=child.second;
            if(par_dis+child_dis<dis[child_node])
            {
                dis[child_node]=par_dis+child_dis;
                par.push({child_node,dis[child_node]});
            }
        }
    }
    
}
int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b,c});
        adj[b].push_back({a,c});
    }
    for (int i = 0; i <n; i++)
        dis[i]=INT_MAX;
    dijkstra(0);
    for (int  i = 0; i < n; i++)
        cout<<i<<"-> "<<dis[i];
    
    return 0;
}