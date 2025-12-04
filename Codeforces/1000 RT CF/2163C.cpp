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
#define rall(x) x.rbegin(),x.end()
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
    vector<int> a(n+1), b(n+1);
    for(int i=1; i<=n; ++i) cin >> a[i];
    for(int i=1; i<=n; ++i) cin >> b[i];

    vector<int> l1(n+2, INF), r1(n+2, 0);
    vector<int> l2(n+2, INF), r2(n+2, 0);

    l1[0]=INF; 
    r1[0]=0;
    l2[n+1]=INF;
    r2[n+1]=0;

    for(int i=1; i<=n; ++i) {
        l1[i] = min(l1[i-1], a[i]);
        r1[i] = max(r1[i-1], a[i]);
    }
    
    for(int i=n; i>=1; --i) {
        l2[i]=min(l2[i+1], b[i]);
        r2[i]=max(r2[i+1], b[i]);
    }
    
    vector<int> m(n+1), M(n+1);
    vector<vector<int>> mtj(2*n + 2); 
    
    for(int j=1; j<=n; ++j) {
        m[j] = min(l1[j], l2[j]);
        M[j] = max(r1[j], r2[j]);
        mtj[m[j]].pb(j);
    }
    
    ll ans = 0;
    ll cm = LINF;
    int nn = 2 * n;

    for(int l=nn; l>=1; --l) {
        for(int j : mtj[l]) {
            cm = min(cm, (ll)M[j]);
        }
        
        ll R = cm;
        ans += max(0LL, nn-max((ll)l, R) + 1);
    }
    
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