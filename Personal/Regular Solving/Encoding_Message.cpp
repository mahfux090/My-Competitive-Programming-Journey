// Author: Mahfuz Uddin
// Problem: Encoding Message
// URL: https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ENCMSG
// Date: 2025-07-26 11:18
// Language: C++
// Start From Here......
// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>

using namespace std;

void solve() {
    int char_N;
    cin >> char_N;
    string char_S;
    cin >> char_S;

    for (int i = 0; i < char_N - 1; i += 2) {
        swap(char_S[i], char_S[i + 1]);
    }

    for (int i = 0; i < char_N; ++i) {
        char_S[i] = 'z' - (char_S[i] - 'a');
    }

    cout << char_S << endl;
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
// Sat Jul 26 11:16:34 2025