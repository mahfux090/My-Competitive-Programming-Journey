// Author: Mahfuz Uddin
// Problem: A. Cheap Travel
// URL: https://codeforces.com/problemset/problem/466/A
// Date: 2025-07-27 10:55
// Language: C++
// Start From Here......
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int full = n / m;
    int rem = n % m;

    int cost1 = n * a;
    int cost2 = full * b + rem * a;
    int cost3 = (full + 1) * b;

    cout << min({cost1, cost2, cost3}) << '\n';
    return 0;
}
