#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long d;
    cin >> n >> d;
    vector<pair<int, int>> a(n);
    for(int i = 0; i<n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end());
    long long max_s = 0;
    long long cur_s = 0;
    int l = 0;
    for (int r = 0; r < n; r++) {
        cur_s += a[r].second;
        while(a[r].first - a[l].first >= d) {
            cur_s -= a[l].second;
            l++;
        }
        if (cur_s > max_s) {
            max_s = cur_s;
        }
    }
    cout << max_s << endl;
    return 0;
}
// Solved By Mahfuz Uddin