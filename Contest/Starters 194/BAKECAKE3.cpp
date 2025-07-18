#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int T;
    std::cin >> T; // Number of test cases
    while (T--) {
        int N;
        std::cin >> N; // Number of days
        std::vector<int> A(N);
        int max_A = 0;
        
        // Read customer counts and find maximum A_i
        for (int i = 0; i < N; ++i) {
            std::cin >> A[i];
            max_A = std::max(max_A, A[i]);
        }
        
        long long max_profit = 0;
        // Try each possible X from 0 to max_A
        for (int X = 0; X <= max_A; ++X) {
            long long total_sales = 0;
            // Calculate total cakes sold
            for (int i = 0; i < N; ++i) {
                total_sales += std::min(X, A[i]);
            }
            // Profit = revenue - cost
            long long profit = 50LL * total_sales - 30LL * X * N;
            max_profit = std::max(max_profit, profit);
        }
        
        std::cout << max_profit << std::endl;
    }
    return 0;
}