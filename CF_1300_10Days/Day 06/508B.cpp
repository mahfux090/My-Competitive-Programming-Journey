#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define sz(x) (int)(x).size()
#define lb '\n'
#define pii pair<int,int>
#define pll pair<ll,ll>
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;

void solve() {
    string s;
    cin >> s;
    int n = sz(s);
    char last_digit = s[n - 1];
    int swap_idx = -1;

    for (int i = 0; i < n - 1; i++) {
        int d = s[i] - '0';
        if (d % 2 == 0) {
            if (s[i] < last_digit) {
                swap(s[i], s[n - 1]);
                cout << s << lb;
                return;
            }
            swap_idx = i;
        }
    }

    if (swap_idx == -1) {
        cout << -1 << lb;
    } else {
        swap(s[swap_idx], s[n - 1]);
        cout << s << lb;
    }
}

int main() {
    fast
    int t=1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//