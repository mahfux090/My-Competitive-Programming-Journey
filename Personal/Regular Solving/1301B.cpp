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
    vector<ll> a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    vector<ll> v;
    for(int i=0;i<n;i++) {
        if(a[i] == -1) {
            if(i>0&&a[i-1] != -1) v.pb(a[i-1]);
            if(i<n-1&&a[i+1] != -1) v.pb(a[i+1]);
        }
    }

    if(v.empty()) {
        cout << 0 << " " << 0 << lb;
        return;
    }

    ll mn = v[0], mx = v[0];
    for(auto x : v) {
        mn = min(mn, x);
        mx = max(mx, x);
    }

    ll k = (mn + mx) / 2;

    ll m = mx-k;

    for(int i=0; i<n-1; i++) {
        if(a[i]!=-1&&a[i+1]!=-1) {
            m=max(m, abs(a[i]-a[i+1]));
        }
    }

    cout << m << " " << k << lb;
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