// Bismillah hir Rahmanir Rahim
#include <bits/stdc++.h>

void solve() {
    int k;
    std::cin >> k;
    std::cout << "digit\n"
              << "digit\n"
              << "add -8\n"
              << "add -4\n"
              << "add -2\n"
              << "add -1\n"
              << "add " << k - 1 << "\n"
              << "!\n" << std::flush;
    for (int j = 0; j < 8; ++j) {
        std::string dummy;
        std::cin >> dummy;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
// Solved By Mahfuz Uddin
// Tuesday, July 22, 2025
// 07:21:18 PM