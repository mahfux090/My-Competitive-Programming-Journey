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
int bfs(int si, int sj)
{
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj]=true;
    int rm=1;
    while (!q.empty())
    {
        pair<int,int>prant=q.front();
        int pi=prant.first;
        int pj=prant.second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci=pi+d[i].first;
            int cj=pj+d[i].second;
            if(base(ci,cj) && !vis[ci][cj] && grid[ci][cj]=='.')
            {
                vis[ci][cj]=true;
                q.push({ci,cj});
                rm++;
            }
        }
    }
    return rm;
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
    vector<int>sz;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(!vis[i][j] && grid[i][j]=='.')
        {
            int ct=bfs(i,j);
            sz.push_back(ct);
   
        }
        }
    }
    sort(sz.begin(),sz.end());
    if(sz.empty())
        cout<<0;
    else
    {
        for(int x: sz)
        cout<<x<<" ";
    } 
    
    return 0;
}