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
    vector<pii> a(n);
    for (int i=0; i<n; ++i) {
        cin >> a[i].ff;
        a[i].ss=i;
    }

    sort(all(a));

    vector<ll> p(n+1, 0);
    for (int i=0;i < n; i++) {
        p[i + 1] = p[i] + a[i].ff;
    }

    vector<ll> ans(n);
    for (int i=0; i<n; i++) {
        ll s = a[i].ff;
        int idx = a[i].ss;

        ll s1 = (ll)(i+1) * s - p[i+1];
        ll s2 = (p[n] - p[i + 1]) - (ll)(n - 1 - i) * s;
        
        ans[idx] = s1 + s2 + n;
    }

    for (int i=0; i < n; ++i) {
        cout << ans[i] << " \n"[i==n-1];
    }
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