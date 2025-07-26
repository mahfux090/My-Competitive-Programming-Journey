// Author: Mahfuz Uddin
// Problem: Even-tual Reduction
// URL: https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/EVENTUAL
// Date: 2025-07-26 11:23
// Language: C++
// Start From Here......
// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

void solve() {
    short b;
    cin >> b;
    string c;
    cin >> c;

    short d[26] = {0};
    for(char e : c) {
        d[e - 'a']++;
    }

    bool f = true;
    for(short i = 0; i < 26; i++) {
        if(d[i] % 2 != 0) {
            f = false;
            break;
        }
    }

    if (f) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char a;
    cin >> a;
    while(a--) {
        solve();
    }

    return 0;
}
// Solved By Mahfuz Uddin
// Sat, 26 Jul 2025 11:23:44 +0600