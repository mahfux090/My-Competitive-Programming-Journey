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
const int MAXN = 2e5 + 5;

ll fact[MAXN];
void precompute_factorials() {
    fact[0] = 1;
    for (int i = 1; i < MAXN; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
}
void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    vector<int> dist(n + 1, -1);
    ll total_ways = 1;
    bool possible = true;
    for (int i = 1; i <= n; i++) {
        if (dist[i] == -1) {
            map<int, int> counts;
            queue<int> q;

            q.push(i);
            dist[i] = 0;
            
            int head = 0;
            vector<int> component_nodes;
            component_nodes.pb(i);

            while(head < sz(component_nodes)){
                int u = component_nodes[head++];
                counts[dist[u]]++;
                for (int v : adj[u]) {
                    if (dist[v] == -1) {
                        dist[v] = dist[u] + 1;
                        component_nodes.pb(v);
                    } else if (dist[v] == dist[u]) {
                        possible = false;
                    }
                }
            }
            if(!possible) break;

            ll ways0 = 1, ways1 = 1;
            for (auto const& [d, c] : counts) {
                if (d % 2 == 0) {
                    ways0 = (ways0 * fact[c]) % MOD;
                } else {
                    ways1 = (ways1 * fact[c]) % MOD;
                }
            }
            ll component_ways = (ways0 * ways1) % MOD;
            component_ways = (component_ways * 2) % MOD;
            total_ways = (total_ways * component_ways) % MOD;
        }
    }
    if (!possible) {
        cout << 0 << lb;
    } else {
        cout << total_ways << lb;
    }
}

int main() {
    fast
    precompute_factorials();
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