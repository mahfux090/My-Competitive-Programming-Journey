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
    vector<int> a(n);
    bool all_same = true;
    cin >> a[0];
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        if (a[i] != a[0]) {
            all_same = false;
        }
    }

    if (all_same) {
        cout << "NO" << lb;
        return;
    }

    cout << "YES" << lb;
    int hub2_idx = -1;
    for (int i = 1; i < n; i++) {
        if (a[i] != a[0]) {
            hub2_idx = i;
            break;
        }
    }

    for (int i = 1; i < n; i++) {
        if (a[i] != a[0]) {
            cout << 1 << " " << i + 1 << lb;
        }
    }
    
    for (int i = 1; i < n; i++) {
        if (a[i] == a[0]) {
            cout << hub2_idx + 1 << " " << i + 1 << lb;
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