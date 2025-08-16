#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    string r;
    int n=a.size();
    for (int i = 0; i <n; i++)
        r.push_back(a[i]==b[i]?'0':'1');
    cout<<r;
    return 0;
}