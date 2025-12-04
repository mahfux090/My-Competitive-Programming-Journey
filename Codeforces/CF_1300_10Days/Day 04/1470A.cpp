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
    int n, m;
    cin >> n >> m;
    vector<int> k(n);
    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }
    vector<ll> c(m);
    for (int i = 0; i < m; i++) {
        cin >> c[i];
    }

    sort(rall(k));

    ll ans = 0;
    int p = 0;

    for (int i = 0; i < n; i++) {
        if (p < m && p < k[i]) {
            if (c[p] < c[k[i] - 1]) {
                ans += c[p];
                p++;
            } else {
                ans += c[k[i] - 1];
            }
        } else {
            ans += c[k[i] - 1];
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