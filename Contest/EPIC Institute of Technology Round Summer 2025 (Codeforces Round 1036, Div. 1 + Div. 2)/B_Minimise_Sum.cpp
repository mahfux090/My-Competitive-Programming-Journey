#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        // Compute sum of prefix mins without any operation
        ll min_val = a[0];
        ll original_sum = a[0];
        for (int i = 1; i < n; ++i) {
            min_val = min(min_val, a[i]);
            original_sum += min_val;
        }

        ll ans = original_sum;

        // Try performing the operation: a[i] += a[j], a[j] = 0, for j > i
        for (int j = 1; j < n; ++j) {
            vector<ll> b = a;
            b[0] += b[j];  // perform operation at i = 0, j = j
            b[j] = 0;

            ll cur_min = b[0];
            ll sum = b[0];
            for (int i = 1; i < n; ++i) {
                cur_min = min(cur_min, b[i]);
                sum += cur_min;
            }

            ans = min(ans, sum);
        }

        cout << ans << '\n';
    }

    return 0;
}
