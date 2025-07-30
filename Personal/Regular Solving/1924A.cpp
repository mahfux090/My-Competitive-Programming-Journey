#include<bits/stdc++.h>

using namespace std;

void s() {
    int n, k, m;
    cin >> n >> k >> m;
    string str;
    cin >> str;

    int levels_found = 0;
    set<char> current_set;

    for (char ch : str) {
        if (ch - 'a' < k) {
            current_set.insert(ch);
            if (current_set.size() == k) {
                levels_found++;
                current_set.clear();
            }
        }
    }

    if (levels_found >= n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
        char missing_char = 'a';
        while (current_set.count(missing_char)) {
            missing_char++;
        }
        for (int i = 0; i < n; i++) {
            cout << missing_char;
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        s();
    }
}
// Solved By Mahfuz Uddin