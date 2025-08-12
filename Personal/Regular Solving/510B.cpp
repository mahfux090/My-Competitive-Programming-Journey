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

int n, m;
char g[51][51];
bool v[51][51];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

bool dfs(int r, int c, int pr, int pc, char clr) {
    v[r][c] = true;
    for (int i = 0; i < 4; i++) {
        int nr = r + dx[i];
        int nc = c + dy[i];
        if (nr >= 0 && nr < n && nc >= 0 && nc < m && g[nr][nc] == clr) {
            if (nr == pr && nc == pc) continue;
            if (v[nr][nc]) return true;
            if (dfs(nr, nc, r, c, clr)) return true;
        }
    }
    return false;
}

void solve() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> g[i][j];
            v[i][j] = false;
        }
    }
    bool f = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!v[i][j]) {
                if (dfs(i, j, -1, -1, g[i][j])) {
                    f = true;
                    break;
                }
            }
        }
        if (f) break;
    }
    if (f) cout << "Yes" << lb;
    else cout << "No" << lb;
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
//          M a h f u z U d d i n           //
//------------------------------------------//