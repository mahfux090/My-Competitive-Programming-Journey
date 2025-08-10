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
    int n,m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    for(int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    vector<int> c(n + 1, 0);
    bool bip = true;
    queue<int> q;

    for (int i = 1; i <= n; ++i) {
        if (c[i] == 0) {
            q.push(i);
            c[i] = 1;
            while (!q.empty()) {
                int u = q.front();
                q.pop();

                for (int v : adj[u]) {
                    if (c[v] == 0) {
                        c[v] = 3 - c[u];
                        q.push(v);
                    } else if (c[v] == c[u]) {
                        bip = false;
                        break;
                    }
                }
                if (!bip) break;
            }
        }
        if (!bip) break;
    }

    if (!bip) {
        cout << -1 << lb;
    } else {
        vector<int> s1, s2;
        for (int i = 1; i <= n; ++i) {
            if (c[i] == 1) s1.pb(i);
            else s2.pb(i);
        }
        cout << sz(s1) << lb;
        for (int node : s1) cout << node << " ";
        cout << lb;
        cout << sz(s2) << lb;
        for (int node : s2) cout << node << " ";
        cout << lb;
    }
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