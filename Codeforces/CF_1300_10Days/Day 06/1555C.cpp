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
    int m;
    cin >> m;
    vector<vector<ll>> a(2, vector<ll>(m));
    for (int i=0; i < 2; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    if (m == 1) {
        cout << 0 << lb;
        return;
    }

    vector<ll> suffix_top(m + 1, 0);
    for (int i = m - 1; i >= 0; i--) {
        suffix_top[i] = suffix_top[i + 1] + a[0][i];
    }

    vector<ll> prefix_bottom(m, 0);
    prefix_bottom[0] = a[1][0];
    for (int i = 1; i < m; i++) {
        prefix_bottom[i] = prefix_bottom[i - 1] + a[1][i];
    }

    ll min_score = LINF;

    for (int i = 0; i < m; i++) {
        ll score_top = suffix_top[i + 1];
        ll score_bottom = (i > 0) ? prefix_bottom[i - 1] : 0;
        ll current_score = max(score_top, score_bottom);
        min_score = min(min_score, current_score);
    }

    cout << min_score << lb;
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