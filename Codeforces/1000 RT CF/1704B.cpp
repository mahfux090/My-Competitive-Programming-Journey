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
    ll n,x;
    cin>>n>>x;
    vector<ll> a(n);
    for(int i=0; i<n; ++i) {
        cin >> a[i];
    }

    int c=0;
    ll l = a[0]-x;
    ll r = a[0]+x;

    for(int i=1; i<n; ++i) {
        ll cl = a[i]-x;
        ll cr = a[i]+x;

        ll il=max(l, cl);
        ll ir=min(r, cr);

        if(il > ir) {
            c++;
            l = cl;
            r = cr;
        } else {
            l=il;
            r = ir;
        }
    }
    cout << c << lb;
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