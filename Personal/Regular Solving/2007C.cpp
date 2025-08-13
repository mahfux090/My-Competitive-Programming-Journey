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
    ll a,b;
    cin>>n>>a>>b;
    vector<ll> c(n);
    vector<ll> r;
    ll g=__gcd(a,b);
    for(int i=0;i<n;i++){
        cin>>c[i];
        r.pb(c[i]%g);
    }

    sort(all(r));
    r.erase(unique(all(r)),r.end());

    int m=sz(r);
    if(m<=1){
        cout<<0<<lb;
        return;
    }

    ll ans=LINF;
    for(int i=0;i<m;i++){
        ll p=r[i];
        int p_idx=(i-1+m)%m;
        ll maxd=(r[p_idx]-p+g)%g;
        ans=min(ans,maxd);
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