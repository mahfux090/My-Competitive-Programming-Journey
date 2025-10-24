#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(),all(x)
#define rall(x) x.rbegin(),x.rend()
#define sz(x) (int)(x).size()
#define lb '\n'
#define pii pair<int,int>
#define pll pair<ll,ll>
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;

ll bld(ll h, int l) {
    ll y=h;
    ll t=h;
    if(l%2==1) t/=2;
    ll rev=0;
    ll tmp=t;
    int bits = l/2;
    for(int i=0; i<bits; i++){
        rev=(rev<<1)|(tmp&1);
        tmp/=2;
    }
    y=(y<<(l-((l+1)/2)))|rev;
    return y;
}

void solve() {
    ll x;
    cin>>x;
    int l=0;
    if(x==0) l=1;
    else l=64-__builtin_clzll(x);
    
    int k=(l+1)/2;
    ll h=x>>(l-k);
    
    ll c1=bld(h,l);
    if(c1>x){
        c1=bld(h-1,l);
    }
    
    ll c2=0;
    if(l>1) c2=(1LL<<(l-1))-1;
    else c2=0; 
    
    cout<<max(c1,c2)<<lb;
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