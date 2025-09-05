#include <bits/stdc++.h>
using namespace std;
class Edges
{
public:
    int a, b, c;
    Edges(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};
long long dis[1005];
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edges> edg;
    for (int i = 0; i < e; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edg.push_back(Edges(a, b, c));
    }
    for (int i = 1; i <=n; i++)
        dis[i] = LLONG_MAX;
    int src;
    cin>>src;
    dis[src] = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (auto ed : edg)
        {
            int a, b, c;
            a = ed.a;
            b = ed.b;
            c = ed.c;
            if (dis[a] != LLONG_MAX && dis[a] + c < dis[b])
                dis[b] = dis[a] + c;
        }
    }
    bool cycle=false;
    for(auto ed:edg)
    {
        if(dis[ed.a]!=LLONG_MAX && dis[ed.a]+ed.c<dis[ed.b])
            {
                cycle=true;
                break;
            }
    }
    int t;
    cin>>t;
    queue<int>q;
    while (t--)
    {
        int d;
        cin>>d;
        q.push(d);
        
    }
    if(cycle)
    {
        cout<<"Negative Cycle Detected"<<endl;
        return 0;    
    }
    while (!q.empty())
    {
        int d=q.front();
        if(dis[d]==LLONG_MAX)
            cout<<"Not Possible"<<endl;
        else
            cout<<dis[d]<<endl;
        q.pop();
    }
    
    
    return 0;
}