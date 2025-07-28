// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    short c=0;
    for(short i=0;i<s.length()-1;i++){
        if(s[i]=='<' && s[i+1]=='>'){
            c++;
        }
    }
    cout<<c<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    short t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
// Solved By Mahfuz Uddin