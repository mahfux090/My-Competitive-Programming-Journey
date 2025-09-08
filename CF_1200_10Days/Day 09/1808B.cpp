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
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(m, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            cin >> a[j][i];
        }
    }

    ll ans=0;
    for(int j=0; j<m; ++j){
        vector<int> v = a[j];
        sort(all(v));
        ll ps=0;
        for(int i=0;i<n;++i){
            ans+=(ll)i*v[i]-ps;
            ps+=v[i];
        }
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