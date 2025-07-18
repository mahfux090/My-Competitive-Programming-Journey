#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, k;
    std::cin >> n >> k;

    std::vector<int> scores(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> scores[i];
    }

    int cutoff_score = scores[k - 1];
    int advancers = 0;

    for (int score : scores) {
        if (score >= cutoff_score && score > 0) {
            advancers++;
        }
    }

    std::cout << advancers << std::endl;

    return 0;
}