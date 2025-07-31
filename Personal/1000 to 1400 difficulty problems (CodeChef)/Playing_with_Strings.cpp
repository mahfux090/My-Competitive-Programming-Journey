#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s, r;
    cin>>s>>r;
    int s_one=0;
    int r_one=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1') s_one++;
        if(r[i]=='1') r_one++;
    }
    if(s_one==r_one){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
// Solved By Mahfuz Uddin