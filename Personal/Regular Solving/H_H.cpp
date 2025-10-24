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
vector<ll> a;

ll count_pairs(ll x) {
    ll c = 0;
    int j = n - 1;
    for(int i = 0; i < n; i++) {
        while(j >= 0 && a[i] + a[j] > x) {
            j--;
        }
        c += (j + 1);
    }
    return c;
}

void solve() {
    cin >> n >> k;
    a.resize(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    sort(all(a));
    
    ll l = a[0] + a[0];
    ll r = a[n - 1] + a[n - 1];
    ll ans = r;
    
    while(l <= r) {
        ll m = l + (r - l) / 2;
        if(count_pairs(m) >= k) {
            ans = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    cout << ans << lb;
    a.clear();
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