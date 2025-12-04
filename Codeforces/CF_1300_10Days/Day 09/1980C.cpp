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
    vector<int> a(n), b(n);
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++) cin >> b[i];
    int m;
    cin >> m;
    vector<int> d(m);
    for (int i=0; i<m; i++) cin >> d[i];

    int last_d = d.back();
    bool last_d_present = false;
    for (int x : b) {
        if (x == last_d) {
            last_d_present = true;
            break;
        }
    }

    if (!last_d_present) {
        cout << "NO" << lb;
        return;
    }

    vector<int> needed;
    for (int i=0; i<n; i++) {
        if (a[i] != b[i]) {
            needed.pb(b[i]);
        }
    }

    sort(all(needed));
    sort(all(d));

    int i = 0, j = 0;
    while (i < sz(needed) && j < m) {
        if (needed[i] < d[j]) {
            cout << "NO" << lb;
            return;
        } else if (needed[i] == d[j]) {
            i++;
            j++;
        } else {
            j++;
        }
    }

    if (i < sz(needed)) {
        cout << "NO" << lb;
        return;
    }

    cout << "YES" << lb;
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