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
    vector<vector<ll>> a(n, vector<ll>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }

    ll ans = 0;
    for (int d = -(n-1); d <= (n-1); d++) {
        vector<ll> v;
        int r = (d >= 0) ? d : 0;
        int c = (d >= 0) ? 0 : -d;

        while(r < n && c < n){
            v.pb(a[r][c]);
            r++;
            c++;
        }

        ll ops = 0;
        ll add = 0;
        for(int k = sz(v) - 1; k >= 0; k--) {
            ll cur = v[k];
            cur += add;
            if(cur < 0) {
                ll need = -cur;
                ops += need;
                add += need;
            }
        }
        ans += ops;
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