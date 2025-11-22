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
    int n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<pll> c(n);
    for(int i=0; i<n; i++){
        cin >> c[i].ff >> c[i].ss;
    }
    ll ans = abs(c[a-1].ff - c[b-1].ff) + abs(c[a-1].ss - c[b-1].ss);
    ll da = LINF, db = LINF;
    for(int i=0; i<k; i++){
        da = min(da, abs(c[a-1].ff - c[i].ff) + abs(c[a-1].ss - c[i].ss));
        db = min(db, abs(c[b-1].ff - c[i].ff) + abs(c[b-1].ss - c[i].ss));
    }
    if(k > 0) ans = min(ans, da + db);
    cout << ans << lb;
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