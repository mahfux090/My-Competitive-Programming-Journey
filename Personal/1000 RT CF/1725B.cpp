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
#define rall(x) x.rbegin(),x.end()
#define sz(x) (int)(x).size()
#define lb '\n'
#define pii pair<int,int>
#define pll pair<ll,ll>
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;

void solve() {
    int n;
    ll d;
    cin >> n >> d;
    vector<ll> p(n);
    for(int i=0; i<n; i++) {
        cin >> p[i];
    }
    
    sort(all(p));
    
    int ans = 0;
    int l = 0, r = n - 1;
    
    while(l <= r) {
        ll needed = (d / p[r]) + 1;
        
        if (l + needed - 1 <= r) {
            ans++;
            l += (needed - 1);
            r--;
        } else {
            break;
        }
    }
    
    cout << ans << lb;
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