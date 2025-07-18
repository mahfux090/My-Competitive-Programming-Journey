#include <iostream>
#include <vector>
#include <cmath>
#include <map>

using namespace std;

vector<vector<pair<int, int>>> adj;
vector<int> color;
vector<bool> is_heavy;
vector<map<int, long long>> heavy_sumc;
map<int, int> heavy_nodes_map;
long long total_cost;
const int BLOCK_SIZE = 450;

void solve() {
    int n, q;
    cin >> n >> q;

    adj.assign(n + 1, vector<pair<int, int>>());
    color.assign(n + 1, 0);
    is_heavy.assign(n + 1, false);
    heavy_nodes_map.clear();
    heavy_sumc.clear();
    total_cost = 0;

    for (int i = 1; i <= n; ++i) {
        cin >> color[i];
    }

    vector<tuple<int, int, int>> edges;
    for (int i = 0; i < n - 1; ++i) {
        int u, v, c;
        cin >> u >> v >> c;
        adj[u].push_back({v, c});
        adj[v].push_back({u, c});
        edges.emplace_back(u, v, c);
    }

    int heavy_idx_counter = 0;
    for (int i = 1; i <= n; ++i) {
        if (adj[i].size() > BLOCK_SIZE) {
            is_heavy[i] = true;
            heavy_nodes_map[i] = heavy_idx_counter++;
        }
    }
    heavy_sumc.resize(heavy_idx_counter);

    for (const auto& edge : edges) {
        int u, v, c;
        tie(u, v, c) = edge;
        if (color[u] != color[v]) {
            total_cost += c;
        }
    }

    for (int i = 1; i <= n; ++i) {
        if (is_heavy[i]) {
            int h_idx = heavy_nodes_map[i];
            for (auto const& [neighbor, cost] : adj[i]) {
                heavy_sumc[h_idx][color[neighbor]] += cost;
            }
        }
    }

    while (q--) {
        int v, new_c;
        cin >> v >> new_c;

        int old_c = color[v];
        if (old_c == new_c) {
            cout << total_cost << "\n";
            continue;
        }

        long long sum_old = 0, sum_new = 0;

        if (is_heavy[v]) {
            int h_idx = heavy_nodes_map[v];
            sum_old = heavy_sumc[h_idx][old_c];
            sum_new = heavy_sumc[h_idx][new_c];
        } else {
            for (auto const& [neighbor, cost] : adj[v]) {
                if (color[neighbor] == old_c) {
                    sum_old += cost;
                }
                if (color[neighbor] == new_c) {
                    sum_new += cost;
                }
            }
        }

        total_cost += sum_old;
        total_cost -= sum_new;
        
        color[v] = new_c;

        for (auto const& [neighbor, cost] : adj[v]) {
            if (is_heavy[neighbor]) {
                int neighbor_h_idx = heavy_nodes_map[neighbor];
                heavy_sumc[neighbor_h_idx][old_c] -= cost;
                heavy_sumc[neighbor_h_idx][new_c] += cost;
            }
        }

        cout << total_cost << "\n";
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