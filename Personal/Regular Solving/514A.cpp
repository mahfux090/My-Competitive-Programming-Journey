// Author: Mahfuz Uddin
// Date: 2025-07-27 11:23
// Language: C++
//start From Here.....
// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    for (short i = 0; i < s.length(); ++i) {
        char c = '9' - s[i] + '0';
        if (c < s[i]) {
            if (i == 0 && c == '0') {
                continue;
            }
            s[i] = c;
        }
    }
    cout << s << "\n";
    return 0;
}
// Solved By Mahfuz Uddin