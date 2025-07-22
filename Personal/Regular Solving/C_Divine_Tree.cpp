// Bismillah hir Rahmanir Rahim
#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n, m;
    cin >> n >> m;

    if (m < n || m > n * (n + 1) / 2) {
        cout << -1 << "\n";
        return;
    }

    m -= n;
    vector<long long> left, right;
    for (long long i = n - 1; i >= 1; --i) {
        if (m >= i) {
            left.push_back(i + 1);
            m -= i;
        } else {
            right.push_back(i + 1);
        }
    }

    vector<long long> line;
    for (long long val : left) {
        line.push_back(val);
    }
    line.push_back(1);
    for (long long val : right) {
        line.push_back(val);
    }

    cout << line[0] << "\n";
    for (long long i = 0; i < n - 1; ++i) {
        cout << line[i] << " " << line[i + 1] << "\n";
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
// Tuesday, July 22, 2025
// 07:50:16 PM