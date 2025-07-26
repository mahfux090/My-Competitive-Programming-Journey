// Author: Mahfuz Uddin
// Problem: C. Coloring Game
// URL: https://codeforces.com/problemset/problem/2112/C
// Date: 2025-07-26 10:44
// Language: C++
// Start From Here......
// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long w = 0;

    if (n >= 3) {
        long long l = a[n - 1];
        long long c1 = 0;
        int p = 0;
        int q = n - 2;
        while (p < q) {
            if (a[p] + a[q] > l) {
                c1 += (q - p);
                q--;
            } else {
                p++;
            }
        }
        w += c1;
    }

    if (n >= 4) {
        long long l = a[n - 1];
        for (int k = 2; k <= n - 2; ++k) {
            long long t = max(a[k], l - a[k]);
            int p = 0;
            int q = k - 1;
            while (p < q) {
                if (a[p] + a[q] > t) {
                    w += (q - p);
                    q--;
                } else {
                    p++;
                }
            }
        }
    }

    cout << w << endl;
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
// Sat Jul 26 2025 10:44:06