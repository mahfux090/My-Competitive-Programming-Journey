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

ll dp[1001];

void solve() {
    int n, k;
    cin >> n >> k;
    
    for(int i=0; i<=n; i++) dp[i] = LINF;
    dp[1] = 0;

    for(int u=2; u<=n; u++){
        for(int kp=1; kp<=min(u, k); kp++){
            int q=u/kp;
            int r=u%kp;
            ll c=1+r*dp[q+1]+(kp-r)*dp[q];
            dp[u]=min(dp[u],c);
        }
    }
    cout << dp[n] << lb;
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