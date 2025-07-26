// Author: Mahfuz Uddin
// Problem: Break the Stick
// URL: https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/BREAKSTICK
// Date: 2025-07-26 11:16
// Language: C++
// Start From Here......
// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>

using namespace std;

void solve() {
    int char_N, char_X;
    cin >> char_N >> char_X;

    if (char_X % 2 != 0) {
        cout << "YES" << endl;
    } else {
        if (char_N % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int char_T;
    cin >> char_T;
    while (char_T--) {
        solve();
    }
    return 0;
}
// Solved By Mahfuz Uddin
// Sat Jul 26 11:32:04 2025