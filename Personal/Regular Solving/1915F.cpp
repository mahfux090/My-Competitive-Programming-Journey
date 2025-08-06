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

const int MAXN = 200005;
int bit[MAXN];
int bit_size;

void update(int idx, int val) {
    for (; idx <= bit_size; idx += idx & -idx)
        bit[idx] += val;
}

int query(int idx) {
    int sum = 0;
    for (; idx > 0; idx -= idx & -idx)
        sum += bit[idx];
    return sum;
}

void solve() {
    int n;
    cin >> n;
    vector<pii> p(n);
    vector<int> b_vals;
    for (int i=0; i<n; i++) {
        cin >> p[i].ff >> p[i].ss;
        b_vals.pb(p[i].ss);
    }

    sort(all(p));
    sort(all(b_vals));
    b_vals.erase(unique(all(b_vals)), b_vals.end());

    bit_size = b_vals.size();
    for (int i=0; i<=bit_size; i++) {
        bit[i] = 0;
    }

    ll ans = 0;
    for (int i=0; i<n; i++) {
        int b_val = p[i].ss;
        int compressed_b = lower_bound(all(b_vals), b_val) - b_vals.begin() + 1;
        
        int count_greater = query(bit_size) - query(compressed_b);
        ans += count_greater;
        
        update(compressed_b, 1);
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