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
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> next_d(n);
    next_d[n - 1] = -1;
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] != a[i+1]) {
            next_d[i] = i + 1;
        } else {
            next_d[i] = next_d[i+1];
        }
    }

    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        l--; 
        r--;
        
        if (next_d[l] != -1 && next_d[l] <= r) {
            cout << l + 1 << " " << next_d[l] + 1 << lb;
        } else {
            cout << -1 << " " << -1 << lb;
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