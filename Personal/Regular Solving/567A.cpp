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
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    for(int i=0; i<n; i++) {
        ll mn, mx;

        if(i == 0) {
            mn = a[1] - a[0];
        } else if(i == n-1) {
            mn = a[n-1] - a[n-2];
        } else {
            mn = min(a[i] - a[i-1], a[i+1] - a[i]);
        }

        mx = max(a[i] - a[0], a[n-1] - a[i]);

        cout << mn << " " << mx << lb;
    }
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