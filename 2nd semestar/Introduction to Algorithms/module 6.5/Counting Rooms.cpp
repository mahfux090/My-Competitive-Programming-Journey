// https://cses.fi/problemset/task/1192

#include<bits/stdc++.h>
using namespace std;

bool vis[1005][1005];
int n,m;
char grid[1005][1005];
vector<pair<int,int>>d={{-1,0},{1,0},{0,-1},{0,1}};

bool valid( int i , int j)
{
    if(i<0 || j<0 || i>=n ||j>=m)
        return false;
    return true;
}

void dfs(int si , int sj)
{
    vis[si][sj]=true;
    for (int  i = 0; i <4; i++)
    {
        int ci=si+d[i].first;
        int cj=sj+d[i].second;
        if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]=='.')
            dfs(ci,cj);
    }
}

int main()
{
    cin>>n>>m;
    for (int i = 0; i <n; i++)
        for (int j = 0; j <m; j++)
            cin>>grid[i][j];
    memset(vis,false,sizeof(vis));
    int ct=0;
    for (int i = 0; i <n; i++)
        for (int j = 0; j <m; j++)
        {
            if(!vis[i][j] && grid[i][j]=='.')
            {
                dfs(i,j);
                ct++;
            }
        }
        cout<<ct;
    return 0;
}