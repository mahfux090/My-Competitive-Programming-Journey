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
    ld gm = 1.0;
    ld ga = 0.0;
    vector<ll> v_orig(n + 1);
    vector<pair<ld, ld>> hist(n + 1); 

    for (int i=1; i<=n; ++i) {
        int op;
        cin >> op;
        if(op==1) {
            ll x;
            cin >> x;
            v_orig[i] = x;
            hist[i] = {gm, ga};
        } else if(op == 2) {
            ll x;
            cin>>x;
            ga += x;
        } else if(op==3) {
            ll p, q;
            cin >> p >> q;
            ld m = (ld)p / q;
            gm *= m;
            ga *= m;
        } else {
            int j;
            cin >> j;
            ll x = v_orig[j];
            ld gm_a = hist[j].ff;
            ld ga_a = hist[j].ss;
            
            ld M = gm / gm_a;
            ld A = ga - ga_a * M;
            ld res = x * M + A;
            
            cout << (ll)round(res) << lb;
        }
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