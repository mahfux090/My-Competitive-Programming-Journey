#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>

using namespace std;

const long long INF = 1e18;

void solve() {
    int n;
    long long k;
    cin >> n >> k;
    k--; 

    vector<long long> h(n);
    long long max_h = 0;
    set<long long> unique_h_set;

    for (int i = 0; i < n; ++i) {
        cin >> h[i];
        max_h = max(max_h, h[i]);
        unique_h_set.insert(h[i]);
    }

    vector<long long> unique_h(unique_h_set.begin(), unique_h_set.end());
    
    map<long long, int> h_to_idx;
    for (int i = 0; i < unique_h.size(); ++i) {
        h_to_idx[unique_h[i]] = i;
    }

    map<long long, long long> min_time;
    for (long long val : unique_h) {
        min_time[val] = INF;
    }

    long long start_h = h[k]; 
    min_time[start_h] = 0; 

    priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;
    pq.push({0, start_h});

    while (!pq.empty()) {
        auto [current_t, current_h] = pq.top();
        pq.pop();

       if (current_t > min_time[current_h]) {
            continue;
        }
        
        int current_idx = h_to_idx[current_h];

        if (current_idx > 0) {
            long long prev_h = unique_h[current_idx - 1];
            long long arrival_time = current_t + (current_h - prev_h);
            
            if (current_h >= arrival_time && prev_h >= arrival_time + 1) {
                if (arrival_time < min_time[prev_h]) {
                    min_time[prev_h] = arrival_time;
                    pq.push({arrival_time, prev_h});
                }
            }
        }
        if (current_idx < unique_h.size() - 1) {
            long long next_h = unique_h[current_idx + 1];
            long long arrival_time = current_t + (next_h - current_h);
            if (current_h >= arrival_time && next_h >= arrival_time + 1) {
                 if (arrival_time < min_time[next_h]) {
                    min_time[next_h] = arrival_time;
                    pq.push({arrival_time, next_h});
                }
            }
        }
    }

    if (min_time[max_h] != INF) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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