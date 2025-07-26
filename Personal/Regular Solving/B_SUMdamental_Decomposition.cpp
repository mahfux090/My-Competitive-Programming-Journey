// Author: Mahfuz Uddin
// Problem: B. SUMdamental Decomposition
// URL: https://codeforces.com/problemset/problem/2108/B
// Date: 2025-07-26 10:51
// Language: C++
// Start From Here......
// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>

using namespace std;

void solve() {
    long long char_n;
    long long char_x;
    cin >> char_n >> char_x;

    int char_t0 = 0;
    if (char_x > 0) {
       char_t0 = __builtin_popcountll(char_x);
    }

    long long char_t_base = max(char_n, (long long)char_t0);
    long long char_t_final = char_t_base;
    if ((char_t_base % 2) != (char_t0 % 2)) {
        char_t_final++;
    }

    long long char_ops_needed = (char_t_final - char_t0) / 2;
    
    long long char_total_capacity = 0;
    long long char_bits_limit = 62;
    if (char_n > 1) {
        char_total_capacity = (char_bits_limit - char_t0) * (char_n / 2) + char_t0 * ((char_n - 1) / 2);
    }
    
    if (char_total_capacity < char_ops_needed) {
        cout << -1 << endl;
        return;
    }

    long long char_sum = char_x;
    for (int char_k = 0; char_k < char_bits_limit; ++char_k) {
        if (char_ops_needed == 0) {
            break;
        }
        long long char_c_prime = (char_x >> char_k) & 1;
        long long char_cap = (char_n - char_c_prime) / 2;
        long long char_use = min(char_ops_needed, char_cap);
        char_sum += char_use * 2LL * (1LL << char_k);
        char_ops_needed -= char_use;
    }

    cout << char_sum << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int char_t;
    cin >> char_t;
    while (char_t--) {
        solve();
    }
    return 0;
}
// Solved By Mahfuz Uddin
// Sat Jul 26 10:51:18 2025