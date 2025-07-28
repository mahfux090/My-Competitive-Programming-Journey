// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

long long req_b = 0, req_s = 0, req_c = 0;
long long nb, ns, nc;
long long pb, ps, pc;
long long r;

bool can_make(long long x) {
    long long cost_b = max(0LL, x * req_b - nb) * pb;
    long long cost_s = max(0LL, x * req_s - ns) * ps;
    long long cost_c = max(0LL, x * req_c - nc) * pc;
    return (cost_b + cost_s + cost_c) <= r;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string recipe;
    cin >> recipe;

    for (char ch : recipe) {
        if (ch == 'B') req_b++;
        else if (ch == 'S') req_s++;
        else req_c++;
    }

    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;

    long long low = 0, high = 2e14, ans = 0;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (can_make(mid)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << ans << '\n';

    return 0;
}
// Solved By Mahfuz Uddin
