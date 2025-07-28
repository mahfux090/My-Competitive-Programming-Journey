// Author: Mahfuz Uddin
// Date: 2025-07-28 10:43
// Language: C++
//start From Here.....
// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        m[a - i]++;
    }

    long long c = 0;
    for (auto x : m) {
        long long v = x.second;
        c += v * (v - 1) / 2;
    }
    cout << c << '\n';
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