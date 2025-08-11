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
    vector<int> ans(n+1,0);
    set<int> act;
    for(int i=1;i<=n;++i){
        act.insert(i);
    }

    for(int i=0;i<m;++i){
        int l,r,x;
        cin>>l>>r>>x;
        
        auto it=act.lower_bound(l);
        vector<int> losers;
        
        while(it!=act.end() && *it<=r){
            if(*it!=x){
                losers.pb(*it);
            }
            it++;
        }
        
        for(int k:losers){
            ans[k]=x;
            act.erase(k);
        }
    }

    for(int i=1; i<=n; ++i){
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