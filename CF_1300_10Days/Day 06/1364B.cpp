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
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i=0; i < n; i++) {
        cin >> p[i];
    }

    if (n <= 2) {
        cout << n << lb;
        for (int i = 0; i < n; i++) {
            cout << p[i] << " ";
        }
        cout << lb;
        return;
    }

    vector<int> s;
    s.pb(p[0]);

    for (int i = 1; i < n - 1; i++) {
        bool is_peak = (p[i] > p[i - 1] && p[i] > p[i + 1]);
        bool is_valley = (p[i] < p[i - 1] && p[i] < p[i + 1]);
        if (is_peak || is_valley) {
            s.pb(p[i]);
        }
    }
    s.pb(p[n - 1]);

    cout << sz(s) << lb;
    for (int x : s) {
        cout << x << " ";
    }
    cout << lb;
}

int main() {
    fast
    int t=1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//