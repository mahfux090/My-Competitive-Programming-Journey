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

    vector<bool> is_p(n+1, true);
    is_p[0] = is_p[1] = false;
    for(int p=2; p*p<=n; p++) {
        if (is_p[p]) {
            for (int i=p*p; i<=n; i+=p)
                is_p[i]=false;
        }
    }

    vector<int> ans;
    for (int i=2; i<=n; ++i) {
        if (is_p[i]) {
            ll cur_p = i;
            while(cur_p <= n){
                ans.pb(cur_p);
                cur_p *= i;
            }
        }
    }

    cout<<sz(ans)<<lb;
    for(int i=0; i<sz(ans); ++i){
        cout<<ans[i]<<" ";
    }
    cout<<lb;
}

int main() {
    fast
    int t=1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//