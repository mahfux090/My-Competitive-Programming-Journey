// Author: Mahfuz Uddin
// Date: 2025-07-27 11:39
// Language: C++
//start From Here.....
// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b.begin(), b.end());
    int k_val = b[k - 1];

    vector<int> c;
    for (int val : a) {
        if (val <= k_val) {
            c.push_back(val);
        }
    }

    if (c.empty()) {
        cout << "YES\n";
        return;
    }

    int l = 0, r = c.size() - 1;
    int final_len = c.size();

    while (l <= r) {
        if (c[l] == c[r]) {
            l++;
            r--;
        } else if (c[l] == k_val) {
            l++;
            final_len--;
        } else if (c[r] == k_val) {
            r--;
            final_len--;
        } else {
            cout << "NO\n";
            return;
        }
    }

    if (final_len >= k - 1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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