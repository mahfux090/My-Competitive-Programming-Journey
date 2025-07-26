// Author: Mahfuz Uddin
// Problem: Bear and Candies 123
// URL: https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CANDY123
// Date: 2025-07-26 11:18
// Language: C++
// Start From Here......
// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>

using namespace std;

void solve() {
    int char_A, char_B;
    cin >> char_A >> char_B;

    int char_limak_total = 0;
    int char_bob_total = 0;
    int char_turn = 1;

    while (true) {
        if (char_limak_total + char_turn > char_A) {
            cout << "Bob" << endl;
            break;
        }
        char_limak_total += char_turn;
        char_turn++;

        if (char_bob_total + char_turn > char_B) {
            cout << "Limak" << endl;
            break;
        }
        char_bob_total += char_turn;
        char_turn++;
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
// Sat Jul 26 11:18:45 2025