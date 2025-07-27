// Author: Mahfuz Uddin
// Date: 2025-07-27 21:25
// Language: C++
//start From Here.....
// Bismillah hir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    short t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n + 2), res(n + 2);
        for (int i = 1; i <= n; i++) {
            cin >> p[i];
        }

        stack<int> s;
        for (int i = 1; i <= n; i++) {
            while (!s.empty() && p[s.top()] < p[i]) {
                res[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
        while (!s.empty()) {
            res[s.top()] = n + 1;
            s.pop();
        }

        long long ans = 0;
        for (int i = 1; i <= n; i++) {
            ans += (long long)i * (res[i] - i);
        }
        cout << ans << "\n";
    }

    return 0;
}
// Solved By Mahfuz Uddin