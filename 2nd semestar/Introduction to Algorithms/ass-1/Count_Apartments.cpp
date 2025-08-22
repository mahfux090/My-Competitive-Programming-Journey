#include<bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>>d={{-1,0},{1,0},{0,-1},{0,1}};
int n,m;

bool base(int i,int j)
{
    if(i<0 || i>=n || j<0 ||j>=m)
        return false;
    return true;
}
void bfs(int si, int sj)
{
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj]=true;
    while (!q.empty())
    {
        pair<int,int>prant=q.front();
        int p_i=prant.first;
        int p_j=prant.second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int c_i=p_i+d[i].first;
            int c_j=p_j+d[i].second;
            if(base(c_i,c_j) && !vis[c_i][c_j] && grid[c_i][c_j]=='.')
            {
                vis[c_i][c_j]=true;
                q.push({c_i,c_j});
            }
        }
    }
}

int main()
{
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<m; j++)
        {
            cin>>grid[i][j];
        }
    }
    memset(vis,false,sizeof(vis));
    int ct=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(!vis[i][j] && grid[i][j]=='.')
        {
            bfs(i,j);
            ct++;
        }
        }
    }  
    cout<<ct;
    return 0;
}