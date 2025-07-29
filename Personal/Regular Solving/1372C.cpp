#include<bits/stdc++.h>

using namespace std;

void slv() {
    int n;
    cin >> n;
    vector<int> a(n);
    int l = -1, r = -1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] != i + 1) {
            if (l == -1) {
                l = i;
            }
            r = i;
        }
    }

    if (l == -1) {
        cout << 0 << "\n";
        return;
    }

    bool f = false;
    for (int i = l; i <= r; i++) {
        if (a[i] == i + 1) {
            f = true;
            break;
        }
    }

    if (f) {
        cout << 2 << "\n";
    } else {
        cout << 1 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        slv();
    }
    return 0;
}
// Solved By Mahfuz Uddin