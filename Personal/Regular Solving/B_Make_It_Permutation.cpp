// Bismillah hir Rahmanir Rahim

#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    if (n == 3) {
        cout << "4\n";
        cout << "2 1 3\n";
        cout << "2 2 3\n";
        cout << "3 1 2\n";
        cout << "3 2 3\n";
        return;
    }
    
    if (n == 4) {
        cout << "5\n";
        cout << "2 1 4\n";
        cout << "3 1 3\n";
        cout << "3 2 4\n";
        cout << "4 1 2\n";
        cout << "4 3 4\n";
        return;
    }
    
    cout << 2 * n - 1 << "\n";
    for (int i = 1; i <= n; i++) {
        cout << i << " " << 1 << " " << i << "\n";
        if (i != n) {
            cout << i << " " << i + 1 << " " << n << "\n";
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
// 6:03 PM 23/07/2025