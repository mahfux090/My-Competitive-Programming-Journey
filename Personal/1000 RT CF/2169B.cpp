#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define sz(x) (int)(x).size()
#define lb '\n'
#define pii pair<int,int>
#define pll pair<ll,ll>
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;

void solve() {
    string s;
    cin>>s;
    int n=sz(s);
    bool ok=0;
    for(int i=0; i<n-1; ++i){
        bool r=(s[i]=='>'||s[i]=='*');
        bool l=(s[i+1]=='<'||s[i+1]=='*');
        if(r&&l){
            ok=1;
            break;
        }
    }
    
    if(ok){
        cout << -1 << lb;
        return;
    }
    
    int c1=0;
    for(int i=0; i<n; i++){
        if(s[i]=='<'||s[i]=='*') c1++;
        else break;
    }
    
    int c2=0;
    for(int i=n-1; i>=0; i--){
        if(s[i]=='>'||s[i]=='*') c2++;
        else break;
    }
    
    cout<<max(c1,c2)<<lb;
}

int main() {
    fast
    int t=1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//