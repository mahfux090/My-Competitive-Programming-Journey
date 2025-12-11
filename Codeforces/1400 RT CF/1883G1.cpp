#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, m;
    if (!(cin >> n >> m)) return;

    vector<int> a;
    a.reserve(n);
    a.push_back(1);

    for (int i = 0; i < n - 1; ++i) {
        int val;
        cin >> val;
        a.push_back(val);
    }

    vector<int> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int matches = 0;
    int a_ptr = 0;
    int b_ptr = 0;

    while (a_ptr < n && b_ptr < n) {
        if (a[a_ptr] < b[b_ptr]) {
            matches++;
            a_ptr++;
            b_ptr++;
        } else {
            b_ptr++;
        }
    }

    cout << n - matches << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}