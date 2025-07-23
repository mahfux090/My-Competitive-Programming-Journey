// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, c;
    cin >> n >> c;
    set<int> s;
    int m = 101;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        s.insert(x);
        m = min(m, x);
    }

    for (int ex = 0; ; ++ex) {
        int fc = c + ex;
        if (s.count(fc)) {
            continue;
        }
        if (fc > m) {
            cout << ex << "\n";
            return;
        }
    }
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
    // 2025-07-23 20:33:19