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
    ll p, q;
    cin >> p >> q;
    if (p % q != 0) {
        cout << p << lb;
        return;
    }
    ll mx = 0;
    ll temp = q;
    vector<ll> v;
    for (ll i = 2; i * i <= temp; i++) {
        if (temp % i == 0) {
            v.pb(i);
            while (temp % i == 0) temp /= i;
        }
    }
    if (temp > 1) v.pb(temp);

    for (auto prime : v) {
        ll cp = p;
        while (cp % q == 0) {
            cp /= prime;
        }
        mx = max(mx, cp);
    }
    cout << mx << lb;
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