// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string a;
    cin >> a;

    vector<int> p0(n), p1(n);
    int last0 = -1, last1 = -1;

    for (int i = 0; i < n; ++i) {
        p0[i] = last0;
        p1[i] = last1;
        if (a[i] == '0') {
            last0 = i;
        } else {
            last1 = i;
        }
    }

    int left = 0;
    int ans = 0;

    for (int j = 0; j < n; ++j) {
        int break_p = -1;

        if (a[j] == '1') {
            int r = p1[j];
            if (r != -1) {
                int q = p0[r];
                if (q != -1) {
                    int p = p0[q];
                    if (p != -1) break_p = max(break_p, p);
                }
            }
            r = p0[j];
            if (r != -1) {
                int q = p0[r];
                if (q != -1) {
                    int p = p1[q];
                    if (p != -1) break_p = max(break_p, p);
                }
            }
        } else { // a[j] == '0'
            int r = p0[j];
            if (r != -1) {
                int q = p1[r];
                if (q != -1) {
                    int p = p1[q];
                    if (p != -1) break_p = max(break_p, p);
                }
            }
            r = p1[j];
            if (r != -1) {
                int q = p1[r];
                if (q != -1) {
                    int p = p0[q];
                    if (p != -1) break_p = max(break_p, p);
                }
            }
        }

        if (break_p != -1) {
            left = max(left, break_p + 1);
        }
        
        ans = max(ans, j - left + 1);
    }
    cout << ans << "\n";
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
// Wed Jul 23 20:47:13 2025