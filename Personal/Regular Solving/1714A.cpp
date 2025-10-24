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
    int n, H, M;
    cin>>n>>H>>M;
    int bt = H*60+M;
    int md = INF;

    for(int i=0; i<n; i++){
        int h, m;
        cin>>h>>m;
        int at = h*60+m;
        int d = at - bt;
        int dur = (d%1440 + 1440) % 1440;
        md = min(md, dur);
    }

    cout<<md/60<<" "<<md%60<<lb;
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