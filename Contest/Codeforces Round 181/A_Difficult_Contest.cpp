// Bismillah hir Rahmanir Rahim
#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin >> s;
    stable_sort(s.begin(), s.end(), [](char a, char b) {
        auto get_priority = [](char c) {
            if (c == 'T') return 0;
            if (c == 'F') return 1;
            if (c == 'N') return 2;
            return 3;
        };
        return get_priority(a) < get_priority(b);
    });
    cout << s << "\n";
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
// Tue Jul 22 21:02:48 2025