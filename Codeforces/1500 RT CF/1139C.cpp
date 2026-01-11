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

ll p(ll a, ll b){
    ll r=1;
    while(b){
        if(b&1)r=(r*a)%MOD;
        a=(a*a)%MOD;
        b>>=1;
    }
    return r;
}

vector<int> g[100005];
bool vis[100005];
int c=0;

void d(int u){
    vis[u]=1;
    c++;
    for(auto v:g[u]){
        if(!vis[v])d(v);
    }
}

void solve() {
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n-1;i++){
        int u,v,x;
        cin>>u>>v>>x;
        if(x==0){
            g[u].pb(v);
            g[v].pb(u);
        }
    }
    ll bad=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            c=0;
            d(i);
            bad=(bad+p(c,k))%MOD;
        }
    }
    ll tot=p(n,k);
    ll ans=(tot-bad+MOD)%MOD;
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