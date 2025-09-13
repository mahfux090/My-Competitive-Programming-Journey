#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int time=240-k,p=0,ct=0;
    for (int i = 1; i <=n; i++)
    {
        p+=i*5;
        if(p<=time)
            ct++;
        
    }
    cout<<ct;
    return 0;
}