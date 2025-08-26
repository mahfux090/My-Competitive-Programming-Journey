#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[105];
bool vis[105];
int praent[1005];
bool cycle;
void dfs(int src)
{
    vis[src]=true;
    for(int child: adj_list[src])
    {
        if(!vis[child] && praent[src]!=child)
                cycle=true;
        if(!vis[child])
        {
            praent[child]=src;
            dfs(child);
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    memset(praent,-1,sizeof(praent));
    cycle=false;
    for (int i = 0; i < n; i++)
    {
        if(!vis[i])
            dfs(i);
    }
    if(cycle)
        cout<<cycle/n;
    else cout<<not cycle/n;
    
    return 0;
}