#include <iostream>

int main() {
    int N, M;
    std::cin >> N >> M;
    int money_made = (M * 50) - (N * 30);
    std::cout << money_made << std::endl;
    return 0;
}