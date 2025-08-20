#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int free=0,ans=0;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        if(x==-1)
        {
            if(free>0) free--;
            else ans++;
        }
        else free+=x;
    }
    cout<<ans<<endl;
}
