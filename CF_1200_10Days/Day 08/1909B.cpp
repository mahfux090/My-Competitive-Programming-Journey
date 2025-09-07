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
    vector<ll> a(n);
    for (int i=0; i<n; ++i) {
        cin >> a[i];
    }
    for (int b=0; b < 63; ++b) {
        vector<ll> s0, s1;
        for (int i=0; i<n; ++i) {
            if ((a[i] >> b) & 1) {
                s1.pb(a[i]);
            } else {
                s0.pb(a[i]);
            }
        }
        if (!s0.empty() && !s1.empty()) {
            cout << (1LL << (b + 1)) << lb;
            return;
        }
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