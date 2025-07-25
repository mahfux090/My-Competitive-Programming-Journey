// Author: Mahfuz Uddin
// Problem: C. Equal Values
// URL: https://codeforces.com/problemset/problem/2111/C
// Date: 2025-07-25 12:28
// Language: C++
// Start From Here......
// Bismillah hir Rahmanir Rahim
// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    map<long long, vector<int>> positions;
    for (int char_i = 0; char_i < n; ++char_i) {
        long long val;
        cin >> val;
        positions[val].push_back(char_i + 1);
    }

    if (positions.size() == 1) {
        cout << 0 << endl;
        return;
    }

    long long min_cost = -1;

    for (auto const& [val, pos_vec] : positions) {
        if (pos_vec.empty()) continue;

        long long current_val = val;
        
        for (size_t i = 0; i < pos_vec.size(); ) {
            int block_start = pos_vec[i];
            
            size_t j = i;
            while (j + 1 < pos_vec.size() && pos_vec[j + 1] == pos_vec[j] + 1) {
                j++;
            }
            int block_end = pos_vec[j];
            
            long long current_block_cost = (long long)(block_start - 1) * current_val + (long long)(n - block_end) * current_val;

            if (min_cost == -1 || current_block_cost < min_cost) {
                min_cost = current_block_cost;
            }
            
            i = j + 1;
        }
    }

    cout << min_cost << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
// Solved By Mahfuz Uddin
// Fri Jul 25 20:31:10 2025