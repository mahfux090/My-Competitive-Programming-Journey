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

vector<int> adj[100005];
bool vis[100005];

ll pwr(ll b, ll p) {
    ll r=1;
    b%=MOD;
    while(p > 0){
        if(p%2 == 1) r=(r*b)%MOD;
        b=(b*b)%MOD;
        p/=2;
    }
    return r;
}

int dfs(int u){
    vis[u] = true;
    int cnt=1;
    for(int v:adj[u]){
        if(!vis[v]){
            cnt += dfs(v);
        }
    }
    return cnt;
}

void solve() {
    ll n, k;
    cin>>n>>k;
    for(int i=0; i<n-1; ++i){
        int u, v, x;
        cin >>u>>v>>x;
        if(x==0){
            adj[u].pb(v);
            adj[v].pb(u);
        }
    }

    ll total = pwr(n,k);
    ll not_good=0;

    for(int i=1;i<=n;++i) {
        if(!vis[i]){
            int cs=dfs(i);
            ll term = pwr(cs, k);
            not_good = (not_good+term)%MOD;
        }
    }

    ll ans = (total-not_good+MOD)%MOD;
    cout << ans << lb;
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