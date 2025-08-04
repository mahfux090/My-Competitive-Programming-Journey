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

int dr[] = {-1, 1, 0, 0};
int dc[] = {0, 0, -1, 1};

void solve() {
    int n,m;
    cin>>n>>m;
    vector<string> g(n);
    vector<pii> gd, bd;
    for(int i = 0; i<n; i++){
        cin>>g[i];
        for(int j=0; j<m; j++) {
            if (g[i][j]=='G') gd.pb({i, j});
            if (g[i][j]=='B') bd.pb({i, j});
        }
    }

    for (auto p : bd) {
        for (int i=0; i<4; i++) {
            int nr = p.ff + dr[i];
            int nc = p.ss + dc[i];
            if (nr>=0 && nr<n && nc>=0 && nc<m) {
                if(g[nr][nc]=='G'){
                    cout << "No" << endl;
                    return;
                }
                if(g[nr][nc]=='.'){
                    g[nr][nc]='#';
                }
            }
        }
    }

    vector<vector<bool>> vis(n, vector<bool>(m, false));
    queue<pii> q;

    if (g[n-1][m-1]!='#') {
        q.push({n-1,m-1});
        vis[n-1][m-1] = true;
    }

    while(!q.empty()) {
        pii u = q.front();
        q.pop();

        for (int i = 0; i<4; i++) {
            int nr = u.ff+dr[i];
            int nc = u.ss+dc[i];
            if(nr>=0&&nr<n&&nc>=0&&nc<m&&g[nr][nc]!='#' &&!vis[nr][nc]){
                vis[nr][nc]=true;
                q.push({nr, nc});
            }
        }
    }

    for(auto p : gd) {
        if (!vis[p.ff][p.ss]) {
            cout << "No" << endl;
            return;
        }
    }

    cout << "Yes" << endl;
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
//          Mahfuz Uddin                    //
//------------------------------------------//