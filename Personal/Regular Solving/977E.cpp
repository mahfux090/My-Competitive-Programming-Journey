#include<bits/stdc++.h>

using namespace std;

vector<int> g[200005];
bool v[200005];
bool ok;

void dfs(int u) {
    v[u] = true;
    if (g[u].size() != 2) {
        ok = false;
    }
    for (int c : g[u]) {
        if (!v[c]) {
            dfs(c);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i=0; i < m; ++i) {
        int u, v_node;
        cin>>u>>v_node;
        g[u].push_back(v_node);
        g[v_node].push_back(u);
    }

    int ans=0;
    for (int i=1; i<=n; ++i) {
        if (!v[i]) {
            ok = true;
            dfs(i);
            if (ok) {
                ans++;
            }
        }
    }

    cout << ans << endl;

    // Solved By Mahfuz Uddin
    return 0;
}