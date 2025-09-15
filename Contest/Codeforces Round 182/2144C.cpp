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
const int MOD = 998244353;

int n;
vector<int> a, b;
map<int, int> val_to_idx;
vector<vector<vector<int>>> memo;

int dfs(int i, int last_a, int last_b) {
    if (i == n)
        return 1;
    int la_idx = val_to_idx[last_a];
    int lb_idx = val_to_idx[last_b];
    if (memo[i][la_idx][lb_idx] != -1) {
        return memo[i][la_idx][lb_idx];
    }
    ll ways = 0;
    if (a[i] >= last_a && b[i] >= last_b) {
        ways = (ways + dfs(i + 1, a[i], b[i])) % MOD;
    }
    if (a[i] != b[i]) {
        if (b[i] >= last_a && a[i] >= last_b) {
            ways = (ways + dfs(i + 1, b[i], a[i])) % MOD;
        }
    } 
    else { 
        if (b[i] >= last_a && a[i] >= last_b) {
             ways = (ways + dfs(i + 1, b[i], a[i])) % MOD;
        }
    }
    return memo[i][la_idx][lb_idx] = ways;
}

void solve() {
    cin >> n;
    a.assign(n, 0);
    b.assign(n, 0);
    set<int> all_vals;
    all_vals.insert(0); 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        all_vals.insert(a[i]);
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        all_vals.insert(b[i]);
    }
    val_to_idx.clear();
    int cur_idx = 0;
    for (int val : all_vals)
        val_to_idx[val] = cur_idx++;
    memo.assign(n + 1, vector<vector<int>>(cur_idx, vector<int>(cur_idx, -1)));
    cout << dfs(0, 0, 0) << lb;
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