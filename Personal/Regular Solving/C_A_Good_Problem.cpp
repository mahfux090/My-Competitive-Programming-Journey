// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n, l, r, k;
    cin >> n >> l >> r >> k;

    if (n % 2 != 0) {
        cout << l << "\n";
    } else {
        if (n == 2) {
            cout << -1 << "\n";
            return;
        }

        long long h_pos = 0;
        if (l > 0) {
            h_pos = 63 - __builtin_clzll(l);
        }
        long long w = 1LL << (h_pos + 1);

        if (w > r) {
            cout << -1 << "\n";
        } else {
            if (k <= n - 2) {
                cout << l << "\n";
            } else {
                cout << w << "\n";
            }
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
// 24/07/2025 - 10:48 PM