#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(int k, int n, const vector<pair<int, int>>& segments) {
    long long min_pos = 0;
    long long max_pos = 0;

    for (int i = 0; i < n; ++i) {
        min_pos -= k;
        max_pos += k;

        min_pos = max(min_pos, (long long)segments[i].first);
        max_pos = min(max_pos, (long long)segments[i].second);

        if (min_pos > max_pos) {
            return false;
        }
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> segments(n);
    for (int i = 0; i < n; ++i) {
        cin >> segments[i].first >> segments[i].second;
    }

    int low = 0, high = 1000000000;
    int ans = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (check(mid, n, segments)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}