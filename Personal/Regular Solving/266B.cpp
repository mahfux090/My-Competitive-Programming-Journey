#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    char a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    while (t--)
    {
        for (int i = 0; i < n-1; i++)
        {
            if (a[i]=='B' && a[i+1]=='G')
            {
                swap(a[i],a[i+1]);
                i++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i];
    }
    return 0;
}