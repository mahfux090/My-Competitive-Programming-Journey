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
    ll k, x;
    cin >> n >> k >> x;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(all(a));

    int groups = 1;
    vector<ll> costs;
    for (int i = 0; i < n - 1; i++) {
        ll diff = a[i + 1] - a[i];
        if (diff > x) {
            groups++;
            costs.pb((diff - 1) / x);
        }
    }

    sort(all(costs));

    for (ll cost : costs) {
        if (k >= cost) {
            k -= cost;
            groups--;
        } else {
            break;
        }
    }
    cout << groups << lb;
}

int main() {
    fast
    // Problem has one test case
    // int t=1;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    return 0;
}
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//