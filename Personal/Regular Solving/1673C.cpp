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
const int N = 40001;

vector<int> p;
int dp[N];

void precalc() {
    for (int i = 1; i < N; i++) {
        string s = to_string(i);
        string t = s;
        reverse(all(t));
        if (s == t) {
            p.pb(i);
        }
    }
    dp[0] = 1;
    for (int x : p) {
        for (int i = x; i < N; i++) {
            dp[i] = (dp[i] + dp[i - x]) % MOD;
        }
    }
}

void solve() {
    int n;
    cin >> n;
    cout << dp[n] << lb;
}

int main() {
    fast
    precalc();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//