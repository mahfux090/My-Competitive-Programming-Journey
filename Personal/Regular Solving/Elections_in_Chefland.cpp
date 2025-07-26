// Author: Mahfuz Uddin
// Problem: Elections in Chefland
// URL: https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ELECTIONS
// Date: 2025-07-26 11:21
// Language: C++
// Start From Here......
// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>

using namespace std;

void solve() {
    int char_XA, char_XB, char_XC;
    cin >> char_XA >> char_XB >> char_XC;

    if (char_XA > 50) {
        cout << "A" << endl;
    } else if (char_XB > 50) {
        cout << "B" << endl;
    } else if (char_XC > 50) {
        cout << "C" << endl;
    } else {
        cout << "NOTA" << endl;
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
// Sat Jul 26 11:22:25 2025