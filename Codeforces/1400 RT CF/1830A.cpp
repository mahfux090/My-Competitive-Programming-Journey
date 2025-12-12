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

const int N = 200005;
vector<pii> adj[N];
int dp[N];

void dfs(int u, int p, int id) {
    for(auto& e : adj[u]) {
        int v = e.ff;
        int nid = e.ss;
        if(v == p) continue;
        if(nid < id) dp[v] = dp[u] + 1;
        else dp[v] = dp[u];
        dfs(v, u, nid);
    }
}

void solve() {
    int n;
    cin >> n;
    for(int i=1; i<=n; i++) adj[i].clear();
    for(int i=1; i<n; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].pb({v, i});
        adj[v].pb({u, i});
    }

    dp[1] = 1;
    dfs(1, 0, 0);

    int ans = 0;
    for(int i=1; i<=n; i++) ans = max(ans, dp[i]);
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