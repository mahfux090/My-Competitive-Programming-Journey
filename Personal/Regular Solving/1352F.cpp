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
    int n0, n1, n2;
    cin >> n0 >> n1 >> n2;
    string r = "";

    if (n1 == 0) {
        if (n0 > 0) {
            for (int i = 0; i <= n0; i++) {
                r += '0';
            }
        } else {
            for (int i = 0; i <= n2; i++) {
                r += '1';
            }
        }
    } else {
        for (int i = 0; i <= n2; i++) {
            r += '1';
        }
        for (int i = 0; i <= n0; i++) {
            r += '0';
        }
        for (int i = 0; i < n1 - 1; i++) {
            if (i % 2 == 0) {
                r += '1';
            } else {
                r += '0';
            }
        }
    }
    cout << r << lb;
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
//          Mahfuz Uddin                  //
//------------------------------------------//