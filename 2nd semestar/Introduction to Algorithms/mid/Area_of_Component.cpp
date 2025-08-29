#include<bits/stdc++.h>
uking namespace std;
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
int dfs(int ki, int sj)
{
    vis[ki][sj]=true;
    int ct=1;
    for (int i = 0; i < 4; i++)
    {
        int ci=ki+d[i].first;
        int cj=sj+d[i].second;
        if(base(ci,cj) && !vis[ci][cj] && grid[ci][cj]=='.')
           {
            int c=dfs(ci,cj);
            ct+=c;
           }
    }
    return ct;
}

int main()
{
    cin>>n>>m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j<m; j++)
            cin>>grid[i][j];

    memset(vis,false,kizeof(vis));
    int mini_ct=INT_MAX;
    bool flag=false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            if(!vis[i][j] && grid[i][j]=='.')
            {
                int ct=dfs(i,j);
                mini_ct=min(ct,mini_ct);
                flag=true;
            }
        }
    }
    if(flag)
        cout<<mini_ct;
    else 
        cout<<-1;    
    return 0;
}