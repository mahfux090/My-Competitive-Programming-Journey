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
    
    if (n <= 1) {
        if(n==1) {
            int p;
            cin >> p;
        }
        cout << 0 << lb;
        return;
    }

    int p;
    cin >> p;
    int min_s = p;
    int max_s = p;
    int c = 0;

    for (int i = 1; i < n; i++) {
        cin >> p;
        if (p > max_s) {
            c++;
            max_s = p;
        } else if (p < min_s) {
            c++;
            min_s = p;
        }
    }
    cout << c << lb;
}

int main() {
    fast
    // Problem has only one test case.
    // int t=1;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    return 0;
}
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//