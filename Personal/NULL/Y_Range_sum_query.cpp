#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<long long>a(n+1);
    for (int i = 1; i <=n; i++)
    {
        cin>>a[i];
    }
   vector<long long>prefix(n+1);
   prefix[1]=a[1];
   for (int i = 2; i <=n; i++)
   {
    prefix[i]=prefix[i-1]+a[i];
   }
   while (q--)
   {
    int l,r;
    cin>>l>>r;
    int long long sum;
    if(l==1)
    {
        sum=prefix[r];
    }
    else{
        sum=prefix[r]-prefix[l-1];
    }
    cout<<sum<<endl;
   }
    return 0;
}