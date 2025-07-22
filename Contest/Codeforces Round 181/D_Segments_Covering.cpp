// Bismillah hir Rahmanir Rahim
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const ll MOD = 998244353;

ll power(ll base, ll exp) {
    ll res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

ll inv(ll n) {
    return power(n, MOD - 2);
}

void solve() {
    ll n, m;
    cin >> n >> m;

    vector<vector<pair<ll, ll>>> by_r(m + 1);
    ll B = 1;

    for (int i = 0; i < n; i++) {
        ll l, r, p, q;
        cin >> l >> r >> p >> q;

        ll inv_q = inv(q);
        ll q_p = (q - p + MOD) % MOD;

        B = (((B * q_p) % MOD) * inv_q) % MOD;

        ll inv_qp = inv(q_p);
        ll w = (p * inv_qp) % MOD;

        by_r[r].push_back({l, w});
    }

    vector<ll> dp(m + 1, 0);
    dp[0] = 1;

    for (int x = 1; x <= m; x++) {
        ll cur = 0;
        for (auto const& [L, W] : by_r[x]) {
            cur = (cur + (dp[L - 1] * W) % MOD) % MOD;
        }
        dp[x] = cur;
    }

    ll ans = (dp[m] * B) % MOD;
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
// Solved By Mahfuz Uddin
// Tue Jul 22 21:45:55 2025