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
#define rall(x) x.rbegin(),x.end()
#define sz(x) (int)(x).size()
#define lb '\n'
#define pii pair<int,int>
#define pll pair<ll,ll>
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;

void solve() {
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin>>s;

    if(c == 'g') {
        cout << 0 << lb;
        return;
    }

    string t = s+s;
    int ans = 0;
    int lg = -1;

    for (int i = 2*n - 1; i >= 0; i--) {
        if(t[i] == 'g') {
            lg = i;
        }
        if(t[i] == c) {
            if (lg != -1) {
                ans = max(ans, lg - i);
            }
        }
    }
    cout << ans << lb;
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