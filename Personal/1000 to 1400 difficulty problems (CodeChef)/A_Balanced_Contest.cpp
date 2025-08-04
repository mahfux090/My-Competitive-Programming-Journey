#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin>>t;
    while(t--)
    {
        int n; long long p;
        cin>>n>>p;
        vector<long long>sol(n);
        for(int i=0;i<n;i++) cin>>sol[i];
        int cakewalk=0,hard=0;
        int half = p/2, tenth = p/10;
        for(int i=0;i<n;i++)
        {
            if(sol[i]>=half) cakewalk++;
            if(sol[i]<=tenth) hard++;
        }
        if(cakewalk==1 && hard==2) cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}
