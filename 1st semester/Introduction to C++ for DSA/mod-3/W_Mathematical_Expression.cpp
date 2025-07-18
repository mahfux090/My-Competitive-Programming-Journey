#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x;
    char a,b;
    cin>>n>>a>>m>>b>>x;
    int re;
    if (a=='+')
    {
        re=n+m;
    }
    if (a=='-')
    {
        re=n-m;
    }
    if (a=='*')
    {re=n*m;
    }
    if(re==x)
    {
        cout<<"Yes";
    }
    else{
        cout<<re;
    }

    return 0;
}