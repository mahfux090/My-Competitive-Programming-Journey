#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    string s;
    for (int i = 1; i < m; i++)
        s.push_back('.');
    s.push_back('#');
    string t;
    t.push_back('#');
    for (int i = 1; i < m; i++)
        t.push_back('.');
    string w;
    for (int i = 1; i <=m; i++)
        w.push_back('#');
    for (int i = 1; i <=n; i++) {
        if(i%2==1)
            cout<<w<<endl;
        else if ((i/2)%2==1)
            cout<<s<<endl;
        else cout<<t<<endl;
    }
}