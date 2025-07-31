#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    long long s;
    cin >> n >> s;
    int z = 0, o = 0, w = 0;
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        if (x == 0) {
            z++;
        } else if (x==1) {
            o++;
        } else {
            w++;
        }
    }

    long long sm = (long long)o + 2LL * w;

    if (s < sm) {
        for (int i = 0; i < z; i++) cout << "0 ";
        for (int i = 0; i < o; i++) cout << "1 ";
        for (int i=0; i<w; i++) cout << "2 ";
        cout << "\n";
    } else if (s == sm) {
        cout << -1 << "\n";
    } else {
        if (s == sm+1) {
            for (int i=0; i<z; i++) cout << "0 ";
            for (int i=0; i<w; i++) cout << "2 ";
            for (int i=0; i<o; i++) cout << "1 ";
            cout << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
// Solved By Mahfuz Uddin