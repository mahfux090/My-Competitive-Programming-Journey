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
    ll a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    if (a1 == 0) {
        cout << 1 << lb;
        return;
    }
    ll ans = a1;
    ll mn = min(a2, a3);
    ans += 2 * mn;
    ll rem = max(a2, a3) - mn;
    ll rem_total = rem + a4;
    ans += min(rem_total, a1 + 1);
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