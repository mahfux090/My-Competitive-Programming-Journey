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
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    ll s = 0;
    for(int i = 0; i<n; ++i) {
        cin >> a[i];
        s += a[i];
    }

    ll k=s/x;
    ll b = 0;

    sort(all(a));

    deque<ll> c, e;
    for(int i=0;i<n;++i) {
        if(i<n-k) {
            c.pb(a[i]);
        } else {
            e.pb(a[i]);
            b+=a[i];
        }
    }

    vector<ll> o;
    ll cs = 0;

    for(ll i=1;i<=k;++i) {
        ll t=i*x;
        while(!c.empty()) {
            ll p=c.front();
            if(cs+p < t) {
                o.pb(p);
                cs += p;
                c.pop_front();
            } else {
                break;
            }
        }
        ll p=e.front();
        o.pb(p);
        cs+=p;
        e.pop_front();
    }

    while(!c.empty()) {
        o.pb(c.front());
        c.pop_front();
    }

    cout << b << lb;
    for(int i = 0; i<n; ++i) {
        cout << o[i] << (i == n-1 ? "" : " ");
    }
    cout << lb;
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