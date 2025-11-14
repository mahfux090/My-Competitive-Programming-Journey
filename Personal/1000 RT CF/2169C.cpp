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
    cin>>n;
    vector<ll> p(n+1);
    p[0]=0;
    ll s=0;
    for(int i=1;i<=n;++i){
        ll x;
        cin>>x;
        s+=x;
        p[i]=p[i-1]+x;
    }
    
    ll md=0;
    ll mg=-LINF;
    
    for(ll r=1;r<=n;++r){
        ll g = p[r-1] + r - r*r;
        mg=max(mg,g);
        ll c = r*r + r - p[r];
        md=max(md,mg+c);
    }
    
    cout<<s+md<<lb;
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