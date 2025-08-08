#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin,s);
        string a,ans;
        map<string,int>mp;
        int mx=0;
        stringstream ss(s);
        while (ss>>a)
        {
            mp[a]++;
            if(mp[a]>mx)
            {
                mx=mp[a];
                ans=a;
            }
        }
        cout<<ans<<" "<<mx<<endl;
    }
    return 0;
}
