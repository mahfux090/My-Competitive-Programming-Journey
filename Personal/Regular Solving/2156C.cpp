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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int mx = 0;
    for(int i=0; i<n; ++i) {
        cin >> v[i];
        mx = max(mx, v[i]);
    }

    vector<int> c(mx + 1, 0);
    for(int x : v) {
        if(x <= mx) c[x]++;
    }

    vector<int> p(mx + 1, 0);
    for(int i=1; i<=mx; ++i) {
        p[i] = p[i-1] + c[i];
    }

    int res = 1;
    for(int d=mx; d>=1; --d) {
        ll lim = min((ll)mx, 4LL * d - 1);
        
        int tot = p[(int)lim];
        int g = 0;
        
        for(int m=1; m<=3; ++m) {
            ll val = 1LL * m * d;
            if(val <= lim) {
                g += c[(int)val];
            }
        }
        
        int b = tot - g;
        if(b <= k) {
            res = d;
            break;
        }
    }
    cout << res << lb;
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