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
    vector<pii> v(n);
    ll s=0;
    for(int i=0; i<n; i++){
        cin>>v[i].ff;
        v[i].ss=i+1;
        s+=v[i].ff;
    }
    sort(all(v));
    vector<int> ans;
    for(int i=0;i<n;i++){
        ll rem_s=s-v[i].ff;
        int max_el;
        if(i == n-1){
            max_el = v[n-2].ff;
        }else{
            max_el=v[n-1].ff;
        }
        if(rem_s-max_el==max_el){
            ans.pb(v[i].ss);
        }
    }
    cout<<sz(ans)<<lb;
    for(int i=0;i<sz(ans);i++){
        cout<<ans[i]<<(i==sz(ans)-1?"":" ");
    }
    if(sz(ans)>0) cout<<lb;
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