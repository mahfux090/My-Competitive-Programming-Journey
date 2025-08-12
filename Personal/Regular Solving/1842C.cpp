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
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<int>dp(n+1,0);
    map<int,int> mxv;
    for(int k=1;k<=n;k++){
        int c=a[k-1];
        dp[k]=dp[k-1];
        if(mxv.count(c)){
            dp[k]=max(dp[k],mxv[c]+k);
        }
        int cur_v=dp[k-1]-(k-1);
        if(!mxv.count(c)){
            mxv[c]=cur_v;
        } else {
            mxv[c]=max(mxv[c],cur_v);
        }
    }
    cout<<dp[n]<<lb;
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