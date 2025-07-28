// Author: Mahfuz Uddin
// Date: 2025-07-28 10:50
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

    bool case1 = false;
    size_t p1 = s.find("AB");
    if (p1 != string::npos) {
        if (s.find("BA", p1 + 2) != string::npos) {
            case1 = true;
        }
    }

    bool case2 = false;
    size_t p2 = s.find("BA");
    if (p2 != string::npos) {
        if (s.find("AB", p2 + 2) != string::npos) {
            case2 = true;
        }
    }

    if (case1 || case2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
// Solved By Mahfuz Uddin
