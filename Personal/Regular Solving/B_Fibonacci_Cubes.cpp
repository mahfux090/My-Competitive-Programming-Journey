// Author: Mahfuz Uddin
// Problem: B. Fibonacci Cubes
// URL: https://codeforces.com/contest/2111/problem/B
// Date: 2025-07-25 22:19:36
// Language: C++
// Start From Here......
// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>

using namespace std;

int fib[15];

void solve() {
    int n, m;
    cin >> n >> m;
    string ans = "";
    for (int char_i = 0; char_i < m; ++char_i) {
        int a, b, c;
        cin >> a >> b >> c;
        int min_dim = min({a, b, c});
        int max_dim = max({a, b, c});
        if (min_dim >= fib[n] && max_dim >= fib[n + 1]) {
            ans += '1';
        } else {
            ans += '0';
        }
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    fib[1] = 1;
    fib[2] = 2;
    for (int char_i = 3; char_i <= 12; ++char_i) {
        fib[char_i] = fib[char_i - 1] + fib[char_i - 2];
    }

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
// Solved By Mahfuz Uddin
// Fri Jul 25 22:19:36 2025