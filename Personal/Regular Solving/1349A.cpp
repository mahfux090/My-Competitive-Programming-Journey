// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

long long lcm(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    return (a / gcd(a, b)) * b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<long long> suf_gcd(n + 1, 0);
    for (int i = n - 1; i >= 0; --i) {
        suf_gcd[i] = gcd(a[i], suf_gcd[i + 1]);
    }

    long long ans = lcm(a[0], suf_gcd[1]);
    for (int i = 1; i < n - 1; ++i) {
        ans = gcd(ans, lcm(a[i], suf_gcd[i + 1]));
    }
    
    cout << ans << '\n';

    return 0;
}
// Solved By Mahfuz Uddin