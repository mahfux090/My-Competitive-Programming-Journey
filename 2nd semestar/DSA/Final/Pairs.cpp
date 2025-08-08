#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<string,int>p,pair<string,int>q)
{
    if(p.first==q.first)
        return p.second>q.second;
    return p.first<q.first;
}
int main()
{
    int n;
    cin>>n;
    vector<pair<string,int>>v;
    for (int  i = 0; i < n; i++)
    {
        string s;
        int x;
        cin>>s>>x;
        v.push_back({s,x});
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0; i<n; i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }    
    return 0;
}
