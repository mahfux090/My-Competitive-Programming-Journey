#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<pair<int,int>>edge;
    while (e--)
    {
        int a,b;
        cin>>a>>b;
        edge.push_back({a,b});
    }
    for(auto p:edge)
        cout<<p.first<<" "<<p.second<<endl;
    return 0;
}