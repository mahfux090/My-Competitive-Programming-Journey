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
const int NMAX = 2e5 + 5;

vector<int> adj[NMAX];
int p[NMAX];
int sub_sz[NMAX];
ld log_s[NMAX];
const ld LINF_D = 1e18;
const ld EPS = 1e-9;
int N, K;

void dfs_sz(int u, int par) {
    p[u] = par;
    sub_sz[u] = 1;
    for(int v : adj[u]) {
        if(v != par) {
            dfs_sz(v, u);
            sub_sz[u] += sub_sz[v];
        }
    }
}

ld get_log_nCr(int n, int k) {
    if(k < 0 || k > n) {
        return -LINF_D;
    }
    if(k==0 || k==n) return 0.0;
    if(k > n/2) k = n - k;
    return (log_s[n] - log_s[n - k]) - log_s[k];
}

ld log_add_exp(ld la, ld log_b) {
    if(la < log_b) swap(la, log_b);
    if(log_b < -LINF_D / 2.0) return la;
    return la + log1p(exp(log_b - la));
}

void solve() {
    cin >> N >> K;
    for(int i=1; i<=N; i++) adj[i].clear();
    for(int i=0; i<N-1; i++) {
        int u,v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    
    dfs_sz(1, 0);
    
    ll ans = 0;
    
    for(int u=1; u<=N; u++) {
        vector<int> s;
        vector<ld> log_B;
        
        for(int v : adj[u]) {
            int c_sz = (v == p[u]) ? (N - sub_sz[u]) : sub_sz[v];
            s.pb(c_sz);
            log_B.pb(get_log_nCr(c_sz, K));
        }
        
        int m = sz(s);
        ld log_B_tot = -LINF_D;
        for(ld val : log_B) {
            log_B_tot = log_add_exp(log_B_tot, val);
        }
        
        ld log_A = get_log_nCr(N, K);
        if(log_A > log_B_tot + EPS) {
            ans++;
        }
        
        vector<ld> pref(m, -LINF_D), suff(m, -LINF_D);
        for(int i=0; i<m; i++) {
            pref[i] = log_B[i];
            if(i>0) pref[i] = log_add_exp(pref[i], pref[i-1]);
        }
        for(int i=m-1; i>=0; i--) {
            suff[i] = log_B[i];
            if(i < m-1) suff[i] = log_add_exp(suff[i], suff[i+1]);
        }
        
        for(int i=0; i<m; i++) {
            int s_p = s[i];
            ld log_A_p = get_log_nCr(N - s_p, K);
            ld log_B_p = -LINF_D;
            
            if(i > 0) log_B_p = log_add_exp(log_B_p, pref[i-1]);
            if(i < m-1) log_B_p = log_add_exp(log_B_p, suff[i+1]);
            
            if(log_A_p > log_B_p + EPS) {
                ans += s_p;
            }
        }
    }
    cout << ans << lb;
}

int main() {
    fast
    log_s[0] = 0.0;
    for(int i=1; i < NMAX; i++) {
        log_s[i] = log_s[i-1] + log((ld)i);
    }
    
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