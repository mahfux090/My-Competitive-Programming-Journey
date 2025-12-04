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
    ll k, x;
    cin>>k>>x;
    ll total = k * k;
    if(x >= total) {
        cout<<2*k-1<<lb;
        return;
    }
    ll l=1, h=2*k-1;
    ll ans=2*k-1;
    while(l<=h) {
        ll mid = l+(h-l)/2;
        ll cur=0;
        if(mid<=k) {
            cur=mid*(mid+1)/2;
        } else {
            ll rem=2*k-1-mid;
            ll rem_s=rem*(rem+1)/2;
            cur=total-rem_s;
        }
        if(cur>=x) {
            ans=mid;
            h=mid-1;
        } else {
            l=mid+1;
        }
    }
    cout<<ans<<lb;
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