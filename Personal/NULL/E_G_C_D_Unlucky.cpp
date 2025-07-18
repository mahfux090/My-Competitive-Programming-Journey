#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve() {
    int n;
    cin >> n;

    vector<long long> p(n), s(n);
    for (int i = 0; i < n; ++i) cin >> p[i];
    for (int i = 0; i < n; ++i) cin >> s[i];

    bool possible = true;

    if (n == 1) {
        if (p[0] != s[0]) {
            possible = false;
        }
    } else {
        
        for (int i = 1; i < n; ++i) {
            if (p[i-1] % p[i] != 0) {
                possible = false;
                break;
            }
        }
        if (!possible) {
            cout << "NO\n";
            return;
        }

        for (int i = 0; i < n - 1; ++i) {
            if (s[i+1] % s[i] != 0) {
                possible = false;
                break;
            }
        }
        if (!possible) {
            cout << "NO\n";
            return;
        }

        if (gcd(p[0], s[1]) != s[0]) {
            possible = false;
        }
        if (possible && gcd(p[n-2], s[n-1]) != p[n-1]) {
            possible = false;
        }
        if (possible) {
            for (int i = 1; i < n - 1; ++i) {
                long long g1 = gcd(p[i-1], s[i]);
                if (p[i] % g1 != 0) {
                    possible = false;
                    break;
                }

                long long g2 = gcd(p[i], s[i+1]);
                if (s[i] % g2 != 0) {
                    possible = false;
                    break;
                }
            }
        }
    }

    if (possible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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