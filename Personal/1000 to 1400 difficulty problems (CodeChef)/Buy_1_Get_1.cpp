#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        map<char,int>mp;
        for(char c:s) mp[c]++;
        int cost=0;
        for(auto it:mp) cost+= (it.second+1)/2;
        cout<<cost<<endl;
    }
    return 0;
}
