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
    int i=0,flag=0;
    int j=n-1;
    while (i<j)
    {
        if (a[i]!=a[j])
        {
            flag++;
        }
        i++;
        j--;
    }
    if (flag==0)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}