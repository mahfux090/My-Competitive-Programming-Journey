// Author: Mahfuz Uddin
// Problem: Zero String
// URL: https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ZEROSTRING
// Date: 2025-07-26 20:40
// Language: C++

// Bismillah hir Rahmanir Rahim
// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c0 = 0, c1 = 0;
    for (char ch : s) {
        if (ch == '0') {
            c0++;
        } else {
            c1++;
        }
    }

    if (c1 == 0) {
        cout << 0 << "\n";
    } else {
        int ans = min(c1, c0 + 1);
        cout << ans << "\n";
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
// 2025-07-26 20:40:46