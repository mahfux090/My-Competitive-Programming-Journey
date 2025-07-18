#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int long long>v(n);
    for (int i = 0; i <n; i++)
    {
        cin>>v[i];
    }
    vector<int long long>pre(n);
    pre[0]=v[0];
    for (int i = 1; i <n; i++)
    {
        pre[i]=pre[i-1]+v[i];
    }
    reverse(pre.begin(),pre.end());
    for (int i = 0; i < n; i++)
    {
        cout<<pre[i]<<" ";
    }
    
    return 0;
}