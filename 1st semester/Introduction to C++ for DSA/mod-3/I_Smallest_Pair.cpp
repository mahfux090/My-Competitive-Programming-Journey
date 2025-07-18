#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int c  = 0; c < t; c++)
    {
        int n;
    cin>>n;
    int a[n];
    int count=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int re= a[i]+a[j]+j-i;
            if(re<count){
                count=re;
            }
        }
    }
    cout<<count<<endl;
    }
    return 0;
}