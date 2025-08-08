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

vector<ll> facts;

void precompute(){
    ll cur = 1;
    for(ll i=1; i < 16; i++){
        cur *= i;
        if(i >= 3) facts.pb(cur);
    }
}

void solve() {
    ll n;
    cin>>n;
    
    int ans = __builtin_popcountll(n);
    int s = sz(facts);

    for(int i = 1; i < (1 << s); i++){
        ll csum=0;
        int nfact=0;
        for(int j = 0; j < s; j++){
            if((i >> j) & 1){
                csum += facts[j];
                nfact++;
            }
        }
        if(csum <= n){
            ll rem = n-csum;
            ans=min(ans, nfact + __builtin_popcountll(rem));
        }
    }
    cout << ans << lb;
}

int main() {
    fast
    precompute();
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