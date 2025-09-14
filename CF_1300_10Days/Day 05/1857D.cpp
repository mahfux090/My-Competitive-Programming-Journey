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
const int INF = 2e9 + 7;
const ll LINF = 1e18;
const int MOD = 1e9+7;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    int max_val = -INF;
    
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];
    
    for(int i=0; i<n; i++) {
        max_val = max(max_val, a[i]-b[i]);
    }
    
    vector<int> ans;
    for(int i=0; i<n; i++) {
        if(a[i]-b[i] == max_val) {
            ans.pb(i+1);
        }
    }
    
    cout<<sz(ans)<<lb;
    for(int i=0; i<sz(ans); i++) {
        cout<<ans[i]<<(i == sz(ans)-1 ? "" : " ");
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