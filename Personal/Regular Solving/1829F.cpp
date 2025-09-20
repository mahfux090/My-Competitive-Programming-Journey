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
    cin>>n >> m;
    vector<int> d(n+1, 0);
    for(int i=0;i<m;i++){
        int u, v;
        cin>>u>>v;
        d[u]++; d[v]++;
    }
    map<int, int>c;
    for (int i=1;i<=n;i++){
        c[d[i]]++;
    }
    int x,y;
    if(sz(c)==2){
        for(auto p:c){
            if(p.ff>1){
                x=p.ss-1;
                y=p.ff-1;
            }
        }
    }else{
        for(auto p:c){
            if(p.ss>1&&p.ff>1){
                x=p.ss;
                y=p.ff-1;
            }
        }
    }
    cout<<x<<" "<<y<<lb;
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