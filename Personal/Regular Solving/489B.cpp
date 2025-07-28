// Author: Mahfuz Uddin
// Date: 2025-07-28 10:44
// Language: C++
//start From Here.....
// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    short n;
    cin >> n;
    vector<short> a(n);
    for (short i = 0; i < n; ++i) {
        cin >> a[i];
    }

    short m;
    cin >> m;
    vector<short> b(m);
    for (short i = 0; i < m; ++i) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    short c = 0;
    short i = 0, j = 0;
    while (i < n && j < m) {
        if (abs(a[i] - b[j]) <= 1) {
            c++;
            i++;
            j++;
        } else if (a[i] < b[j]) {
            i++;
        } else {
            j++;
        }
    }

    cout << c << '\n';

    return 0;
}
// Solved By Mahfuz Uddin
