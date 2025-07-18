#include <bits/stdc++.h>
using namespace std;

map<tuple<int, int, int, int, int>, bool> dp;

bool can_win(int c0, int c1, int c2, int c3, int turn) {
    auto key = make_tuple(c0, c1, c2, c3, turn);
    if (dp.count(key)) return dp[key];
    int counts[4] = {c0, c1, c2, c3};
    for (int a = 0; a < 4; a++) {
        if (counts[a] == 0) continue;
        counts[a]--;
        int b = (3 - a + 4) % 4;
        if (counts[b] == 0) {
            counts[a]++;
            if (turn == 0) return dp[key] = true;
            else continue;
        }
        counts[b]--;
        bool result = can_win(counts[0], counts[1], counts[2], counts[3], 1 - turn);
        counts[a]++;
        counts[b]++;
        if (turn == 0 && result) return dp[key] = true;
        if (turn == 1 && !result) return dp[key] = false;
    }
    return dp[key] = (turn == 0 ? false : true);
}

string winner(int n) {
    int count[4] = {0};
    for (int i = 0; i < n; i++) count[i % 4]++;
    return can_win(count[0], count[1], count[2], count[3], 0) ? "Alice" : "Bob";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << winner(n) << endl;
    }
    return 0;
}
