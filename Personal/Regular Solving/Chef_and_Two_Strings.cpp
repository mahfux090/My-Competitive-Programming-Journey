// Author: Mahfuz Uddin
// Problem: Chef and Two Strings
// URL: https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CHEFSTLT
// Date: 2025-07-26 11:21
// Language: C++
// Start From Here......
// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>

using namespace std;

void solve() {
    string char_S1, char_S2;
    cin >> char_S1 >> char_S2;

    int char_min_diff = 0;
    int char_max_diff = 0;

    for (int i = 0; i < char_S1.length(); ++i) {
        if (char_S1[i] == '?' || char_S2[i] == '?') {
            char_max_diff++;
        } else {
            if (char_S1[i] != char_S2[i]) {
                char_min_diff++;
                char_max_diff++;
            }
        }
    }

    cout << char_min_diff << " " << char_max_diff << endl;
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
// Sat Jul 26 11:25:21 2025