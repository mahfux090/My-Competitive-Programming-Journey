#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    int m=a[0];
    int c=0;
    for (int i = 0; i < n; i++)
    {
        if (m==a[i])
        {
            c++;
        }
    }
    if (c%2==1)
    {
        cout<<"Lucky";
    }
    else{
        cout<<"Unlucky";
    }
    return 0;
}