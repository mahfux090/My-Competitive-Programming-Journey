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
    cin>>n;
    ll ans = LINF;
    
    ll q = n / 15;
    
    for (ll k = 0; k <= 6; ++k) {
        if (q - k < 0) {
            break;
        }
        
        ll num15 = q - k;
        ll rem = n - num15 * 15;
        
        ll rem_coins = LINF;
        
        for (ll num10 = 0; num10 * 10 <= rem; ++num10) {
            ll r1 = rem - num10 * 10;
            for (ll num6 = 0; num6 * 6 <= r1; ++num6) {
                ll r2 = r1 - num6 * 6;
                ll num3 = r2 / 3;
                ll num1 = r2 % 3;
                rem_coins = min(rem_coins, num10 + num6 + num3 + num1);
            }
        }
        ans = min(ans, num15 + rem_coins);
    }
    
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