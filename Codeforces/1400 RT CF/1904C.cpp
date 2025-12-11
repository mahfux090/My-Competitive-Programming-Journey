#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void solve() {
    int n;
    long long k;
    if (!(cin >> n >> k)) return;
    
    vector<long long> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    if (k >= 3) {
        cout << 0 << "\n";
        return;
    }

    sort(a.begin(), a.end());
    
    long long ans = a[0];
    for(int i = 0; i < n - 1; ++i) {
        ans = min(ans, a[i+1] - a[i]);
    }

    if (k == 1) {
        cout << ans << "\n";
        return;
    }

    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            long long v = a[j] - a[i];
            
            auto it = lower_bound(a.begin(), a.end(), v);
            
            if (it != a.end()) {
                ans = min(ans, *it - v);
            }
            
            if (it != a.begin()) {
                ans = min(ans, v - *prev(it));
            }
        }
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while(t--) {
            solve();
        }
    }
    return 0;
}