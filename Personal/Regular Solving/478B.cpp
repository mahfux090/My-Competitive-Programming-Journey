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
#define rall(x) x.rbegin(),-rend()
#define sz(x) (int)(x).size()
#define lb '\n'
#define pii pair<int,int>
#define pll pair<ll,ll>
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;

void solve() {
    ll n, m;
    cin >> n >> m;

    // kmin calculation
    ll b = n / m;
    ll r = n % m;
    ll kmin = r * (b + 1) * b / 2 + (m - r) * b * (b - 1) / 2;
    
    // kmax calculation
    ll k = n - m + 1;
    ll kmax = k * (k - 1) / 2;

    cout << kmin << " " << kmax << lb;
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