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
    cin >> n;
    vector<int> g[n + 1];
    for(int i=0; i<n-1; ++i) {
        int u, v;
        cin>>u>>v;
        g[u].pb(v);
        g[v].pb(u);
    }

    if(n <= 1){
        cout<<0<<lb;
        return;
    }

    vector<int> c(n + 1, 0);
    queue<int> q;
    ll s1=0, s2=0;

    q.push(1);
    c[1]=1;
    s1++;

    while(!q.empty()) {
        int u=q.front();
        q.pop();

        for(int v:g[u]) {
            if(c[v]==0) {
                c[v] = 3-c[u];
                if(c[v] == 1) s1++;
                else s2++;
                q.push(v);
            }
        }
    }

    cout << s1 * s2 - (n-1) << lb;
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