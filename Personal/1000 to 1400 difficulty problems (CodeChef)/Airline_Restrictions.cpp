// Author: Mahfuz Uddin
// Problem: Airline Restrictions
// URL: https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/AIRLINE
// Date: 2025-07-26 20:42
// Language: C++

// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

void solve() {
    short a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    if ((a + b <= d && c <= e) || (a + c <= d && b <= e) || (b + c <= d && a <= e)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    short t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
// Solved By Mahfuz Uddin
// 2025-07-26 20:42:02
// Author: Mahfuz Uddin
// Problem: Problem Name
// URL: https://example.com
// Date: 2025-07-26 20:47
// Language: C++
