// Author: Mahfuz Uddin
// Problem: C. Need More Arrays
// URL: https://codeforces.com/problemset/problem/2114/C
// Date: 2025-07-26 10:36
// Language: C++
// Start From Here......
// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

const int MAX_A = 1000001;
int c[4 * MAX_A];
vector<int> d;

void update(int node, int start, int end, int idx, int val) {
    if (start == end) {
        c[node] = val;
        return;
    }
    int mid = start + (end - start) / 2;
    if (start <= idx && idx <= mid) {
        update(2 * node, start, mid, idx, val);
    } else {
        update(2 * node + 1, mid + 1, end, idx, val);
    }
    c[node] = max(c[2 * node], c[2 * node + 1]);
}

int query(int node, int start, int end, int l, int r) {
    if (r < start || end < l || l > r) {
        return 0;
    }
    if (l <= start && end <= r) {
        return c[node];
    }
    int mid = start + (end - start) / 2;
    int p1 = query(2 * node, start, mid, l, r);
    int p2 = query(2 * node + 1, mid + 1, end, l, r);
    return max(p1, p2);
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int b = 0;
    for (int v : a) {
        int p = 0;
        if (v - 2 >= 1) {
            p = query(1, 1, MAX_A, 1, v - 2);
        }

        int q = 0;
        if (v - 1 >= 1) {
             q = query(1, 1, MAX_A, v - 1, MAX_A);
        } else {
             q = query(1, 1, MAX_A, 1, MAX_A);
        }
        
        int e = max({1, q, p + 1});
        
        if (e > query(1, 1, MAX_A, v, v)) {
            update(1, 1, MAX_A, v, e);
            d.push_back(v);
        }
        
        b = max(b, e);
    }

    cout << b << endl;

    for (int f : d) {
        update(1, 1, MAX_A, f, 0);
    }
    d.clear();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
// Solved By Mahfuz Uddin
// Sat Jul 26 2025 10:39:26