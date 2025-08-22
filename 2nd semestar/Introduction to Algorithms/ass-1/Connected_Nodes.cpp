#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<int>adj_list[n];
    for (int i = 0; i < e; i++)
    {
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int q;
    cin>>q;
    while (q--)
    {
        int x;
        cin>>x;
        vector<int>v=adj_list[x];
        sort(v.begin(),v.end(),greater<int>());
        if(v.size()==0)
            cout<<"-1";
        for(int a:v)
            cout<<a<<" ";
        cout<<endl;
    }
    
    return 0;
}