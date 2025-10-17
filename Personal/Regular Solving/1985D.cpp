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
    int n, m;
    cin >> n >> m;
    
    int r_min = INF, c_at_rmin = -1;
    int c_min = INF, r_at_cmin = -1;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            char c;
            cin >> c;
            if (c == '#') {
                if (i < r_min) {
                    r_min = i;
                    c_at_rmin = j;
                }
                if (j < c_min) {
                    c_min = j;
                    r_at_cmin = i;
                }
            }
        }
    }
    
    cout << r_at_cmin << " " << c_at_rmin << lb;
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