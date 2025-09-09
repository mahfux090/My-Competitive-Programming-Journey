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
    int n,m;
    ll k;
    cin>>n>>m>>k;
    string s;
    cin>>s;

    vector<ll> dp(n+2, -1);
    dp[0] = k;

    for(int i=0; i<=n; ++i){
        if(dp[i] < 0) continue;

        if(i==0 || s[i-1]=='L'){
            for(int j=1; j<=m; ++j){
                int nxt = i+j;
                if(nxt > n+1) break;
                if(nxt <= n && s[nxt-1]=='C') continue;
                dp[nxt] = max(dp[nxt], dp[i]);
            }
        }
        
        if(i > 0 && s[i-1]=='W'){
            if(dp[i] > 0){
                int nxt = i+1;
                if(nxt > n+1) break;
                if(nxt <= n && s[nxt-1]=='C') continue;
                dp[nxt] = max(dp[nxt], dp[i]-1);
            }
        }
    }

    if(dp[n+1] >= 0){
        cout << "YES" << lb;
    }
    else{
        cout << "NO" << lb;
    }
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