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

int n, m, k;
vector<string> grid;
vector<vector<bool>> visited;
vector<pii> order;
int dr[] = {0, 0, 1, -1};
int dc[] = {1, -1, 0, 0};
bool isValid(int r, int c) {
    return r>=0 && r<n && c>=0 && c<m;
}
void dfs(int r, int c) {
    visited[r][c] = true;
    for (int i=0; i<4; i++) {
        int nr = r + dr[i];
        int nc = c + dc[i];
        if (isValid(nr, nc) && grid[nr][nc]=='.' && !visited[nr][nc]) {
            dfs(nr, nc);
        }
    }
    order.pb({r, c});
}
void solve() {
    cin >> n >> m >> k;
    grid.resize(n);
    visited.assign(n, vector<bool>(m, false));
    order.clear();
    int start_r = -1;
    int start_c = -1;
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
        for (int j=0; j<m;j++) {
            if (grid[i][j] == '.' && start_r == -1) {
                start_r = i;
                start_c = j;
            }
        }
    }
    dfs(start_r, start_c);
    for (int i=0; i<k; i++) {
        grid[order[i].ff][order[i].ss] = 'X';
    }
    for (int i = 0; i < n; i++) {
        cout << grid[i] << endl;
    }
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
//          Mahfuz Uddin                    //
//------------------------------------------//