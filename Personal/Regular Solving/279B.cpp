// Author: Mahfuz Uddin
// Date: 2025-07-28 10:47
// Language: C++
//start From Here.....
// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long t;
    cin >> n >> t;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int l = 0;
    long long current_sum = 0;
    int max_books = 0;

    for (int r = 0; r < n; ++r) {
        current_sum += a[r];
        while (current_sum > t) {
            current_sum -= a[l];
            l++;
        }
        max_books = max(max_books, r - l + 1);
    }

    cout << max_books << '\n';

    return 0;
}
// Solved By Mahfuz Uddin
