// Bismillah hir Rahmanir Rahim
#include <bits/stdc++.h>

void solve() {
    long long n, m, a, b;
    std::cin >> n >> m >> a >> b;
    auto bit_length = [](long long val) {
        if (val <= 0) return 0;
        return 64 - __builtin_clzll((unsigned long long)val);
    };
    long long cost1 = bit_length(std::min(a - 1, n - a)) + bit_length(m - 1);
    long long cost2 = bit_length(std::min(b - 1, m - b)) + bit_length(n - 1);
    std::cout << std::min(cost1, cost2) + 1 << "\n";
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
// 07:11:09 PM