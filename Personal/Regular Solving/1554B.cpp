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
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    ll mxv = -LINF;
    ll st = max(1LL, n - 2 * k);

    for (ll i = n; i >= st; i--) {
        for (ll j = i - 1; j >= st; j--) {
            ll val = i * j - k * (a[i - 1] | a[j - 1]);
            if (val > mxv) {
                mxv = val;
            }
        }
    }
    cout << mxv << lb;
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