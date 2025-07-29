#include<bits/stdc++.h>

using namespace std;

vector<int> p;
bool f[32000];

void siv() {
    for (int i = 2; i * i < 32000; i++) {
        if (!f[i]) {
            for (int j = i * i; j < 32000; j += i) f[j] = true;
        }
    }
    for (int i = 2; i < 32000; i++) {
        if (!f[i]) p.push_back(i);
    }
}

void slv() {
    long long m, n;
    cin >> m >> n;
    vector<bool> seg(n - m + 1, true);

    for (int i = 0; i < p.size(); ++i) {
        long long cur_p = p[i];
        if (cur_p * cur_p > n) break;

        long long start = (m + cur_p - 1) / cur_p * cur_p;
        for (long long j = max(start, cur_p * cur_p); j <= n; j += cur_p) {
            if (j >= m) {
                 seg[j - m] = false;
            }
        }
    }

    for (long long i = 0; i <= n - m; ++i) {
        if (seg[i]) {
            long long cur_n = m + i;
            if (cur_n > 1) {
                cout << cur_n << "\n";
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    siv();

    int t;
    cin >> t;
    bool first = true;
    while(t--) {
        if (!first) {
            cout << "\n";
        }
        slv();
        first = false;
    }

// Solved By Mahfuz Uddin
}