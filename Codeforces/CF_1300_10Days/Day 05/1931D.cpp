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
    ll x, y;
    cin >> n >> x >> y;
    
    map<pii, int> mp;
    ll ans = 0;
    
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        int rx = a % x;
        int ry = a % y;
        
        int req_rx = (x - rx) % x;
        
        if (mp.count({req_rx, ry})) {
            ans += mp[{req_rx, ry}];
        }
        
        mp[{rx, ry}]++;
    }
    
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