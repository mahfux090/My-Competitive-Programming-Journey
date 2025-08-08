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
    ll n,k,qr;
    cin>>n>>k>>qr;
    vector<ll> a(k+1);
    vector<ll> b(k+1);
    a[0]=0;
    b[0]=0;
    for(int i=1;i<=k;i++) cin>>a[i];
    for(int i=1;i<=k;i++) cin>>b[i];

    while(qr--) {
        ll d;
        cin>>d;
        if(d == 0) {
            cout<<0<<" ";
            continue;
        }
        int i=lower_bound(all(a),d)-a.begin();
        ll pa=a[i-1];
        ll pb=b[i-1];
        ll ca=a[i];
        ll cb=b[i];
        ll ans = pb+(d-pa)*(cb-pb)/(ca-pa);
        cout<<ans<<" ";
    }
    cout<<lb;
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