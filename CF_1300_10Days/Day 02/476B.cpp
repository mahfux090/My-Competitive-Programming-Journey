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

ll C(int n, int k) {
    if (k < 0 || k > n) {
        return 0;
    }
    ll res = 1;
    for (int i=0; i<k; ++i) {
        res = res * (n-i) / (i+1);
    }
    return res;
}

void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    int p1=0;
    for(char c: s1) {
        if (c == '+') p1++;
        else p1--;
    }
    int p2=0;
    int q=0;
    for(char c: s2) {
        if (c == '+') p2++;
        else if (c == '-') p2--;
        else q++;
    }
    int diff = p1-p2;
    if (abs(diff) > q || (q-abs(diff)) % 2 != 0) {
        cout << fixed << setprecision(12) << 0.0 << lb;
        return;
    }
    int plus_needed=(q+diff)/2;
    ll fav=C(q, plus_needed);
    ll total=1LL << q;
    double ans=(double)fav/total;
    cout << fixed << setprecision(12) << ans << lb;
}

int main() {
    fast
    int t=1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
//------------------------------------------//
//          M a h f u z U d d i n           //
//------------------------------------------//