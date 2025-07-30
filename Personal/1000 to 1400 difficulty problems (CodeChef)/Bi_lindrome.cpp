#include<bits/stdc++.h>

using namespace std;

void slv() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int c[26] = {0};
    for (char ch : s) {
        c[ch - 'a']++;
    }

    bool rpt = false;
    for (int i=0; i<26; i++) {
        if (c[i] > 1) {
            rpt = true;
            break;
        }
    }

    if (rpt) {
        cout << n - 2 << "\n";
    } else {
        cout << -1 << "\n";
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