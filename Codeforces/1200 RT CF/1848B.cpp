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

    vector<vector<int>> pos(k + 1);

    for (int i = 1; i <= k; i++) {
        pos[i].pb(0); 
    }

    for (int i = 1; i <= n; i++) {
        int c;
        cin >> c;
        pos[c].pb(i);
    }

    for (int i = 1; i <= k; i++) {
        pos[i].pb(n + 1);
    }

    int ans = INF;

    for (int i = 1; i <= k; i++) {
        int mx1 = 0; 
        int mx2 = 0; 

        for (int j = 1; j < sz(pos[i]); j++) {
            int gap = pos[i][j] - pos[i][j-1] - 1;
            
            if (gap >= mx1) {
                mx2 = mx1;
                mx1 = gap;
            } else if (gap > mx2) {
                mx2 = gap;
            }
        }

        int curr = max(mx1 / 2, mx2);
        ans = min(ans, curr);
    }

    cout << ans << lb;
}

int main() {
    fast
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}