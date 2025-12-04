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
    ll n; cin >> n;
    ll a = (n * (n + 1)) % MOD;
    a = (a * (2 * n + 1)) % MOD;
    a = (a * 337) % MOD;
    ll b = (n * (n - 1)) % MOD;
    b = (b * (2 * n - 1)) % MOD;
    b = (b * 337) % MOD;
    ll c = (n * (n - 1)) % MOD;
    c = (c * 1011) % MOD;
    ll ans = (a + b) % MOD;
    ans = (ans + c) % MOD;
    cout << ans << lb;
}

int main() {
    fast
    int t=1; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}