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
    ll n, a;
    cin>>n >> a;
    vector<ll> v(n);
    for(int i=0; i<n; ++i) cin>>v[i];

    auto it1 = upper_bound(all(v), a);
    ll s1 = v.end() - it1;

    ll s2 = -1;
    if(a > 0) {
        auto it2 = lower_bound(all(v), a);
        s2 = it2 - v.begin();
    }

    if(s1 >= s2) {
        cout << a+1 << lb;
    } else {
        cout << a-1 << lb;
    }
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