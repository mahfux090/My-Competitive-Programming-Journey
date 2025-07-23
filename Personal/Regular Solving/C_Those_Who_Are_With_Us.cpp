// Bismillah hir Rahmanir Rahim

#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    int g = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            g = max(g, a[i][j]);
        }
    }

    vector<int> l(n, 0), r(m, 0);
    int s = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == g) {
                l[i]++;
                r[j]++;
                s++;
            }
        }
    }

    bool f = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (s == l[i] + r[j] - (a[i][j] == g)) {
                f = true;
                break;
            }
        }
        if (f) {
            break;
        }
    }
    cout << g - f << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

// Solved By Mahfuz Uddin
// 2:13 PM 23/07/2025