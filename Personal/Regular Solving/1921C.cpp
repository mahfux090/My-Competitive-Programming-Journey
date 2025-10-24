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
    ll n, f, a, b;
    cin >> n >> f >> a >> b;
    vector<ll> m(n);
    for(int i=0; i<n; i++){
        cin >> m[i];
    }

    ll lp = 0; // lp = last point (m_{i-1})
    bool ok = true;

    for(int i=0; i<n; i++){
        ll dt = m[i] - lp;
        ll c1 = dt * a;
        ll c2 = b;
        
        ll c = min(c1, c2);
        
        f -= c;

        if(f <= 0){
            ok = false;
            break;
        }
        
        lp = m[i];
    }

    if(ok){
        cout << "YES" << lb;
    } else {
        cout << "NO" << lb;
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