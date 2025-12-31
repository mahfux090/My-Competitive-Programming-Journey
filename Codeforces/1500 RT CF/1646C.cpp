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

vector<ll> f;

void pre() {
    ll x=1;
    for(ll i=1; i<=14; i++){
        x*=i;
        if(i>=3) f.pb(x);
    }
}

void solve() {
    ll n;
    cin>>n;
    int ans = __builtin_popcountll(n);
    int m=sz(f);
    for(int i=0;i<(1<<m);i++){
        ll s=0;
        int c=0;
        for(int j=0; j<m; j++){
            if((i>>j)&1){
                s+=f[j];
                c++;
            }
        }
        if(s<=n){
            ans=min(ans, c + __builtin_popcountll(n-s));
        }
    }
    cout<<ans<<lb;
}

int main() {
    fast
    pre();
    int t=1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}