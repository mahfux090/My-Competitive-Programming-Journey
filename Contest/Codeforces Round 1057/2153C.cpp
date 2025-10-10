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
    map<ll, int> c;
    ll p = 0;
    for (int i = 0; i < n; ++i) {
        ll a;
        cin >> a;
        c[a]++;
        p += a;
    }

    while (true) {
        int total_sticks = 0;
        for (auto const& [len, num] : c) {
            if (num > 0) total_sticks += num;
        }
        if (total_sticks < 3) {
            cout << 0 << lb;
            return;
        }

        vector<ll> odds;
        for (auto const& [len, num] : c) {
            if (num > 0 && num % 2 != 0) {
                odds.pb(len);
            }
        }
        sort(all(odds));

        if (sz(odds) > 2) {
            bool removed = false;
            for (int i = 0; i < sz(odds) - 2; ++i) {
                c[odds[i]]--;
                p -= odds[i];
                removed = true;
            }
            if(removed) continue;
        }

        ll s_max = 0;
        bool has_sticks = false;
        for (auto it = c.rbegin(); it != c.rend(); ++it) {
            if (it->second > 0) {
                s_max = it->first;
                has_sticks = true;
                break;
            }
        }

        if (!has_sticks) {
            cout << 0 << lb;
            return;
        }

        if (2 * s_max < p) {
            cout << p << lb;
            return;
        } else {
            c[s_max]--;
            p -= s_max;
        }
    }
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