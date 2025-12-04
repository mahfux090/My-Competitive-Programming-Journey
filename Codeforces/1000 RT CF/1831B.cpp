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
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];

    vector<int> ma(2*n + 1, 0);
    vector<int> mb(2*n + 1, 0);

    if (n > 0) {
        int c = 1;
        for(int i = 1; i < n; i++){
            if(a[i] == a[i-1]) c++;
            else {
                ma[a[i-1]] = max(ma[a[i-1]], c);
                c = 1;
            }
        }
        ma[a[n-1]] = max(ma[a[n-1]], c);

        c = 1;
        for(int i=1; i<n; i++){
            if(b[i] == b[i-1]) c++;
            else {
                mb[b[i-1]] = max(mb[b[i-1]], c);
                c = 1;
            }
        }
        mb[b[n-1]] = max(mb[b[n-1]], c);
    }

    int ans = 0;
    for(int i = 1; i <= 2*n; i++) {
        ans = max(ans, ma[i] + mb[i]);
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