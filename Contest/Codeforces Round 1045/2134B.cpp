#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    ll p = 0;
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    for (int prime_val : primes) {
        if (k % prime_val != 0) {
            p = prime_val;
            break;
        }
    }

    for (int i = 0; i < n; ++i) {
        ll rem = a[i] % p;
        if (rem != 0) {
            ll needed = p - rem;
            for (ll c = 1; c < p; ++c) {
                if ((c * k) % p == needed) {
                    a[i] += c * k;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}