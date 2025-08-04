#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }
        int mx=0,v=0;
        for(auto it:mp)
        {
            if(it.second>mx || (it.second==mx && it.first<v))
            {
                mx=it.second;
                v=it.first;
            }
        }
        cout<<v<<" "<<mx<<endl;
    }
    return 0;
}
