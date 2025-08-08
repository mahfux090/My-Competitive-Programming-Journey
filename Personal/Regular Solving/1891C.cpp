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
    vector<ll> a(n);
    ll s = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        s += a[i];
    }
    sort(rall(a));
    vector<ll> suff(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        suff[i + 1] = suff[i] + a[i];
    }
    
    ll k = (s + 1) / 2;
    ll ku = s - k;
    
    if (ku == 0) {
        cout << k << lb;
        return;
    }
    
    auto it = lower_bound(suff.begin() + 1, suff.end(), ku);
    ll m = distance(suff.begin(), it);
    
    cout << k + m << lb;
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