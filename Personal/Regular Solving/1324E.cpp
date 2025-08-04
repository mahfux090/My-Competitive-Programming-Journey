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
    int n, h, l, r;
    cin >> n >> h >> l >> r;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    vector<vector<int>> dp(n+1, vector<int>(h, -1e9));
    dp[0][0] = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<h; j++){
            if(dp[i][j] < 0) continue;
            
            int cur_a = a[i];

            int t1 = (j + cur_a) % h;
            int g1 = (t1 >= l && t1 <= r);
            dp[i+1][t1] = max(dp[i+1][t1], dp[i][j] + g1);

            int t2 = (j + cur_a - 1) % h;
            int g2 = (t2 >= l && t2 <= r);
            dp[i+1][t2] = max(dp[i+1][t2], dp[i][j] + g2);
        }
    }
    
    int ans = 0;
    for(int j=0; j<h; j++){
        ans = max(ans, dp[n][j]);
    }
    cout << ans << endl;
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