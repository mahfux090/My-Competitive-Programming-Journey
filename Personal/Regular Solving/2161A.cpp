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
    ll r,x,d,n;
    cin>>r>>x>>d>>n;
    string s;
    cin>>s;

    vector<vector<bool>>dp(n+1,vector<bool>(n+1,false));
    dp[0][0]=true;

    for(int i=0;i<n;++i){
        for(int j=0;j<=i;++j){
            if(!dp[i][j]) continue;

            ll l=max(0LL,r-(j*d));
            ll r_=r+(j*d);

            if(s[i]=='1'){
                dp[i+1][j+1]=true;
            } else {
                if(l<x){
                    dp[i+1][j+1]=true;
                }
                if(r_>=x){
                    dp[i+1][j]=true;
                }
            }
        }
    }

    int a=0;
    for(int j=0;j<=n;++j){
        if(dp[n][j]){
            a=j;
        }
    }
    cout<<a<<lb;
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