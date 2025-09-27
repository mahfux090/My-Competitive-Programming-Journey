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
    vector<int> p1,p2,p3;
    for(int i=1;i<=n;i++){
        int t;
        cin>>t;
        if(t==1) p1.pb(i);
        else if (t==2) p2.pb(i);
        else p3.pb(i);
    }

    int w = min({sz(p1), sz(p2), sz(p3)});
    cout << w << lb;

    for(int i=0;i<w;i++){
        cout<<p1[i]<<" "<<p2[i]<<" "<<p3[i]<<lb;
    }
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