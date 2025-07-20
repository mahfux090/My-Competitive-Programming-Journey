#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    long long l;
    std::cin >> n >> l;

    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end());

    double max_dist = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i+1] - a[i] > max_dist) {
            max_dist = a[i+1] - a[i];
        }
    }

    double d1 = a[0];
    double d2 = l - a[n-1];
    double d3 = max_dist / 2.0;

    double result = std::max({d1, d2, d3});

    std::cout << std::fixed << std::setprecision(10) << result << std::endl;

    return 0;
}