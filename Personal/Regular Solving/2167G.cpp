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

const int NMAX = 8005;
ll bit[NMAX];
int N_bit;

void upd(int i, ll v) {
    for(; i <= N_bit; i += i & -i) {
        bit[i] = max(bit[i], v);
    }
}

ll qry(int i) {
    ll r = 0;
    for(; i > 0; i -= i & -i) {
        r = max(r, bit[i]);
    }
    return r;
}

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n), c(n);
    vector<ll> v;
    ll tot = 0;
    
    for(int i=0; i<n; i++) {
        cin >> a[i];
        v.pb(a[i]);
    }
    for(int i=0; i<n; i++) {
        cin >> c[i];
        tot += c[i];
    }
    
    sort(all(v));
    v.erase(unique(all(v)), v.end());
    
    N_bit = sz(v);
    map<ll, int> rnk;
    for(int i=0; i<N_bit; i++) {
        rnk[v[i]] = i + 1; 
    }
    
    for(int i=1; i <= N_bit; i++) bit[i] = 0; 
    
    ll mx_dp = 0;
    for(int i=0; i<n; i++) {
        int r = rnk[a[i]];
        ll pr = qry(r);
        ll cur = pr + c[i];
        upd(r, cur);
        mx_dp = max(mx_dp, cur);
    }
    
    cout << tot - mx_dp << lb;
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