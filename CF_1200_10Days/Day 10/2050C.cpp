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
    ll sum = 0;
    ll n2 = 0, n3 = 0;
    for(char c : s) {
        int d = c - '0';
        sum += d;
        if (d == 2) n2++;
        if (d == 3) n3++;
    }

    if (sum % 9 == 0) {
        cout << "YES" << lb;
        return;
    }

    ll target = (9 - (sum % 9)) % 9;
    bool ok = false;

    for (ll c2 = 0; c2 <= n2 && c2 <= 8; c2++) {
        for (ll c3 = 0; c3 <= n3 && c3 <= 2; c3++) {
            if ((c2 * 2 + c3 * 6) % 9 == target) {
                if (c2 > 0 || c3 > 0) {
                    ok = true;
                    break;
                }
            }
        }
        if (ok) break;
    }

    if (ok) {
        cout << "YES" << lb;
    } else {
        cout << "NO" << lb;
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