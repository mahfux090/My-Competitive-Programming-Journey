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

int a[500005], b[500005];

void solve(int cs) {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];

    vector<vector<int>> tgt(n + 1);
    map<int, set<int>> cloc;
    for(int i=1;i<=n;i++){
        if(a[i]>b[i]){
            cout<<"Case #"<<cs<<": -1"<<lb;
            return;
        }
        tgt[b[i]].pb(i);
        cloc[a[i]].insert(i);
    }

    vector<pii> ans;
    for(int tT=1; tT<=n; tT++){
        if(tgt[tT].empty()) continue;
        vector<int> th;
        for(int i : tgt[tT]){
            if(a[i]<tT) th.pb(i);
        }
        if(th.empty()) continue;
        
        if(cloc[tT].empty()){
            cout<<"Case #"<<cs<<": -1"<<lb;
            return;
        }

        int h=*cloc[tT].begin();
        for(int i : th){
            ans.pb({i,h});
            int oa=a[i];
            a[i]=tT;
            cloc[oa].erase(i);
            cloc[tT].insert(i);
        }
    }

    cout<<"Case #"<<cs<<": "<<sz(ans)<<lb;
    for(auto p:ans) cout<<p.ss<<" "<<p.ff<<lb;
}

int main() {
    fast
    int t=1;
    cin >> t;
    for(int i=1; i<=t; i++) {
        solve(i);
    }
    return 0;
}
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//