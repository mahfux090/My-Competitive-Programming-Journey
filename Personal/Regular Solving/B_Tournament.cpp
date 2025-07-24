// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, j, k;
    cin >> n >> j >> k;
    vector<int> a(n);
    int sj = -1;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (i == j - 1) {
            sj = a[i];
        }
    }

    sort(a.begin(), a.end());

    if (k >= 2) {
        cout << "YES\n";
    } else {
        if (sj == a[n - 1]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
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
// 24/07/2025 - 10:40 PM