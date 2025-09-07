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
    for(int i=0; i<n; ++i) cin >> a[i];
    sort(all(a));
    
    ll ans = a[n-1] * a[n-2] * a[n-3] * a[n-4] * a[n-5];
    ans = max(ans, a[0] * a[n-1] * a[n-2] * a[n-3] * a[n-4]);
    ans = max(ans, a[0] * a[1] * a[n-1] * a[n-2] * a[n-3]);
    ans = max(ans, a[0] * a[1] * a[2] * a[n-1] * a[n-2]);
    ans = max(ans, a[0] * a[1] * a[2] * a[3] * a[n-1]);
    ans = max(ans, a[0] * a[1] * a[2] * a[3] * a[4]);
    
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