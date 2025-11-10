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
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    int ans = INF;

    if(k == 4) {
        int opsA = INF;
        int evn = 0;

        for(int i=0; i<n; i++) {
            cin >> a[i];
            int rem4 = (4 - (a[i] % 4)) % 4;
            opsA = min(opsA, rem4);
            if(a[i] % 2 == 0) evn++;
        }

        int opsB=2;
        if(evn == 1) opsB = 1;
        if(evn >= 2) opsB = 0;

        ans = min(opsA, opsB);

    } else {
        for(int i=0; i<n; i++) {
            cin >> a[i];
            int rem = (k - (a[i] % k)) % k;
            ans = min(ans, rem);
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