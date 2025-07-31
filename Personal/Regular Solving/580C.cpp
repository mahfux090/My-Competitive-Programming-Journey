#include<bits/stdc++.h>

using namespace std;

int n, m;
int a[100005];
vector<int> g[100005];
int ans;

void dfs(int u, int p, int c) {
    if (a[u] == 1) {
        c++;
    } else {
        c = 0;
    }

    if (c > m) {
        return;
    }

    bool leaf = true;
    for (int v : g[u]) {
        if (v != p) {
            leaf = false;
            dfs(v, u, c);
        }
    }

    if (leaf) {
        ans++;
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for(int i=1; i<=n; ++i){
        cin>>a[i];
    }

    for (int i=0; i<n-1; ++i) {
        int u, v;
        cin>>u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    ans = 0;
    dfs(1, 0, 0);

    cout << ans << endl;

    // Solved By Mahfuz Uddin
    return 0;
}