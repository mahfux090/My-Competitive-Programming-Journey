// Bismillah hir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

struct Casino {
    int id;
    int l, r, real;
};

void solve() {
    int n;
    long long k;
    cin >> n >> k;

    vector<Casino> casinos(n);
    set<pair<int, int>> unvisited_by_l;
    set<pair<int, int>> unvisited_by_r;

    for (int i = 0; i < n; ++i) {
        casinos[i].id = i;
        cin >> casinos[i].l >> casinos[i].r >> casinos[i].real;
        unvisited_by_l.insert({casinos[i].l, i});
        unvisited_by_r.insert({casinos[i].r, i});
    }

    priority_queue<long long, vector<long long>, greater<long long>> pq;
    set<long long> values_in_pq;

    pq.push(k);
    values_in_pq.insert(k);

    long long max_coins = k;

    while (!pq.empty()) {
        long long current_coins = pq.top();
        pq.pop();

        while (!unvisited_by_r.empty() && unvisited_by_r.begin()->first < current_coins) {
            int id_to_remove = unvisited_by_r.begin()->second;
            unvisited_by_r.erase(unvisited_by_r.begin());
            unvisited_by_l.erase({casinos[id_to_remove].l, id_to_remove});
        }

        vector<int> found_ids;
        auto it = unvisited_by_l.begin();
        while (it != unvisited_by_l.end() && it->first <= current_coins) {
            found_ids.push_back(it->second);
            it++;
        }

        for (int id : found_ids) {
            unvisited_by_l.erase({casinos[id].l, id});
            unvisited_by_r.erase({casinos[id].r, id});
            
            max_coins = max(max_coins, (long long)casinos[id].real);
            
            if (values_in_pq.find(casinos[id].real) == values_in_pq.end()) {
                pq.push(casinos[id].real);
                values_in_pq.insert(casinos[id].real);
            }
        }
    }
    cout << max_coins << "\n";
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
// 24/07/2025 - 10:28 PM