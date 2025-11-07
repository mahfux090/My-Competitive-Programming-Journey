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
    int n, m;
    cin >> n >> m;
    multiset<ll> s;
    for(int i=0; i<n; i++){
        ll a; cin>>a;
        s.insert(a);
    }
    vector<ll> b(m), c(m);
    for(int i=0; i<m; i++) cin>>b[i];
    for(int i=0; i<m; i++) cin>>c[i];

    vector<pll> inv; 
    vector<ll> dead; 

    for(int i=0; i<m; i++){
        if(c[i] > 0){
            inv.pb({b[i], c[i]});
        } else {
            dead.pb(b[i]);
        }
    }

    sort(all(inv));
    sort(all(dead));

    int kills=0;
    for(auto p : inv){
        ll bi=p.ff;
        ll ci=p.ss;
        auto it=s.lower_bound(bi);
        if(it != s.end()){
            kills++;
            ll sword = *it;
            s.erase(it);
            s.insert(max(sword, ci));
        }
    }
    for(ll bi : dead){
        auto it = s.lower_bound(bi);
        if(it != s.end()){
            kills++;
            s.erase(it);
        }
    }

    cout << kills << lb;
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