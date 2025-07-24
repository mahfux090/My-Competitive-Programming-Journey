// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;

    if (x == 1) {
        cout << -1 << "\n";
        return;
    }

    vector<int> p, q;
    long long gcd_yx = __gcd(y, x);

    for (int i = 1; i <= n; ++i) {
        if (i == x || i == y) continue;
        if (__gcd(i, x) > gcd_yx) {
            p.push_back(i);
        } else {
            q.push_back(i);
        }
    }

    if (p.empty()) {
        cout << -1 << "\n";
        return;
    }

    bool first = true;
    for (int val : q) {
        if (!first) cout << " ";
        cout << val;
        first = false;
    }
    for (int val : p) {
        if (!first) cout << " ";
        cout << val;
        first = false;
    }

    cout << " " << y << " " << x << "\n";
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
// Wed Jul 23 22:31:05 2025