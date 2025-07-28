// Bismillah hir Rahmanir Rahim
/******************************************************************************
* *
* #########################################################################   *
* #                                                                       #   *
* #                Author: Mahfuz Uddin                                   #   *
* #                Date: 28-07-2025                                       #   *
* #                Time: 13:25:00                                         #   *
* #                                                                       #   *
* #########################################################################   *
* *
******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c, d, e;
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
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
// Solved By Mahfuz Uddin