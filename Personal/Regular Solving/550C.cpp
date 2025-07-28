// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int n = s.length();

    // 1-digit check
    for (int i = 0; i < n; ++i) {
        if ((s[i] - '0') % 8 == 0) {
            cout << "YES\n" << s[i] << "\n";
            return 0;
        }
    }

    // 2-digit check
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int num = (s[i] - '0') * 10 + (s[j] - '0');
            if (num % 8 == 0) {
                cout << "YES\n" << num << "\n";
                return 0;
            }
        }
    }

    // 3-digit check
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                int num = (s[i] - '0') * 100 + (s[j] - '0') * 10 + (s[k] - '0');
                if (num % 8 == 0) {
                    cout << "YES\n" << num << "\n";
                    return 0;
                }
            }
        }
    }

    cout << "NO\n";

    return 0;
}
// Solved By Mahfuz Uddin