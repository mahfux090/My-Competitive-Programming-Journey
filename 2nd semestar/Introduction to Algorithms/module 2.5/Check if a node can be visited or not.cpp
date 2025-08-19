#include<bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool visit[1005];

void bfs(int src)
{
    queue<int>q;
    q.push(src);
    visit[src]=true;
    while (!q.empty())
    {
        int prant=q.front();
        q.pop();
        cout<<prant<<" ";
        for(int x: v[prant])
        {
            if(!visit[x])
            {
                q.push(x);
                visit[x]==true;
            }
        }
    }
    
}
int main()
{
    int n,e;
    cin>>n>>e;
    for (int  i = 0; i <e; i++)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(visit,false,sizeof(visit));
    int src,dis;
    cin>>src>>dis;
    bfs(src);
    if(visit[dis])
        cout<<"yes";
    else cout<<"No";
    
    return 0;
}