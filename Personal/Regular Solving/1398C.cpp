// Author: Mahfuz Uddin
// Date: 2025-07-28 10:56
// Language: C++
//start From Here.....
// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<long long, int> counts;
    counts[0] = 1;
    long long ans = 0;
    long long current_sum = 0;

    for (int i = 0; i < n; ++i) {
        int digit = s[i] - '0';
        current_sum += (digit - 1);
        
        if (counts.count(current_sum)) {
            ans += counts[current_sum];
        }
        
        counts[current_sum]++;
    }

    cout << ans << "\n";
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
