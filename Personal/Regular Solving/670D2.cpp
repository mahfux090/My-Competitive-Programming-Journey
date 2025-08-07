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

ll n, k;
vector<ll> a, b;

bool check(ll x) {
    if (x == 0) return true;
    ll magic_needed = 0;
    for (int i = 0; i < n; i++) {
        ll total_needed = a[i] * x;
        if (total_needed > b[i]) {
            magic_needed += total_needed - b[i];
        }
        if (magic_needed > k) {
            return false;
        }
    }
    return true;
}
void solve() {
    cin >> n >> k;
    a.resize(n);
    b.resize(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    ll l = 0, h = 2e9 + 7;
    ll ans = 0;

    while (l <= h) {
        ll mid = l + (h - l) / 2;
        if (check(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }
    cout << ans << lb;
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