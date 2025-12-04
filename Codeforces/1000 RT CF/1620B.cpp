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
    ll w, h;
    cin >> w >> h;
    
    ll ans = 0;
    
    int k;
    cin >> k;
    vector<ll> h1(k);
    for(int i=0; i<k; ++i) cin >> h1[i];
    ans = max(ans, (h1.back() - h1[0]) * h);
    
    cin >> k;
    vector<ll> h2(k);
    for(int i = 0; i < k; i++) cin >> h2[i];
    ans = max(ans, (h2.back() - h2[0]) * h);
    
    cin >> k;
    vector<ll> v1(k);
    for(int i=0; i<k; ++i) cin>>v1[i];
    ans = max(ans, (v1.back() - v1[0]) * w);
    
    cin >> k;
    vector<ll> v2(k);
    for(int i=0; i<k; i++) cin >> v2[i];
    ans = max(ans, (v2.back() - v2[0]) * w);
    
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