// Author: Mahfuz Uddin
// Date: 2025-07-27 21:45
// Language: C++
//start From Here.....
// Bismillah hir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;

struct Ret {
    bool success;
    int left, right;
};

Ret check(int val, const vector<int>& arr, int min_len) {
    int sz = arr.size();
    vector<int> pref(sz + 1, 0);
    for (int i = 1; i <= sz; ++i)
        pref[i] = pref[i - 1] + (arr[i - 1] >= val ? 1 : -1);

    const long long INF = 4e18;
    long long min_pref[2] = {INF, INF};
    int min_idx[2] = {-1, -1};

    for (int j = 1; j <= sz; ++j) {
        int i = j - min_len;
        if (i >= 0) {
            int parity = i & 1;
            if (pref[i] < min_pref[parity]) {
                min_pref[parity] = pref[i];
                min_idx[parity] = i;
            }
        }

        int j_parity = j & 1;
        if (min_idx[j_parity] != -1 && pref[j] - min_pref[j_parity] >= 0) {
            return {true, min_idx[j_parity] + 1, j};
        }

        int other_parity = j_parity ^ 1;
        if (min_idx[other_parity] != -1 && pref[j] - min_pref[other_parity] >= 1) {
            return {true, min_idx[other_parity] + 1, j};
        }
    }
    return {false, -1, -1};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> p(n);
        for (int &elem : p) cin >> elem;

        int final_v = 1, final_l = 1, final_r = k;
        int low = 1, high = n;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            Ret res = check(mid, p, k);
            if (res.success) {
                final_v = mid;
                final_l = res.left;
                final_r = res.right;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        cout << final_v << ' ' << final_l << ' ' << final_r << '\n';
    }
    return 0;
}
// Solved By Mahfuz Uddin