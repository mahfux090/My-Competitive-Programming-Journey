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
    int k;
    cin >> k;
    vector<ll> v(k);
    for(int i=0; i<k; i++) cin >> v[i];

    if(k==1) {
        cout << 0 << lb;
        return;
    }

    ll r = v[k-1] - v[0];

    ll mx = v[1];
    for(int i=1; i<k; i++) mx=max(mx, v[i]);
    r = max(r, mx - v[0]);

    ll mn = v[0];
    for(int i=0; i<k-1; i++) mn = min(mn, v[i]);
    r = max(r, v[k-1] - mn);

    for(int i=0; i<k-1; i++) {
        r = max(r, v[i] - v[i+1]);
    }

    cout << r << lb;
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