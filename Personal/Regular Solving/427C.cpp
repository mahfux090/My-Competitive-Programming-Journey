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
#define endl '\n'
#define pii pair<int,int>
#define pll pair<ll,ll>
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;

const int N = 100005;
vector<int> adj[N], rev[N];
ll c[N];
bool vis[N];
stack<int> st;

void dfs1(int u) {
    vis[u]=true;
    for(int v:adj[u]) {
        if(!vis[v]) {
            dfs1(v);
        }
    }
    st.push(u);
}

void dfs2(int u, ll &min_c, int &cnt) {
    vis[u] = true;
    if(c[u] < min_c) {
        min_c = c[u];
        cnt = 1;
    } else if(c[u] == min_c) {
        cnt++;
    }
    for(int v : rev[u]) {
        if(!vis[v]) {
            dfs2(v, min_c, cnt);
        }
    }
}

void solve() {
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) cin >> c[i];
    int m;
    cin>>m;
    for(int i=0; i<m; i++) {
        int u, v;
        cin>>u>>v;
        adj[u].pb(v);
        rev[v].pb(u);
    }

    memset(vis, false, sizeof(vis));
    for(int i=1; i<=n; i++) {
        if(!vis[i]) {
            dfs1(i);
        }
    }

    memset(vis, false, sizeof(vis));
    ll total_c = 0;
    ll ways = 1;

    while(!st.empty()) {
        int u = st.top();
        st.pop();

        if(!vis[u]) {
            ll min_c = LINF;
            int cnt = 0;
            dfs2(u, min_c, cnt);
            total_c+=min_c;
            ways = (ways * cnt) % MOD;
        }
    }
    cout << total_c << " " << ways << endl;
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