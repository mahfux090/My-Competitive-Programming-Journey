// Author: Mahfuz Uddin
// Problem: Card Removal
// URL: https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/REMOVECARDS
// Date: 2025-07-26 11:22
// Language: C++
// Start From Here......
// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>

using namespace std;

void solve() {
    int char_N;
    cin >> char_N;
    vector<int> char_freq(11, 0);
    for (int i = 0; i < char_N; ++i) {
        int char_A;
        cin >> char_A;
        char_freq[char_A]++;
    }

    int char_max_freq = 0;
    for (int i = 1; i <= 10; ++i) {
        if (char_freq[i] > char_max_freq) {
            char_max_freq = char_freq[i];
        }
    }

    cout << char_N - char_max_freq << endl;
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
// Sat Jul 26 11:27:01 2025