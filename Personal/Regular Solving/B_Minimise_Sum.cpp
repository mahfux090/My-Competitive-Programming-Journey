#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

long long calculate_cost(const std::vector<int>& arr, int len) {
    if (len == 0) {
        return 0;
    }
    long long total_sum = 0;
    int current_min = arr[0];
    total_sum += current_min;
    for (int i = 1; i < len; ++i) {
        current_min = std::min(current_min, arr[i]);
        total_sum += current_min;
    }
    return total_sum;
}

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    std::vector<long long> cost_prefix(n);
    cost_prefix[0] = a[0];
    int current_min = a[0];
    for(int i = 1; i < n; ++i) {
        current_min = std::min(current_min, a[i]);
        cost_prefix[i] = cost_prefix[i-1] + current_min;
    }

    long long min_sum = cost_prefix[n-1];
    
    bool is_sd = true;
    for (int j = 1; j < n; ++j) {
        if (is_sd && j > 1 && a[j-1] >= a[j-2]) {
            is_sd = false;
        }

        if (!is_sd) {
            min_sum = std::min(min_sum, cost_prefix[j-1]);
        } else {
            long long min_op_cost_for_j = -1;
            for (int i = 0; i < j; ++i) {
                int original_ai = a[i];
                a[i] += a[j];
                long long current_op_cost = calculate_cost(a, j);
                if (min_op_cost_for_j == -1 || current_op_cost < min_op_cost_for_j) {
                    min_op_cost_for_j = current_op_cost;
                }
                a[i] = original_ai;
            }
            min_sum = std::min(min_sum, min_op_cost_for_j);
        }
    }

    std::cout << min_sum << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}