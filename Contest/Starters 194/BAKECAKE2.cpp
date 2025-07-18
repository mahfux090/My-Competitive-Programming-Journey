#include <iostream>
#include <vector>

int main() {
    int T;
    std::cin >> T; // Number of test cases
    while (T--) {
        int N;
        std::cin >> N; // Number of ingredients
        std::vector<int> A(N), B(N);
        
        // Read required amounts
        for (int i = 0; i < N; ++i) {
            std::cin >> A[i];
        }
        
        // Read available amounts
        for (int i = 0; i < N; ++i) {
            std::cin >> B[i];
        }
        
        // Calculate total cost
        long long total_cost = 0;
        for (int i = 0; i < N; ++i) {
            if (A[i] > B[i]) {
                total_cost += (A[i] - B[i]);
            }
        }
        
        std::cout << total_cost << std::endl;
    }
    return 0;
}