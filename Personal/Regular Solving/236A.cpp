#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<char,int>mp;
    for(char c: s)
    {
        mp[c]++;
    }
    if(mp.size()%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
    return 0;
}