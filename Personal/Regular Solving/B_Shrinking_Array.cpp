// Author: Mahfuz Uddin
// Problem: B. Shrinking Array
// URL: https://codeforces.com/problemset/problem/2112/B
// Date: 2025-07-26 10:29
// Language: C++
// Start From Here......
// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; ++i) {
        if (abs(a[i] - a[i + 1]) <= 1) {
            cout << 0 << endl;
            return;
        }
    }

    long long r = LLONG_MAX;

    for (int j = 0; j < n - 1; ++j) {
        vector<int> l_min(j + 1), l_max(j + 1);
        l_min[j] = l_max[j] = a[j];
        for (int p = j - 1; p >= 0; --p) {
            l_min[p] = min(l_min[p + 1], a[p]);
            l_max[p] = max(l_max[p + 1], a[p]);
        }

        int i_ptr = 0;
        int mn_R = a[j + 1];
        int mx_R = a[j + 1];
        for (int k = j + 1; k < n; ++k) {
            if (k > j + 1) {
                mn_R = min(mn_R, a[k]);
                mx_R = max(mx_R, a[k]);
            }

            while (i_ptr <= j) {
                int mn_L = l_min[i_ptr];
                int mx_L = l_max[i_ptr];
                if (max(mn_L, mn_R) > min(mx_L, mx_R) + 1) {
                    break;
                }
                i_ptr++;
            }
            
            if (i_ptr > 0) {
                int charlie = i_ptr - 1;
                r = min(r, (long long)(k - charlie - 1));
            }
        }
    }

    if (r == LLONG_MAX) {
        cout << -1 << endl;
    } else {
        cout << r << endl;
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
// Sat Jul 26 2025 10:32:54
