// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    set<int> p_l;
    p_l.insert(0);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
        p_l.insert(b[i]);
    }

    int max_sat = 0;
    for (int l : p_l) {
        int cur_s = 0;
        for (int i = 0; i < n; ++i) {
            if (b[i] <= l && a[i] > 0) {
                cur_s += a[i];
            }
        }
        max_sat = max(max_sat, cur_s - l);
    }
    cout << max_sat << "\n";
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
    // 2025-07-23 20:35:33