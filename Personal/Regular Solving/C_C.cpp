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
    ll n, m;
    cin >> n >> m;
    ll base_hap = 0;
    vector<ll> d(n);
    for(int i=0; i<n; i++){
        ll a, b;
        cin >> a >> b;
        base_hap += a;
        d[i] = b - a;
    }

    sort(rall(d));

    vector<ll> p(n + 1);
    p[0] = 0;
    for(int i=0; i<n; i++){
        p[i+1] = p[i] + d[i];
    }

    ll ans = -LINF;
    ll b_slots = m - n;

    if(n >= 2){
        ans = max(ans, base_hap + p[0]);
    }

    if(b_slots >= n - 1){
        ans = max(ans, base_hap + p[n]);
    }

    for(int k=1; k<=n-2; k++){
        ll cost = k;
        if(b_slots >= cost){
            ans = max(ans, base_hap + p[k]);
        }
    }
    
    if(n==1){
        ans = max(ans, base_hap + p[1]);
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