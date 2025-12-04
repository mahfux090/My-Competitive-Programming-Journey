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
#define rall(x) x.rbegin(),x.end()
#define sz(x) (int)(x).size()
#define lb '\n'
#define pii pair<int,int>
#define pll pair<ll,ll>
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;

void solve() {
    ll n, k, b, s;
    cin >> n >> k >> b >> s;

    ll min_s = k * b;
    ll max_rem = n * (k - 1);
    ll max_s = min_s + max_rem;

    if (s < min_s || s > max_s) {
        cout << -1 << lb;
        return;
    }

    vector<ll> a(n, 0);
    ll rem = s - min_s;

    a[0] = min_s;
    
    for(int i=0; i<n; i++) {
        ll add = min(rem, k - 1);
        a[i] += add;
        rem -= add;
    }

    for(int i=0; i<n; i++) {
        cout << a[i] << (i == n-1 ? "" : " ");
    }
    cout << lb;
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