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
    ll h,d;
    cin>>h>>d;
    ll l=d, r=3000000000LL, ans=r;
    while(l<=r){
        ll m=l+(r-l)/2;
        ll R=m-d;
        ll s=R+1;
        ll q=d/s;
        ll rem=d%s;
        __int128 c_b=(__int128)(q+1)*(q+2)/2;
        __int128 c_s=(__int128)q*(q+1)/2;
        __int128 t_c=(__int128)rem*c_b + (__int128)(s-rem)*c_s;
        if(h+R>t_c){
            ans=m;
            r=m-1;
        }else{
            l=m+1;
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