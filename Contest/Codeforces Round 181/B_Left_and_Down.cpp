// Bismillah hir Rahmanir Rahim
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void execute_case() {
    ll val_a, val_b, move_limit;
    cin >> val_a >> val_b >> move_limit;

    ll common_factor = std::gcd(val_a, val_b);

    ll required_move_a = val_a / common_factor;
    ll required_move_b = val_b / common_factor;

    if (max(required_move_a, required_move_b) <= move_limit) {
        cout << 1 << "\n";
    } else {
        cout << 2 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num_test_cases;
    cin >> num_test_cases;
    while (num_test_cases--) {
        execute_case();
    }
    return 0;
}
// Solved By Mahfuz Uddin
// Tue Jul 22 21:07:30 2025