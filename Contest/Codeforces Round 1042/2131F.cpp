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
    string a_str, b_str;
    cin >> a_str >> b_str;

    vector<ll> pa(n + 1, 0), pb(n + 1, 0);
    for (int i=0; i < n; ++i) {
        pa[i+1] = pa[i] + (a_str[i] - '0');
        pb[i+1] = pb[i] + (b_str[i] - '0');
    }

    vector<ll> spb(n + 1, 0);
    for (int i=1; i <= n; ++i) {
        spb[i] = spb[i-1] + pb[i];
    }

    vector<ll> v(n);
    for (int i=0; i<n; ++i) {
        v[i] = 2 * pb[i+1] - (i + 1);
    }
    sort(all(v));

    vector<ll> sV(n, 0);
    sV[0] = v[0];
    for (int i=1; i < n; ++i) {
        sV[i] = sV[i-1] + v[i];
    }

    ll total_sum = 0;
    ll n_ll = n;
    ll sum_y = n_ll * (n_ll + 1) / 2;

    for (ll x=1; x <= n; ++x) {
        ll A = pa[x];
        ll B = x - pa[x];
        ll Kx = x - 2 * pa[x];

        ll part1 = n_ll * B + sum_y - spb[n];
        
        auto it = upper_bound(all(v), Kx);
        ll count = it - v.begin();
        
        ll sum_v = 0;
        if (count > 0) {
            sum_v = sV[count - 1];
        }

        ll part2 = sum_v - count * Kx;
        total_sum += (part1 + part2);
    }
    cout << total_sum << lb;
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