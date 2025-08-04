#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int mx=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0) cnt++;
        else cnt=0;
        mx=max(mx,cnt);
    }
    cout<<mx<<endl;
    return 0;
}
