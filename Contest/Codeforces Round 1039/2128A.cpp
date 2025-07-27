// Author: Mahfuz Uddin
// Date: 2025-07-27 20:35
// Language: C++
//start From Here.....
// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>

using namespace std;

void solve() {
    short a;
    long long b;
    cin >> a >> b;
    vector<long long> p(a);
    for (short s = 0; s < a; ++s) {
        cin >> p[s];
    }
    sort(p.begin(), p.end());
    vector<bool> q(a + 1, false);
    short r = 0;
    for (short s = a - 1; s >= 0; --s) {
        for (char t = 1; t <= a; ++t) {
            if (!q[t]) {
                __int128 val = (__int128)p[s] * (1LL << (t - 1));
                if (val <= b) {
                    r++;
                    q[t] = true;
                    break;
                }
            }
        }
    }
    cout << a - r << "\n";
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