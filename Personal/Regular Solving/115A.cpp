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

vector<int> adj[2005];
int n;

int dfs(int u) {
    int max_depth = 0;
    for (int v : adj[u]) {
        max_depth = max(max_depth, dfs(v));
    }
    return 1 + max_depth;
}

void solve() {
    cin >> n;
    vector<int> roots;
    for (int i = 1; i <= n; ++i) {
        int p;
        cin >> p;
        if (p == -1) {
            roots.pb(i);
        } else {
            adj[p].pb(i);
        }
    }

    int max_h = 0;
    for (int r : roots) {
        max_h = max(max_h, dfs(r));
    }
    cout << max_h << lb;
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
//          M a h f u z U d d i n           //
//------------------------------------------//