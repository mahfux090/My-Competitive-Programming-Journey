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
#define endl '\n'
#define pii pair<int,int>
#define pll pair<ll,ll>
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;

void solve() {
    int n1, n2, k1, k2;
    cin>>n1>>n2>>k1>>k2;
    
    int M = 100000000;
    
    ll dp[101][101][2];
    memset(dp, 0, sizeof(dp));

    dp[0][0][0]=1;
    dp[0][0][1]=1;

    for(int i=0; i<=n1; ++i) {
        for(int j=0; j<=n2; ++j) {
            
            for(int x=1; x<=k1 && i-x>=0; ++x) {
                dp[i][j][0] = (dp[i][j][0] + dp[i-x][j][1]) % M;
            }

            for(int y=1; y<=k2 && j-y>=0; ++y) {
                dp[i][j][1] = (dp[i][j][1] + dp[i][j-y][0]) % M;
            }
        }
    }

    cout<<(dp[n1][n2][0] + dp[n1][n2][1]) % M << endl;
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
//          Mahfuz Uddin                  //
//------------------------------------------//