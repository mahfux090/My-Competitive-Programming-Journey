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
    cin>>n;

    if (n % 4 == 2) {
        cout << -1 << lb;
        return;
    }

    if (n % 2 != 0) {
        for (int i = 1; i <= n; i++) {
            cout << i << " ";
        }
        cout << lb;
    } else {
        vector<int> a(n);
        int l = 1, r = n;
        for (int i = 0; i < n / 2; i += 2) {
            a[i] = l + 1;
            a[i + 1] = r;
            a[n - 1 - i] = r - 1;
            a[n - 2 - i] = l;
            l += 2;
            r -= 2;
        }
        for (int i=0;i<n;i++) {
            cout << a[i] << " ";
        }
        cout << lb;
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