// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
const int MOD = 998244353;
void solve() {
    int n;
    cin >> n;
    vector<int> p(n), q(n);
    vector<int> pos_p(n), pos_q(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        pos_p[p[i]] = i;
    }
    for (int i = 0; i < n; ++i) {
        cin >> q[i];
        pos_q[q[i]] = i;
    }
    vector<long long> pow2(n + 1);
    pow2[0] = 1;
    for (int i = 1; i <= n; ++i) {
        pow2[i] = (pow2[i - 1] * 2) % MOD;
    }
    vector<int> max_p_prefix(n), max_q_prefix(n);
    max_p_prefix[0] = p[0];
    max_q_prefix[0] = q[0];
    for (int i = 1; i < n; ++i) {
        max_p_prefix[i] = max(max_p_prefix[i - 1], p[i]);
        max_q_prefix[i] = max(max_q_prefix[i - 1], q[i]);
    }
    vector<int> V_max(n);
    for (int i = 0; i < n; ++i) {
        V_max[i] = max(max_p_prefix[i], max_q_prefix[i]);
    }
    for (int i = 0; i < n; ++i) {
        int V = V_max[i];
        int m = -1;
        if (pos_p[V] <= i) {
            m = max(m, q[i - pos_p[V]]);
        }
        if (pos_q[V] <= i) {
            m = max(m, p[i - pos_q[V]]);
        }
        long long r_i = (pow2[V] + pow2[m]) % MOD;
        cout << r_i << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
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
// Solved By Mahfuz Uddin - 21/07/2025, 13:23:13