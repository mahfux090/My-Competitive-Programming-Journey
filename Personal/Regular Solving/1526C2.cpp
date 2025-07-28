// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    priority_queue<long long, vector<long long>, greater<long long>> pq;
    long long health = 0;

    for (int i = 0; i < n; ++i) {
        long long a;
        cin >> a;

        health += a;
        pq.push(a);

        while (health < 0) {
            health -= pq.top();
            pq.pop();
        }
    }

    cout << pq.size() << '\n';

    return 0;
}
// Solved By Mahfuz Uddin
