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

int dp[2005][2005];

void solve() {
    int n, k;
    cin >> n >> k;

    // Base case: Length 1 er jonne sob number 1 bar kore aste pare
    for(int i = 1; i <= n; i++) {
        dp[1][i] = 1;
    }

    // DP state calculation
    for(int len = 1; len < k; len++) { // Length loop
        for(int val = 1; val <= n; val++) { // Current value loop
            if(dp[len][val] == 0) continue; 
            
            // Current value 'val' er sob multiples e transition koro
            for(int nextVal = val; nextVal <= n; nextVal += val) {
                dp[len + 1][nextVal] = (dp[len + 1][nextVal] + dp[len][val]) % MOD;
            }
        }
    }

    //  Sum of all sequences of length k ending at any value from 1 to n
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        ans = (ans + dp[k][i]) % MOD;
    }
    cout << ans << lb;
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