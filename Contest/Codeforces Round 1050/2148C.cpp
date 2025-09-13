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
    ll m;
    cin>>n>>m;
    vector<pll> r(n);
    for(int i=0;i<n;i++) {
        cin >> r[i].ff >> r[i].ss;
    }
    ll fv = 0;
    ll pt = 0;
    ll pb = 0;
    for (int i = 0; i < n; ++i) {
        ll ct = r[i].ff;
        ll cb = r[i].ss;
        ll p_needed = (cb - ct % 2 + 2) % 2;
        ll p_fv = (fv % 2 + 2) % 2;
        if (p_fv != p_needed) {
            fv--;
        }
    }
    cout << m + fv << lb;
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