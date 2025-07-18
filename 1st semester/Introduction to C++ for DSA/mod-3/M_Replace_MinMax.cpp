#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c[n];
    for (int i = 0; i < n; i++)
    {
        cin>>c[i];
    }
    int mini=0,maxi=0;
    for (int i = 0; i < n; i++)
    {
        if (c[i]< c[mini])
        {
            mini=i;
        }
        if (c[i]>c[maxi])
        {
            maxi=i;
        }
    }
    swap(c[mini] , c[maxi]);
    for (int i = 0; i < n; i++)
    {
        cout<<c[i]<<" ";
    }
    
    return 0;
}