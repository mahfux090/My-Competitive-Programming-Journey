#include<bits/stdc++.h>

using namespace std;

void slv() {
    int n;
    cin>>n;
    vector<int> a(n);
    int s = 0;
    for (int i=0; i<n; ++i) {
        cin>>a[i];
        s^= a[i];
    }

    if (s == 0) {
        cout << "YES\n";
        return;
    }

    int c = 0;
    int cur = 0;
    for (int i=0; i<n; i++) {
        cur^=a[i];
        if (cur == s) {
            c++;
            cur=0;
        }
    }

    if (cur == 0 && c >= 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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