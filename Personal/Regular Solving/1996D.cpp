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
    ll n,x;
    cin>>n >> x;
    ll ans=0;

    for (ll a=1; a*3<=x; a++) {
        if (a*a*3>n) break;
        for (ll b=a; a+b+b <= x; b++) {
            if (a*b+a*b+b*b>n) break;

            ll c_up1 = x-a-b;
            ll c_up2 = (n-a*b)/(a+b);
            ll cmax = min(c_up1, c_up2);

            if (cmax<b) continue;

            ll num_c = cmax - b + 1;

            if (a==b) {
                ans+=1; // for (a,a,a)
                if (num_c > 1) {
                    ans += (num_c-1)*3; // for (a,a,c) where c > a
                }
            } else { // a < b
                ans+=3; // for (a,b,b)
                if (num_c > 1) {
                    ans += (num_c-1)*6; // for (a,b,c) where c > b
                }
            }
        }
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
//          Mahfuz Uddin                    //
//------------------------------------------//