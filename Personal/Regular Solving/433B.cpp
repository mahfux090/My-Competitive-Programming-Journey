// Author: Mahfuz Uddin
// Date: 2025-07-28 10:46
// Language: C++
//start From Here.....
// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    vector<long long> u = v;
    sort(u.begin(), u.end());

    vector<long long> prefix_v(n + 1, 0);
    vector<long long> prefix_u(n + 1, 0);

    for (int i = 0; i < n; ++i) {
        prefix_v[i + 1] = prefix_v[i] + v[i];
        prefix_u[i + 1] = prefix_u[i] + u[i];
    }

    int m;
    cin >> m;
    while (m--) {
        short type;
        int l, r;
        cin >> type >> l >> r;
        if (type == 1) {
            cout << prefix_v[r] - prefix_v[l - 1] << '\n';
        } else {
            cout << prefix_u[r] - prefix_u[l - 1] << '\n';
        }
    }

    return 0;
}
// Solved By Mahfuz Uddin
