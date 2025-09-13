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

const int N=100005;
vector<int> adj[N];
ll c[N];
bool v[N];
ll minc;

void dfs(int u){
    v[u]=true;
    minc=min(minc,c[u]);
    for(int node:adj[u]){
        if(!v[node]){
            dfs(node);
        }
    }
}

void solve() {
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>c[i];
    }
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    ll ans=0;
    for(int i=1;i<=n;i++){
        if(!v[i]){
            minc=LINF;
            dfs(i);
            ans+=minc;
        }
    }
    cout<<ans<<lb;
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