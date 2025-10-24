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
#define rall(x) x.rbegin(),rend()
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
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(all(a));
    
    int m = n / 2;
    
    ll b1;
    ll b2;
    
    // Strategy 1: Hao removes the largest element (a[n-1]) first.
    // Alex locks a[n-2], Hao removes a[0], Alex locks a[1], etc.
    // Locked set min: a[1], Locked set max: a[n-2]
    b1 = a[n - 2] - a[1];

    // Strategy 2: Hao removes the smallest element (a[0]) first.
    // Alex locks a[n-1], Hao removes a[1], Alex locks a[n-2], etc.
    if(n % 2 == 0) {
        // n=4, m=2. Locked: {a[2], a[3]}. Beauty: a[3]-a[2]
        // n=6, m=3. Locked: {a[3], a[4], a[5]}. Beauty: a[5]-a[3]
        // Pattern: a[n-1] - a[m]
        b2 = a[n - 1] - a[m];
    } else {
        // n=5, m=2. Locked: {a[3], a[4]}. Beauty: a[4]-a[3]
        // n=7, m=3. Locked: {a[4], a[5], a[6]}. Beauty: a[6]-a[4]
        // Pattern: a[n-1] - a[m+1]
        b2 = a[n - 1] - a[m + 1];
    }

    // Hao plays optimally, so he chooses the move that results in the minimum beauty.
    cout << min(b1, b2) << lb;
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