#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b,c;cin>>a>>b>>c;
    string s=a+b;
    sort(s.begin(),s.end());
    sort(c.begin(),c.end());
    if(s==c) cout<<"YES\n";
    else cout<<"NO\n";
}
