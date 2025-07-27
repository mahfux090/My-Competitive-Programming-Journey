// Author: Mahfuz Uddin
// Date: 2025-07-27 21:07
// Language: C++
//start From Here.....
// Bismillah hir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;

bool check(const deque<int>& d, int val) {
    if (d.size() < 4) return true;
    int v0 = d[0], v1 = d[1], v2 = d[2], v3 = d[3];
    if (v0 < v1 && v1 < v2 && v2 < v3 && v3 < val) return false;
    if (v0 > v1 && v1 > v2 && v2 > v3 && v3 > val) return false;
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a; 
    cin >> a;
    while (a--) {
        int b;
        cin >> b;
        vector<int> c(b);
        for (int i = 0; i < b; i++) cin >> c[i];

        int d = 0, e = b - 1;
        deque<int> f;
        string g;
        g.reserve(b);

        for (int k = 0; k < b; k++) {
            bool h = check(f, c[d]);
            bool i = check(f, c[e]);
            char j = '?';

            if (h && !i) {
                j = 'L';
            } else if (i && !h) {
                j = 'R';
            } else if (h && i) {
                deque<int> k = f;
                if (k.size() == 4) k.pop_front();
                k.push_back(c[d]);
                bool m = false;
                if (d + 1 <= e) {
                    if (check(k, c[d + 1]) || check(k, c[e]))
                        m = true;
                } else {
                    m = true;
                }

                deque<int> l = f;
                if (l.size() == 4) l.pop_front();
                l.push_back(c[e]);
                bool n = false;
                if (d <= e - 1) {
                    if (check(l, c[d]) || check(l, c[e - 1]))
                        n = true;
                } else {
                    n = true;
                }

                if (m && !n)      j = 'L';
                else if (n && !m) j = 'R';
                else              j = 'L';
            } else {
                j = 'L';
            }

            if (j == 'L') {
                if (f.size() == 4) f.pop_front();
                f.push_back(c[d]);
                g.push_back('L');
                d++;
            } else {
                if (f.size() == 4) f.pop_front();
                f.push_back(c[e]);
                g.push_back('R');
                e--;
            }
        }

        cout << g << "\n";
    }
    return 0;
}
// Solved By Mahfuz Uddin