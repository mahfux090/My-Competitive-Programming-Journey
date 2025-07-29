#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> v;
    long long h = 0;
    int kount = 0;

    for (int i = 0; i < n; i++) {
        long long a;
        cin >> a;

        v.push_back(a);
        h += a;
        kount++;

        if (h < 0) {
            long long mn = v[0];
            int idx = 0;
            for (int j = 1; j < v.size(); j++) {
                if (v[j] < mn) {
                    mn = v[j];
                    idx = j;
                }
            }
            h -= mn;
            v.erase(v.begin() + idx);
            kount--;
        }
    }

    cout << kount << endl;

// Solved By Mahfuz Uddin
}