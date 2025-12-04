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
    ll x, y, n;
    cin >> x >> y;
    cin >> n;

    ll f[6];
    f[0] = (x % MOD + MOD) % MOD;
    f[1] = (y % MOD + MOD) % MOD;
    f[2] = (f[1] - f[0] + MOD) % MOD;
    f[3] = (f[2] - f[1] + MOD) % MOD;
    f[4] = (f[3] - f[2] + MOD) % MOD;
    f[5] = (f[4] - f[3] + MOD) % MOD;
    
    cout << f[(n - 1) % 6] << lb;
}

int main() {
    fast
    int t=1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//