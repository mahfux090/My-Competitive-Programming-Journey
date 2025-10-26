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
    int n, q;
    cin >> n >> q;
    vector<ll> p(n);
    for(int i=0; i<n; ++i) {
        cin >> p[i];
    }
    
    sort(rall(p));
    
    vector<ll> pref(n);
    pref[0] = p[0];
    for(int i = 1; i < n; i++) {
        pref[i] = pref[i-1] + p[i];
    }
    
    while(q--) {
        int x, y;
        cin >> x >> y;
        
        ll ans = pref[x-1];
        int s = x - y;
        if(s > 0) {
            ans -= pref[s-1];
        }
        cout << ans << lb;
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