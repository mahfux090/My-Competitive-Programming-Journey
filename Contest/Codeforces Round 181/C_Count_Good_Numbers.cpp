// Bismillah hir Rahmanir Rahim
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll f(ll n) {
    if (n <= 0) {
        return 0;
    }
    ll p[] = {2, 3, 5, 7};
    ll res = n;

    for (int m = 1; m < 16; ++m) {
        __int128 prod = 1;
        int cnt = 0;

        for (int i = 0; i < 4; ++i) {
            if ((m >> i) & 1) {
                prod *= p[i];
                cnt++;
            }
        }
        
        ll d = n / (ll)prod;

        if (cnt % 2 == 1) {
            res -= d;
        } else {
            res += d;
        }
    }
    return res;
}

void solve() {
    ll l, r;
    cin >> l >> r;
    cout << f(r) - f(l - 1) << "\n";
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
// Solved By Mahfuz Uddin
// Tue Jul 22 21:24:08 2025