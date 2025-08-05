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
#define endl '\n'
#define pii pair<int,int>
#define pll pair<ll,ll>
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;

int cp(int n) {
    int cnt = 0;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            cnt++;
            n /= i;
        }
    }
    if (n > 1) {
        cnt++;
    }
    return cnt;
}

void solve() {
    int a, b, k;
    cin >> a >> b >> k;

    if (k == 1) {
        if (a != b && (a % b == 0 || b % a == 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        return;
    }

    int max_k = cp(a) + cp(b);
    if (k <= max_k) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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
//          Mahfuz Uddin                    //
//------------------------------------------//