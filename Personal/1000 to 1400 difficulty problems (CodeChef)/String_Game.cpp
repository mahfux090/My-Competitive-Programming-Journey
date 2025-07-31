#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n%2 != 0){
        cout<<"NO\n";
        return;
    }
    int cnt[26]={0};
    for(int i=0; i<n; i++){
        cnt[s[i]-'a']++;
    }
    bool f = true;
    for(int i = 0; i<26; i++){
        if(cnt[i]%2 != 0){
            f=false;
            break;
        }
    }
    if(f){
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