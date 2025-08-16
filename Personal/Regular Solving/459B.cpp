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
    ll n;
    cin >> n;
    vector<ll> b(n);
    for(int i=0; i<n; i++) {
        cin >> b[i];
    }
    sort(all(b));
    ll diff = b[n - 1] - b[0];
    ll ways;
    if (diff == 0) {
        ways = n * (n - 1) / 2;
    } else {
        ll c1 = 0, c2 = 0;
        for (int i = 0; i < n && b[i] == b[0]; ++i) c1++;
        for (int i = n - 1; i >= 0 && b[i] == b[n - 1]; --i) c2++;
        ways = c1 * c2;
    }
    cout << diff << " " << ways << lb;
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