#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    char a;
    cin>>n>>a>>m;
    if (a=='>')
    {
        if (n>m)
        {
            cout<<"Right";
        }
        else{
            cout<<"Wrong";
        }
    }
    if (a=='<')
    {
        if (n<m)
        {
            cout<<"Right";
        }
        else{
            cout<<"Wrong";
        }
    }
    if (a=='=')
    {
        if (n==m)
        {
            cout<<"Right";
        }
        else{
            cout<<"Wrong";
        }
    }

    return 0;
}