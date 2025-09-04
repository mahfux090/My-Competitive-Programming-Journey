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
    vector<pll> a(n), b(n), c(n);
    for(int i=0; i<n; i++) {
        cin >> a[i].ff;
        a[i].ss = i;
    }
    for(int i = 0;i < n; i++) {
        cin >> b[i].ff;
        b[i].ss=i;
    }
    for(int i =0;i< n; i++) {
        cin >> c[i].ff;
        c[i].ss = i;
    }
    sort(rall(a));
    sort(rall(b));
    sort( rall(c) );

    ll ans =0;
    int lmt = min(n, 5);

    for(int i=0; i<lmt; ++i) {
        for(int j=0; j<lmt; ++j) {
            for(int k=0; k<lmt; ++k) {
                if(a[i].ss != b[j].ss && a[i].ss != c[k].ss && b[j].ss != c[k].ss) {
                    ans = max(ans, a[i].ff + b[j].ff + c[k].ff);
                }
            }
        }
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