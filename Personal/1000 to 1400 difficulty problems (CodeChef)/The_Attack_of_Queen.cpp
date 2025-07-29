#include<bits/stdc++.h>

using namespace std;

void slv() {
    long long n, x, y;
    cin >> n >> x >> y;

    long long ans = 0;
    ans += (n - 1);
    ans += (n - 1);
    ans += min(x - 1, y - 1);
    ans += min(x - 1, n - y);
    ans += min(n - x, y - 1);
    ans += min(n - x, n - y);

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        slv();
    }
// Solved By Mahfuz Uddin
}