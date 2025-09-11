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

ll count_le(int x, int n, vector<int>& a) {
    ll cnt = 0;
    int l = 0, r = n - 1;
    while(l<r) {
        if (a[l]+a[r] > x) {
            r--;
        } else {
            cnt += (r-l);
            l++;
        }
    }
    return cnt;
}

void solve() {
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin>>a[i];
    sort(all(a));
    ll ans1 = count_le(r, n, a);
    ll ans2 = count_le(l - 1, n, a);
    cout << ans1 - ans2 << lb;
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