// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<vector<int>> pos(n + 1);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        pos[a[i]].push_back(i);
    }

    set<int> last_indices;
    for (int i = 1; i <= n; ++i) {
        if (!pos[i].empty()) {
            last_indices.insert(pos[i].back());
        }
    }

    int ans = 0;
    int right_boundary = n;

    while (!last_indices.empty()) {
        ans++;
        int left_boundary = *last_indices.begin();

        for (int i = right_boundary - 1; i >= left_boundary; --i) {
            int val = a[i];
            if (!pos[val].empty() && pos[val].back() == i) {
                last_indices.erase(pos[val].back());
                pos[val].pop_back();
                if (!pos[val].empty()) {
                    last_indices.insert(pos[val].back());
                }
            }
        }
        right_boundary = left_boundary;
    }

    cout << ans << "\n";
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
// 24/07/2025 - 10:27 PM