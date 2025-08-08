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
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    for (int i=0; i<n; i++) {
        if (mp.find(a[i]) == mp.end()) {
            mp[a[i]] = b[i];
        } else {
            mp[a[i]] = min(mp[a[i]], b[i]);
        }
    }

    if (sz(mp) < k) {
        cout << -1 << lb;
        return;
    }

    vector<int> v;
    for (auto p : mp) {
        v.pb(p.ss);
    }

    sort(all(v));

    ll ans = 0;
    for (int i = 0; i < k; i++) {
        ans += v[i];
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