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
    int n,k;
    cin>>n>>k;
    map<int,int> m;
    for(int i=0;i<n;++i) {
        int x;
        cin>>x;
        m[x]++;
    }
    ll ans=0;
    map<int,int> v;
    for(auto const& p:m){
        int a=p.ff;
        int c=p.ss;
        if(v[a]) continue;
        int b=k-a;
        if(a==b){
            ans+=c/2;
        } else {
            if(m.count(b)){
                ans+=min(c,m[b]);
                v[b]=1;
            }
        }
        v[a]=1;
    }
    cout<<ans<<lb;
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