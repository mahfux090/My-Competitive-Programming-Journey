// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int p[n];
        int i, j;
        for (int k = 0; k < n; k++) {
            cin >> p[k];
            if (p[k] == 1) {
                i = k;
            }
            if (p[k] == n) {
                j = k;
            }
        }

        int ans = i + (n - 1 - j);
        if (i > j) {
            ans--;
        }
        cout << ans << endl;
    }
    return 0;
}
// Solved By Mahfuz Uddin