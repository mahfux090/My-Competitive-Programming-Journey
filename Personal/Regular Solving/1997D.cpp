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

vector<int> ad[200005];
ll a[200005];

ll dfs(int u) {
    if (ad[u].empty()) {
        return a[u];
    }

    ll m = LINF;
    for (int v : ad[u]) {
        m = min(m, dfs(v));
    }

    if (m < a[u]) {
        return m;
    } else {
        return (a[u] + m) / 2;
    }
}

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        ad[i].clear();
    }
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 2; i <= n; i++) {
        int p;
        cin >> p;
        ad[p].pb(i);
    }

    if (ad[1].empty()) {
        cout << a[1] << lb;
        return;
    }

    ll msc = LINF;
    for (int v : ad[1]) {
        msc = min(msc, dfs(v));
    }

    cout << a[1] + msc << lb;
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