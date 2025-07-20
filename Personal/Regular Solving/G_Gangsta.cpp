#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <algorithm>

void solve() {
    long long n;
    std::cin >> n;
    std::string s;
    std::cin >> s;

    long long sum_of_lengths = n * (n + 1) * (n + 2) / 6;

    std::vector<long long> pref(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        pref[i + 1] = pref[i] + (s[i] == '0' ? 1 : -1);
    }

    std::sort(pref.begin(), pref.end());

    long long sum_of_abs_diffs = 0;
    long long m = n + 1;
    for (long long i = 0; i < m; ++i) {
        sum_of_abs_diffs += pref[i] * (2 * i - m + 1);
    }

    long long total_sum = (sum_of_lengths + sum_of_abs_diffs) / 2;
    std::cout << total_sum << "\n";
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