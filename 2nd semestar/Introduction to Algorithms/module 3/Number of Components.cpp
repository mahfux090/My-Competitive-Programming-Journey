#include<bits/stdc++.h>
using namespace std;
vector<int>adj[1005];
bool vis[1005];
void dfs(int src)
{
    cout<<src<<" ";
    vis[src]=true;
    for(int child:adj[src])
    {
        if(!vis[child])
        {
            dfs(child);
        }
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    int ct=0;
    for (int i = 0; i < n; i++)
    {
        if(vis[i]==false)
        {
            dfs(i);
            ct++;
        }
    }
    cout<<ct;
    return 0;
}