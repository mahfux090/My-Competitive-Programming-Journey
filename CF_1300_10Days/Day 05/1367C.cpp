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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<int> ones;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            ones.pb(i);
        }
    }

    if (ones.empty()) {
        cout << (n + k) / (k + 1) << lb;
        return;
    }

    int ans = 0;
    int len_left = ones[0] - k;
    if (len_left > 0) {
        ans += (len_left + k) / (k + 1);
    }
    for (size_t i = 0; i < ones.size() - 1; ++i) {
        int len_avail = ones[i+1] - ones[i] - 2 * k - 1;
        if (len_avail > 0) {
            ans += (len_avail + k) / (k + 1);
        }
    }
    int len_right = n - 1 - (ones.back() + k);
    if (len_right > 0) {
        ans += (len_right + k) / (k + 1);
    }
    
    cout << ans << lb;
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