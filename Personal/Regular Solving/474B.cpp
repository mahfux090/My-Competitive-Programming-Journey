// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (i > 0) {
            a[i] += a[i - 1];
        }
    }
    int m;
    cin >> m;
    while (m--) {
        int q;
        cin >> q;
        cout << (lower_bound(a.begin(), a.end(), q) - a.begin()) + 1 << "\n";
    }
    return 0;
}
// Solved By Mahfuz Uddin