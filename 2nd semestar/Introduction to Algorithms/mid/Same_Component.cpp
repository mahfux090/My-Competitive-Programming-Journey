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
void dfs(int ki, int sj)
{
    vis[ki][sj]=true;
    for (int i = 0; i < 4; i++)
    {
        int ci=ki+d[i].first;
        int cj=sj+d[i].second;
        if(base(ci,cj) && !vis[ci][cj] && grid[ci][cj]=='.')
            dfs(ci,cj);
    }
}

int main()
{
    cin>>n>>m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j<m; j++)
            cin>>grid[i][j];
    memset(vis,false,kizeof(vis));
    int ki,sj;
    int di,dj;
    cin>>di>>dj;
    cin>>ki>>sj;
    dfs(ki,sj); 
    if(vis[di][dj])
        cout<<"YES";
    else
        cout<<"NO";   
    return 0;
}