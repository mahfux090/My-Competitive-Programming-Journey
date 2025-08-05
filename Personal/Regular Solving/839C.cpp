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

vector<int> a[100005];
ld ans;

void dfs(int u, int p, ld pr, int l) {
    int c = 0;
    for (int v: a[u]) {
        if (v != p) c++;
    }

    if (c == 0) {
        ans += pr * l;
        return;
    }

    ld nxt_p = pr / c;
    for (int v : a[u]) {
        if (v != p) {
            dfs(v, u, nxt_p, l + 1);
        }
    }
}

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        a[u].pb(v);
        a[v].pb(u);
    }
    
    ans=0.0;
    dfs(1, 0, 1.0, 0);

    cout << fixed << setprecision(15) << ans << lb;
}

int main() {
    fast
    int t=1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
//------------------------------------------//
//          Mahfuz Uddin                  //
//------------------------------------------//