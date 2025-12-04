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
    ll n, q;
    cin >> n >> q;
    map<ll, ll> m;
    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        ll a;
        cin >> a;
        m[i] = a;
        sum += a;
    }
    ll d_val = 0;
    bool d_set = false;
    while (q--) {
        int t;
        cin >> t;
        if (t == 1) {
            ll i, x;
            cin >> i >> x;
            ll o_val;
            if (d_set) {
                if (m.count(i)) {
                    o_val = m[i];
                } else {
                    o_val = d_val;
                }
            } else {
                o_val = m[i];
            }
            sum -= o_val;
            sum += x;
            m[i] = x;
        } else {
            ll x;
            cin >> x;
            d_set = true;
            d_val = x;
            sum = n * x;
            m.clear();
        }
        cout << sum << lb;
    }
}

int main() {
    fast
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//