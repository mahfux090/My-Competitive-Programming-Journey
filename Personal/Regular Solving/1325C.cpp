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
    int n;
    cin>>n;
    vector<pii> edg;
    vector<int> deg(n+1, 0);
    vector<vector<int>> adj(n+1);
    for(int i=0;i<n-1;++i){
        int u,v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
        deg[u]++;
        deg[v]++;
        edg.pb({u,v});
    }

    int star_node = -1;
    for(int i=1; i<=n; ++i){
        if(deg[i] >= 3){
            star_node = i;
            break;
        }
    }

    vector<int> ans(n-1, -1);
    if(star_node != -1){
        int cur_lbl = 0;
        for(int i=0; i<n-1; ++i){
            if(edg[i].ff == star_node || edg[i].ss == star_node){
                if(cur_lbl < 3){
                    ans[i] = cur_lbl++;
                }
            }
        }
        for(int i=0; i<n-1; ++i){
            if(ans[i] == -1){
                ans[i] = cur_lbl++;
            }
        }
    } else {
        for(int i=0; i<n-1; ++i){
            ans[i] = i;
        }
    }

    for(int i=0; i<n-1; ++i){
        cout << ans[i] << lb;
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