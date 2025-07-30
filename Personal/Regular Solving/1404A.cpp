#include<bits/stdc++.h>

using namespace std;

void slv() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<char> p(k, '?');
    bool psb = true;

    for (int i = 0; i < n; i++) {
        if (s[i] != '?') {
            int rem = i % k;
            if (p[rem] != '?' && p[rem] != s[i]) {
                psb = false;
                break;
            }
            p[rem] = s[i];
        }
    }

    if (!psb) {
        cout << "NO\n";
        return;
    }

    int z = 0, o = 0;
    for (int i = 0; i < k; i++) {
        if (p[i] == '0') z++;
        if (p[i] == '1') o++;
    }

    if (z > k / 2 || o > k / 2) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        slv();
    }
    // Solved By Mahfuz Uddin
}