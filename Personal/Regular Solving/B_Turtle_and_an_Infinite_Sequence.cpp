// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
long long or_sum(long long l, long long r) {
    if (l == r) {
        return l;
    }
    int msb_l_pos = (l == 0) ? -1 : 63 - __builtin_clzll(l);
    int msb_r_pos = (r == 0) ? -1 : 63 - __builtin_clzll(r);
    if (msb_l_pos != msb_r_pos) {
        return (1LL << (msb_r_pos + 1)) - 1;
    }
    long long msb_val = 1LL << msb_l_pos;
    return msb_val | or_sum(l ^ msb_val, r ^ msb_val);
}
void solve() {
    long long n, m;
    cin >> n >> m;
    long long l = max(0LL, n - m);
    long long r = n + m;
    cout << or_sum(l, r) << "\n";
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
// Solved By Mahfuz Uddin - 21/07/2025, 13:58:46