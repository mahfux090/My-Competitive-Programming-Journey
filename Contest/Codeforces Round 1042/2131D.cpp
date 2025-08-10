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
    vector<vector<int>> a(n + 1);
    vector<int> d(n + 1, 0);
    for (int i = 0; i<n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        a[u].pb(v);
        a[v].pb(u);
        d[u]++;
        d[v]++;
    }

    bool is_star=false;
    for (int i=1; i<=n; ++i) {
        if (d[i] == n - 1) {
            is_star = true;
            break;
        }
    }
    if (is_star) {
        cout << 0 << lb;
        return;
    }
    vector<int> s(n + 1);
    vector<int> l(n + 1);
    vector<ll> o(n + 1, 0);
    function<void(int, int)> dfs = 
        [&](int u, int p) {
        s[u] = 1;
        l[u] = (d[u] == 1);
        o[u] = 0;
        
        for (int v : a[u]) {
            if (v == p) continue;
            dfs(v, u);
            s[u]+=s[v];
            l[u]+=l[v];
            if (s[v] > 1) {
                o[u]+=l[v];
            }
        }
    };  
    dfs(1, 0);

    ll min_o = -1;
    ll total_l = l[1];
    for (int i=1; i <= n; ++i) {
        ll cur_o = o[i];
        if (i != 1) {
            ll p_comp_s = n - s[i];
            if (p_comp_s > 1) {
                cur_o += (total_l - l[i]);
            }
        }
        if (min_o == -1 || cur_o < min_o) {
            min_o = cur_o;
        }
    }
    cout << min_o << lb;
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