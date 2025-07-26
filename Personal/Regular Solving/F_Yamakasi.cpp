#include <bits/stdc++.h>

using namespace std;

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

long long count_subarrays_with_sum(const vector<int>& arr, long long s) {
    if (arr.empty()) {
        return 0;
    }
    unordered_map<long long, int, custom_hash> freq;
    freq[0] = 1;
    long long p_sum = 0;
    long long count = 0;
    for (int val : arr) {
        p_sum += val;
        if (freq.count(p_sum - s)) {
            count += freq[p_sum - s];
        }
        freq[p_sum]++;
    }
    return count;
}

void solve() {
    int n;
    long long s;
    int x;
    cin >> n >> s >> x;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long total_ans = 0;
    vector<int> b;
    for (int i = 0; i < n; ++i) {
        if (a[i] > x) {
            if (!b.empty()) {
                long long count_max_le_x = count_subarrays_with_sum(b, s);
                long long count_max_lt_x = 0;
                vector<int> c;
                for (int val : b) {
                    if (val == x) {
                        count_max_lt_x += count_subarrays_with_sum(c, s);
                        c.clear();
                    } else {
                        c.push_back(val);
                    }
                }
                count_max_lt_x += count_subarrays_with_sum(c, s);
                total_ans += (count_max_le_x - count_max_lt_x);
            }
            b.clear();
        } else {
            b.push_back(a[i]);
        }
    }

    if (!b.empty()) {
        long long count_max_le_x = count_subarrays_with_sum(b, s);
        long long count_max_lt_x = 0;
        vector<int> c;
        for (int val : b) {
            if (val == x) {
                count_max_lt_x += count_subarrays_with_sum(c, s);
                c.clear();
            } else {
                c.push_back(val);
            }
        }
        count_max_lt_x += count_subarrays_with_sum(c, s);
        total_ans += (count_max_le_x - count_max_lt_x);
    }

    cout << total_ans << endl;
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



stack<int>st;
