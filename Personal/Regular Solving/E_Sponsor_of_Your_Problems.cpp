#include<bits/stdc++.h>

using namespace std;

string L, R;
int n;
int memo[12][2][2];

int dp(int pos, bool tightL, bool tightR) {
    if (pos == n) {
        return 0;
    }
    if (memo[pos][tightL][tightR] != -1) {
        return memo[pos][tightL][tightR];
    }

    int res = 1e9;
    int lo = tightL ? (L[pos] - '0') : 0;
    int hi = tightR ? (R[pos] - '0') : 9;

    for (int d = lo; d <= hi; ++d) {
        int current_cost = 0;
        if (d == (L[pos] - '0')) {
            current_cost++;
        }
        if (d == (R[pos] - '0')) {
            current_cost++;
        }

        bool newTightL = tightL && (d == lo);
        bool newTightR = tightR && (d == hi);

        res = min(res, current_cost + dp(pos + 1, newTightL, newTightR));
    }

    return memo[pos][tightL][tightR] = res;
}

void solve() {
    int l_int, r_int;
    cin >> l_int >> r_int;
    L = to_string(l_int);
    R = to_string(r_int);
    
    string tempL = "";
    int diff = R.length() - L.length();
    for(int i = 0; i < diff; ++i) {
        tempL += '0';
    }
    L = tempL + L;

    n = R.length();

    memset(memo, -1, sizeof(memo));
    cout << dp(0, true, true) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}