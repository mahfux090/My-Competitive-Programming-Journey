// Author: Mahfuz Uddin
// Date: 2025-07-28 10:49
// Language: C++
//start From Here.....
// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    const int MAX_N = 100001;
    vector<long long> counts(MAX_N, 0);
    int max_val = 0;

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        counts[a]++;
        if (a > max_val) {
            max_val = a;
        }
    }

    vector<long long> dp(max_val + 2, 0);

    dp[0] = 0;
    if (max_val >= 1) {
        dp[1] = counts[1];
    }

    for (int i = 2; i <= max_val; ++i) {
        dp[i] = max(dp[i - 1], dp[i - 2] + counts[i] * (long long)i);
    }

    cout << dp[max_val] << '\n';

    return 0;
}
// Solved By Mahfuz Uddin
