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

const ll LMT = 1e12;

void solve() {
    ll x, y, k;
    cin >> x >> y >> k;
    
    if (y == 1) {
        cout << -1 << lb;
        return;
    }
    
    ll m = y - 1;
    ll p = k;
    ll rx = x;
    
    while (rx > 0) {
        if (p > LMT) {
            p = LMT + 1;
            break;
        }
        
        ll q = (p - 1) / m;
        
        if (q == 0) {
            break; 
        }
        
        ll t = (q + 1) * m;
        ll c = p - 1;
        ll s = (t - c + q - 1) / q;
        
        ll stp = min(s, rx);
        
        if (q > 0 && stp > (LMT - p) / q) {
            p = LMT + 1; 
            break;
        }
        
        p += stp * q;
        rx -= stp;
    }
    
    if (p > LMT) {
        cout << -1 << lb;
    } else {
        cout << p << lb;
    }
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