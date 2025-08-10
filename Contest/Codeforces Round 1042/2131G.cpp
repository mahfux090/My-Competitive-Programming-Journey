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

map<ll, ll> memo;

ll power(ll base, ll exp) {
    ll res=1;
    base%=MOD;
    while (exp > 0) {
        if(exp % 2 == 1) res=(res*base)%MOD;
        base = (base*base)%MOD;
        exp /= 2;
    }
    return res;
}

ll gp(ll k) {
    if (k == 0) return 1;
    ll res = 1;
    for (ll p = 0; p < 60; ++p) {
        ll term = 1LL << p;
        if (term > k) break;
        ll count = (k / term + 1) / 2;
        if (count == 0) continue;
        res = (res * power(p + 1, count)) % MOD;
    }
    return res;
}

ll gh(ll g) {
    if (g <= 1) return 1;
    if (memo.count(g)) return memo[g];
    ll prev_h = gh(g - 1);
    ll res = (g - 1) * prev_h % MOD * prev_h % MOD;
    return memo[g] = res;
}

void solve() {
    int n;
    ll k;
    cin>> n >> k;
    set<ll> s;
    for (int i=0; i<n; ++i) {
        ll val;
        cin>>val;
        s.insert(val);
    }
    
    memo.clear();
    ll g = 1;
    while(s.count(g)) {
        g++;
    }

    vector<ll> e;
    e.pb(g);
    for (ll val : s) {
        if (val >= g) {
            e.pb(val);
        }
    }

    ll ans = 1;

    for (size_t i = 0; i<e.size(); ++i) {
        if (k == 0) break;
        ll cur_g = e[i];

        if (cur_g > 1) {
            ll ops_n = -1;
            if (cur_g-1 < 31) {
                ops_n = (1LL << (cur_g - 1)) - 1;
            }

            if (ops_n != -1 && k >= ops_n) {
                k -= ops_n;
                ans = (ans * gh(cur_g)) % MOD;
            } else {
                ans = (ans * gp(k)) % MOD;
                k = 0;
                break;
            }
        }

        if (k == 0) break;

        if (i+1 < e.size()) {
            k--;
            ans = (ans * e[i+1]) % MOD;
        } else {
            ans = (ans * gp(k)) % MOD;
            k = 0;
        }
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