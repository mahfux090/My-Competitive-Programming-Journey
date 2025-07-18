#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int a[n];
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    int ma=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        ma=max(ma,a[i]);
    }
   cout<<ma;
    
    return 0;
}