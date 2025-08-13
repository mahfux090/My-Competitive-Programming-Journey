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
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    vector<pii> p(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    for(int i=0; i<n; i++){
        if(a[i] > b[i]) swap(a[i], b[i]);
        p[i] = {a[i], b[i]};
    }

    vector<vector<int>> dp(n, vector<int>(2));
    dp[n-1][0] = 1;
    dp[n-1][1] = 1;

    for(int i = n-2; i>=0; i--){
        // For p[i]
        int v = p[i].ff;
        if(p[i+1].ff > v) dp[i][0] = 1 + dp[i+1][0];
        else if (p[i+1].ss > v) dp[i][0] = 1 + dp[i+1][1];
        else dp[i][0] = 1;

        // For q[i]
        v = p[i].ss;
        if(p[i+1].ff > v) dp[i][1] = 1 + dp[i+1][0];
        else if (p[i+1].ss > v) dp[i][1] = 1 + dp[i+1][1];
        else dp[i][1] = 1;
    }
    
    ll ans = 0;
    for(int i=0; i<n; i++){
        int v = p[i].ff;
        int len = 1;
        if(i < n-1){
            if(p[i+1].ff > v) len += dp[i+1][0];
            else if(p[i+1].ss > v) len += dp[i+1][1];
        }
        ans += len;
    }
    cout << ans << lb;
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