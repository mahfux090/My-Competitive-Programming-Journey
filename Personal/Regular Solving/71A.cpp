#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int ct =s.size();
        if(ct-2>=9)
            cout<<s.front()<<ct-2<<s.back()<<endl;
        else
            cout<<s<<endl;
    }
    
    return 0;
}