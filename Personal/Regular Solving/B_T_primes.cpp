#include <iostream>
#include <vector>
#include <cmath>

const int MAX = 1000001;
std::vector<bool> is_prime(MAX, true);

void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p < MAX; ++p) {
        if (is_prime[p]) {
            for (int i = p * p; i < MAX; i += p) {
                is_prime[i] = false;
            }
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    sieve();
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        long long x;
        std::cin >> x;
        if (x < 4) {
            std::cout << "NO\n";
            continue;
        }
        long long root = round(sqrt(x));
        if (root * root == x && is_prime[root]) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
    return 0;
}