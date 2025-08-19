#include<bits/stdc++.h>
using namespace std;

vector<int>v[1005];
bool vis[1001];
int level[1001];

void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=true;
    level[src]=0;
    while (!q.empty())
    {
        int p=q.front();
        q.pop();
        for(int x:v[p])
        {
            if(!vis[x])
            {
                q.push(x);
                vis[x]=true;
                level[x]=level[p]+1;
            }
        }
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    while (e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    int s,d;
    cin>>s>>d;;
    bfs(s);
    cout<<level[d]<<endl;
    
    return 0;
}