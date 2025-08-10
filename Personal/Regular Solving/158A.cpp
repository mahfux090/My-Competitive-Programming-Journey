#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int c=0;
    int cons=a[k-1];
    for (int i = 0; i < n; i++)
    {
        if(cons<=a[i] && a[i]>0)
            c++;
    }
    
    cout<<c;
    
    return 0;
}