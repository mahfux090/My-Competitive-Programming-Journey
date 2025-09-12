#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s,s1;
        cin>>s>>s1;
        sort(s.begin(),s.end());
        sort(s1.begin(),s1.end());
        if(s==s1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
    return 0;
}