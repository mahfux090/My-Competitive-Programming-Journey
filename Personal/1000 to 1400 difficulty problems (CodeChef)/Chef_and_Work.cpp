#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long k;
        cin>>n>>k;
        vector<long long>w(n);
        bool impossible=0;
        for(int i=0;i<n;i++)
        {
            cin>>w[i];
            if(w[i]>k) impossible=1;
        }
        if(impossible)
        {
            cout<<-1<<endl;
            continue;
        }
        int trips=1;
        long long curr=0;
        for(int i=0;i<n;i++)
        {
            if(curr+w[i]>k)
            {
                trips++;
                curr=w[i];
            }
            else curr+=w[i];
        }
        cout<<trips<<endl;
    }
    return 0;
}
