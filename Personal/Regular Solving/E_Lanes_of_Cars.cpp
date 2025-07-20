#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>

void print_int128(__int128 n) {
    if (n == 0) {
        std::cout << "0";
        return;
    }
    std::string s = "";
    while (n > 0) {
        s += (n % 10) + '0';
        n /= 10;
    }
    std::reverse(s.begin(), s.end());
    std::cout << s;
}

__int128 count_cars(int n, long long k, const std::vector<long long>& a, long long lambda) {
    __int128 total = 0;
    for (int i = 0; i < n; ++i) {
        long long cars_in_lane = 0;
        if (lambda >= a[i]) {
            cars_in_lane = lambda;
        } else {
            cars_in_lane = std::min((long long)a[i], lambda + k);
        }
        cars_in_lane = std::max(0LL, cars_in_lane);
        total += cars_in_lane;
    }
    return total;
}

void solve() {
    int n;
    long long k;
    std::cin >> n >> k;
    std::vector<long long> a(n);
    __int128 total_cars_C = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
        total_cars_C += a[i];
    }

    long long low = -4000000000000LL, high = 4000000000000LL, opt_lambda = high;
    
    while(low <= high) {
        long long mid = low + (high - low) / 2;
        if (count_cars(n, k, a, mid) >= total_cars_C) {
            opt_lambda = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    long long final_lambda = opt_lambda - 1;
    
    std::vector<long long> c(n);
    __int128 current_cars = 0;

    for (int i = 0; i < n; ++i) {
        long long cars_in_lane = 0;
        if (final_lambda >= a[i]) {
            cars_in_lane = final_lambda;
        } else {
            cars_in_lane = std::min((long long)a[i], final_lambda + k);
        }
        c[i] = std::max(0LL, cars_in_lane);
        current_cars += c[i];
    }
    
    __int128 remaining_cars = total_cars_C - current_cars;
    
    for (int i = 0; i < n; ++i) {
        if (remaining_cars == 0) break;
        long long cost_of_next_car;
        if (c[i] < a[i]) {
            cost_of_next_car = c[i] + 1 - k;
        } else {
            cost_of_next_car = c[i] + 1;
        }
        if (cost_of_next_car == opt_lambda) {
            c[i]++;
            remaining_cars--;
        }
    }
    
    std::vector<long long> a_sorted = a;
    std::sort(a_sorted.begin(), a_sorted.end());
    std::sort(c.begin(), c.end());

    __int128 total_angriness = 0;
    __int128 moved_count = 0;
    for(int i=0; i<n; ++i) {
        total_angriness += (__int128)c[i] * (c[i] + 1) / 2;
        if (a_sorted[i] > c[i]) {
            moved_count += a_sorted[i] - c[i];
        }
    }
    total_angriness += k * moved_count;

    print_int128(total_angriness);
    std::cout << "\n";
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