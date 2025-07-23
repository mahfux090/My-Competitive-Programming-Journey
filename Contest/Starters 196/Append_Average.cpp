// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    for (int i = 0; i < n; i++) {
        long long v;
        cin >> v;
        pq.push(v);
    }

    long long ops = 0;
    while (ops < k) {
        long long a = pq.top();
        pq.pop();
        long long b = pq.top();
        pq.push(a);

        long long c = (a + b + 1) / 2;
        if (c >= b) {
            break;
        }
        
        pq.push(c);
        ops++;
    }

    long long rem = k - ops;
    long long sum = 0;

    if (rem > 0) {
        long long a = pq.top();
        pq.pop();
        long long b = pq.top();
        pq.push(a);
        long long c = (a + b + 1) / 2;
        sum += rem * c;
    }

    while (!pq.empty()) {
        sum += pq.top();
        pq.pop();
    }
    cout << sum << "\n";
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
// Wed Jul 23 20:37:33 2025