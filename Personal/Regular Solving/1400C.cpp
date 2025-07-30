#include<bits/stdc++.h>

using namespace std;

void slv() {
    string s;
    cin >> s;
    int x;
    cin >> x;
    int n = s.length();
    string w(n, '1');

    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            if (i - x >= 0) {
                w[i - x] = '0';
            }
            if (i + x < n) {
                w[i + x] = '0';
            }
        }
    }

    bool ok = true;
    for (int i = 0; i < n; i++) {
        bool c1 = false;
        if (i - x >= 0 && w[i - x] == '1') {
            c1 = true;
        }
        bool c2 = false;
        if (i + x < n && w[i + x] == '1') {
            c2 = true;
        }
        if (s[i] == '1' && !c1 && !c2) {
            ok = false;
            break;
        }
        if (s[i] == '0' && (c1 || c2)) {
            ok = false;
            break;
        }
    }

    if (ok) {
        cout << w << endl;
    } else {
        cout << -1 << endl;
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
    // Solved By Mahfuz Uddin
}