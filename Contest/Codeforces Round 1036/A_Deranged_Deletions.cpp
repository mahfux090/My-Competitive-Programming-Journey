#include<bits/stdc++.h>
using namespace std;

bool is_derangement(vector<int>& subarray) {
    int m = subarray.size();
    vector<int> sorted_subarray = subarray;
    sort(sorted_subarray.begin(), sorted_subarray.end());
    for (int i = 0; i < m; i++) {
        if (subarray[i] == sorted_subarray[i]) {
            return false;
        }
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int l = 0; l < n; l++) {
        vector<int> subarray;
        for (int r = l; r < n; r++) {
            subarray.push_back(a[r]);
            if (is_derangement(subarray)) {
                cout << "YES\n";
                cout << subarray.size() << "\n";
                for (int x : subarray) {
                    cout << x << " ";
                }
                cout << "\n";
                return;
            }
        }
    }
    cout << "NO\n";
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