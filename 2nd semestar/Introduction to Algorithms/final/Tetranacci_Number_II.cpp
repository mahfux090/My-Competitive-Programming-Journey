#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n+1];
    a[0]=0;
    a[1]=1;
    a[2]=1;
    a[3]=2;
    for (int i = 4; i <=n; i++)
    {
        a[i]=a[i-1]+a[i-2]+a[i-3]+a[i-4];
    }
    cout<<a[n];    
    return 0;
}

