#include<bits/stdc++.h>

using namespace std;

void slv() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<vector<int>> dp(n + 2, vector<int>(2, 0));

    for (int i = n - 1; i >= 0; i--) {
        int c1, c2;
        c1 = a[i] + dp[i + 1][1];
        if (i + 1 < n) {
            c2 = a[i] + a[i + 1] + dp[i + 2][1];
            dp[i][0] = min(c1, c2);
        } else {
            dp[i][0] = c1;
        }
        c1 = dp[i + 1][0];
        if (i+1 < n) {
            c2=dp[i + 2][0];
            dp[i][1] = min(c1,c2);
        } else {
            dp[i][1] = c1;
        }
    }

    cout << dp[0][0] << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        slv();
    }
    return 0;
}
// Solved By Mahfuz Uddin