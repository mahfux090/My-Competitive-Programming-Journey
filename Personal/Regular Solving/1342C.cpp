// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

long long solve(long long n, long long lcm, const vector<long long>& p) {
    if (n == 0) {
        return 0;
    }
    long long total_in_cycle = p[lcm];
    long long num_cycles = n / lcm;
    long long remaining = n % lcm;
    long long count = num_cycles * total_in_cycle;
    count += p[remaining];
    return count;
}

void test_case() {
    long long a, b, q;
    cin >> a >> b >> q;
    
    long long common = std::gcd(a, b);
    long long lcm = (a / common) * b;

    vector<long long> p(lcm + 1, 0);
    for (int i = 1; i <= lcm; ++i) {
        p[i] = p[i - 1];
        if (((i % a) % b) != ((i % b) % a)) {
            p[i]++;
        }
    }

    for (int i = 0; i < q; ++i) {
        long long l, r;
        cin >> l >> r;
        long long ans = solve(r, lcm, p) - solve(l - 1, lcm, p);
        cout << ans << (i == q - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    short t;
    cin >> t;
    while (t--) {
        test_case();
    }

    return 0;
}
// Solved By Mahfuz Uddin
