#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int ans = min({n * a, (n / m) * b + (n % m) * a, ((n + m - 1) / m) * b});
    cout << ans << "\n";
}
