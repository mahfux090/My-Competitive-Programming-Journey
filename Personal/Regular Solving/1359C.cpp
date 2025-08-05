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
#define endl '\n'
#define pii pair<int,int>
#define pll pair<ll,ll>
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;

void solve() {
    ll h, c, t;
    cin >> h >> c >> t;

    if (h == t) {
        cout << 1 << endl;
        return;
    }
    if (2 * t <= h + c) {
        cout << 2 << endl;
        return;
    }
    ll k_num = t - c;
    ll k_den = 2 * t - h - c;
    ll k1 = k_num / k_den;
    ll k2 = k1 + 1;

    ll d1_n = abs(h + c - 2 * t);
    ll d1_d = 2;

    ll d2_n = abs(k1 * h + (k1 - 1) * c - t * (2 * k1 - 1));
    ll d2_d = 2 * k1 - 1;

    ll d3_n = abs(k2 * h + (k2 - 1) * c - t * (2 * k2 - 1));
    ll d3_d = 2 * k2 - 1;

    ll ans;

    if (d1_n * d2_d <= d2_n * d1_d) {
        if (d1_n * d3_d <= d3_n * d1_d) {
            ans = 2;
        } else {
            ans = 2 * k2 - 1;
        }
    } else {
        if (d2_n * d3_d <= d3_n * d2_d) {
            ans = 2 * k1 - 1;
        } else {
            ans = 2 * k2 - 1;
        }
    }
    cout << ans << endl;
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
//          Mahfuz Uddin                  //
//------------------------------------------//