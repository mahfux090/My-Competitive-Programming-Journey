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
    int ml = INF + 7, mr = 0;
    ll cl = LINF, cr = LINF, cs = LINF;
    for (int i=0; i<n; i++) {
        int l, r;
        ll c;
        cin >> l >> r >> c;

        if (l < ml) {
            ml = l;
            cl = c;
            cs = LINF;
        } else if (l==ml) {
            cl = min(cl, c);
        }

        if (r > mr) {
            mr = r;
            cr = c;
            cs = LINF;
        } else if (r == mr) {
            cr = min(cr, c);
        }

        if (l == ml && r == mr) {
            cs = min(cs, c);
        }

        ll ans = cl + cr;
        if (cs != LINF) {
            ans = min(ans, cs);
        }
        cout << ans << lb;
    }
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