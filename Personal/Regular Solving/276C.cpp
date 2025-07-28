// Author: Mahfuz Uddin
// Date: 2025-07-28 10:53
// Language: C++
//start From Here.....
// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int q;
    cin >> n >> q;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<long long> freq(n + 1, 0);
    for (int i = 0; i < q; ++i) {
        int l, r;
        cin >> l >> r;
        freq[l - 1]++;
        freq[r]--;
    }

    for (int i = 1; i < n; ++i) {
        freq[i] += freq[i - 1];
    }
    
    // We don't need the last element of freq array
    freq.pop_back();

    sort(a.begin(), a.end());
    sort(freq.begin(), freq.end());

    long long total_sum = 0;
    for (int i = 0; i < n; ++i) {
        total_sum += a[i] * freq[i];
    }

    cout << total_sum << '\n';

    return 0;
}
// Solved By Mahfuz Uddin
